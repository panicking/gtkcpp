// AUTO-GENERATED

#ifndef _GI_GTK_CHECKBUTTON_HPP_
#define _GI_GTK_CHECKBUTTON_HPP_

#include "togglebutton.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class CheckButton;

namespace base {


#define GI_GTK_CHECKBUTTON_BASE base::CheckButtonBase
class CheckButtonBase : public Gtk::ToggleButton
{
typedef Gtk::ToggleButton super_type;
public:
typedef ::GtkCheckButton BaseObjectType;

CheckButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_check_button_get_type(); } 

// GtkWidget* gtk_check_button_new ();
// ::GtkCheckButton* gtk_check_button_new ();
static GI_INLINE_DECL Gtk::CheckButton new_ () noexcept;

// GtkWidget* gtk_check_button_new_with_label (const gchar* label);
// ::GtkCheckButton* gtk_check_button_new_with_label (const char* label);
static GI_INLINE_DECL Gtk::CheckButton new_with_label (const std::string & label) noexcept;

// GtkWidget* gtk_check_button_new_with_mnemonic (const gchar* label);
// ::GtkCheckButton* gtk_check_button_new_with_mnemonic (const char* label);
static GI_INLINE_DECL Gtk::CheckButton new_with_mnemonic (const std::string & label) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/checkbutton_extra_def.hpp>)
#include <gtk/checkbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/checkbutton_extra.hpp>)
#include <gtk/checkbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CheckButton : public GI_GTK_CHECKBUTTON_BASE
{ typedef GI_GTK_CHECKBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCheckButton>
{ typedef Gtk::CheckButton type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CheckButtonClassDef
{
typedef CheckButtonClassDef self;
public:
typedef Gtk::CheckButton instance_type;
typedef ::GtkCheckButtonClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void CheckButton::draw_indicator (GtkCheckButton* check_button, cairo_t* cr);
// void CheckButton::draw_indicator (::GtkCheckButton* check_button, ::cairo_t* cr);
virtual void draw_indicator_ (cairo::Context cr) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class CheckButtonClass: public detail::ClassTemplate<Gtk::impl::internal::CheckButtonClassDef, Gtk::impl::internal::ToggleButtonClass>
{
typedef CheckButtonClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::CheckButtonClassDef, Gtk::impl::internal::ToggleButtonClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void CheckButton::draw_indicator (GtkCheckButton* check_button, cairo_t* cr);
// void CheckButton::draw_indicator (::GtkCheckButton* check_button, ::cairo_t* cr);
GI_INLINE_DECL void draw_indicator_ (cairo::Context cr) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using CheckButtonImpl = detail::ObjectImpl<CheckButton, internal::CheckButtonClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
