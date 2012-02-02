#ifndef __ORG_XMLVM_IPHONE_UIPICKERVIEWDATASOURCE__
#define __ORG_XMLVM_IPHONE_UIPICKERVIEWDATASOURCE__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
// Implemented interfaces:
// Super Class:
#include "org_xmlvm_iphone_NSObject.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIPickerView
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIPickerView
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIPickerView)
#endif
// Class declarations for org.xmlvm.iphone.UIPickerViewDataSource
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UIPickerViewDataSource, 9, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_UIPickerViewDataSource)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIPickerViewDataSource;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIPickerViewDataSource_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIPickerViewDataSource_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIPickerViewDataSource_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UIPickerViewDataSource
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_UIPickerViewDataSource \
    __INSTANCE_FIELDS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UIPickerViewDataSource \
    } org_xmlvm_iphone_UIPickerViewDataSource

struct org_xmlvm_iphone_UIPickerViewDataSource {
    __TIB_DEFINITION_org_xmlvm_iphone_UIPickerViewDataSource* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_UIPickerViewDataSource;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIPickerViewDataSource
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIPickerViewDataSource
typedef struct org_xmlvm_iphone_UIPickerViewDataSource org_xmlvm_iphone_UIPickerViewDataSource;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UIPickerViewDataSource 9
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UIPickerViewDataSource_numberOfComponentsInPickerView___org_xmlvm_iphone_UIPickerView 7
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UIPickerViewDataSource_numberOfRowsInComponent___org_xmlvm_iphone_UIPickerView_int 8

void __INIT_org_xmlvm_iphone_UIPickerViewDataSource();
void __INIT_IMPL_org_xmlvm_iphone_UIPickerViewDataSource();
void __DELETE_org_xmlvm_iphone_UIPickerViewDataSource(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_UIPickerViewDataSource(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_org_xmlvm_iphone_UIPickerViewDataSource();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UIPickerViewDataSource();
void org_xmlvm_iphone_UIPickerViewDataSource___INIT___(JAVA_OBJECT me);
// Vtable index: 7
JAVA_INT org_xmlvm_iphone_UIPickerViewDataSource_numberOfComponentsInPickerView___org_xmlvm_iphone_UIPickerView(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 8
JAVA_INT org_xmlvm_iphone_UIPickerViewDataSource_numberOfRowsInComponent___org_xmlvm_iphone_UIPickerView_int(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_INT n2);

// Define a Macro for the method declarations of the Obj-C wrapper class so that subclass wrappers may easily include these too
#define XMLVM_OBJC_OVERRIDE_CLASS_DECLARATIONS_org_xmlvm_iphone_UIPickerViewDataSource \
XMLVM_OBJC_OVERRIDE_CLASS_DECLARATIONS_org_xmlvm_iphone_NSObject \

// Define a Macro for the entire contents of the Obj-C wrapper class
#define XMLVM_OBJC_OVERRIDE_CLASS_DEFINITIONS_org_xmlvm_iphone_UIPickerViewDataSource \
XMLVM_OBJC_OVERRIDE_CLASS_DEFINITIONS_org_xmlvm_iphone_NSObject \


#endif
