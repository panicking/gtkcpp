// AUTO-GENERATED

#ifndef _GI_GTK_RADIOBUTTONACCESSIBLE_HPP_
#define _GI_GTK_RADIOBUTTONACCESSIBLE_HPP_

#include "togglebuttonaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class RadioButtonAccessible;

namespace base {


#define GI_GTK_RADIOBUTTONACCESSIBLE_BASE base::RadioButtonAccessibleBase
class RadioButtonAccessibleBase : public Gtk::ToggleButtonAccessible
{
typedef Gtk::ToggleButtonAccessible super_type;
public:
typedef ::GtkRadioButtonAccessible BaseObjectType;

RadioButtonAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_radio_button_accessible_get_type(); } 

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/radiobuttonaccessible_extra_def.hpp>)
#include <gtk/radiobuttonaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/radiobuttonaccessible_extra.hpp>)
#include <gtk/radiobuttonaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class RadioButtonAccessible : public GI_GTK_RADIOBUTTONACCESSIBLE_BASE
{ typedef GI_GTK_RADIOBUTTONACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRadioButtonAccessible>
{ typedef Gtk::RadioButtonAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class RadioButtonAccessibleClassDef
{
typedef RadioButtonAccessibleClassDef self;
public:
typedef Gtk::RadioButtonAccessible instance_type;
typedef ::GtkRadioButtonAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class RadioButtonAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::RadioButtonAccessibleClassDef, Gtk::impl::internal::ToggleButtonAccessibleClass>
{
typedef RadioButtonAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::RadioButtonAccessibleClassDef, Gtk::impl::internal::ToggleButtonAccessibleClass> super;

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

using RadioButtonAccessibleImpl = detail::ObjectImpl<RadioButtonAccessible, internal::RadioButtonAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
