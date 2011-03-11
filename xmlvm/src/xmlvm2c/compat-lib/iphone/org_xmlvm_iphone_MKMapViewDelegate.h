#ifndef __ORG_XMLVM_IPHONE_MKMAPVIEWDELEGATE__
#define __ORG_XMLVM_IPHONE_MKMAPVIEWDELEGATE__

#include "xmlvm.h"
#include "org_xmlvm_iphone_NSObject.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIControl
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIControl
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIControl)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKAnnotationView
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKAnnotationView
XMLVM_FORWARD_DECL(org_xmlvm_iphone_MKAnnotationView)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSObject)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKAnnotation
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKAnnotation
XMLVM_FORWARD_DECL(org_xmlvm_iphone_MKAnnotation)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_ArrayList
#define XMLVM_FORWARD_DECL_java_util_ArrayList
XMLVM_FORWARD_DECL(java_util_ArrayList)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKMapView
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKMapView
XMLVM_FORWARD_DECL(org_xmlvm_iphone_MKMapView)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSError
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSError
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSError)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKOverlay
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKOverlay
XMLVM_FORWARD_DECL(org_xmlvm_iphone_MKOverlay)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKUserLocation
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKUserLocation
XMLVM_FORWARD_DECL(org_xmlvm_iphone_MKUserLocation)
#endif
// Class declarations for org.xmlvm.iphone.MKMapViewDelegate
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_MKMapViewDelegate, 31)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_MKMapViewDelegate;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_MKMapViewDelegate_ARRAYTYPE;

//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_MKMapViewDelegate
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_MKMapViewDelegate \
    __INSTANCE_FIELDS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_MKMapViewDelegate \
    } org_xmlvm_iphone_MKMapViewDelegate

