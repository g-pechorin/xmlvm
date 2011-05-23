#ifndef __ORG_XMLVM_IPHONE_UITABBARCONTROLLERDELEGATE__
#define __ORG_XMLVM_IPHONE_UITABBARCONTROLLERDELEGATE__

#include "xmlvm.h"
#include "org_xmlvm_iphone_NSObject.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSObject)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_ArrayList
#define XMLVM_FORWARD_DECL_java_util_ArrayList
XMLVM_FORWARD_DECL(java_util_ArrayList)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITabBarController
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITabBarController
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UITabBarController)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIViewController
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIViewController
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIViewController)
#endif
// Class declarations for org.xmlvm.iphone.UITabBarControllerDelegate
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UITabBarControllerDelegate, 6, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_UITabBarControllerDelegate)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITabBarControllerDelegate;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITabBarControllerDelegate_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITabBarControllerDelegate_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITabBarControllerDelegate_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UITabBarControllerDelegate
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_UITabBarControllerDelegate \
    __INSTANCE_FIELDS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UITabBarControllerDelegate \
    } org_xmlvm_iphone_UITabBarControllerDelegate

struct org_xmlvm_iphone_UITabBarControllerDelegate {
    __TIB_DEFINITION_org_xmlvm_iphone_UITabBarControllerDelegate* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_UITabBarControllerDelegate;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITabBarControllerDelegate
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITabBarControllerDelegate
typedef struct org_xmlvm_iphone_UITabBarControllerDelegate org_xmlvm_iphone_UITabBarControllerDelegate;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UITabBarControllerDelegate 6

void __INIT_org_xmlvm_iphone_UITabBarControllerDelegate();
void __INIT_IMPL_org_xmlvm_iphone_UITabBarControllerDelegate();
void __DELETE_org_xmlvm_iphone_UITabBarControllerDelegate(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_UITabBarControllerDelegate(JAVA_OBJECT me);
JAVA_OBJECT __NEW_org_xmlvm_iphone_UITabBarControllerDelegate();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UITabBarControllerDelegate();
void org_xmlvm_iphone_UITabBarControllerDelegate___INIT___(JAVA_OBJECT me);
JAVA_BOOLEAN org_xmlvm_iphone_UITabBarControllerDelegate_shouldSelectViewController___org_xmlvm_iphone_UITabBarController_org_xmlvm_iphone_UIViewController(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
void org_xmlvm_iphone_UITabBarControllerDelegate_didSelectViewController___org_xmlvm_iphone_UITabBarController_org_xmlvm_iphone_UIViewController(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
void org_xmlvm_iphone_UITabBarControllerDelegate_willBeginCustomizingViewControllers___org_xmlvm_iphone_UITabBarController_java_util_ArrayList(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
void org_xmlvm_iphone_UITabBarControllerDelegate_willEndCustomizingViewControllers___org_xmlvm_iphone_UITabBarController_java_util_ArrayList_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_BOOLEAN n3);
void org_xmlvm_iphone_UITabBarControllerDelegate_didEndCustomizingViewControllers___org_xmlvm_iphone_UITabBarController_java_util_ArrayList_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_BOOLEAN n3);

#endif
