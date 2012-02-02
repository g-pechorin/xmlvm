#ifndef __ORG_XMLVM_IPHONE_GKDATARECEIVEHANDLER__
#define __ORG_XMLVM_IPHONE_GKDATARECEIVEHANDLER__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
// Implemented interfaces:
// Super Class:
#include "org_xmlvm_iphone_NSObject.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_lang_Object
#define XMLVM_FORWARD_DECL_java_lang_Object
XMLVM_FORWARD_DECL(java_lang_Object)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_String
#define XMLVM_FORWARD_DECL_java_lang_String
XMLVM_FORWARD_DECL(java_lang_String)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_GKSession
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_GKSession
XMLVM_FORWARD_DECL(org_xmlvm_iphone_GKSession)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSData
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSData
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSData)
#endif
// Class declarations for org.xmlvm.iphone.GKDataReceiveHandler
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_GKDataReceiveHandler, 8, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_GKDataReceiveHandler)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_GKDataReceiveHandler;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_GKDataReceiveHandler_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_GKDataReceiveHandler_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_GKDataReceiveHandler_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_GKDataReceiveHandler
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_GKDataReceiveHandler \
    __INSTANCE_FIELDS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_GKDataReceiveHandler \
    } org_xmlvm_iphone_GKDataReceiveHandler

struct org_xmlvm_iphone_GKDataReceiveHandler {
    __TIB_DEFINITION_org_xmlvm_iphone_GKDataReceiveHandler* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_GKDataReceiveHandler;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_GKDataReceiveHandler
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_GKDataReceiveHandler
typedef struct org_xmlvm_iphone_GKDataReceiveHandler org_xmlvm_iphone_GKDataReceiveHandler;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_GKDataReceiveHandler 8
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_GKDataReceiveHandler_receiveData___org_xmlvm_iphone_NSData_java_lang_String_org_xmlvm_iphone_GKSession_java_lang_Object 7

void __INIT_org_xmlvm_iphone_GKDataReceiveHandler();
void __INIT_IMPL_org_xmlvm_iphone_GKDataReceiveHandler();
void __DELETE_org_xmlvm_iphone_GKDataReceiveHandler(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_GKDataReceiveHandler(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_org_xmlvm_iphone_GKDataReceiveHandler();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_GKDataReceiveHandler();
void org_xmlvm_iphone_GKDataReceiveHandler___INIT___(JAVA_OBJECT me);
// Vtable index: 7
void org_xmlvm_iphone_GKDataReceiveHandler_receiveData___org_xmlvm_iphone_NSData_java_lang_String_org_xmlvm_iphone_GKSession_java_lang_Object(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_OBJECT n3, JAVA_OBJECT n4);

// Define a Macro for the method declarations of the Obj-C wrapper class so that subclass wrappers may easily include these too
#define XMLVM_OBJC_OVERRIDE_CLASS_DECLARATIONS_org_xmlvm_iphone_GKDataReceiveHandler \
XMLVM_OBJC_OVERRIDE_CLASS_DECLARATIONS_org_xmlvm_iphone_NSObject \

// Define a Macro for the entire contents of the Obj-C wrapper class
#define XMLVM_OBJC_OVERRIDE_CLASS_DEFINITIONS_org_xmlvm_iphone_GKDataReceiveHandler \
XMLVM_OBJC_OVERRIDE_CLASS_DEFINITIONS_org_xmlvm_iphone_NSObject \


#endif
