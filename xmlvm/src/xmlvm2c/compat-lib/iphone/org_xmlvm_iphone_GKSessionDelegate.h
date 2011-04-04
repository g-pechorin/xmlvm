#ifndef __ORG_XMLVM_IPHONE_GKSESSIONDELEGATE__
#define __ORG_XMLVM_IPHONE_GKSESSIONDELEGATE__

#include "xmlvm.h"
#include "org_xmlvm_iphone_NSObject.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSObject)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_GKSession
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_GKSession
XMLVM_FORWARD_DECL(org_xmlvm_iphone_GKSession)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSError
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSError
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSError)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_String
#define XMLVM_FORWARD_DECL_java_lang_String
XMLVM_FORWARD_DECL(java_lang_String)
#endif
// Class declarations for org.xmlvm.iphone.GKSessionDelegate
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_GKSessionDelegate, 13, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_GKSessionDelegate)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_GKSessionDelegate;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_GKSessionDelegate_3ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_GKSessionDelegate_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_GKSessionDelegate_1ARRAY;

//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_GKSessionDelegate
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_GKSessionDelegate \
    __INSTANCE_FIELDS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_GKSessionDelegate \
    } org_xmlvm_iphone_GKSessionDelegate

struct org_xmlvm_iphone_GKSessionDelegate {
    __TIB_DEFINITION_org_xmlvm_iphone_GKSessionDelegate* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_GKSessionDelegate;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_GKSessionDelegate
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_GKSessionDelegate
typedef struct org_xmlvm_iphone_GKSessionDelegate org_xmlvm_iphone_GKSessionDelegate;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_GKSessionDelegate 13
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_GKSessionDelegate_didChangeState___org_xmlvm_iphone_GKSession_java_lang_String_int 9
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_GKSessionDelegate_didReceiveConnectionRequestFromPeer___org_xmlvm_iphone_GKSession_java_lang_String 10
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_GKSessionDelegate_connectionWithPeerFailed___org_xmlvm_iphone_GKSession_java_lang_String_org_xmlvm_iphone_NSError 11
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_GKSessionDelegate_didFailWithError___org_xmlvm_iphone_GKSession_org_xmlvm_iphone_NSError 12

void __INIT_org_xmlvm_iphone_GKSessionDelegate();
void __INIT_IMPL_org_xmlvm_iphone_GKSessionDelegate();
void __DELETE_org_xmlvm_iphone_GKSessionDelegate(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_GKSessionDelegate(JAVA_OBJECT me);
JAVA_OBJECT __NEW_org_xmlvm_iphone_GKSessionDelegate();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_GKSessionDelegate();
void org_xmlvm_iphone_GKSessionDelegate___INIT___(JAVA_OBJECT me);
// Vtable index: 9
void org_xmlvm_iphone_GKSessionDelegate_didChangeState___org_xmlvm_iphone_GKSession_java_lang_String_int(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_INT n3);
// Vtable index: 10
void org_xmlvm_iphone_GKSessionDelegate_didReceiveConnectionRequestFromPeer___org_xmlvm_iphone_GKSession_java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 11
void org_xmlvm_iphone_GKSessionDelegate_connectionWithPeerFailed___org_xmlvm_iphone_GKSession_java_lang_String_org_xmlvm_iphone_NSError(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_OBJECT n3);
// Vtable index: 12
void org_xmlvm_iphone_GKSessionDelegate_didFailWithError___org_xmlvm_iphone_GKSession_org_xmlvm_iphone_NSError(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);

#endif
