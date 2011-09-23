#ifndef __ORG_XMLVM_IPHONE_NSERROR__
#define __ORG_XMLVM_IPHONE_NSERROR__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
#include "org_xmlvm_iphone_NSObject.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_lang_String
#define XMLVM_FORWARD_DECL_java_lang_String
XMLVM_FORWARD_DECL(java_lang_String)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_Map
#define XMLVM_FORWARD_DECL_java_util_Map
XMLVM_FORWARD_DECL(java_util_Map)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSError
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSError
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSError)
#endif
// Class declarations for org.xmlvm.iphone.NSError
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_NSError, 7, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_NSError)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSError;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSError_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSError_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSError_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_NSError
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_NSError \
    __INSTANCE_FIELDS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_NSError \
    } org_xmlvm_iphone_NSError

struct org_xmlvm_iphone_NSError {
    __TIB_DEFINITION_org_xmlvm_iphone_NSError* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_NSError;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSError
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSError
typedef struct org_xmlvm_iphone_NSError org_xmlvm_iphone_NSError;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_NSError 7

void __INIT_org_xmlvm_iphone_NSError();
void __INIT_IMPL_org_xmlvm_iphone_NSError();
void __DELETE_org_xmlvm_iphone_NSError(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_NSError(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_org_xmlvm_iphone_NSError();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_NSError();
void org_xmlvm_iphone_NSError___INIT____java_lang_String_int_java_util_Map(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_INT n2, JAVA_OBJECT n3);
JAVA_OBJECT org_xmlvm_iphone_NSError_error___java_lang_String_int_java_util_Map(JAVA_OBJECT n1, JAVA_INT n2, JAVA_OBJECT n3);
JAVA_OBJECT org_xmlvm_iphone_NSError_domain__(JAVA_OBJECT me);
JAVA_INT org_xmlvm_iphone_NSError_code__(JAVA_OBJECT me);
JAVA_OBJECT org_xmlvm_iphone_NSError_userInfo__(JAVA_OBJECT me);
JAVA_OBJECT org_xmlvm_iphone_NSError_description__(JAVA_OBJECT me);

#endif
