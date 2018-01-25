

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu Jan 25 17:57:53 2018
 */
/* Compiler settings for shape_ctl_2.idl:
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

#ifndef __shape_ctl_2_i_h__
#define __shape_ctl_2_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IShape_FWD_DEFINED__
#define __IShape_FWD_DEFINED__
typedef interface IShape IShape;

#endif 	/* __IShape_FWD_DEFINED__ */


#ifndef __IShapeSquare_FWD_DEFINED__
#define __IShapeSquare_FWD_DEFINED__
typedef interface IShapeSquare IShapeSquare;

#endif 	/* __IShapeSquare_FWD_DEFINED__ */


#ifndef __IShapeCircle_FWD_DEFINED__
#define __IShapeCircle_FWD_DEFINED__
typedef interface IShapeCircle IShapeCircle;

#endif 	/* __IShapeCircle_FWD_DEFINED__ */


#ifndef __IShapeTriangle_FWD_DEFINED__
#define __IShapeTriangle_FWD_DEFINED__
typedef interface IShapeTriangle IShapeTriangle;

#endif 	/* __IShapeTriangle_FWD_DEFINED__ */


#ifndef __ShapeSquare_FWD_DEFINED__
#define __ShapeSquare_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShapeSquare ShapeSquare;
#else
typedef struct ShapeSquare ShapeSquare;
#endif /* __cplusplus */

#endif 	/* __ShapeSquare_FWD_DEFINED__ */


#ifndef __ShapeCircle_FWD_DEFINED__
#define __ShapeCircle_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShapeCircle ShapeCircle;
#else
typedef struct ShapeCircle ShapeCircle;
#endif /* __cplusplus */

#endif 	/* __ShapeCircle_FWD_DEFINED__ */


#ifndef __ShapeTriangle_FWD_DEFINED__
#define __ShapeTriangle_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShapeTriangle ShapeTriangle;
#else
typedef struct ShapeTriangle ShapeTriangle;
#endif /* __cplusplus */

#endif 	/* __ShapeTriangle_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IShape_INTERFACE_DEFINED__
#define __IShape_INTERFACE_DEFINED__

