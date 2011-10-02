#ifndef __ORG_XMLVM_IPHONE_UIIMAGEPICKERCONTROLLERCAMERACAPTUREMODE__
#define __ORG_XMLVM_IPHONE_UIIMAGEPICKERCONTROLLERCAMERACAPTUREMODE__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
// Implemented interfaces:
// Super Class:
#include "java_lang_Object.h"

// Circular references:
// Class declarations for org.xmlvm.iphone.UIImagePickerControllerCameraCaptureMode
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode, 6, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode \
    __INSTANCE_FIELDS_java_lang_Object; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode \
    } org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode

struct org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode {
    __TIB_DEFINITION_org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode
typedef struct org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode 6

void __INIT_org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode();
void __INIT_IMPL_org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode();
void __DELETE_org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode();
JAVA_INT org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode_GET_Photo();
void org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode_PUT_Photo(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode_GET_Video();
void org_xmlvm_iphone_UIImagePickerControllerCameraCaptureMode_PUT_Video(JAVA_INT v);

#endif
