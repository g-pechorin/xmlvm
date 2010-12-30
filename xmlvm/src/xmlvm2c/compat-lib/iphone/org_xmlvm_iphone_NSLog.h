#ifndef __ORG_XMLVM_IPHONE_NSLOG__
#define __ORG_XMLVM_IPHONE_NSLOG__

#include "xmlvm.h"
#include "org_xmlvm_iphone_NSObject.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSObject)
#endif
// Class declarations for org.xmlvm.iphone.NSLog
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_NSLog, 14)

//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_NSLog
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_NSLog \
    __INSTANCE_FIELDS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_NSLog \
    } org_xmlvm_iphone_NSLog

struct org_xmlvm_iphone_NSLog {
    __TIB_DEFINITION_org_xmlvm_iphone_NSLog* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_NSLog;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSLog
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSLog
typedef struct org_xmlvm_iphone_NSLog org_xmlvm_iphone_NSLog;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_NSLog 14

void __INIT_org_xmlvm_iphone_NSLog();
JAVA_OBJECT __NEW_org_xmlvm_iphone_NSLog();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_NSLog();
void org_xmlvm_iphone_NSLog_log___java_lang_String(JAVA_OBJECT n1);
void org_xmlvm_iphone_NSLog_log___java_lang_Object(JAVA_OBJECT n1);

#endif