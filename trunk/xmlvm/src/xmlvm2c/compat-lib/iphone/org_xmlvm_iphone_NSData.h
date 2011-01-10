#ifndef __ORG_XMLVM_IPHONE_NSDATA__
#define __ORG_XMLVM_IPHONE_NSDATA__

#include "xmlvm.h"
#include "org_xmlvm_iphone_NSObject.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSObject)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSData
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSData
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSData)
#endif
// Class declarations for org.xmlvm.iphone.NSData
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_NSData, 17)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSData;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSData_ARRAYTYPE;

//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_NSData
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_NSData \
    __INSTANCE_FIELDS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_NSData \
    } org_xmlvm_iphone_NSData

struct org_xmlvm_iphone_NSData {
    __TIB_DEFINITION_org_xmlvm_iphone_NSData* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_NSData;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSData
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSData
typedef struct org_xmlvm_iphone_NSData org_xmlvm_iphone_NSData;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_NSData 17
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_NSData_writeToFile___java_lang_String_boolean 14
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_NSData_length__ 15
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_NSData_getBytes__ 16

void __INIT_org_xmlvm_iphone_NSData();
JAVA_OBJECT __NEW_org_xmlvm_iphone_NSData();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_NSData();
void org_xmlvm_iphone_NSData___INIT___(JAVA_OBJECT me);
JAVA_OBJECT org_xmlvm_iphone_NSData_dataWithContentsOfFile___java_lang_String(JAVA_OBJECT n1);
JAVA_OBJECT org_xmlvm_iphone_NSData_dataWithContentsOfURL___org_xmlvm_iphone_NSURL(JAVA_OBJECT n1);
// Vtable index: 14
JAVA_BOOLEAN org_xmlvm_iphone_NSData_writeToFile___java_lang_String_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_BOOLEAN n2);
// Vtable index: 15
JAVA_INT org_xmlvm_iphone_NSData_length__(JAVA_OBJECT me);
// Vtable index: 16
JAVA_OBJECT org_xmlvm_iphone_NSData_getBytes__(JAVA_OBJECT me);

#endif