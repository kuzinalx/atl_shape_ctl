

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu Jan 25 18:18:39 2018
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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IShape,0x32542684,0xF33B,0x4C0D,0x95,0xB1,0x26,0x2C,0x7F,0x7D,0xD6,0xC1);


MIDL_DEFINE_GUID(IID, IID_IShapeSquare,0x8F970C27,0x9DF6,0x4F6C,0xB5,0x41,0x67,0x91,0x24,0x20,0xEB,0x11);


MIDL_DEFINE_GUID(IID, IID_IShapeCircle,0x5C066A5D,0xDDE8,0x41A1,0x99,0xBD,0xF6,0x2A,0x6E,0xCA,0x03,0xAB);


MIDL_DEFINE_GUID(IID, IID_IShapeTriangle,0x70044D22,0xA4C8,0x4B98,0xAE,0x07,0xFE,0xD6,0xE9,0xE4,0xC6,0x17);


MIDL_DEFINE_GUID(IID, LIBID_shape_ctl_2Lib,0xE465960F,0x0847,0x4BA6,0x8A,0xAC,0x31,0x8E,0x3E,0x37,0x74,0x80);


MIDL_DEFINE_GUID(CLSID, CLSID_ShapeSquare,0xFE7A5DF1,0x18E4,0x416E,0x95,0x93,0x5F,0xF5,0xA7,0xC2,0xBC,0x83);


MIDL_DEFINE_GUID(CLSID, CLSID_ShapeCircle,0x0E658D92,0xE44E,0x429E,0x8D,0x17,0x41,0x5E,0xA7,0xD8,0x67,0x06);


MIDL_DEFINE_GUID(CLSID, CLSID_ShapeTriangle,0xB1A930E3,0x0822,0x481E,0x9C,0xAF,0xF1,0x89,0xAD,0xE6,0x20,0xB7);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



