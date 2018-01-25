// ShapeSquare.h : Declaration of the CShapeSquare
#pragma once
#include "resource.h"       // main symbols
#include <atlctl.h>
#include "shape_ctl_2_i.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;



// CShapeSquare
class ATL_NO_VTABLE CShapeSquare :
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IShapeSquare, &IID_IShapeSquare, &LIBID_shape_ctl_2Lib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public IOleControlImpl<CShapeSquare>,
	public IOleObjectImpl<CShapeSquare>,
	public IOleInPlaceActiveObjectImpl<CShapeSquare>,
	public IViewObjectExImpl<CShapeSquare>,
	public IOleInPlaceObjectWindowlessImpl<CShapeSquare>,
	public ISupportErrorInfo,
	public IQuickActivateImpl<CShapeSquare>,
#ifndef _WIN32_WCE
	public IDataObjectImpl<CShapeSquare>,
#endif
	public IProvideClassInfo2Impl<&CLSID_ShapeSquare, NULL, &LIBID_shape_ctl_2Lib>,
	public CComCoClass<CShapeSquare, &CLSID_ShapeSquare>,
	public CComControl<CShapeSquare>
{
public:


	CShapeSquare()
	{
		m_rect.left = m_rect.top = 0;
		m_rect.right = m_rect.bottom = 100;
	}

DECLARE_OLEMISC_STATUS(OLEMISC_RECOMPOSEONRESIZE |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_INSIDEOUT |
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST
)

DECLARE_REGISTRY_RESOURCEID(IDR_SHAPESQUARE)


BEGIN_COM_MAP(CShapeSquare)
	COM_INTERFACE_ENTRY(IShape)
	COM_INTERFACE_ENTRY(IShapeSquare)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IViewObjectEx)
	COM_INTERFACE_ENTRY(IViewObject2)
	COM_INTERFACE_ENTRY(IViewObject)
	COM_INTERFACE_ENTRY(IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY(IOleInPlaceObject)
	COM_INTERFACE_ENTRY2(IOleWindow, IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY(IOleInPlaceActiveObject)
	COM_INTERFACE_ENTRY(IOleControl)
	COM_INTERFACE_ENTRY(IOleObject)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IQuickActivate)
#ifndef _WIN32_WCE
	COM_INTERFACE_ENTRY(IDataObject)
#endif
	COM_INTERFACE_ENTRY(IProvideClassInfo)
	COM_INTERFACE_ENTRY(IProvideClassInfo2)
END_COM_MAP()

BEGIN_PROP_MAP(CShapeSquare)
	PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4)
	PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4)
	// Example entries
	// PROP_ENTRY_TYPE("Property Name", dispid, clsid, vtType)
	// PROP_PAGE(CLSID_StockColorPage)
END_PROP_MAP()


BEGIN_MSG_MAP(CShapeSquare)
	CHAIN_MSG_MAP(CComControl<CShapeSquare>)
	DEFAULT_REFLECTION_HANDLER()
END_MSG_MAP()
// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid)
	{
		static const IID* const arr[] =
		{
			&IID_IShapeSquare,
		};

		for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
		{
			if (InlineIsEqualGUID(*arr[i], riid))
				return S_OK;
		}
		return S_FALSE;
	}

// IViewObjectEx
	DECLARE_VIEW_STATUS(VIEWSTATUS_SOLIDBKGND | VIEWSTATUS_OPAQUE)

// IShapeSquare

	RECTL m_rect;
	OLE_COLOR m_colorLine, m_colorFill;
public:
	HRESULT OnDraw(ATL_DRAWINFO& di)
	{
		/*HRGN hRgnOld = 0;
		HRGN hRgnNew = 0;
		bool bSelectOldRgn = false;
		if ( di.prcBounds )
		{
			RECT& rc = *(RECT*)di.prcBounds;
			// Set Clip region to the rectangle specified by di.prcBounds
		
			if (GetClipRgn(di.hdcDraw, hRgnOld) != 1)
				hRgnOld = NULL;
			

			HRGN hRgnNew = CreateRectRgn(rc.left, rc.top, rc.right, rc.bottom);

			if (hRgnNew != NULL)
			{
				bSelectOldRgn = (SelectClipRgn(di.hdcDraw, hRgnNew) != ERROR);
			}
		};*/
		COLORREF c;
		OleTranslateColor( m_colorFill, 0, &c );
		HBRUSH hBrush = CreateSolidBrush( c );
		OleTranslateColor( m_colorLine, 0, &c );
		HPEN hPen = CreatePen( PS_SOLID, 0, c );
		HGDIOBJ hOldBrush = SelectObject( di.hdcDraw, hBrush );
		HGDIOBJ hOldPen = SelectObject( di.hdcDraw, hPen );

		Rectangle(di.hdcDraw, m_rect.left, m_rect.top, m_rect.right, m_rect.bottom);

		SelectObject( di.hdcDraw, hOldBrush );
		SelectObject( di.hdcDraw, hOldPen );
		DeleteObject( hBrush );
		DeleteObject( hPen );

		/*if (bSelectOldRgn)
			SelectClipRgn(di.hdcDraw, hRgnOld);

		DeleteObject(hRgnNew);
		*/
		return S_OK;
	}


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

	STDMETHOD(GetBoundingBox)(LONG* prect);
	STDMETHOD(get_Left)(LONG* pVal);
	STDMETHOD(put_Left)(LONG newVal);
	STDMETHOD(get_Top)(LONG* pVal);
	STDMETHOD(put_Top)(LONG newVal);
	STDMETHOD(get_Size)(LONG* pVal);
	STDMETHOD(put_Size)(LONG newVal);
	STDMETHOD(get_LineColor)(OLE_COLOR* pVal);
	STDMETHOD(put_LineColor)(OLE_COLOR newVal);
	STDMETHOD(get_FillColor)(OLE_COLOR* pVal);
	STDMETHOD(put_FillColor)(OLE_COLOR newVal);
};

OBJECT_ENTRY_AUTO(__uuidof(ShapeSquare), CShapeSquare)
