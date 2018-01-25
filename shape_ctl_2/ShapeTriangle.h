// ShapeTriangle.h : Declaration of the CShapeTriangle
#pragma once
#include "resource.h"       // main symbols
#include <atlctl.h>
#include "shape_ctl_2_i.h"
#include "ShapeImpl.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;



// CShapeTriangle
class ATL_NO_VTABLE CShapeTriangle :
	//public CComObjectRootEx<CComSingleThreadModel>,
	//public IDispatchImpl<IShapeTriangle, &IID_IShapeTriangle, &LIBID_shape_ctl_2Lib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public CShapeImpl<IShapeTriangle>,
	public IOleControlImpl<CShapeTriangle>,
	public IOleObjectImpl<CShapeTriangle>,
	public IOleInPlaceActiveObjectImpl<CShapeTriangle>,
	public IViewObjectExImpl<CShapeTriangle>,
	public IOleInPlaceObjectWindowlessImpl<CShapeTriangle>,
	public ISupportErrorInfo,
	public IQuickActivateImpl<CShapeTriangle>,
#ifndef _WIN32_WCE
	public IDataObjectImpl<CShapeTriangle>,
#endif
	public IProvideClassInfo2Impl<&CLSID_ShapeTriangle, NULL, &LIBID_shape_ctl_2Lib>,
	public CComCoClass<CShapeTriangle, &CLSID_ShapeTriangle>,
	public CComControl<CShapeTriangle>
{
public:


	CShapeTriangle()
	{
		memset( m_points, 0, 3*sizeof(POINT) );
	}

DECLARE_OLEMISC_STATUS(OLEMISC_RECOMPOSEONRESIZE |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_INSIDEOUT |
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST
)

DECLARE_REGISTRY_RESOURCEID(IDR_SHAPETRIANGLE)


BEGIN_COM_MAP(CShapeTriangle)
	COM_INTERFACE_ENTRY(IShape)
	COM_INTERFACE_ENTRY(IShapeTriangle)
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

BEGIN_PROP_MAP(CShapeTriangle)
	PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4)
	PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4)
	// Example entries
	// PROP_ENTRY_TYPE("Property Name", dispid, clsid, vtType)
	// PROP_PAGE(CLSID_StockColorPage)
END_PROP_MAP()


BEGIN_MSG_MAP(CShapeTriangle)
	CHAIN_MSG_MAP(CComControl<CShapeTriangle>)
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
			&IID_IShapeTriangle,
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

// IShapeTriangle
	POINT m_points[3];

public:
	HRESULT OnDraw(ATL_DRAWINFO& di)
	{
		OnDrawHelper( di, [this,di]() {
			Polygon( di.hdcDraw, m_points, 3 );
		});
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

	STDMETHOD(get_Vertex_X)(USHORT nVertex, LONG *pVal);
	STDMETHOD(put_Vertex_X)(USHORT nVertex, LONG newVal);
	STDMETHOD(get_Vertex_Y)(USHORT nVertex, LONG *pVal);
	STDMETHOD(put_Vertex_Y)(USHORT nVertex, LONG newVal);
};

OBJECT_ENTRY_AUTO(__uuidof(ShapeTriangle), CShapeTriangle)
