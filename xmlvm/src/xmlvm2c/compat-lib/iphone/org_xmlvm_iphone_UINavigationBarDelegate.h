#ifndef __ORG_XMLVM_IPHONE_UINAVIGATIONBARDELEGATE__
#define __ORG_XMLVM_IPHONE_UINAVIGATIONBARDELEGATE__

#include "xmlvm.h"
#include "java_lang_Object.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_lang_Object
#define XMLVM_FORWARD_DECL_java_lang_Object
XMLVM_FORWARD_DECL(java_lang_Object)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationBar
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationBar
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UINavigationBar)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationItem
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationItem
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UINavigationItem)
#endif

XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UINavigationBarDelegate, 15)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UINavigationBarDelegate;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UINavigationBarDelegate_3ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UINavigationBarDelegate_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UINavigationBarDelegate_1ARRAY;

#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationBarDelegate
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationBarDelegate
typedef struct org_xmlvm_iphone_UINavigationBarDelegate org_xmlvm_iphone_UINavigationBarDelegate;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UINavigationBarDelegate 15
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationBarDelegate_shouldPushItem___org_xmlvm_iphone_UINavigationBar_org_xmlvm_iphone_UINavigationItem 11
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationBarDelegate_didPushItem___org_xmlvm_iphone_UINavigationBar_org_xmlvm_iphone_UINavigationItem 12
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationBarDelegate_shouldPopItem___org_xmlvm_iphone_UINavigationBar_org_xmlvm_iphone_UINavigationItem 13
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationBarDelegate_didPopItem___org_xmlvm_iphone_UINavigationBar_org_xmlvm_iphone_UINavigationItem 14

void __INIT_FOR_CLASS_org_xmlvm_iphone_UINavigationBarDelegate(__TIB_DEFINITION_TEMPLATE** interface);
void __INIT_IMPL_FOR_CLASS_org_xmlvm_iphone_UINavigationBarDelegate(__TIB_DEFINITION_TEMPLATE** interface);
void __INIT_org_xmlvm_iphone_UINavigationBarDelegate();

#endif
