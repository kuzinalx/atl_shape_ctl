// ShapeTriangle.cpp : Implementation of CShapeTriangle
#include "stdafx.h"
#include "ShapeTriangle.h"
#include <algorithm>
using namespace std;


// CShapeTriangle

#define TEST_NVERTEX\
	ATLASSERT( nVertex < 3 );\
	if ( nVertex >= 3 )\
		return E_INVALIDARG;\

inline void UpdateRect( RECTL& rect, const POINT* ppt )
{
	rect.left = ppt[0].x;
	rect.right = ppt[1].x;
	rect.top = ppt[0].y;
	rect.bottom = ppt[1].y;
	if ( rect.left > rect.right ) swap( rect.left, rect.right );
	if ( rect.top > rect.bottom ) swap( rect.top, rect.bottom );
	if ( rect.left > ppt[2].x ) rect.left = ppt[2].x;
	else if ( rect.right < ppt[2].x ) rect.right = ppt[2].x;
	if ( rect.top > ppt[2].y ) rect.top = ppt[2].y;
	else if ( rect.bottom < ppt[2].y ) rect.bottom = ppt[2].y;
}

STDMETHODIMP CShapeTriangle::get_Vertex_X(USHORT nVertex, LONG *pVal)
{
	TEST_NVERTEX;
	*pVal = m_points[nVertex].x;
	return S_OK;
}


STDMETHODIMP CShapeTriangle::put_Vertex_X(USHORT nVertex, LONG newVal)
{
	TEST_NVERTEX;
	m_points[nVertex].x = newVal;
	UpdateRect( m_rect, m_points );
	return S_OK;
}


STDMETHODIMP CShapeTriangle::get_Vertex_Y(USHORT nVertex, LONG *pVal)
{
	TEST_NVERTEX;
	*pVal = m_points[nVertex].y;
	return S_OK;
}


STDMETHODIMP CShapeTriangle::put_Vertex_Y(USHORT nVertex, LONG newVal)
{
	TEST_NVERTEX;
	m_points[nVertex].y = newVal;
	UpdateRect( m_rect, m_points );
	return S_OK;
}

#undef TEST_NVERTEX
