
// shape_ctl_cliDoc.h : interface of the Cshape_ctl_cliDoc class
//


#pragma once
#include "CShape.h"
#include "CShapeCircle.h"
#include "CShapeSquare.h"
//#include <atlcomcli.h>
#include <vector>

//typedef CComPtr<IShape> IShapePtr;
typedef std::vector<IShapePtr> v_IShapePtr;

class Cshape_ctl_cliDoc : public CDocument
{
protected: // create from serialization only
	Cshape_ctl_cliDoc();
	DECLARE_DYNCREATE(Cshape_ctl_cliDoc)

// Attributes
public:
	v_IShapePtr m_shapes;
	CSize m_pageSize;
// Operations
public:
	void AddShape( const CRect& rCli );

// Overrides
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// Implementation
public:
	virtual ~Cshape_ctl_cliDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// Helper function that sets search content for a Search Handler
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
