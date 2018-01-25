
// shape_ctl_cliView.h : interface of the Cshape_ctl_cliView class
//

#pragma once

#include <vector>

_COM_SMARTPTR_TYPEDEF(IViewObject, __uuidof(IViewObject));
typedef std::vector<IViewObjectPtr> v_IViewObjectPtr;

class Cshape_ctl_cliView : public CView
{
protected: // create from serialization only
	Cshape_ctl_cliView();
	DECLARE_DYNCREATE(Cshape_ctl_cliView)

// Attributes
public:
	Cshape_ctl_cliDoc* GetDocument() const;

// Operations
public:
	v_IViewObjectPtr m_shapes;

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void OnUpdate( CView* pSender, LPARAM lHint, CObject* pHint );
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

	//virtual void OnPrepareDC(CDC* pDC, CPrintInfo* pInfo = NULL);
// Implementation
public:
	virtual ~Cshape_ctl_cliView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

	CRect m_pageRect;
	double m_dZoom;
// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // debug version in shape_ctl_cliView.cpp
inline Cshape_ctl_cliDoc* Cshape_ctl_cliView::GetDocument() const
   { return reinterpret_cast<Cshape_ctl_cliDoc*>(m_pDocument); }
#endif

