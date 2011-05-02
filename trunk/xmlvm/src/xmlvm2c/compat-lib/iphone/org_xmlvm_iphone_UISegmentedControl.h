#ifndef __ORG_XMLVM_IPHONE_UISEGMENTEDCONTROL__
#define __ORG_XMLVM_IPHONE_UISEGMENTEDCONTROL__

#include "xmlvm.h"
#include "org_xmlvm_iphone_UIControl.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIImage
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIImage
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIImage)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIEvent
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIEvent
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIEvent)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIControl
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIControl
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIControl)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_ArrayList
#define XMLVM_FORWARD_DECL_java_util_ArrayList
XMLVM_FORWARD_DECL(java_util_ArrayList)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_Set
#define XMLVM_FORWARD_DECL_java_util_Set
XMLVM_FORWARD_DECL(java_util_Set)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGRect
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGRect
XMLVM_FORWARD_DECL(org_xmlvm_iphone_CGRect)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIColor
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIColor
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIColor)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_String
#define XMLVM_FORWARD_DECL_java_lang_String
XMLVM_FORWARD_DECL(java_lang_String)
#endif
// Class declarations for org.xmlvm.iphone.UISegmentedControl
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UISegmentedControl, 96, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_UISegmentedControl)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UISegmentedControl;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UISegmentedControl_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UISegmentedControl_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UISegmentedControl_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UISegmentedControl
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_UISegmentedControl \
    __INSTANCE_FIELDS_org_xmlvm_iphone_UIControl; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UISegmentedControl \
    } org_xmlvm_iphone_UISegmentedControl

struct org_xmlvm_iphone_UISegmentedControl {
    __TIB_DEFINITION_org_xmlvm_iphone_UISegmentedControl* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_UISegmentedControl;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UISegmentedControl
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UISegmentedControl
typedef struct org_xmlvm_iphone_UISegmentedControl org_xmlvm_iphone_UISegmentedControl;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UISegmentedControl 96
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UISegmentedControl_setTitle___java_lang_String_int 79
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UISegmentedControl_titleForSegmentAtIndex___int 80
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UISegmentedControl_setImage___org_xmlvm_iphone_UIImage_int 81
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UISegmentedControl_imageForSegmentAtIndex___int 82
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UISegmentedControl_insertSegmentWithTitle___java_lang_String_int_boolean 83
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UISegmentedControl_insertSegmentWithImage___org_xmlvm_iphone_UIImage_int_boolean 84
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UISegmentedControl_numberOfSegments__ 85
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UISegmentedControl_removeAllSegments__ 86
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UISegmentedControl_removeSegmentAtIndex___int_boolean 87
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UISegmentedControl_getSelectedSegmentIndex__ 88
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UISegmentedControl_setSelectedSegmentIndex___int 89
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UISegmentedControl_getSegmentedControlStyle__ 90
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UISegmentedControl_setSegmentedControlStyle___int 91
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UISegmentedControl_getTintColor__ 92
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UISegmentedControl_setTintColor___org_xmlvm_iphone_UIColor 93
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UISegmentedControl_isMomentary__ 94
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UISegmentedControl_setMomentary___boolean 95
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UISegmentedControl_touchesEnded___java_util_Set_org_xmlvm_iphone_UIEvent 12

void __INIT_org_xmlvm_iphone_UISegmentedControl();
void __INIT_IMPL_org_xmlvm_iphone_UISegmentedControl();
void __DELETE_org_xmlvm_iphone_UISegmentedControl(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_UISegmentedControl(JAVA_OBJECT me);
JAVA_OBJECT __NEW_org_xmlvm_iphone_UISegmentedControl();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UISegmentedControl();
void org_xmlvm_iphone_UISegmentedControl___INIT___(JAVA_OBJECT me);
void org_xmlvm_iphone_UISegmentedControl___INIT____org_xmlvm_iphone_CGRect(JAVA_OBJECT me, JAVA_OBJECT n1);
void org_xmlvm_iphone_UISegmentedControl___INIT____java_util_ArrayList(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 79
void org_xmlvm_iphone_UISegmentedControl_setTitle___java_lang_String_int(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_INT n2);
// Vtable index: 80
JAVA_OBJECT org_xmlvm_iphone_UISegmentedControl_titleForSegmentAtIndex___int(JAVA_OBJECT me, JAVA_INT n1);
// Vtable index: 81
void org_xmlvm_iphone_UISegmentedControl_setImage___org_xmlvm_iphone_UIImage_int(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_INT n2);
// Vtable index: 82
JAVA_OBJECT org_xmlvm_iphone_UISegmentedControl_imageForSegmentAtIndex___int(JAVA_OBJECT me, JAVA_INT n1);
// Vtable index: 83
void org_xmlvm_iphone_UISegmentedControl_insertSegmentWithTitle___java_lang_String_int_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_INT n2, JAVA_BOOLEAN n3);
// Vtable index: 84
void org_xmlvm_iphone_UISegmentedControl_insertSegmentWithImage___org_xmlvm_iphone_UIImage_int_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_INT n2, JAVA_BOOLEAN n3);
// Vtable index: 85
JAVA_INT org_xmlvm_iphone_UISegmentedControl_numberOfSegments__(JAVA_OBJECT me);
// Vtable index: 86
void org_xmlvm_iphone_UISegmentedControl_removeAllSegments__(JAVA_OBJECT me);
// Vtable index: 87
void org_xmlvm_iphone_UISegmentedControl_removeSegmentAtIndex___int_boolean(JAVA_OBJECT me, JAVA_INT n1, JAVA_BOOLEAN n2);
// Vtable index: 88
JAVA_INT org_xmlvm_iphone_UISegmentedControl_getSelectedSegmentIndex__(JAVA_OBJECT me);
// Vtable index: 89
void org_xmlvm_iphone_UISegmentedControl_setSelectedSegmentIndex___int(JAVA_OBJECT me, JAVA_INT n1);
// Vtable index: 90
JAVA_INT org_xmlvm_iphone_UISegmentedControl_getSegmentedControlStyle__(JAVA_OBJECT me);
// Vtable index: 91
void org_xmlvm_iphone_UISegmentedControl_setSegmentedControlStyle___int(JAVA_OBJECT me, JAVA_INT n1);
// Vtable index: 92
JAVA_OBJECT org_xmlvm_iphone_UISegmentedControl_getTintColor__(JAVA_OBJECT me);
// Vtable index: 93
void org_xmlvm_iphone_UISegmentedControl_setTintColor___org_xmlvm_iphone_UIColor(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 94
JAVA_BOOLEAN org_xmlvm_iphone_UISegmentedControl_isMomentary__(JAVA_OBJECT me);
// Vtable index: 95
void org_xmlvm_iphone_UISegmentedControl_setMomentary___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
// Vtable index: 12
void org_xmlvm_iphone_UISegmentedControl_touchesEnded___java_util_Set_org_xmlvm_iphone_UIEvent(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);

#endif
