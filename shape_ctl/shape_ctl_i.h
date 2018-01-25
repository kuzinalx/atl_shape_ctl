

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu Jan 25 17:57:52 2018
 */
/* Compiler settings for shape_ctl.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __shape_ctl_i_h__
#define __shape_ctl_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IShapeCtl_FWD_DEFINED__
#define __IShapeCtl_FWD_DEFINED__
typedef interface IShapeCtl IShapeCtl;

#endif 	/* __IShapeCtl_FWD_DEFINED__ */


#ifndef __ISimpleObject_FWD_DEFINED__
#define __ISimpleObject_FWD_DEFINED__
typedef interface ISimpleObject ISimpleObject;

#endif 	/* __ISimpleObject_FWD_DEFINED__ */


#ifndef __IShape_FWD_DEFINED__
#define __IShape_FWD_DEFINED__
typedef interface IShape IShape;

#endif 	/* __IShape_FWD_DEFINED__ */


#ifndef __IShapeSquare_FWD_DEFINED__
#define __IShapeSquare_FWD_DEFINED__
typedef interface IShapeSquare IShapeSquare;

#endif 	/* __IShapeSquare_FWD_DEFINED__ */


#ifndef ___IShapeCtlEvents_FWD_DEFINED__
#define ___IShapeCtlEvents_FWD_DEFINED__
typedef interface _IShapeCtlEvents _IShapeCtlEvents;

#endif 	/* ___IShapeCtlEvents_FWD_DEFINED__ */


#ifndef __ShapeCtl_FWD_DEFINED__
#define __ShapeCtl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShapeCtl ShapeCtl;
#else
typedef struct ShapeCtl ShapeCtl;
#endif /* __cplusplus */

#endif 	/* __ShapeCtl_FWD_DEFINED__ */


#ifndef __SimpleObject_FWD_DEFINED__
#define __SimpleObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class SimpleObject SimpleObject;
#else
typedef struct SimpleObject SimpleObject;
#endif /* __cplusplus */

#endif 	/* __SimpleObject_FWD_DEFINED__ */


#ifndef __Shape_FWD_DEFINED__
#define __Shape_FWD_DEFINED__

#ifdef __cplusplus
typedef class Shape Shape;
#else
typedef struct Shape Shape;
#endif /* __cplusplus */

#endif 	/* __Shape_FWD_DEFINED__ */


#ifndef __ShapeSquare_FWD_DEFINED__
#define __ShapeSquare_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShapeSquare ShapeSquare;
#else
typedef struct ShapeSquare ShapeSquare;
#endif /* __cplusplus */

#endif 	/* __ShapeSquare_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IShapeCtl_INTERFACE_DEFINED__
#define __IShapeCtl_INTERFACE_DEFINED__

