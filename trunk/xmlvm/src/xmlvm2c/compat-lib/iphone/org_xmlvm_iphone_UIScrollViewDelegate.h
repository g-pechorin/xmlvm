#ifndef __ORG_XMLVM_IPHONE_UISCROLLVIEWDELEGATE__
#define __ORG_XMLVM_IPHONE_UISCROLLVIEWDELEGATE__

#include "xmlvm.h"
#include "org_xmlvm_iphone_NSObject.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIView
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIView
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIView)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSObject)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIScrollView
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIScrollView
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIScrollView)
#endif
// Class declarations for org.xmlvm.iphone.UIScrollViewDelegate
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UIScrollViewDelegate, 24)

//XMLVM_BEGIN_MEMBERS
#define __ADDITIONAL_INSTANCE_MEMBERS_org_xmlvm_iphone_UIScrollViewDelegate
//XMLVM_END_MEMBERS

#define __INSTANCE_MEMBERS_org_xmlvm_iphone_UIScrollViewDelegate \
    __INSTANCE_MEMBERS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_MEMBERS_org_xmlvm_iphone_UIScrollViewDelegate \
    } org_xmlvm_iphone_UIScrollViewDelegate

struct org_xmlvm_iphone_UIScrollViewDelegate {
    __CLASS_DEFINITION_org_xmlvm_iphone_UIScrollViewDelegate* __class;
    __INSTANCE_MEMBERS_org_xmlvm_iphone_UIScrollViewDelegate;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIScrollViewDelegate
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIScrollViewDelegate
typedef struct org_xmlvm_iphone_UIScrollViewDelegate org_xmlvm_iphone_UIScrollViewDelegate;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UIScrollViewDelegate 24
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UIScrollViewDelegate_scrollViewDidScroll___org_xmlvm_iphone_UIScrollView 14
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UIScrollViewDelegate_scrollViewWillBeginDragging___org_xmlvm_iphone_UIScrollView 15
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UIScrollViewDelegate_scrollViewDidEndDragging___org_xmlvm_iphone_UIScrollView_boolean 16
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UIScrollViewDelegate_scrollViewShouldScrollToTop___org_xmlvm_iphone_UIScrollView 17
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UIScrollViewDelegate_scrollViewDidScrollToTop___org_xmlvm_iphone_UIScrollView 18
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UIScrollViewDelegate_scrollViewWillBeginDecelerating___org_xmlvm_iphone_UIScrollView 19
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UIScrollViewDelegate_scrollViewDidEndDecelerating___org_xmlvm_iphone_UIScrollView 20
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UIScrollViewDelegate_viewForZoomingInScrollView___org_xmlvm_iphone_UIScrollView 21
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UIScrollViewDelegate_scrollViewDidEndZooming___org_xmlvm_iphone_UIScrollView_org_xmlvm_iphone_UIView_float 22
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UIScrollViewDelegate_scrollViewDidEndScrollingAnimation___org_xmlvm_iphone_UIScrollView 23

void __INIT_org_xmlvm_iphone_UIScrollViewDelegate();
JAVA_OBJECT __NEW_org_xmlvm_iphone_UIScrollViewDelegate();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UIScrollViewDelegate();
void org_xmlvm_iphone_UIScrollViewDelegate___INIT___(JAVA_OBJECT me);
// Vtable index: 14
void org_xmlvm_iphone_UIScrollViewDelegate_scrollViewDidScroll___org_xmlvm_iphone_UIScrollView(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 15
void org_xmlvm_iphone_UIScrollViewDelegate_scrollViewWillBeginDragging___org_xmlvm_iphone_UIScrollView(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 16
void org_xmlvm_iphone_UIScrollViewDelegate_scrollViewDidEndDragging___org_xmlvm_iphone_UIScrollView_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_BOOLEAN n2);
// Vtable index: 17
JAVA_BOOLEAN org_xmlvm_iphone_UIScrollViewDelegate_scrollViewShouldScrollToTop___org_xmlvm_iphone_UIScrollView(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 18
void org_xmlvm_iphone_UIScrollViewDelegate_scrollViewDidScrollToTop___org_xmlvm_iphone_UIScrollView(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 19
void org_xmlvm_iphone_UIScrollViewDelegate_scrollViewWillBeginDecelerating___org_xmlvm_iphone_UIScrollView(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 20
void org_xmlvm_iphone_UIScrollViewDelegate_scrollViewDidEndDecelerating___org_xmlvm_iphone_UIScrollView(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 21
JAVA_OBJECT org_xmlvm_iphone_UIScrollViewDelegate_viewForZoomingInScrollView___org_xmlvm_iphone_UIScrollView(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 22
void org_xmlvm_iphone_UIScrollViewDelegate_scrollViewDidEndZooming___org_xmlvm_iphone_UIScrollView_org_xmlvm_iphone_UIView_float(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_FLOAT n3);
// Vtable index: 23
void org_xmlvm_iphone_UIScrollViewDelegate_scrollViewDidEndScrollingAnimation___org_xmlvm_iphone_UIScrollView(JAVA_OBJECT me, JAVA_OBJECT n1);

#endif
