// AUTO-GENERATED

#ifndef _GI_GTK_TOGGLEBUTTONACCESSIBLE_HPP_
#define _GI_GTK_TOGGLEBUTTONACCESSIBLE_HPP_

#include "buttonaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class ToggleButtonAccessible;

namespace base {


#define GI_GTK_TOGGLEBUTTONACCESSIBLE_BASE base::ToggleButtonAccessibleBase
class ToggleButtonAccessibleBase : public Gtk::ButtonAccessible
{
typedef Gtk::ButtonAccessible super_type;
public:
typedef ::GtkToggleButtonAccessible BaseObjectType;

ToggleButtonAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_toggle_button_accessible_get_type(); } 

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/togglebuttonaccessible_extra_def.hpp>)
#include <gtk/togglebuttonaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/togglebuttonaccessible_extra.hpp>)
#include <gtk/togglebuttonaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ToggleButtonAccessible : public GI_GTK_TOGGLEBUTTONACCESSIBLE_BASE
{ typedef GI_GTK_TOGGLEBUTTONACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkToggleButtonAccessible>
{ typedef Gtk::ToggleButtonAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ToggleButtonAccessibleClassDef
{
typedef ToggleButtonAccessibleClassDef self;
public:
typedef Gtk::ToggleButtonAccessible instance_type;
typedef ::GtkToggleButtonAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ToggleButtonAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::ToggleButtonAccessibleClassDef, Gtk::impl::internal::ButtonAccessibleClass>
{
typedef ToggleButtonAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ToggleButtonAccessibleClassDef, Gtk::impl::internal::ButtonAccessibleClass> super;

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

using ToggleButtonAccessibleImpl = detail::ObjectImpl<ToggleButtonAccessible, internal::ToggleButtonAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
