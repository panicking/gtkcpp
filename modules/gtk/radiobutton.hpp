// AUTO-GENERATED

#ifndef _GI_GTK_RADIOBUTTON_HPP_
#define _GI_GTK_RADIOBUTTON_HPP_

#include "checkbutton.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class RadioButton;

namespace base {


#define GI_GTK_RADIOBUTTON_BASE base::RadioButtonBase
class RadioButtonBase : public Gtk::CheckButton
{
typedef Gtk::CheckButton super_type;
public:
typedef ::GtkRadioButton BaseObjectType;

RadioButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_radio_button_get_type(); } 

// GtkWidget* gtk_radio_button_new (GSList* group);
// ::GtkRadioButton* gtk_radio_button_new (::GSList* group);
static GI_INLINE_DECL Gtk::RadioButton new_ (const std::vector<Gtk::RadioButton> & group) noexcept;

// GtkWidget* gtk_radio_button_new_from_widget (GtkRadioButton* radio_group_member);
// ::GtkRadioButton* gtk_radio_button_new_from_widget (::GtkRadioButton* radio_group_member);
static GI_INLINE_DECL Gtk::RadioButton new_from_widget (Gtk::RadioButton radio_group_member) noexcept;
static GI_INLINE_DECL Gtk::RadioButton new_from_widget () noexcept;

// GtkWidget* gtk_radio_button_new_with_label (GSList* group, const gchar* label);
// ::GtkRadioButton* gtk_radio_button_new_with_label (::GSList* group, const char* label);
static GI_INLINE_DECL Gtk::RadioButton new_with_label (const std::vector<Gtk::RadioButton> & group, const std::string & label) noexcept;

// GtkWidget* gtk_radio_button_new_with_label_from_widget (GtkRadioButton* radio_group_member, const gchar* label);
// ::GtkRadioButton* gtk_radio_button_new_with_label_from_widget (::GtkRadioButton* radio_group_member, const char* label);
static GI_INLINE_DECL Gtk::RadioButton new_with_label_from_widget (Gtk::RadioButton radio_group_member, const std::string & label) noexcept;
static GI_INLINE_DECL Gtk::RadioButton new_with_label_from_widget (const std::string & label) noexcept;

// GtkWidget* gtk_radio_button_new_with_mnemonic (GSList* group, const gchar* label);
// ::GtkRadioButton* gtk_radio_button_new_with_mnemonic (::GSList* group, const char* label);
static GI_INLINE_DECL Gtk::RadioButton new_with_mnemonic (const std::vector<Gtk::RadioButton> & group, const std::string & label) noexcept;

// GtkWidget* gtk_radio_button_new_with_mnemonic_from_widget (GtkRadioButton* radio_group_member, const gchar* label);
// ::GtkRadioButton* gtk_radio_button_new_with_mnemonic_from_widget (::GtkRadioButton* radio_group_member, const char* label);
static GI_INLINE_DECL Gtk::RadioButton new_with_mnemonic_from_widget (Gtk::RadioButton radio_group_member, const std::string & label) noexcept;
static GI_INLINE_DECL Gtk::RadioButton new_with_mnemonic_from_widget (const std::string & label) noexcept;

// GSList* gtk_radio_button_get_group (GtkRadioButton* radio_button);
// ::GSList* gtk_radio_button_get_group (::GtkRadioButton* radio_button);
GI_INLINE_DECL std::vector<Gtk::RadioButton> get_group () noexcept;

// void gtk_radio_button_join_group (GtkRadioButton* radio_button, GtkRadioButton* group_source);
// void gtk_radio_button_join_group (::GtkRadioButton* radio_button, ::GtkRadioButton* group_source);
GI_INLINE_DECL void join_group (Gtk::RadioButton group_source) noexcept;
GI_INLINE_DECL void join_group () noexcept;

// void gtk_radio_button_set_group (GtkRadioButton* radio_button, GSList* group);
// void gtk_radio_button_set_group (::GtkRadioButton* radio_button, ::GSList* group);
GI_INLINE_DECL void set_group (const std::vector<Gtk::RadioButton> & group) noexcept;

gi::property_proxy_write<Gtk::RadioButton, base::RadioButtonBase> property_group()
{ return gi::property_proxy_write<Gtk::RadioButton, base::RadioButtonBase> (*this, "group"); }

// signal group-changed
gi::signal_proxy<void(Gtk::RadioButton)> signal_group_changed()
{ return gi::signal_proxy<void(Gtk::RadioButton)> (*this, "group-changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/radiobutton_extra_def.hpp>)
#include <gtk/radiobutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/radiobutton_extra.hpp>)
#include <gtk/radiobutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class RadioButton : public GI_GTK_RADIOBUTTON_BASE
{ typedef GI_GTK_RADIOBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRadioButton>
{ typedef Gtk::RadioButton type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class RadioButtonClassDef
{
typedef RadioButtonClassDef self;
public:
typedef Gtk::RadioButton instance_type;
typedef ::GtkRadioButtonClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void RadioButton::group_changed (GtkRadioButton* radio_button);
// void RadioButton::group_changed (::GtkRadioButton* radio_button);
virtual void group_changed_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class RadioButtonClass: public detail::ClassTemplate<Gtk::impl::internal::RadioButtonClassDef, Gtk::impl::internal::CheckButtonClass>
{
typedef RadioButtonClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::RadioButtonClassDef, Gtk::impl::internal::CheckButtonClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void RadioButton::group_changed (GtkRadioButton* radio_button);
// void RadioButton::group_changed (::GtkRadioButton* radio_button);
GI_INLINE_DECL void group_changed_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using RadioButtonImpl = detail::ObjectImpl<RadioButton, internal::RadioButtonClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
