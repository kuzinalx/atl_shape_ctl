
// shape_ctl_cliView.cpp : implementation of the Cshape_ctl_cliView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "shape_ctl_cli.h"
#endif

#include "shape_ctl_cliDoc.h"
#include "shape_ctl_cliView.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif



// Cshape_ctl_cliView

IMPLEMENT_DYNCREATE(Cshape_ctl_cliView, CView)

BEGIN_MESSAGE_MAP(Cshape_ctl_cliView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDBLCLK()
	ON_WM_RBUTTONDBLCLK()
END_MESSAGE_MAP()

// Cshape_ctl_cliView construction/destruction

Cshape_ctl_cliView::Cshape_ctl_cliView()
{
	// TODO: add construction code here
	m_dZoom = 1.;
	m_nRClick = 0;
	m_nLClick = 0;
}

Cshape_ctl_cliView::~Cshape_ctl_cliView()
{
}

BOOL Cshape_ctl_cliView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

void Cshape_ctl_cliView::OnUpdate( CView* pSender, LPARAM lHint, CObject* pHint )
{
	Cshape_ctl_cliDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	m_shapes.clear();
	if ( pDoc )
	{
		for ( auto e : pDoc->m_shapes )
			m_shapes.push_back( e );
	};
	__super::OnUpdate( pSender, lHint, pHint );
}

// Cshape_ctl_cliView drawing

void Cshape_ctl_cliView::OnDraw(CDC* pDC)
{
	Cshape_ctl_cliDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	RECTL r;
	for ( size_t i = 0; i < m_shapes.size(); ++i )
	{
		pDoc->m_shapes[i]->GetBoundingBox( ( LONG* )&r );
		m_shapes[i]->Draw( DVASPECT_CONTENT, 0, 0, 0, pDC->m_hAttribDC, pDC->m_hDC, &r, 0, 0, 0 );
	};

	CString str;
	str.Format( _T("left=%i right=%i"), m_nLClick, m_nRClick );
	pDC->SetBkMode(TRANSPARENT);
	pDC->ExtTextOut( 0, 0, 0, 0, str, 0 );

	RECT rCli;
	GetClientRect( &rCli );
	int uCellSize = 100;
	for ( LONG i = uCellSize; i < rCli.bottom; i+= uCellSize )
	{
		pDC->MoveTo( rCli.left, i );
		pDC->LineTo( rCli.right, i );
	};
	for ( LONG i = uCellSize; i < rCli.right; i+= uCellSize )
	{
		pDC->MoveTo( i, rCli.top );
		pDC->LineTo( i, rCli.bottom );
	};

	for ( auto& cell : pDoc->m_shapeMap )
	{
		int x = cell.first.first*uCellSize;
		int y = cell.first.second*uCellSize;
		if ( !PtInRect( &rCli, CPoint( x, y ) ) )
			continue;
		str.Format( _T( "%i" ), cell.second.size() );
		pDC->ExtTextOutW( x, y, 0, 0, str, 0 );
	};

}


// Cshape_ctl_cliView printing

BOOL Cshape_ctl_cliView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void Cshape_ctl_cliView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void Cshape_ctl_cliView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/*void Cshape_ctl_cliView::OnPrepareDC(CDC* pDC, CPrintInfo* pInfo)
{
	Cshape_ctl_cliDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->SetMapMode( MM_ANISOTROPIC );
	CRect rc;
	GetClientRect( &rc );
	CSize sc = rc.Size();
	const CSize& sp = pDoc->m_pageSize;
	pDC->SetWindowOrg( 0, 0 );
	pDC->SetWindowExt( sp );
	auto fncmin = []( int a, int b ){ return a < b ? a : b; };
	CSize sVext( fncmin( sc.cx, ::MulDiv( sc.cy, sp.cx, sp.cy ) ), fncmin( sc.cy, ::MulDiv( sc.cx, sp.cy, sp.cx ) ) );
	pDC->SetViewportExt( sVext );
	pDC->SetViewportOrg( ( sc.cx - sVext.cx )/2, ( sc.cy - sVext.cy )/2 );
}*/

// Cshape_ctl_cliView diagnostics

#ifdef _DEBUG
void Cshape_ctl_cliView::AssertValid() const
{
	CView::AssertValid();
}

void Cshape_ctl_cliView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cshape_ctl_cliDoc* Cshape_ctl_cliView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cshape_ctl_cliDoc)));
	return (Cshape_ctl_cliDoc*)m_pDocument;
}
#endif //_DEBUG


// Cshape_ctl_cliView message handlers


void Cshape_ctl_cliView::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	CView::OnLButtonDblClk(nFlags, point);
	Cshape_ctl_cliDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CRect r;
	GetClientRect( &r );
	pDoc->AddShape( r );
	m_nLClick++;
}


void Cshape_ctl_cliView::OnRButtonDblClk(UINT nFlags, CPoint point)
{
	
	Cshape_ctl_cliDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CRect r;
	GetClientRect( &r );
	pDoc->AddShape( r, &point );
	m_nRClick++;
	CView::OnRButtonDblClk(nFlags, point);
}
