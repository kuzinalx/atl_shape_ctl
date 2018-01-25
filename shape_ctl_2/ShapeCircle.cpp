// ShapeCircle.cpp : Implementation of CShapeCircle
#include "stdafx.h"
#include "ShapeCircle.h"


// CShapeCircle
STDMETHODIMP CShapeCircle::GetBoundingBox(LONG* prect)
{
	*( RECTL* )prect = m_rect;
	return S_OK;
}




STDMETHODIMP CShapeCircle::get_Left(LONG* pVal)
{
	*pVal = m_rect.left;
	return S_OK;
}


STDMETHODIMP CShapeCircle::put_Left(LONG newVal)
{
	m_rect.left = newVal;
	m_rect.right += newVal;
	return S_OK;
}


STDMETHODIMP CShapeCircle::get_Top(LONG* pVal)
{
	*pVal = m_rect.top;
	return S_OK;
}


STDMETHODIMP CShapeCircle::put_Top(LONG newVal)
{
	m_rect.top = newVal;
	m_rect.bottom += newVal;
	return S_OK;
}


STDMETHODIMP CShapeCircle::get_Size(LONG* pVal)
{
	*pVal = m_rect.right - m_rect.left;
	return S_OK;
}


STDMETHODIMP CShapeCircle::put_Size(LONG newVal)
{
	m_rect.right = m_rect.left + newVal;
	m_rect.bottom = m_rect.top + newVal;
	return S_OK;
}

STDMETHODIMP CShapeCircle::get_LineColor(OLE_COLOR* pVal)
{
	*pVal = m_colorLine;
	return S_OK;
}


STDMETHODIMP CShapeCircle::put_LineColor(OLE_COLOR newVal)
{
	m_colorLine = newVal;
	return S_OK;
}

STDMETHODIMP CShapeCircle::get_FillColor(OLE_COLOR* pVal)
{
	*pVal = m_colorFill;
	return S_OK;
}


STDMETHODIMP CShapeCircle::put_FillColor(OLE_COLOR newVal)
{
	m_colorFill = newVal;
	return S_OK;
}
