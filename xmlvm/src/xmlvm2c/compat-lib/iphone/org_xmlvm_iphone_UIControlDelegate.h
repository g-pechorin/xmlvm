#ifndef __ORG_XMLVM_IPHONE_UICONTROLDELEGATE__
#define __ORG_XMLVM_IPHONE_UICONTROLDELEGATE__

#include "xmlvm.h"
#include "java_lang_Object.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_lang_Object
#define XMLVM_FORWARD_DECL_java_lang_Object
XMLVM_FORWARD_DECL(java_lang_Object)
#endif

XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UIControlDelegate, 12)

#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIControlDelegate
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIControlDelegate
typedef struct org_xmlvm_iphone_UIControlDelegate org_xmlvm_iphone_UIControlDelegate;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UIControlDelegate 12
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UIControlDelegate_raiseEvent___org_xmlvm_iphone_UIControl_int 11

void __INIT_org_xmlvm_iphone_UIControlDelegate(__TIB_DEFINITION_TEMPLATE** interface);

#endif