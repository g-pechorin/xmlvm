#ifndef __ORG_XMLVM_IPHONE_UITABLEVIEWCELL__
#define __ORG_XMLVM_IPHONE_UITABLEVIEWCELL__

#include "xmlvm.h"
#include "org_xmlvm_iphone_UIView.h"
#include "org_xmlvm_iphone_UIView.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIView
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIView
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIView)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_String
#define XMLVM_FORWARD_DECL_java_lang_String
XMLVM_FORWARD_DECL(java_lang_String)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIView
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIView
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIView)
#endif
// Class declarations for org.xmlvm.iphone.UITableViewCell
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UITableViewCell, 84)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITableViewCell;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITableViewCell_ARRAYTYPE;

//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UITableViewCell
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_UITableViewCell \
    __INSTANCE_FIELDS_org_xmlvm_iphone_UIView; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UITableViewCell \
    } org_xmlvm_iphone_UITableViewCell

struct org_xmlvm_iphone_UITableViewCell {
    __TIB_DEFINITION_org_xmlvm_iphone_UITableViewCell* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_UITableViewCell;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITableViewCell
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITableViewCell
typedef struct org_xmlvm_iphone_UITableViewCell org_xmlvm_iphone_UITableViewCell;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UITableViewCell 84
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewCell_setSelected___boolean 70
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewCell_isSelected__ 71
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewCell_getEditingStyle__ 72
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewCell_getContentView__ 73
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewCell_setBackgroundView___org_xmlvm_iphone_UIView 74
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewCell_getBackgroundView__ 75
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewCell_setSelectedBackgroundView___org_xmlvm_iphone_UIView 76
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewCell_getSelectedBackgroundView__ 77
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewCell_getTextLabel__ 78
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewCell_getDetailTextLabel__ 79
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewCell_getImageView__ 80
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewCell_getAccessoryView__ 81
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewCell_setAccessoryView___org_xmlvm_iphone_UIView 82
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UITableViewCell_getReuseIdentifier__ 83

void __INIT_org_xmlvm_iphone_UITableViewCell();
void __DELETE_org_xmlvm_iphone_UITableViewCell(void* me, void* client_data);
JAVA_OBJECT __NEW_org_xmlvm_iphone_UITableViewCell();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UITableViewCell();
void org_xmlvm_iphone_UITableViewCell___INIT___(JAVA_OBJECT me);
void org_xmlvm_iphone_UITableViewCell___INIT____int_java_lang_String(JAVA_OBJECT me, JAVA_INT n1, JAVA_OBJECT n2);
// Vtable index: 70
void org_xmlvm_iphone_UITableViewCell_setSelected___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
// Vtable index: 71
JAVA_BOOLEAN org_xmlvm_iphone_UITableViewCell_isSelected__(JAVA_OBJECT me);
// Vtable index: 72
JAVA_INT org_xmlvm_iphone_UITableViewCell_getEditingStyle__(JAVA_OBJECT me);
// Vtable index: 73
JAVA_OBJECT org_xmlvm_iphone_UITableViewCell_getContentView__(JAVA_OBJECT me);
// Vtable index: 74
void org_xmlvm_iphone_UITableViewCell_setBackgroundView___org_xmlvm_iphone_UIView(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 75
JAVA_OBJECT org_xmlvm_iphone_UITableViewCell_getBackgroundView__(JAVA_OBJECT me);
// Vtable index: 76
void org_xmlvm_iphone_UITableViewCell_setSelectedBackgroundView___org_xmlvm_iphone_UIView(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 77
JAVA_OBJECT org_xmlvm_iphone_UITableViewCell_getSelectedBackgroundView__(JAVA_OBJECT me);
// Vtable index: 78
JAVA_OBJECT org_xmlvm_iphone_UITableViewCell_getTextLabel__(JAVA_OBJECT me);
// Vtable index: 79
JAVA_OBJECT org_xmlvm_iphone_UITableViewCell_getDetailTextLabel__(JAVA_OBJECT me);
// Vtable index: 80
JAVA_OBJECT org_xmlvm_iphone_UITableViewCell_getImageView__(JAVA_OBJECT me);
// Vtable index: 81
JAVA_OBJECT org_xmlvm_iphone_UITableViewCell_getAccessoryView__(JAVA_OBJECT me);
// Vtable index: 82
void org_xmlvm_iphone_UITableViewCell_setAccessoryView___org_xmlvm_iphone_UIView(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 83
JAVA_OBJECT org_xmlvm_iphone_UITableViewCell_getReuseIdentifier__(JAVA_OBJECT me);

#endif