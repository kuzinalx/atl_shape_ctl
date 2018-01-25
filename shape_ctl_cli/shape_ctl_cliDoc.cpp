
// shape_ctl_cliDoc.cpp : implementation of the Cshape_ctl_cliDoc class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "shape_ctl_cli.h"
#endif

#include "shape_ctl_cliDoc.h"

#include <propkey.h>
#include <time.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// Cshape_ctl_cliDoc

IMPLEMENT_DYNCREATE(Cshape_ctl_cliDoc, CDocument)

BEGIN_MESSAGE_MAP(Cshape_ctl_cliDoc, CDocument)
END_MESSAGE_MAP()


// Cshape_ctl_cliDoc construction/destruction

Cshape_ctl_cliDoc::Cshape_ctl_cliDoc() //: m_pageSize( 5000, 3000 )
{
	// TODO: add one-time construction code here
}

Cshape_ctl_cliDoc::~Cshape_ctl_cliDoc()
{
}

inline LONG DistanceToRect( const POINT& pt, const RECT& r )
{
	auto nsqrt = [pt]( int x, int y ) { return (int)( sqrt( (pt.x-x)*(pt.x-x) + (pt.y-y)*(pt.y-y) ) ); };
	if ( pt.x < r.left )
	{
		if ( pt.y < r.top )
			return nsqrt( r.left, r.top );
		else if ( pt.y > r.bottom )
			return nsqrt( r.left, r.bottom );
		return ( r.left - pt.x );
	};
	if ( pt.x > r.right )
	{
		if ( pt.y < r.top )
			return nsqrt( r.right, r.top );
		else if ( pt.y > r.bottom )
			return nsqrt( r.right, r.bottom );
		return ( pt.x - r.right );
	};
	if ( pt.y < r.top )
		return ( r.top - pt.y );
	ASSERT( pt.y >= r.bottom );
	return ( pt.y - r.bottom );
}

