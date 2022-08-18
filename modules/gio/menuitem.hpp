// AUTO-GENERATED

#ifndef _GI_GIO_MENUITEM_HPP_
#define _GI_GIO_MENUITEM_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Icon;
class MenuModel;

class MenuItem;

namespace base {


#define GI_GIO_MENUITEM_BASE base::MenuItemBase
class MenuItemBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GMenuItem BaseObjectType;

MenuItemBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_menu_item_get_type(); } 

// GMenuItem* g_menu_item_new (const gchar* label, const gchar* detailed_action);
// ::GMenuItem* g_menu_item_new (const char* label, const char* detailed_action);
static GI_INLINE_DECL Gio::MenuItem new_ (const std::string & label, const std::string & detailed_action) noexcept;
static GI_INLINE_DECL Gio::MenuItem new_ () noexcept;

// GMenuItem* g_menu_item_new_from_model (GMenuModel* model, gint item_index);
// ::GMenuItem* g_menu_item_new_from_model (::GMenuModel* model, gint item_index);
static GI_INLINE_DECL Gio::MenuItem new_from_model (Gio::MenuModel model, gint item_index) noexcept;

// GMenuItem* g_menu_item_new_section (const gchar* label, GMenuModel* section);
// ::GMenuItem* g_menu_item_new_section (const char* label, ::GMenuModel* section);
static GI_INLINE_DECL Gio::MenuItem new_section (const std::string & label, Gio::MenuModel section) noexcept;
static GI_INLINE_DECL Gio::MenuItem new_section (Gio::MenuModel section) noexcept;

// GMenuItem* g_menu_item_new_submenu (const gchar* label, GMenuModel* submenu);
// ::GMenuItem* g_menu_item_new_submenu (const char* label, ::GMenuModel* submenu);
static GI_INLINE_DECL Gio::MenuItem new_submenu (const std::string & label, Gio::MenuModel submenu) noexcept;
static GI_INLINE_DECL Gio::MenuItem new_submenu (Gio::MenuModel submenu) noexcept;

// gboolean g_menu_item_get_attribute (GMenuItem* menu_item, const gchar* attribute, const gchar* format_string);
// gboolean g_menu_item_get_attribute (::GMenuItem* menu_item, const char* attribute, const char* format_string);
// IGNORE; not introspectable, varargs not supported

// GVariant* g_menu_item_get_attribute_value (GMenuItem* menu_item, const gchar* attribute, const GVariantType* expected_type);
// ::GVariant* g_menu_item_get_attribute_value (::GMenuItem* menu_item, const char* attribute, const ::GVariantType* expected_type);
GI_INLINE_DECL GLib::Variant get_attribute_value (const std::string & attribute, const GLib::VariantType & expected_type) noexcept;
GI_INLINE_DECL GLib::Variant get_attribute_value (const std::string & attribute) noexcept;

// GMenuModel* g_menu_item_get_link (GMenuItem* menu_item, const gchar* link);
// ::GMenuModel* g_menu_item_get_link (::GMenuItem* menu_item, const char* link);
GI_INLINE_DECL Gio::MenuModel get_link (const std::string & link) noexcept;

// void g_menu_item_set_action_and_target (GMenuItem* menu_item, const gchar* action, const gchar* format_string);
// void g_menu_item_set_action_and_target (::GMenuItem* menu_item, const char* action, const char* format_string);
// IGNORE; not introspectable, varargs not supported

// void g_menu_item_set_action_and_target_value (GMenuItem* menu_item, const gchar* action, GVariant* target_value);
// void g_menu_item_set_action_and_target_value (::GMenuItem* menu_item, const char* action, ::GVariant* target_value);
GI_INLINE_DECL void set_action_and_target_value (const std::string & action, GLib::Variant target_value) noexcept;
GI_INLINE_DECL void set_action_and_target_value () noexcept;

// void g_menu_item_set_attribute (GMenuItem* menu_item, const gchar* attribute, const gchar* format_string);
// void g_menu_item_set_attribute (::GMenuItem* menu_item, const char* attribute, const char* format_string);
// IGNORE; not introspectable, varargs not supported

// void g_menu_item_set_attribute_value (GMenuItem* menu_item, const gchar* attribute, GVariant* value);
// void g_menu_item_set_attribute_value (::GMenuItem* menu_item, const char* attribute, ::GVariant* value);
GI_INLINE_DECL void set_attribute_value (const std::string & attribute, GLib::Variant value) noexcept;
GI_INLINE_DECL void set_attribute_value (const std::string & attribute) noexcept;

// void g_menu_item_set_detailed_action (GMenuItem* menu_item, const gchar* detailed_action);
// void g_menu_item_set_detailed_action (::GMenuItem* menu_item, const char* detailed_action);
GI_INLINE_DECL void set_detailed_action (const std::string & detailed_action) noexcept;

// void g_menu_item_set_icon (GMenuItem* menu_item, GIcon* icon);
// void g_menu_item_set_icon (::GMenuItem* menu_item, ::GIcon* icon);
GI_INLINE_DECL void set_icon (Gio::Icon icon) noexcept;

// void g_menu_item_set_label (GMenuItem* menu_item, const gchar* label);
// void g_menu_item_set_label (::GMenuItem* menu_item, const char* label);
GI_INLINE_DECL void set_label (const std::string & label) noexcept;
GI_INLINE_DECL void set_label () noexcept;

// void g_menu_item_set_link (GMenuItem* menu_item, const gchar* link, GMenuModel* model);
// void g_menu_item_set_link (::GMenuItem* menu_item, const char* link, ::GMenuModel* model);
GI_INLINE_DECL void set_link (const std::string & link, Gio::MenuModel model) noexcept;
GI_INLINE_DECL void set_link (const std::string & link) noexcept;

// void g_menu_item_set_section (GMenuItem* menu_item, GMenuModel* section);
// void g_menu_item_set_section (::GMenuItem* menu_item, ::GMenuModel* section);
GI_INLINE_DECL void set_section (Gio::MenuModel section) noexcept;
GI_INLINE_DECL void set_section () noexcept;

// void g_menu_item_set_submenu (GMenuItem* menu_item, GMenuModel* submenu);
// void g_menu_item_set_submenu (::GMenuItem* menu_item, ::GMenuModel* submenu);
GI_INLINE_DECL void set_submenu (Gio::MenuModel submenu) noexcept;
GI_INLINE_DECL void set_submenu () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/menuitem_extra_def.hpp>)
#include <gio/menuitem_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/menuitem_extra.hpp>)
#include <gio/menuitem_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class MenuItem : public GI_GIO_MENUITEM_BASE
{ typedef GI_GIO_MENUITEM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GMenuItem>
{ typedef Gio::MenuItem type; }; 

} // namespace repository

} // namespace gi

#endif
