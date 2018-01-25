// ShapeSquareImpl.h : Declaration of the CShapeSquareImpl
#pragma once
#include "ShapeImpl.h"

using namespace ATL;

template <typename I>
class ATL_NO_VTABLE CShapeSquareImpl : public CShapeImpl<I>
{
public:
	STDMETHOD(get_Left)(LONG* pVal);
	STDMETHOD(put_Left)(LONG newVal);
	STDMETHOD(get_Top)(LONG* pVal);
	STDMETHOD(put_Top)(LONG newVal);
	STDMETHOD(get_Size)(LONG* pVal);
	STDMETHOD(put_Size)(LONG newVal);
};

template <typename I>
inline STDMETHODIMP CShapeSquareImpl<I>::get_Left(LONG* pVal)
{
	*pVal = m_rect.left;
	return S_OK;
}


template <typename I>
inline STDMETHODIMP CShapeSquareImpl<I>::put_Left(LONG newVal)
{
	m_rect.left = newVal;
	m_rect.right += newVal;
	return S_OK;
}


template <typename I>
inline STDMETHODIMP CShapeSquareImpl<I>::get_Top(LONG* pVal)
{
	*pVal = m_rect.top;
	return S_OK;
}


template <typename I>
inline STDMETHODIMP CShapeSquareImpl<I>::put_Top(LONG newVal)
{
	m_rect.top = newVal;
	m_rect.bottom += newVal;
	return S_OK;
}


template <typename I>
inline STDMETHODIMP CShapeSquareImpl<I>::get_Size(LONG* pVal)
{
	*pVal = m_rect.right - m_rect.left;
	return S_OK;
}


template <typename I>
inline STDMETHODIMP CShapeSquareImpl<I>::put_Size(LONG newVal)
{
	m_rect.right = m_rect.left + newVal;
	m_rect.bottom = m_rect.top + newVal;
	return S_OK;
}

