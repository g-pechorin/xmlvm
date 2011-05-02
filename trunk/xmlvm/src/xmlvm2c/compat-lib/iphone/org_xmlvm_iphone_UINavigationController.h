#ifndef __ORG_XMLVM_IPHONE_UINAVIGATIONCONTROLLER__
#define __ORG_XMLVM_IPHONE_UINAVIGATIONCONTROLLER__

#include "xmlvm.h"
#include "org_xmlvm_iphone_UIViewController.h"
#include "org_xmlvm_iphone_UIViewController.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_util_ArrayList
#define XMLVM_FORWARD_DECL_java_util_ArrayList
XMLVM_FORWARD_DECL(java_util_ArrayList)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationControllerDelegate
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationControllerDelegate
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UINavigationControllerDelegate)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIViewController
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIViewController
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIViewController)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIViewController
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIViewController
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIViewController)
#endif
// Class declarations for org.xmlvm.iphone.UINavigationController
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UINavigationController, 81, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_UINavigationController)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UINavigationController;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UINavigationController_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UINavigationController_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UINavigationController_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UINavigationController
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_UINavigationController \
    __INSTANCE_FIELDS_org_xmlvm_iphone_UIViewController; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UINavigationController \
    } org_xmlvm_iphone_UINavigationController

struct org_xmlvm_iphone_UINavigationController {
    __TIB_DEFINITION_org_xmlvm_iphone_UINavigationController* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_UINavigationController;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationController
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationController
typedef struct org_xmlvm_iphone_UINavigationController org_xmlvm_iphone_UINavigationController;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UINavigationController 81
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_requestInternalFrame__ 22
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_getTopViewController__ 62
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_getVisibleViewController__ 63
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_getViewControllers__ 64
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_setViewControllers___java_util_ArrayList 65
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_setViewControllers___java_util_ArrayList_boolean 66
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_pushViewController___org_xmlvm_iphone_UIViewController_boolean 67
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_popViewControllerAnimated___boolean 68
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_popToRootViewControllerAnimated___boolean 69
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_popToViewController___org_xmlvm_iphone_UIViewController_boolean 70
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_isNavigationBarHidden__ 71
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_setNavigationBarHidden___boolean 72
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_setNavigationBarHidden___boolean_boolean 73
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_getNavigationBar__ 74
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_isToolbarHidden__ 75
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_setToolbarHidden___boolean 76
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_setToolbarHidden___boolean_boolean 77
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_getToolbar__ 78
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_setDelegate___org_xmlvm_iphone_UINavigationControllerDelegate 79
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_getDelegate__ 80
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_loadView__ 17
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_updateViews__ 23

void __INIT_org_xmlvm_iphone_UINavigationController();
void __INIT_IMPL_org_xmlvm_iphone_UINavigationController();
void __DELETE_org_xmlvm_iphone_UINavigationController(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_UINavigationController(JAVA_OBJECT me);
JAVA_OBJECT __NEW_org_xmlvm_iphone_UINavigationController();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UINavigationController();
void org_xmlvm_iphone_UINavigationController___INIT___(JAVA_OBJECT me);
void org_xmlvm_iphone_UINavigationController___INIT____org_xmlvm_iphone_UIViewController(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 22
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_requestInternalFrame__(JAVA_OBJECT me);
// Vtable index: 62
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_getTopViewController__(JAVA_OBJECT me);
// Vtable index: 63
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_getVisibleViewController__(JAVA_OBJECT me);
// Vtable index: 64
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_getViewControllers__(JAVA_OBJECT me);
// Vtable index: 65
void org_xmlvm_iphone_UINavigationController_setViewControllers___java_util_ArrayList(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 66
void org_xmlvm_iphone_UINavigationController_setViewControllers___java_util_ArrayList_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_BOOLEAN n2);
// Vtable index: 67
void org_xmlvm_iphone_UINavigationController_pushViewController___org_xmlvm_iphone_UIViewController_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_BOOLEAN n2);
// Vtable index: 68
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_popViewControllerAnimated___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
// Vtable index: 69
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_popToRootViewControllerAnimated___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
// Vtable index: 70
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_popToViewController___org_xmlvm_iphone_UIViewController_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_BOOLEAN n2);
// Vtable index: 71
JAVA_BOOLEAN org_xmlvm_iphone_UINavigationController_isNavigationBarHidden__(JAVA_OBJECT me);
// Vtable index: 72
void org_xmlvm_iphone_UINavigationController_setNavigationBarHidden___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
// Vtable index: 73
void org_xmlvm_iphone_UINavigationController_setNavigationBarHidden___boolean_boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1, JAVA_BOOLEAN n2);
// Vtable index: 74
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_getNavigationBar__(JAVA_OBJECT me);
// Vtable index: 75
JAVA_BOOLEAN org_xmlvm_iphone_UINavigationController_isToolbarHidden__(JAVA_OBJECT me);
// Vtable index: 76
void org_xmlvm_iphone_UINavigationController_setToolbarHidden___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
// Vtable index: 77
void org_xmlvm_iphone_UINavigationController_setToolbarHidden___boolean_boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1, JAVA_BOOLEAN n2);
// Vtable index: 78
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_getToolbar__(JAVA_OBJECT me);
// Vtable index: 79
void org_xmlvm_iphone_UINavigationController_setDelegate___org_xmlvm_iphone_UINavigationControllerDelegate(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 80
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_getDelegate__(JAVA_OBJECT me);
// Vtable index: 17
void org_xmlvm_iphone_UINavigationController_loadView__(JAVA_OBJECT me);
// Vtable index: 23
void org_xmlvm_iphone_UINavigationController_updateViews__(JAVA_OBJECT me);

#endif