/* interface IShapeCtl */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IShapeCtl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DA8DCF99-FB28-4BAC-8611-5B5E0A66E7FB")
    IShapeCtl : public IDispatch
    {
    public:
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_FillColor( 
            /* [in] */ OLE_COLOR clr) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_FillColor( 
            /* [retval][out] */ OLE_COLOR *pclr) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShapeCtlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShapeCtl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShapeCtl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShapeCtl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IShapeCtl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IShapeCtl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IShapeCtl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IShapeCtl * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FillColor )( 
            IShapeCtl * This,
            /* [in] */ OLE_COLOR clr);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FillColor )( 
            IShapeCtl * This,
            /* [retval][out] */ OLE_COLOR *pclr);
        
        END_INTERFACE
    } IShapeCtlVtbl;

    interface IShapeCtl
    {
        CONST_VTBL struct IShapeCtlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShapeCtl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShapeCtl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShapeCtl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShapeCtl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IShapeCtl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IShapeCtl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IShapeCtl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IShapeCtl_put_FillColor(This,clr)	\
    ( (This)->lpVtbl -> put_FillColor(This,clr) ) 

#define IShapeCtl_get_FillColor(This,pclr)	\
    ( (This)->lpVtbl -> get_FillColor(This,pclr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShapeCtl_INTERFACE_DEFINED__ */


#ifndef __ISimpleObject_INTERFACE_DEFINED__
#define __ISimpleObject_INTERFACE_DEFINED__

/* interface ISimpleObject */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISimpleObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7FD27191-FA99-48FC-8066-07D1511DF8B7")
    ISimpleObject : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct ISimpleObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISimpleObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISimpleObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISimpleObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISimpleObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISimpleObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISimpleObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISimpleObject * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } ISimpleObjectVtbl;

    interface ISimpleObject
    {
        CONST_VTBL struct ISimpleObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISimpleObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISimpleObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISimpleObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISimpleObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISimpleObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISimpleObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISimpleObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISimpleObject_INTERFACE_DEFINED__ */


#ifndef __IShape_INTERFACE_DEFINED__
#define __IShape_INTERFACE_DEFINED__

/* interface IShape */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IShape;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("06B5F299-AF7B-4000-A4AB-FF1BAA99BC67")
    IShape : public IDispatch
    {
    public:
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_BorderColor( 
            /* [in] */ OLE_COLOR clr) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_BorderColor( 
            /* [retval][out] */ OLE_COLOR *pclr) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_FillColor( 
            /* [in] */ OLE_COLOR clr) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_FillColor( 
            /* [retval][out] */ OLE_COLOR *pclr) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShapeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShape * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShape * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShape * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IShape * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IShape * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IShape * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IShape * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BorderColor )( 
            IShape * This,
            /* [in] */ OLE_COLOR clr);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BorderColor )( 
            IShape * This,
            /* [retval][out] */ OLE_COLOR *pclr);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FillColor )( 
            IShape * This,
            /* [in] */ OLE_COLOR clr);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FillColor )( 
            IShape * This,
            /* [retval][out] */ OLE_COLOR *pclr);
        
        END_INTERFACE
    } IShapeVtbl;

    interface IShape
    {
        CONST_VTBL struct IShapeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShape_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShape_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShape_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShape_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IShape_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IShape_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IShape_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IShape_put_BorderColor(This,clr)	\
    ( (This)->lpVtbl -> put_BorderColor(This,clr) ) 

#define IShape_get_BorderColor(This,pclr)	\
    ( (This)->lpVtbl -> get_BorderColor(This,pclr) ) 

#define IShape_put_FillColor(This,clr)	\
    ( (This)->lpVtbl -> put_FillColor(This,clr) ) 

#define IShape_get_FillColor(This,pclr)	\
    ( (This)->lpVtbl -> get_FillColor(This,pclr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShape_INTERFACE_DEFINED__ */


#ifndef __IShapeSquare_INTERFACE_DEFINED__
#define __IShapeSquare_INTERFACE_DEFINED__

/* interface IShapeSquare */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IShapeSquare;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6A70521F-8840-4BC3-8073-1B7CE4701020")
    IShapeSquare : public IShape
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IShapeSquareVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShapeSquare * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShapeSquare * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShapeSquare * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IShapeSquare * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IShapeSquare * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IShapeSquare * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IShapeSquare * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BorderColor )( 
            IShapeSquare * This,
            /* [in] */ OLE_COLOR clr);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BorderColor )( 
            IShapeSquare * This,
            /* [retval][out] */ OLE_COLOR *pclr);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FillColor )( 
            IShapeSquare * This,
            /* [in] */ OLE_COLOR clr);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FillColor )( 
            IShapeSquare * This,
            /* [retval][out] */ OLE_COLOR *pclr);
        
        END_INTERFACE
    } IShapeSquareVtbl;

    interface IShapeSquare
    {
        CONST_VTBL struct IShapeSquareVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShapeSquare_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShapeSquare_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShapeSquare_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShapeSquare_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IShapeSquare_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IShapeSquare_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IShapeSquare_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IShapeSquare_put_BorderColor(This,clr)	\
    ( (This)->lpVtbl -> put_BorderColor(This,clr) ) 

#define IShapeSquare_get_BorderColor(This,pclr)	\
    ( (This)->lpVtbl -> get_BorderColor(This,pclr) ) 

#define IShapeSquare_put_FillColor(This,clr)	\
    ( (This)->lpVtbl -> put_FillColor(This,clr) ) 

#define IShapeSquare_get_FillColor(This,pclr)	\
    ( (This)->lpVtbl -> get_FillColor(This,pclr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShapeSquare_INTERFACE_DEFINED__ */



#ifndef __shape_ctlLib_LIBRARY_DEFINED__
#define __shape_ctlLib_LIBRARY_DEFINED__

/* library shape_ctlLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_shape_ctlLib;

#ifndef ___IShapeCtlEvents_DISPINTERFACE_DEFINED__
#define ___IShapeCtlEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IShapeCtlEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__IShapeCtlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CF2966A9-6FB1-41C8-BF6E-25FDA9F5F9D1")
    _IShapeCtlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IShapeCtlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IShapeCtlEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IShapeCtlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IShapeCtlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IShapeCtlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IShapeCtlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IShapeCtlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IShapeCtlEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _IShapeCtlEventsVtbl;

    interface _IShapeCtlEvents
    {
        CONST_VTBL struct _IShapeCtlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IShapeCtlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IShapeCtlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IShapeCtlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IShapeCtlEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IShapeCtlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IShapeCtlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IShapeCtlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IShapeCtlEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ShapeCtl;

#ifdef __cplusplus

class DECLSPEC_UUID("949D5A59-1494-4135-B01B-31B475822B4A")
ShapeCtl;
#endif

EXTERN_C const CLSID CLSID_SimpleObject;

#ifdef __cplusplus

class DECLSPEC_UUID("6A6A572F-918C-44A1-9E09-4413FC367224")
SimpleObject;
#endif

EXTERN_C const CLSID CLSID_Shape;

#ifdef __cplusplus

class DECLSPEC_UUID("E430D248-9260-4FED-A4C8-8C858A00BDC1")
Shape;
#endif

EXTERN_C const CLSID CLSID_ShapeSquare;

#ifdef __cplusplus

class DECLSPEC_UUID("E471AB44-6139-47D4-B657-B6348481615D")
ShapeSquare;
#endif
#endif /* __shape_ctlLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


