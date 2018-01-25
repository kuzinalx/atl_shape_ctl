// ShapeImpl.h : Declaration of the CShapeImpl
#pragma once
#include "resource.h"       // main symbols
#include <atlctl.h>
#include "shape_ctl_2_i.h"


using namespace ATL;

template <typename I>
class ATL_NO_VTABLE CShapeImpl : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<I, & __uuidof(I), &LIBID_shape_ctl_2Lib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
protected:
	RECTL m_rect;
	OLE_COLOR m_colorLine, m_colorFill;
	virtual void OnDrawContent( ATL_DRAWINFO& di ) {};
public:
	CShapeImpl()
	{
		m_rect.left = m_rect.top = 0;
		m_rect.right = m_rect.bottom = 100;
	}

	// IShape methods

	STDMETHOD(GetBoundingBox)(LONG* prect);
	STDMETHOD(get_LineColor)(OLE_COLOR* pVal);
	STDMETHOD(put_LineColor)(OLE_COLOR newVal);
	STDMETHOD(get_FillColor)(OLE_COLOR* pVal);
	STDMETHOD(put_FillColor)(OLE_COLOR newVal);

	template <typename T>
	void OnDrawHelper(ATL_DRAWINFO& di, T fncDrawContent)
	{
		COLORREF c;
		OleTranslateColor( m_colorFill, 0, &c );
		HBRUSH hBrush = CreateSolidBrush( c );
		OleTranslateColor( m_colorLine, 0, &c );
		HPEN hPen = CreatePen( PS_SOLID, 0, c );
		HGDIOBJ hOldBrush = SelectObject( di.hdcDraw, hBrush );
		HGDIOBJ hOldPen = SelectObject( di.hdcDraw, hPen );

		fncDrawContent();

		SelectObject( di.hdcDraw, hOldBrush );
		SelectObject( di.hdcDraw, hOldPen );
		DeleteObject( hBrush );
		DeleteObject( hPen );
	}
};

// CShapeImpl
template <typename I> 
inline STDMETHODIMP CShapeImpl<I>::GetBoundingBox(LONG* prect)
{
	*( RECTL* )prect = m_rect;
	return S_OK;
}


template <typename I> 
inline STDMETHODIMP CShapeImpl<I>::get_LineColor(OLE_COLOR* pVal)
{
	*pVal = m_colorLine;
	return S_OK;
}


template <typename I> 
inline STDMETHODIMP CShapeImpl<I>::put_LineColor(OLE_COLOR newVal)
{
	m_colorLine = newVal;
	return S_OK;
}

template <typename I> 
inline STDMETHODIMP CShapeImpl<I>::get_FillColor(OLE_COLOR* pVal)
{
	*pVal = m_colorFill;
	return S_OK;
}


template <typename I> 
inline STDMETHODIMP CShapeImpl<I>::put_FillColor(OLE_COLOR newVal)
{
	m_colorFill = newVal;
	return S_OK;
}