/* interface IShape */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IShape;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("32542684-F33B-4C0D-95B1-262C7F7DD6C1")
    IShape : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetBoundingBox( 
            /* [out] */ LONG *prect) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LineColor( 
            /* [retval][out] */ OLE_COLOR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LineColor( 
            /* [in] */ OLE_COLOR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FillColor( 
            /* [retval][out] */ OLE_COLOR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_FillColor( 
            /* [in] */ OLE_COLOR newVal) = 0;
        
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
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetBoundingBox )( 
            IShape * This,
            /* [out] */ LONG *prect);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineColor )( 
            IShape * This,
            /* [retval][out] */ OLE_COLOR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineColor )( 
            IShape * This,
            /* [in] */ OLE_COLOR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FillColor )( 
            IShape * This,
            /* [retval][out] */ OLE_COLOR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FillColor )( 
            IShape * This,
            /* [in] */ OLE_COLOR newVal);
        
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


#define IShape_GetBoundingBox(This,prect)	\
    ( (This)->lpVtbl -> GetBoundingBox(This,prect) ) 

#define IShape_get_LineColor(This,pVal)	\
    ( (This)->lpVtbl -> get_LineColor(This,pVal) ) 

#define IShape_put_LineColor(This,newVal)	\
    ( (This)->lpVtbl -> put_LineColor(This,newVal) ) 

#define IShape_get_FillColor(This,pVal)	\
    ( (This)->lpVtbl -> get_FillColor(This,pVal) ) 

#define IShape_put_FillColor(This,newVal)	\
    ( (This)->lpVtbl -> put_FillColor(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShape_INTERFACE_DEFINED__ */


#ifndef __IShapeSquare_INTERFACE_DEFINED__
#define __IShapeSquare_INTERFACE_DEFINED__

/* interface IShapeSquare */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IShapeSquare;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8F970C27-9DF6-4F6C-B541-67912420EB11")
    IShapeSquare : public IShape
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Left( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Left( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Top( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Top( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Size( 
            /* [in] */ LONG newVal) = 0;
        
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
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetBoundingBox )( 
            IShapeSquare * This,
            /* [out] */ LONG *prect);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineColor )( 
            IShapeSquare * This,
            /* [retval][out] */ OLE_COLOR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineColor )( 
            IShapeSquare * This,
            /* [in] */ OLE_COLOR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FillColor )( 
            IShapeSquare * This,
            /* [retval][out] */ OLE_COLOR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FillColor )( 
            IShapeSquare * This,
            /* [in] */ OLE_COLOR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Left )( 
            IShapeSquare * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Left )( 
            IShapeSquare * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Top )( 
            IShapeSquare * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Top )( 
            IShapeSquare * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            IShapeSquare * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Size )( 
            IShapeSquare * This,
            /* [in] */ LONG newVal);
        
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


#define IShapeSquare_GetBoundingBox(This,prect)	\
    ( (This)->lpVtbl -> GetBoundingBox(This,prect) ) 

#define IShapeSquare_get_LineColor(This,pVal)	\
    ( (This)->lpVtbl -> get_LineColor(This,pVal) ) 

#define IShapeSquare_put_LineColor(This,newVal)	\
    ( (This)->lpVtbl -> put_LineColor(This,newVal) ) 

#define IShapeSquare_get_FillColor(This,pVal)	\
    ( (This)->lpVtbl -> get_FillColor(This,pVal) ) 

#define IShapeSquare_put_FillColor(This,newVal)	\
    ( (This)->lpVtbl -> put_FillColor(This,newVal) ) 


#define IShapeSquare_get_Left(This,pVal)	\
    ( (This)->lpVtbl -> get_Left(This,pVal) ) 

#define IShapeSquare_put_Left(This,newVal)	\
    ( (This)->lpVtbl -> put_Left(This,newVal) ) 

#define IShapeSquare_get_Top(This,pVal)	\
    ( (This)->lpVtbl -> get_Top(This,pVal) ) 

#define IShapeSquare_put_Top(This,newVal)	\
    ( (This)->lpVtbl -> put_Top(This,newVal) ) 

#define IShapeSquare_get_Size(This,pVal)	\
    ( (This)->lpVtbl -> get_Size(This,pVal) ) 

#define IShapeSquare_put_Size(This,newVal)	\
    ( (This)->lpVtbl -> put_Size(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShapeSquare_INTERFACE_DEFINED__ */


#ifndef __IShapeCircle_INTERFACE_DEFINED__
#define __IShapeCircle_INTERFACE_DEFINED__

/* interface IShapeCircle */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IShapeCircle;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5C066A5D-DDE8-41A1-99BD-F62A6ECA03AB")
    IShapeCircle : public IShapeSquare
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IShapeCircleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShapeCircle * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShapeCircle * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShapeCircle * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IShapeCircle * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IShapeCircle * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IShapeCircle * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IShapeCircle * This,
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
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetBoundingBox )( 
            IShapeCircle * This,
            /* [out] */ LONG *prect);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineColor )( 
            IShapeCircle * This,
            /* [retval][out] */ OLE_COLOR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineColor )( 
            IShapeCircle * This,
            /* [in] */ OLE_COLOR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FillColor )( 
            IShapeCircle * This,
            /* [retval][out] */ OLE_COLOR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FillColor )( 
            IShapeCircle * This,
            /* [in] */ OLE_COLOR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Left )( 
            IShapeCircle * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Left )( 
            IShapeCircle * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Top )( 
            IShapeCircle * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Top )( 
            IShapeCircle * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            IShapeCircle * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Size )( 
            IShapeCircle * This,
            /* [in] */ LONG newVal);
        
        END_INTERFACE
    } IShapeCircleVtbl;

    interface IShapeCircle
    {
        CONST_VTBL struct IShapeCircleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShapeCircle_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShapeCircle_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShapeCircle_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShapeCircle_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IShapeCircle_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IShapeCircle_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IShapeCircle_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IShapeCircle_GetBoundingBox(This,prect)	\
    ( (This)->lpVtbl -> GetBoundingBox(This,prect) ) 

#define IShapeCircle_get_LineColor(This,pVal)	\
    ( (This)->lpVtbl -> get_LineColor(This,pVal) ) 

#define IShapeCircle_put_LineColor(This,newVal)	\
    ( (This)->lpVtbl -> put_LineColor(This,newVal) ) 

#define IShapeCircle_get_FillColor(This,pVal)	\
    ( (This)->lpVtbl -> get_FillColor(This,pVal) ) 

#define IShapeCircle_put_FillColor(This,newVal)	\
    ( (This)->lpVtbl -> put_FillColor(This,newVal) ) 


#define IShapeCircle_get_Left(This,pVal)	\
    ( (This)->lpVtbl -> get_Left(This,pVal) ) 

#define IShapeCircle_put_Left(This,newVal)	\
    ( (This)->lpVtbl -> put_Left(This,newVal) ) 

#define IShapeCircle_get_Top(This,pVal)	\
    ( (This)->lpVtbl -> get_Top(This,pVal) ) 

#define IShapeCircle_put_Top(This,newVal)	\
    ( (This)->lpVtbl -> put_Top(This,newVal) ) 

#define IShapeCircle_get_Size(This,pVal)	\
    ( (This)->lpVtbl -> get_Size(This,pVal) ) 

#define IShapeCircle_put_Size(This,newVal)	\
    ( (This)->lpVtbl -> put_Size(This,newVal) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShapeCircle_INTERFACE_DEFINED__ */


#ifndef __IShapeTriangle_INTERFACE_DEFINED__
#define __IShapeTriangle_INTERFACE_DEFINED__

/* interface IShapeTriangle */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IShapeTriangle;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("70044D22-A4C8-4B98-AE07-FED6E9E4C617")
    IShapeTriangle : public IShape
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Vertex_X( 
            /* [in] */ USHORT nVertex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Vertex_X( 
            /* [in] */ USHORT nVertex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Vertex_Y( 
            /* [in] */ USHORT nVertex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Vertex_Y( 
            /* [in] */ USHORT nVertex,
            /* [in] */ LONG newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShapeTriangleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShapeTriangle * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShapeTriangle * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShapeTriangle * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IShapeTriangle * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IShapeTriangle * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IShapeTriangle * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IShapeTriangle * This,
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
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetBoundingBox )( 
            IShapeTriangle * This,
            /* [out] */ LONG *prect);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineColor )( 
            IShapeTriangle * This,
            /* [retval][out] */ OLE_COLOR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineColor )( 
            IShapeTriangle * This,
            /* [in] */ OLE_COLOR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FillColor )( 
            IShapeTriangle * This,
            /* [retval][out] */ OLE_COLOR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FillColor )( 
            IShapeTriangle * This,
            /* [in] */ OLE_COLOR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Vertex_X )( 
            IShapeTriangle * This,
            /* [in] */ USHORT nVertex,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Vertex_X )( 
            IShapeTriangle * This,
            /* [in] */ USHORT nVertex,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Vertex_Y )( 
            IShapeTriangle * This,
            /* [in] */ USHORT nVertex,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Vertex_Y )( 
            IShapeTriangle * This,
            /* [in] */ USHORT nVertex,
            /* [in] */ LONG newVal);
        
        END_INTERFACE
    } IShapeTriangleVtbl;

    interface IShapeTriangle
    {
        CONST_VTBL struct IShapeTriangleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShapeTriangle_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShapeTriangle_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShapeTriangle_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShapeTriangle_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IShapeTriangle_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IShapeTriangle_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IShapeTriangle_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IShapeTriangle_GetBoundingBox(This,prect)	\
    ( (This)->lpVtbl -> GetBoundingBox(This,prect) ) 

#define IShapeTriangle_get_LineColor(This,pVal)	\
    ( (This)->lpVtbl -> get_LineColor(This,pVal) ) 

#define IShapeTriangle_put_LineColor(This,newVal)	\
    ( (This)->lpVtbl -> put_LineColor(This,newVal) ) 

#define IShapeTriangle_get_FillColor(This,pVal)	\
    ( (This)->lpVtbl -> get_FillColor(This,pVal) ) 

#define IShapeTriangle_put_FillColor(This,newVal)	\
    ( (This)->lpVtbl -> put_FillColor(This,newVal) ) 


#define IShapeTriangle_get_Vertex_X(This,nVertex,pVal)	\
    ( (This)->lpVtbl -> get_Vertex_X(This,nVertex,pVal) ) 

#define IShapeTriangle_put_Vertex_X(This,nVertex,newVal)	\
    ( (This)->lpVtbl -> put_Vertex_X(This,nVertex,newVal) ) 

#define IShapeTriangle_get_Vertex_Y(This,nVertex,pVal)	\
    ( (This)->lpVtbl -> get_Vertex_Y(This,nVertex,pVal) ) 

#define IShapeTriangle_put_Vertex_Y(This,nVertex,newVal)	\
    ( (This)->lpVtbl -> put_Vertex_Y(This,nVertex,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShapeTriangle_INTERFACE_DEFINED__ */



#ifndef __shape_ctl_2Lib_LIBRARY_DEFINED__
#define __shape_ctl_2Lib_LIBRARY_DEFINED__

/* library shape_ctl_2Lib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_shape_ctl_2Lib;

EXTERN_C const CLSID CLSID_ShapeSquare;

#ifdef __cplusplus

class DECLSPEC_UUID("FE7A5DF1-18E4-416E-9593-5FF5A7C2BC83")
ShapeSquare;
#endif

EXTERN_C const CLSID CLSID_ShapeCircle;

#ifdef __cplusplus

class DECLSPEC_UUID("0E658D92-E44E-429E-8D17-415EA7D86706")
ShapeCircle;
#endif

EXTERN_C const CLSID CLSID_ShapeTriangle;

#ifdef __cplusplus

class DECLSPEC_UUID("B1A930E3-0822-481E-9CAF-F189ADE620B7")
ShapeTriangle;
#endif
#endif /* __shape_ctl_2Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


