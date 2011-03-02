#ifndef __ORG_XMLVM_IPHONE_UITABLEVIEWCELLSEPARATORSTYLE__
#define __ORG_XMLVM_IPHONE_UITABLEVIEWCELLSEPARATORSTYLE__

#include "xmlvm.h"
#include "java_lang_Object.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_lang_Object
#define XMLVM_FORWARD_DECL_java_lang_Object
XMLVM_FORWARD_DECL(java_lang_Object)
#endif
// Class declarations for org.xmlvm.iphone.UITableViewCellSeparatorStyle
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UITableViewCellSeparatorStyle, 11)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITableViewCellSeparatorStyle;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITableViewCellSeparatorStyle_ARRAYTYPE;

//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UITableViewCellSeparatorStyle
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_UITableViewCellSeparatorStyle \
    __INSTANCE_FIELDS_java_lang_Object; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UITableViewCellSeparatorStyle \
    } org_xmlvm_iphone_UITableViewCellSeparatorStyle

struct org_xmlvm_iphone_UITableViewCellSeparatorStyle {
    __TIB_DEFINITION_org_xmlvm_iphone_UITableViewCellSeparatorStyle* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_UITableViewCellSeparatorStyle;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITableViewCellSeparatorStyle
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITableViewCellSeparatorStyle
typedef struct org_xmlvm_iphone_UITableViewCellSeparatorStyle org_xmlvm_iphone_UITableViewCellSeparatorStyle;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UITableViewCellSeparatorStyle 11

void __INIT_org_xmlvm_iphone_UITableViewCellSeparatorStyle();
void __DELETE_org_xmlvm_iphone_UITableViewCellSeparatorStyle(void* me, void* client_data);
JAVA_OBJECT __NEW_org_xmlvm_iphone_UITableViewCellSeparatorStyle();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UITableViewCellSeparatorStyle();
JAVA_INT org_xmlvm_iphone_UITableViewCellSeparatorStyle_GET_None();
void org_xmlvm_iphone_UITableViewCellSeparatorStyle_PUT_None(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UITableViewCellSeparatorStyle_GET_SingleLine();
void org_xmlvm_iphone_UITableViewCellSeparatorStyle_PUT_SingleLine(JAVA_INT v);

#endif
