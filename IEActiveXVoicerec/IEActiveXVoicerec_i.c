

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 12:14:07 2038
 */
/* Compiler settings for IEActiveXVoicerec.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
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
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_IEActiveXVoicerecLib,0xf475510b,0x9b86,0x4875,0xae,0x92,0xb3,0xc5,0x25,0xd6,0xc3,0x5c);


MIDL_DEFINE_GUID(IID, DIID__DIEActiveXVoicerec,0x4e9894d3,0x9f1b,0x481d,0x83,0xec,0xa0,0x95,0xff,0x68,0x48,0xb7);


MIDL_DEFINE_GUID(IID, DIID__DIEActiveXVoicerecEvents,0x3bb1bd89,0xdd24,0x4a48,0x92,0x8d,0x67,0x41,0x68,0x11,0xfb,0xc5);


MIDL_DEFINE_GUID(CLSID, CLSID_IEActiveXVoicerec,0x75943fab,0xf874,0x4a9d,0xa4,0x82,0x65,0x40,0x34,0xae,0x19,0x28);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



