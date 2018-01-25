
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

Cshape_ctl_cliDoc::Cshape_ctl_cliDoc() : m_pageSize( 5000, 3000 )
{
	// TODO: add one-time construction code here
}

Cshape_ctl_cliDoc::~Cshape_ctl_cliDoc()
{
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

	int nTypes = 2;
	int type = rand_int( nTypes - 1 ); // random object type
	ASSERT( type >= 0 && type < nTypes );
	IID ids[] = { __uuidof( ShapeCircle ), __uuidof( ShapeSquare ) };
	CShape shape;
	COleException *e = new COleException;
	if ( !shape.CreateDispatch( ids[type], e ) )
		throw e;

	CSize sz, sCli = rCli.Size();
	// random value in the range [cx1;cx2]/10
	auto rand_size = [rand1]( int cx1, int cx2 ){ return ( int )round( ( rand1()*( cx2 - cx1 ) + cx1 )/10 ); };
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
	p.x = rand_int( sCli.cx - sz.cx );
	p.y = rand_int( sCli.cy - sz.cy );

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

	int nColor = rand_int( 7 );
	shape.put_FillColor( clrs[nColor] );
	shape.put_LineColor( clrs[nColor] );
	
	IShapeSquarePtr wSquare = shape.m_lpDispatch;
	if ( wSquare )
	{
		wSquare->put_Left( p.x );
		wSquare->put_Top( p.y );
		wSquare->put_Size( sz.cx );
	};
	m_shapes.push_back( shape.m_lpDispatch );
	UpdateAllViews( 0 );
}

BOOL Cshape_ctl_cliDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)
	/*COleException *e = new COleException;
	{
		CShapeSquare s;
		if ( !s.CreateDispatch( __uuidof( ShapeSquare ), e ) )
			throw e;
		s.put_Left( 100 );
		s.put_Top( 100 );
		m_shapes.push_back( s.m_lpDispatch );
	};

	{
		CShapeCircle s;
		if ( !s.CreateDispatch( __uuidof( ShapeCircle ), e ) )
			throw e;
		m_shapes.push_back( s.m_lpDispatch );
	};*/
	
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
