#ifndef __ORG_XMLVM_IPHONE_UIPICKERVIEW__
#define __ORG_XMLVM_IPHONE_UIPICKERVIEW__

#include "xmlvm.h"
#include "org_xmlvm_iphone_UIView.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIPickerViewDataSource
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIPickerViewDataSource
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIPickerViewDataSource)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGRect
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGRect
XMLVM_FORWARD_DECL(org_xmlvm_iphone_CGRect)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIPickerViewDelegate
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIPickerViewDelegate
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIPickerViewDelegate)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIView
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIView
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIView)
#endif
// Class declarations for org.xmlvm.iphone.UIPickerView
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UIPickerView, 12, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_UIPickerView)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIPickerView;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIPickerView_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIPickerView_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIPickerView_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UIPickerView
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_UIPickerView \
    __INSTANCE_FIELDS_org_xmlvm_iphone_UIView; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UIPickerView \
    } org_xmlvm_iphone_UIPickerView

struct org_xmlvm_iphone_UIPickerView {
    __TIB_DEFINITION_org_xmlvm_iphone_UIPickerView* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_UIPickerView;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIPickerView
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIPickerView
typedef struct org_xmlvm_iphone_UIPickerView org_xmlvm_iphone_UIPickerView;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UIPickerView 12

void __INIT_org_xmlvm_iphone_UIPickerView();
void __INIT_IMPL_org_xmlvm_iphone_UIPickerView();
void __DELETE_org_xmlvm_iphone_UIPickerView(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_UIPickerView(JAVA_OBJECT me);
JAVA_OBJECT __NEW_org_xmlvm_iphone_UIPickerView();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UIPickerView();
void org_xmlvm_iphone_UIPickerView___INIT___(JAVA_OBJECT me);
void org_xmlvm_iphone_UIPickerView___INIT____org_xmlvm_iphone_CGRect(JAVA_OBJECT me, JAVA_OBJECT n1);
JAVA_INT org_xmlvm_iphone_UIPickerView_getNumberOfComponents__(JAVA_OBJECT me);
JAVA_INT org_xmlvm_iphone_UIPickerView_numberOfRowsInComponent___int(JAVA_OBJECT me, JAVA_INT n1);
JAVA_OBJECT org_xmlvm_iphone_UIPickerView_rowSizeForComponent___int(JAVA_OBJECT me, JAVA_INT n1);
void org_xmlvm_iphone_UIPickerView_reloadAllComponents__(JAVA_OBJECT me);
void org_xmlvm_iphone_UIPickerView_reloadComponent___int(JAVA_OBJECT me, JAVA_INT n1);
JAVA_INT org_xmlvm_iphone_UIPickerView_selectedRowInComponent___int(JAVA_OBJECT me, JAVA_INT n1);
void org_xmlvm_iphone_UIPickerView_selectRow___int_int_boolean(JAVA_OBJECT me, JAVA_INT n1, JAVA_INT n2, JAVA_BOOLEAN n3);
JAVA_OBJECT org_xmlvm_iphone_UIPickerView_viewForRow___int_int(JAVA_OBJECT me, JAVA_INT n1, JAVA_INT n2);
JAVA_OBJECT org_xmlvm_iphone_UIPickerView_getDataSource__(JAVA_OBJECT me);
void org_xmlvm_iphone_UIPickerView_setDataSource___org_xmlvm_iphone_UIPickerViewDataSource(JAVA_OBJECT me, JAVA_OBJECT n1);
JAVA_OBJECT org_xmlvm_iphone_UIPickerView_getDelegate__(JAVA_OBJECT me);
void org_xmlvm_iphone_UIPickerView_setDelegate___org_xmlvm_iphone_UIPickerViewDelegate(JAVA_OBJECT me, JAVA_OBJECT n1);
JAVA_BOOLEAN org_xmlvm_iphone_UIPickerView_showsSelectionIndicator__(JAVA_OBJECT me);
void org_xmlvm_iphone_UIPickerView_setShowsSelectionIndicator___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);

#endif