struct org_xmlvm_iphone_MKMapViewDelegate {
    __TIB_DEFINITION_org_xmlvm_iphone_MKMapViewDelegate* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_MKMapViewDelegate;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKMapViewDelegate
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKMapViewDelegate
typedef struct org_xmlvm_iphone_MKMapViewDelegate org_xmlvm_iphone_MKMapViewDelegate;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_MKMapViewDelegate 31
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapViewDelegate_regionWillChangeAnimated___org_xmlvm_iphone_MKMapView_boolean 14
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapViewDelegate_regionDidChangeAnimated___org_xmlvm_iphone_MKMapView_boolean 15
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapViewDelegate_willStartLoadingMap___org_xmlvm_iphone_MKMapView 16
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapViewDelegate_didFinishLoadingMap___org_xmlvm_iphone_MKMapView 17
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapViewDelegate_didFailLoadingMap___org_xmlvm_iphone_MKMapView_org_xmlvm_iphone_NSError 18
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapViewDelegate_willStartLocatingUser___org_xmlvm_iphone_MKMapView 19
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapViewDelegate_didStopLocatingUser___org_xmlvm_iphone_MKMapView 20
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapViewDelegate_didUpdateUserLocation___org_xmlvm_iphone_MKMapView_org_xmlvm_iphone_MKUserLocation 21
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapViewDelegate_didFailToLocateUserWithError___org_xmlvm_iphone_MKMapView_org_xmlvm_iphone_NSError 22
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapViewDelegate_viewForAnnotation___org_xmlvm_iphone_MKMapView_org_xmlvm_iphone_MKAnnotation 23
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapViewDelegate_didAddAnnotationViews___org_xmlvm_iphone_MKMapView_java_util_ArrayList 24
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapViewDelegate_calloutAccessoryControlTapped___org_xmlvm_iphone_MKMapView_org_xmlvm_iphone_MKAnnotationView_org_xmlvm_iphone_UIControl 25
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapViewDelegate_didChangeDragStatefromOldState___org_xmlvm_iphone_MKMapView_org_xmlvm_iphone_MKAnnotationView_int_int 26
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapViewDelegate_didSelectAnnotationView___org_xmlvm_iphone_MKMapView_org_xmlvm_iphone_MKAnnotationView 27
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapViewDelegate_didDeselectAnnotationView___org_xmlvm_iphone_MKMapView_org_xmlvm_iphone_MKAnnotationView 28
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapViewDelegate_viewForOverlay___org_xmlvm_iphone_MKMapView_org_xmlvm_iphone_MKOverlay 29
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_MKMapViewDelegate_didAddOverlayViews___org_xmlvm_iphone_MKMapView_java_util_ArrayList 30

void __INIT_org_xmlvm_iphone_MKMapViewDelegate();
void __INIT_IMPL_org_xmlvm_iphone_MKMapViewDelegate();
void __DELETE_org_xmlvm_iphone_MKMapViewDelegate(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_MKMapViewDelegate(JAVA_OBJECT me);
JAVA_OBJECT __NEW_org_xmlvm_iphone_MKMapViewDelegate();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_MKMapViewDelegate();
void org_xmlvm_iphone_MKMapViewDelegate___INIT___(JAVA_OBJECT me);
// Vtable index: 14
void org_xmlvm_iphone_MKMapViewDelegate_regionWillChangeAnimated___org_xmlvm_iphone_MKMapView_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_BOOLEAN n2);
// Vtable index: 15
void org_xmlvm_iphone_MKMapViewDelegate_regionDidChangeAnimated___org_xmlvm_iphone_MKMapView_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_BOOLEAN n2);
// Vtable index: 16
void org_xmlvm_iphone_MKMapViewDelegate_willStartLoadingMap___org_xmlvm_iphone_MKMapView(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 17
void org_xmlvm_iphone_MKMapViewDelegate_didFinishLoadingMap___org_xmlvm_iphone_MKMapView(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 18
void org_xmlvm_iphone_MKMapViewDelegate_didFailLoadingMap___org_xmlvm_iphone_MKMapView_org_xmlvm_iphone_NSError(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 19
void org_xmlvm_iphone_MKMapViewDelegate_willStartLocatingUser___org_xmlvm_iphone_MKMapView(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 20
void org_xmlvm_iphone_MKMapViewDelegate_didStopLocatingUser___org_xmlvm_iphone_MKMapView(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 21
void org_xmlvm_iphone_MKMapViewDelegate_didUpdateUserLocation___org_xmlvm_iphone_MKMapView_org_xmlvm_iphone_MKUserLocation(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 22
void org_xmlvm_iphone_MKMapViewDelegate_didFailToLocateUserWithError___org_xmlvm_iphone_MKMapView_org_xmlvm_iphone_NSError(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 23
JAVA_OBJECT org_xmlvm_iphone_MKMapViewDelegate_viewForAnnotation___org_xmlvm_iphone_MKMapView_org_xmlvm_iphone_MKAnnotation(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 24
void org_xmlvm_iphone_MKMapViewDelegate_didAddAnnotationViews___org_xmlvm_iphone_MKMapView_java_util_ArrayList(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 25
void org_xmlvm_iphone_MKMapViewDelegate_calloutAccessoryControlTapped___org_xmlvm_iphone_MKMapView_org_xmlvm_iphone_MKAnnotationView_org_xmlvm_iphone_UIControl(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_OBJECT n3);
// Vtable index: 26
void org_xmlvm_iphone_MKMapViewDelegate_didChangeDragStatefromOldState___org_xmlvm_iphone_MKMapView_org_xmlvm_iphone_MKAnnotationView_int_int(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_INT n3, JAVA_INT n4);
// Vtable index: 27
void org_xmlvm_iphone_MKMapViewDelegate_didSelectAnnotationView___org_xmlvm_iphone_MKMapView_org_xmlvm_iphone_MKAnnotationView(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 28
void org_xmlvm_iphone_MKMapViewDelegate_didDeselectAnnotationView___org_xmlvm_iphone_MKMapView_org_xmlvm_iphone_MKAnnotationView(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 29
JAVA_OBJECT org_xmlvm_iphone_MKMapViewDelegate_viewForOverlay___org_xmlvm_iphone_MKMapView_org_xmlvm_iphone_MKOverlay(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 30
void org_xmlvm_iphone_MKMapViewDelegate_didAddOverlayViews___org_xmlvm_iphone_MKMapView_java_util_ArrayList(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);

#endif
