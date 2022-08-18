// AUTO-GENERATED

#ifndef _GI_GTK_SPINNER_HPP_
#define _GI_GTK_SPINNER_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class Spinner;

namespace base {


#define GI_GTK_SPINNER_BASE base::SpinnerBase
class SpinnerBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkSpinner BaseObjectType;

SpinnerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_spinner_get_type(); } 

// GtkWidget* gtk_spinner_new ();
// ::GtkSpinner* gtk_spinner_new ();
static GI_INLINE_DECL Gtk::Spinner new_ () noexcept;

// void gtk_spinner_start (GtkSpinner* spinner);
// void gtk_spinner_start (::GtkSpinner* spinner);
GI_INLINE_DECL void start () noexcept;

// void gtk_spinner_stop (GtkSpinner* spinner);
// void gtk_spinner_stop (::GtkSpinner* spinner);
GI_INLINE_DECL void stop () noexcept;

gi::property_proxy<bool, base::SpinnerBase> property_active()
{ return gi::property_proxy<bool, base::SpinnerBase> (*this, "active"); }
const gi::property_proxy<bool, base::SpinnerBase> property_active() const
{ return gi::property_proxy<bool, base::SpinnerBase> (*this, "active"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/spinner_extra_def.hpp>)
#include <gtk/spinner_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/spinner_extra.hpp>)
#include <gtk/spinner_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Spinner : public GI_GTK_SPINNER_BASE
{ typedef GI_GTK_SPINNER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSpinner>
{ typedef Gtk::Spinner type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class SpinnerClassDef
{
typedef SpinnerClassDef self;
public:
typedef Gtk::Spinner instance_type;
typedef ::GtkSpinnerClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SpinnerClass: public detail::ClassTemplate<Gtk::impl::internal::SpinnerClassDef, Gtk::impl::internal::WidgetClass>
{
typedef SpinnerClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::SpinnerClassDef, Gtk::impl::internal::WidgetClass> super;

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

using SpinnerImpl = detail::ObjectImpl<Spinner, internal::SpinnerClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
