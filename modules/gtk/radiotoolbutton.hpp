// AUTO-GENERATED

#ifndef _GI_GTK_RADIOTOOLBUTTON_HPP_
#define _GI_GTK_RADIOTOOLBUTTON_HPP_

#include "toggletoolbutton.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class RadioButton;

class RadioToolButton;

namespace base {


#define GI_GTK_RADIOTOOLBUTTON_BASE base::RadioToolButtonBase
class RadioToolButtonBase : public Gtk::ToggleToolButton
{
typedef Gtk::ToggleToolButton super_type;
public:
typedef ::GtkRadioToolButton BaseObjectType;

RadioToolButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_radio_tool_button_get_type(); } 

// GtkToolItem* gtk_radio_tool_button_new (GSList* group);
// ::GtkRadioToolButton* gtk_radio_tool_button_new (::GSList* group);
static GI_INLINE_DECL Gtk::RadioToolButton new_ (const std::vector<Gtk::RadioButton> & group) noexcept;

// GtkToolItem* gtk_radio_tool_button_new_from_stock (GSList* group, const gchar* stock_id);
// ::GtkRadioToolButton* gtk_radio_tool_button_new_from_stock (::GSList* group, const char* stock_id);
// IGNORE; deprecated

// GtkToolItem* gtk_radio_tool_button_new_from_widget (GtkRadioToolButton* group);
// ::GtkRadioToolButton* gtk_radio_tool_button_new_from_widget (::GtkRadioToolButton* group);
static GI_INLINE_DECL Gtk::RadioToolButton new_from_widget (Gtk::RadioToolButton group) noexcept;
static GI_INLINE_DECL Gtk::RadioToolButton new_from_widget () noexcept;

// GtkToolItem* gtk_radio_tool_button_new_with_stock_from_widget (GtkRadioToolButton* group, const gchar* stock_id);
// ::GtkRadioToolButton* gtk_radio_tool_button_new_with_stock_from_widget (::GtkRadioToolButton* group, const char* stock_id);
// IGNORE; deprecated

// GSList* gtk_radio_tool_button_get_group (GtkRadioToolButton* button);
// ::GSList* gtk_radio_tool_button_get_group (::GtkRadioToolButton* button);
GI_INLINE_DECL std::vector<Gtk::RadioButton> get_group () noexcept;

// void gtk_radio_tool_button_set_group (GtkRadioToolButton* button, GSList* group);
// void gtk_radio_tool_button_set_group (::GtkRadioToolButton* button, ::GSList* group);
GI_INLINE_DECL void set_group (const std::vector<Gtk::RadioButton> & group) noexcept;

gi::property_proxy_write<Gtk::RadioToolButton, base::RadioToolButtonBase> property_group()
{ return gi::property_proxy_write<Gtk::RadioToolButton, base::RadioToolButtonBase> (*this, "group"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/radiotoolbutton_extra_def.hpp>)
#include <gtk/radiotoolbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/radiotoolbutton_extra.hpp>)
#include <gtk/radiotoolbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class RadioToolButton : public GI_GTK_RADIOTOOLBUTTON_BASE
{ typedef GI_GTK_RADIOTOOLBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRadioToolButton>
{ typedef Gtk::RadioToolButton type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class RadioToolButtonClassDef
{
typedef RadioToolButtonClassDef self;
public:
typedef Gtk::RadioToolButton instance_type;
typedef ::GtkRadioToolButtonClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class RadioToolButtonClass: public detail::ClassTemplate<Gtk::impl::internal::RadioToolButtonClassDef, Gtk::impl::internal::ToggleToolButtonClass>
{
typedef RadioToolButtonClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::RadioToolButtonClassDef, Gtk::impl::internal::ToggleToolButtonClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using RadioToolButtonImpl = detail::ObjectImpl<RadioToolButton, internal::RadioToolButtonClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
