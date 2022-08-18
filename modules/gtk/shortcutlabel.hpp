// AUTO-GENERATED

#ifndef _GI_GTK_SHORTCUTLABEL_HPP_
#define _GI_GTK_SHORTCUTLABEL_HPP_

#include "box.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class ShortcutLabel;

namespace base {


#define GI_GTK_SHORTCUTLABEL_BASE base::ShortcutLabelBase
class ShortcutLabelBase : public Gtk::Box
{
typedef Gtk::Box super_type;
public:
typedef ::GtkShortcutLabel BaseObjectType;

ShortcutLabelBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_shortcut_label_get_type(); } 

// GtkWidget* gtk_shortcut_label_new (const gchar* accelerator);
// ::GtkShortcutLabel* gtk_shortcut_label_new (const char* accelerator);
static GI_INLINE_DECL Gtk::ShortcutLabel new_ (const std::string & accelerator) noexcept;

// const gchar* gtk_shortcut_label_get_accelerator (GtkShortcutLabel* self);
// const char* gtk_shortcut_label_get_accelerator (::GtkShortcutLabel* self);
GI_INLINE_DECL std::string get_accelerator () noexcept;

// const gchar* gtk_shortcut_label_get_disabled_text (GtkShortcutLabel* self);
// const char* gtk_shortcut_label_get_disabled_text (::GtkShortcutLabel* self);
GI_INLINE_DECL std::string get_disabled_text () noexcept;

// void gtk_shortcut_label_set_accelerator (GtkShortcutLabel* self, const gchar* accelerator);
// void gtk_shortcut_label_set_accelerator (::GtkShortcutLabel* self, const char* accelerator);
GI_INLINE_DECL void set_accelerator (const std::string & accelerator) noexcept;

// void gtk_shortcut_label_set_disabled_text (GtkShortcutLabel* self, const gchar* disabled_text);
// void gtk_shortcut_label_set_disabled_text (::GtkShortcutLabel* self, const char* disabled_text);
GI_INLINE_DECL void set_disabled_text (const std::string & disabled_text) noexcept;

gi::property_proxy<std::string, base::ShortcutLabelBase> property_accelerator()
{ return gi::property_proxy<std::string, base::ShortcutLabelBase> (*this, "accelerator"); }
const gi::property_proxy<std::string, base::ShortcutLabelBase> property_accelerator() const
{ return gi::property_proxy<std::string, base::ShortcutLabelBase> (*this, "accelerator"); }

gi::property_proxy<std::string, base::ShortcutLabelBase> property_disabled_text()
{ return gi::property_proxy<std::string, base::ShortcutLabelBase> (*this, "disabled-text"); }
const gi::property_proxy<std::string, base::ShortcutLabelBase> property_disabled_text() const
{ return gi::property_proxy<std::string, base::ShortcutLabelBase> (*this, "disabled-text"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/shortcutlabel_extra_def.hpp>)
#include <gtk/shortcutlabel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/shortcutlabel_extra.hpp>)
#include <gtk/shortcutlabel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ShortcutLabel : public GI_GTK_SHORTCUTLABEL_BASE
{ typedef GI_GTK_SHORTCUTLABEL_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkShortcutLabel>
{ typedef Gtk::ShortcutLabel type; }; 

} // namespace repository

} // namespace gi

#endif
