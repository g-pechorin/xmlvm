#ifndef __ORG_XMLVM_IPHONE_UITABLEVIEWDELEGATE__
#define __ORG_XMLVM_IPHONE_UITABLEVIEWDELEGATE__

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
#ifndef XMLVM_FORWARD_DECL_java_lang_String
#define XMLVM_FORWARD_DECL_java_lang_String
XMLVM_FORWARD_DECL(java_lang_String)
#endif
// Class declarations for org.xmlvm.iphone.UITableViewDelegate
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UITableViewDelegate, 28)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITableViewDelegate;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITableViewDelegate_ARRAYTYPE;

//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UITableViewDelegate
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_UITableViewDelegate \
    __INSTANCE_FIELDS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UITableViewDelegate \
    } org_xmlvm_iphone_UITableViewDelegate

struct org_xmlvm_iphone_UITableViewDelegate {
    __TIB_DEFINITION_org_xmlvm_iphone_UITableViewDelegate* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_UITableViewDelegate;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITableViewDelegate
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITableViewDelegate
typedef struct org_xmlvm_iphone_UITableViewDelegate org_xmlvm_iphone_UITableViewDelegate;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UITableViewDelegate 28
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewDelegate_willDisplayCellForRowAtIndexPath___org_xmlvm_iphone_UITableView_org_xmlvm_iphone_UITableViewCell_org_xmlvm_iphone_NSIndexPath 14
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewDelegate_accessoryButtonTappedForRowWithIndexPath___org_xmlvm_iphone_UITableView_org_xmlvm_iphone_NSIndexPath 15
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewDelegate_didSelectRowAtIndexPath___org_xmlvm_iphone_UITableView_org_xmlvm_iphone_NSIndexPath 16
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewDelegate_didDeselectRowAtIndexPath___org_xmlvm_iphone_UITableView_org_xmlvm_iphone_NSIndexPath 17
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewDelegate_willBeginEditingRowAtIndexPath___org_xmlvm_iphone_UITableView_org_xmlvm_iphone_NSIndexPath 18
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewDelegate_didEndEditingRowAtIndexPath___org_xmlvm_iphone_UITableView_org_xmlvm_iphone_NSIndexPath 19
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewDelegate_shouldIndentWhileEditingRowAtIndexPath___org_xmlvm_iphone_UITableView_org_xmlvm_iphone_NSIndexPath 20
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewDelegate_editingStyleForRowAtIndexPath___org_xmlvm_iphone_UITableView_org_xmlvm_iphone_NSIndexPath 21
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewDelegate_heightForRowAtIndexPath___org_xmlvm_iphone_UITableView_org_xmlvm_iphone_NSIndexPath 22
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewDelegate_viewForHeaderInSection___org_xmlvm_iphone_UITableView_int 23
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewDelegate_viewForFooterInSection___org_xmlvm_iphone_UITableView_int 24
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewDelegate_heightForHeaderInSection___org_xmlvm_iphone_UITableView_int 25
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewDelegate_heightForFooterInSection___org_xmlvm_iphone_UITableView_int 26
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewDelegate_titleForDeleteConfirmationButtonForRowAtIndexPath___org_xmlvm_iphone_UITableView_org_xmlvm_iphone_NSIndexPath 27

void __INIT_org_xmlvm_iphone_UITableViewDelegate();
JAVA_OBJECT __NEW_org_xmlvm_iphone_UITableViewDelegate();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UITableViewDelegate();
void org_xmlvm_iphone_UITableViewDelegate___INIT___(JAVA_OBJECT me);
// Vtable index: 14
void org_xmlvm_iphone_UITableViewDelegate_willDisplayCellForRowAtIndexPath___org_xmlvm_iphone_UITableView_org_xmlvm_iphone_UITableViewCell_org_xmlvm_iphone_NSIndexPath(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_OBJECT n3);
// Vtable index: 15
void org_xmlvm_iphone_UITableViewDelegate_accessoryButtonTappedForRowWithIndexPath___org_xmlvm_iphone_UITableView_org_xmlvm_iphone_NSIndexPath(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 16
void org_xmlvm_iphone_UITableViewDelegate_didSelectRowAtIndexPath___org_xmlvm_iphone_UITableView_org_xmlvm_iphone_NSIndexPath(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 17
void org_xmlvm_iphone_UITableViewDelegate_didDeselectRowAtIndexPath___org_xmlvm_iphone_UITableView_org_xmlvm_iphone_NSIndexPath(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 18
void org_xmlvm_iphone_UITableViewDelegate_willBeginEditingRowAtIndexPath___org_xmlvm_iphone_UITableView_org_xmlvm_iphone_NSIndexPath(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 19
void org_xmlvm_iphone_UITableViewDelegate_didEndEditingRowAtIndexPath___org_xmlvm_iphone_UITableView_org_xmlvm_iphone_NSIndexPath(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 20
JAVA_BOOLEAN org_xmlvm_iphone_UITableViewDelegate_shouldIndentWhileEditingRowAtIndexPath___org_xmlvm_iphone_UITableView_org_xmlvm_iphone_NSIndexPath(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 21
JAVA_INT org_xmlvm_iphone_UITableViewDelegate_editingStyleForRowAtIndexPath___org_xmlvm_iphone_UITableView_org_xmlvm_iphone_NSIndexPath(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 22
JAVA_FLOAT org_xmlvm_iphone_UITableViewDelegate_heightForRowAtIndexPath___org_xmlvm_iphone_UITableView_org_xmlvm_iphone_NSIndexPath(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 23
JAVA_OBJECT org_xmlvm_iphone_UITableViewDelegate_viewForHeaderInSection___org_xmlvm_iphone_UITableView_int(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_INT n2);
// Vtable index: 24
JAVA_OBJECT org_xmlvm_iphone_UITableViewDelegate_viewForFooterInSection___org_xmlvm_iphone_UITableView_int(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_INT n2);
// Vtable index: 25
JAVA_FLOAT org_xmlvm_iphone_UITableViewDelegate_heightForHeaderInSection___org_xmlvm_iphone_UITableView_int(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_INT n2);
// Vtable index: 26
JAVA_FLOAT org_xmlvm_iphone_UITableViewDelegate_heightForFooterInSection___org_xmlvm_iphone_UITableView_int(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_INT n2);
// Vtable index: 27
JAVA_OBJECT org_xmlvm_iphone_UITableViewDelegate_titleForDeleteConfirmationButtonForRowAtIndexPath___org_xmlvm_iphone_UITableView_org_xmlvm_iphone_NSIndexPath(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);

#endif