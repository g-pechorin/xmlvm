#ifndef __ORG_XMLVM_IPHONE_UIIMAGEPICKERCONTROLLERCAMERADEVICE__
#define __ORG_XMLVM_IPHONE_UIIMAGEPICKERCONTROLLERCAMERADEVICE__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
// Implemented interfaces:
// Super Class:
#include "java_lang_Object.h"

// Circular references:
// Class declarations for org.xmlvm.iphone.UIImagePickerControllerCameraDevice
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UIImagePickerControllerCameraDevice, 6, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_UIImagePickerControllerCameraDevice)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIImagePickerControllerCameraDevice;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIImagePickerControllerCameraDevice_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIImagePickerControllerCameraDevice_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIImagePickerControllerCameraDevice_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UIImagePickerControllerCameraDevice
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_UIImagePickerControllerCameraDevice \
    __INSTANCE_FIELDS_java_lang_Object; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UIImagePickerControllerCameraDevice \
    } org_xmlvm_iphone_UIImagePickerControllerCameraDevice

struct org_xmlvm_iphone_UIImagePickerControllerCameraDevice {
    __TIB_DEFINITION_org_xmlvm_iphone_UIImagePickerControllerCameraDevice* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_UIImagePickerControllerCameraDevice;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIImagePickerControllerCameraDevice
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIImagePickerControllerCameraDevice
typedef struct org_xmlvm_iphone_UIImagePickerControllerCameraDevice org_xmlvm_iphone_UIImagePickerControllerCameraDevice;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UIImagePickerControllerCameraDevice 6

void __INIT_org_xmlvm_iphone_UIImagePickerControllerCameraDevice();
void __INIT_IMPL_org_xmlvm_iphone_UIImagePickerControllerCameraDevice();
void __DELETE_org_xmlvm_iphone_UIImagePickerControllerCameraDevice(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_UIImagePickerControllerCameraDevice(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_org_xmlvm_iphone_UIImagePickerControllerCameraDevice();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UIImagePickerControllerCameraDevice();
JAVA_INT org_xmlvm_iphone_UIImagePickerControllerCameraDevice_GET_Rear();
void org_xmlvm_iphone_UIImagePickerControllerCameraDevice_PUT_Rear(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIImagePickerControllerCameraDevice_GET_Front();
void org_xmlvm_iphone_UIImagePickerControllerCameraDevice_PUT_Front(JAVA_INT v);

#endif
