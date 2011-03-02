#ifndef __ORG_XMLVM_IPHONE_UITEXTAUTOCORRECTIONTYPE__
#define __ORG_XMLVM_IPHONE_UITEXTAUTOCORRECTIONTYPE__

#include "xmlvm.h"
#include "java_lang_Object.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_lang_Object
#define XMLVM_FORWARD_DECL_java_lang_Object
XMLVM_FORWARD_DECL(java_lang_Object)
#endif
// Class declarations for org.xmlvm.iphone.UITextAutocorrectionType
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UITextAutocorrectionType, 11)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITextAutocorrectionType;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITextAutocorrectionType_ARRAYTYPE;

//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UITextAutocorrectionType
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_UITextAutocorrectionType \
    __INSTANCE_FIELDS_java_lang_Object; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UITextAutocorrectionType \
    } org_xmlvm_iphone_UITextAutocorrectionType

struct org_xmlvm_iphone_UITextAutocorrectionType {
    __TIB_DEFINITION_org_xmlvm_iphone_UITextAutocorrectionType* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_UITextAutocorrectionType;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITextAutocorrectionType
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITextAutocorrectionType
typedef struct org_xmlvm_iphone_UITextAutocorrectionType org_xmlvm_iphone_UITextAutocorrectionType;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UITextAutocorrectionType 11

void __INIT_org_xmlvm_iphone_UITextAutocorrectionType();
void __DELETE_org_xmlvm_iphone_UITextAutocorrectionType(void* me, void* client_data);
JAVA_OBJECT __NEW_org_xmlvm_iphone_UITextAutocorrectionType();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UITextAutocorrectionType();
JAVA_INT org_xmlvm_iphone_UITextAutocorrectionType_GET_Default();
void org_xmlvm_iphone_UITextAutocorrectionType_PUT_Default(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UITextAutocorrectionType_GET_No();
void org_xmlvm_iphone_UITextAutocorrectionType_PUT_No(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UITextAutocorrectionType_GET_Yes();
void org_xmlvm_iphone_UITextAutocorrectionType_PUT_Yes(JAVA_INT v);

#endif
