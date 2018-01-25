

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu Jan 25 11:20:14 2018
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

MIDL_DEFINE_GUID(IID, IID_IShapeCtl,0xDA8DCF99,0xFB28,0x4BAC,0x86,0x11,0x5B,0x5E,0x0A,0x66,0xE7,0xFB);


MIDL_DEFINE_GUID(IID, IID_ISimpleObject,0x7FD27191,0xFA99,0x48FC,0x80,0x66,0x07,0xD1,0x51,0x1D,0xF8,0xB7);


MIDL_DEFINE_GUID(IID, IID_IShape,0x06B5F299,0xAF7B,0x4000,0xA4,0xAB,0xFF,0x1B,0xAA,0x99,0xBC,0x67);


MIDL_DEFINE_GUID(IID, IID_IShapeSquare,0x6A70521F,0x8840,0x4BC3,0x80,0x73,0x1B,0x7C,0xE4,0x70,0x10,0x20);


MIDL_DEFINE_GUID(IID, LIBID_shape_ctlLib,0x4E5D161D,0x8CA2,0x4104,0xAA,0x17,0x9E,0xB0,0x22,0xF5,0xDE,0x6F);


MIDL_DEFINE_GUID(IID, DIID__IShapeCtlEvents,0xCF2966A9,0x6FB1,0x41C8,0xBF,0x6E,0x25,0xFD,0xA9,0xF5,0xF9,0xD1);


MIDL_DEFINE_GUID(CLSID, CLSID_ShapeCtl,0x949D5A59,0x1494,0x4135,0xB0,0x1B,0x31,0xB4,0x75,0x82,0x2B,0x4A);


MIDL_DEFINE_GUID(CLSID, CLSID_SimpleObject,0x6A6A572F,0x918C,0x44A1,0x9E,0x09,0x44,0x13,0xFC,0x36,0x72,0x24);


MIDL_DEFINE_GUID(CLSID, CLSID_Shape,0xE430D248,0x9260,0x4FED,0xA4,0xC8,0x8C,0x85,0x8A,0x00,0xBD,0xC1);


MIDL_DEFINE_GUID(CLSID, CLSID_ShapeSquare,0xE471AB44,0x6139,0x47D4,0xB6,0x57,0xB6,0x34,0x84,0x81,0x61,0x5D);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



