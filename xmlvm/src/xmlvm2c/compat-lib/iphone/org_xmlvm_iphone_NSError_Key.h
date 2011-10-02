#ifndef __ORG_XMLVM_IPHONE_NSERROR_KEY__
#define __ORG_XMLVM_IPHONE_NSERROR_KEY__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
// Implemented interfaces:
// Super Class:
#include "java_lang_Object.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_lang_String
#define XMLVM_FORWARD_DECL_java_lang_String
XMLVM_FORWARD_DECL(java_lang_String)
#endif
// Class declarations for org.xmlvm.iphone.NSError$Key
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_NSError_Key, 6, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_NSError_Key)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSError_Key;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSError_Key_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSError_Key_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSError_Key_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_NSError_Key
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_NSError_Key \
    __INSTANCE_FIELDS_java_lang_Object; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_NSError_Key \
    } org_xmlvm_iphone_NSError_Key

struct org_xmlvm_iphone_NSError_Key {
    __TIB_DEFINITION_org_xmlvm_iphone_NSError_Key* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_NSError_Key;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSError_Key
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSError_Key
typedef struct org_xmlvm_iphone_NSError_Key org_xmlvm_iphone_NSError_Key;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_NSError_Key 6

void __INIT_org_xmlvm_iphone_NSError_Key();
void __INIT_IMPL_org_xmlvm_iphone_NSError_Key();
void __DELETE_org_xmlvm_iphone_NSError_Key(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_NSError_Key(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_org_xmlvm_iphone_NSError_Key();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_NSError_Key();
JAVA_OBJECT org_xmlvm_iphone_NSError_Key_GET_NSLocalizedDescription();
void org_xmlvm_iphone_NSError_Key_PUT_NSLocalizedDescription(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_NSError_Key_GET_NSFilePathError();
void org_xmlvm_iphone_NSError_Key_PUT_NSFilePathError(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_NSError_Key_GET_NSStringEncodingError();
void org_xmlvm_iphone_NSError_Key_PUT_NSStringEncodingError(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_NSError_Key_GET_NSUnderlyingError();
void org_xmlvm_iphone_NSError_Key_PUT_NSUnderlyingError(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_NSError_Key_GET_NSURLError();
void org_xmlvm_iphone_NSError_Key_PUT_NSURLError(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_NSError_Key_GET_NSLocalizedFailureReason();
void org_xmlvm_iphone_NSError_Key_PUT_NSLocalizedFailureReason(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_NSError_Key_GET_NSLocalizedRecoverySuggestion();
void org_xmlvm_iphone_NSError_Key_PUT_NSLocalizedRecoverySuggestion(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_NSError_Key_GET_NSLocalizedRecoveryOptions();
void org_xmlvm_iphone_NSError_Key_PUT_NSLocalizedRecoveryOptions(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_NSError_Key_GET_NSRecoveryAttempter();
void org_xmlvm_iphone_NSError_Key_PUT_NSRecoveryAttempter(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_NSError_Key_GET_NSHelpAnchor();
void org_xmlvm_iphone_NSError_Key_PUT_NSHelpAnchor(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_NSError_Key_GET_NSURLErrorFailingURL();
void org_xmlvm_iphone_NSError_Key_PUT_NSURLErrorFailingURL(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_NSError_Key_GET_NSURLErrorFailingURLString();
void org_xmlvm_iphone_NSError_Key_PUT_NSURLErrorFailingURLString(JAVA_OBJECT v);
JAVA_OBJECT org_xmlvm_iphone_NSError_Key_GET_NSURLErrorFailingURLPeerTrust();
void org_xmlvm_iphone_NSError_Key_PUT_NSURLErrorFailingURLPeerTrust(JAVA_OBJECT v);
void org_xmlvm_iphone_NSError_Key___INIT___(JAVA_OBJECT me);

#endif
