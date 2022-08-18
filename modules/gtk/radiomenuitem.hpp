// AUTO-GENERATED

#ifndef _GI_GTK_RADIOMENUITEM_HPP_
#define _GI_GTK_RADIOMENUITEM_HPP_

#include "checkmenuitem.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class RadioMenuItem;

namespace base {


#define GI_GTK_RADIOMENUITEM_BASE base::RadioMenuItemBase
class RadioMenuItemBase : public Gtk::CheckMenuItem
{
typedef Gtk::CheckMenuItem super_type;
public:
typedef ::GtkRadioMenuItem BaseObjectType;

RadioMenuItemBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_radio_menu_item_get_type(); } 

// GtkWidget* gtk_radio_menu_item_new (GSList* group);
// ::GtkRadioMenuItem* gtk_radio_menu_item_new (::GSList* group);
static GI_INLINE_DECL Gtk::RadioMenuItem new_ (const std::vector<Gtk::RadioMenuItem> & group) noexcept;

// GtkWidget* gtk_radio_menu_item_new_from_widget (GtkRadioMenuItem* group);
// ::GtkRadioMenuItem* gtk_radio_menu_item_new_from_widget (::GtkRadioMenuItem* group);
static GI_INLINE_DECL Gtk::RadioMenuItem new_from_widget (Gtk::RadioMenuItem group) noexcept;
static GI_INLINE_DECL Gtk::RadioMenuItem new_from_widget () noexcept;

// GtkWidget* gtk_radio_menu_item_new_with_label (GSList* group, const gchar* label);
// ::GtkRadioMenuItem* gtk_radio_menu_item_new_with_label (::GSList* group, const char* label);
static GI_INLINE_DECL Gtk::RadioMenuItem new_with_label (const std::vector<Gtk::RadioMenuItem> & group, const std::string & label) noexcept;

// GtkWidget* gtk_radio_menu_item_new_with_label_from_widget (GtkRadioMenuItem* group, const gchar* label);
// ::GtkRadioMenuItem* gtk_radio_menu_item_new_with_label_from_widget (::GtkRadioMenuItem* group, const char* label);
static GI_INLINE_DECL Gtk::RadioMenuItem new_with_label_from_widget (Gtk::RadioMenuItem group, const std::string & label) noexcept;
static GI_INLINE_DECL Gtk::RadioMenuItem new_with_label_from_widget () noexcept;

// GtkWidget* gtk_radio_menu_item_new_with_mnemonic (GSList* group, const gchar* label);
// ::GtkRadioMenuItem* gtk_radio_menu_item_new_with_mnemonic (::GSList* group, const char* label);
static GI_INLINE_DECL Gtk::RadioMenuItem new_with_mnemonic (const std::vector<Gtk::RadioMenuItem> & group, const std::string & label) noexcept;

// GtkWidget* gtk_radio_menu_item_new_with_mnemonic_from_widget (GtkRadioMenuItem* group, const gchar* label);
// ::GtkRadioMenuItem* gtk_radio_menu_item_new_with_mnemonic_from_widget (::GtkRadioMenuItem* group, const char* label);
static GI_INLINE_DECL Gtk::RadioMenuItem new_with_mnemonic_from_widget (Gtk::RadioMenuItem group, const std::string & label) noexcept;
static GI_INLINE_DECL Gtk::RadioMenuItem new_with_mnemonic_from_widget () noexcept;

// GSList* gtk_radio_menu_item_get_group (GtkRadioMenuItem* radio_menu_item);
// ::GSList* gtk_radio_menu_item_get_group (::GtkRadioMenuItem* radio_menu_item);
GI_INLINE_DECL std::vector<Gtk::RadioMenuItem> get_group () noexcept;

// void gtk_radio_menu_item_join_group (GtkRadioMenuItem* radio_menu_item, GtkRadioMenuItem* group_source);
// void gtk_radio_menu_item_join_group (::GtkRadioMenuItem* radio_menu_item, ::GtkRadioMenuItem* group_source);
GI_INLINE_DECL void join_group (Gtk::RadioMenuItem group_source) noexcept;
GI_INLINE_DECL void join_group () noexcept;

// void gtk_radio_menu_item_set_group (GtkRadioMenuItem* radio_menu_item, GSList* group);
// void gtk_radio_menu_item_set_group (::GtkRadioMenuItem* radio_menu_item, ::GSList* group);
GI_INLINE_DECL void set_group (const std::vector<Gtk::RadioMenuItem> & group) noexcept;

gi::property_proxy_write<Gtk::RadioMenuItem, base::RadioMenuItemBase> property_group()
{ return gi::property_proxy_write<Gtk::RadioMenuItem, base::RadioMenuItemBase> (*this, "group"); }

// signal group-changed
gi::signal_proxy<void(Gtk::RadioMenuItem)> signal_group_changed()
{ return gi::signal_proxy<void(Gtk::RadioMenuItem)> (*this, "group-changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/radiomenuitem_extra_def.hpp>)
#include <gtk/radiomenuitem_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/radiomenuitem_extra.hpp>)
#include <gtk/radiomenuitem_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class RadioMenuItem : public GI_GTK_RADIOMENUITEM_BASE
{ typedef GI_GTK_RADIOMENUITEM_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRadioMenuItem>
{ typedef Gtk::RadioMenuItem type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class RadioMenuItemClassDef
{
typedef RadioMenuItemClassDef self;
public:
typedef Gtk::RadioMenuItem instance_type;
typedef ::GtkRadioMenuItemClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void RadioMenuItem::group_changed (GtkRadioMenuItem* radio_menu_item);
// void RadioMenuItem::group_changed (::GtkRadioMenuItem* radio_menu_item);
virtual void group_changed_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class RadioMenuItemClass: public detail::ClassTemplate<Gtk::impl::internal::RadioMenuItemClassDef, Gtk::impl::internal::CheckMenuItemClass>
{
typedef RadioMenuItemClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::RadioMenuItemClassDef, Gtk::impl::internal::CheckMenuItemClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void RadioMenuItem::group_changed (GtkRadioMenuItem* radio_menu_item);
// void RadioMenuItem::group_changed (::GtkRadioMenuItem* radio_menu_item);
GI_INLINE_DECL void group_changed_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using RadioMenuItemImpl = detail::ObjectImpl<RadioMenuItem, internal::RadioMenuItemClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