void Cshape_ctl_cliDoc::AddShape( const CRect& rCli )
{
	static bool bFirstCall = true;
	if ( bFirstCall )
	{
		srand( ( unsigned )time( 0 ) );
		bFirstCall = false;
	};

	// random double in [0;1]
	auto rand1 = []() { return (double)rand()/RAND_MAX; };
	// random int in [0;nmax]
	auto rand_int = [rand1]( int nmax ) { return ( int )round( nmax*rand1() ); };

	int nTypes = 3;
	int type = rand_int( nTypes - 1 ); // random object type
	ASSERT( type >= 0 && type < nTypes );
	IID ids[] = { __uuidof( ShapeCircle ), __uuidof( ShapeSquare ), __uuidof( ShapeTriangle ) };
	CShape shape;
	COleException *e = new COleException;
	if ( !shape.CreateDispatch( ids[type], e ) )
		throw e;

	// available colors
	static const COLORREF clrs[8] = { 
		RGB( 0xAA, 0xC0, 0 ),
		RGB( 0, 0xC0, 0 ),
		RGB( 0xA0, 0, 0xC1 ),
		RGB( 0x10, 0x10, 0xCC ),
		RGB( 0xAA, 0x10, 0 ),
		RGB( 0xC0, 0, 0xC0 ),
		RGB( 0xF0, 0xA0, 0 ),
		RGB( 0x10, 0xF0, 0x10 )
	};

	// set random color
	int nColor = rand_int( 7 );
	shape.put_FillColor( clrs[nColor] );
	shape.put_LineColor( clrs[nColor] );

	CSize sz, sCli = rCli.Size();
	// random value in the range [cx1;cx2]/10
	auto rand_size = [rand1]( int cx1, int cx2 ){ return ( int )round( ( rand1()*( cx2 - cx1 ) + cx1 )/5 ); };
	if ( sCli.cx < sCli.cy )
	{
		sz.cx = rand_size( sCli.cx/2, sCli.cx );
		sz.cy = sz.cx;
	}
	else
	{
		sz.cy = rand_size( sCli.cy/2, sCli.cy );
		sz.cx = sz.cy;
	};


	CPoint p; // random top-left

	size_t uCellSize = 100;

	while ( true )
	{
		p.x = rand_int( sCli.cx - sz.cx );
		p.y = rand_int( sCli.cy - sz.cy );

		CPoint pc( p.x + sz.cx/2, p.y + sz.cy/2 );
		pr_int n( pc.x/uCellSize, pc.y/uCellSize );
		const vector<size_t>& v = m_shapeMap[n];
		size_t i = 0;
		LONG lDistMin = ( LONG )( min( sz.cx, sz.cy )*sqrt(2.) ); // this is diagonal of the rect
		for ( ; i < v.size(); i++ )
		{
			RECT r;
			m_shapes[v[i]]->GetBoundingBox( ( LONG* )&r );
			if ( PtInRect( &r, pc ) ) break;
			LONG l = 2*DistanceToRect( pc, r );
			lDistMin = lDistMin < l ? lDistMin : l;
		};
		if ( i < v.size() ) continue;

		for ( int nx = n.first-1; nx <= n.first+1; nx++ ) for ( int ny = n.second-1; ny <= n.second+1; ny++ )
		{
			if ( nx == n.first && ny == n.second ) continue;
			const vector<size_t>& v = m_shapeMap[make_pair( nx, ny )];
			for ( i = 0; i < v.size(); i++ )
			{
				RECT r;
				m_shapes[v[i]]->GetBoundingBox( ( LONG* )&r );
				LONG l = 2*DistanceToRect( pc, r );
				lDistMin = lDistMin < l ? lDistMin : l;
			};
		};

		lDistMin = ( LONG )round( lDistMin/sqrt(2.) ); // from diagonal to side
		p.x = pc.x - lDistMin/2;
		p.y = pc.y - lDistMin/2;
		sz.cx = sz.cy = lDistMin;
		break;
	};

	
	
	IShapeSquarePtr wSquare = shape.m_lpDispatch;
	if ( wSquare )
	{
		wSquare->put_Left( p.x );
		wSquare->put_Top( p.y );
		wSquare->put_Size( sz.cx );
	};
	IShapeTrianglePtr wTri = shape.m_lpDispatch;
	if ( wTri )
	{
		wTri->PutVertex_X( 0, p.x );
		wTri->PutVertex_Y( 0, p.y );
		wTri->PutVertex_X( 1, p.x + sz.cx );
		wTri->PutVertex_Y( 1, p.y );
		wTri->PutVertex_X( 2, p.x + sz.cx/2 );
		wTri->PutVertex_Y( 2, p.y + sz.cy );
	};
	m_shapes.push_back( shape.m_lpDispatch );

	{
		RECT r;
		shape.GetBoundingBox( ( LONG* )&r );
		r.left /= uCellSize;
		r.right /= uCellSize;
		r.top /= uCellSize;
		r.bottom /= uCellSize;
		for ( int i = r.left; i <= r.right; i++ ) for ( int j = r.top; j <= r.bottom; j++ )
			m_shapeMap[make_pair(i,j)].push_back( m_shapes.size()-1 );
	};

	UpdateAllViews( 0 );
}

BOOL Cshape_ctl_cliDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)
	
	
	return TRUE;
}




// Cshape_ctl_cliDoc serialization

void Cshape_ctl_cliDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

#ifdef SHARED_HANDLERS

// Support for thumbnails
void Cshape_ctl_cliDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// Modify this code to draw the document's data
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// Support for Search Handlers
void Cshape_ctl_cliDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// Set search contents from document's data. 
	// The content parts should be separated by ";"

	// For example:  strSearchContent = _T("point;rectangle;circle;ole object;");
	SetSearchContent(strSearchContent);
}

void Cshape_ctl_cliDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// Cshape_ctl_cliDoc diagnostics

#ifdef _DEBUG
void Cshape_ctl_cliDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void Cshape_ctl_cliDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// Cshape_ctl_cliDoc commands
