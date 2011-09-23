#ifndef __ORG_XMLVM_IPHONE_UISEARCHBARDELEGATE__
#define __ORG_XMLVM_IPHONE_UISEARCHBARDELEGATE__

#include "xmlvm.h"
#include "org_xmlvm_iphone_NSObject.h"

// Preprocessor constants for interfaces:

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UISearchBar
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UISearchBar
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UISearchBar)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSObject)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_String
#define XMLVM_FORWARD_DECL_java_lang_String
XMLVM_FORWARD_DECL(java_lang_String)
#endif
// Class declarations for org.xmlvm.iphone.UISearchBarDelegate
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UISearchBarDelegate, 7, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_UISearchBarDelegate)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UISearchBarDelegate;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UISearchBarDelegate_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UISearchBarDelegate_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UISearchBarDelegate_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UISearchBarDelegate
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_UISearchBarDelegate \
    __INSTANCE_FIELDS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UISearchBarDelegate \
    } org_xmlvm_iphone_UISearchBarDelegate

struct org_xmlvm_iphone_UISearchBarDelegate {
    __TIB_DEFINITION_org_xmlvm_iphone_UISearchBarDelegate* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_UISearchBarDelegate;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UISearchBarDelegate
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UISearchBarDelegate
typedef struct org_xmlvm_iphone_UISearchBarDelegate org_xmlvm_iphone_UISearchBarDelegate;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UISearchBarDelegate 7

void __INIT_org_xmlvm_iphone_UISearchBarDelegate();
void __INIT_IMPL_org_xmlvm_iphone_UISearchBarDelegate();
void __DELETE_org_xmlvm_iphone_UISearchBarDelegate(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_UISearchBarDelegate(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_org_xmlvm_iphone_UISearchBarDelegate();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UISearchBarDelegate();
void org_xmlvm_iphone_UISearchBarDelegate___INIT___(JAVA_OBJECT me);
void org_xmlvm_iphone_UISearchBarDelegate_searchBarTextDidChange___org_xmlvm_iphone_UISearchBar_java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
JAVA_BOOLEAN org_xmlvm_iphone_UISearchBarDelegate_searchBarShouldBeginEditing___org_xmlvm_iphone_UISearchBar(JAVA_OBJECT me, JAVA_OBJECT n1);
void org_xmlvm_iphone_UISearchBarDelegate_searchBarTextDidBeginEditing___org_xmlvm_iphone_UISearchBar(JAVA_OBJECT me, JAVA_OBJECT n1);
JAVA_BOOLEAN org_xmlvm_iphone_UISearchBarDelegate_searchBarShouldEndEditing___org_xmlvm_iphone_UISearchBar(JAVA_OBJECT me, JAVA_OBJECT n1);
void org_xmlvm_iphone_UISearchBarDelegate_searchBarTextDidEndEditing___org_xmlvm_iphone_UISearchBar(JAVA_OBJECT me, JAVA_OBJECT n1);
void org_xmlvm_iphone_UISearchBarDelegate_searchBarBookmarkButtonClicked___org_xmlvm_iphone_UISearchBar(JAVA_OBJECT me, JAVA_OBJECT n1);
void org_xmlvm_iphone_UISearchBarDelegate_searchBarCancelButtonClicked___org_xmlvm_iphone_UISearchBar(JAVA_OBJECT me, JAVA_OBJECT n1);
void org_xmlvm_iphone_UISearchBarDelegate_searchBarSearchButtonClicked___org_xmlvm_iphone_UISearchBar(JAVA_OBJECT me, JAVA_OBJECT n1);
void org_xmlvm_iphone_UISearchBarDelegate_searchBarSelectedScopeButtonIndexDidChange___org_xmlvm_iphone_UISearchBar_int(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_INT n2);

#endif
