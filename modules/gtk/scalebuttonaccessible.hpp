// AUTO-GENERATED

#ifndef _GI_GTK_SCALEBUTTONACCESSIBLE_HPP_
#define _GI_GTK_SCALEBUTTONACCESSIBLE_HPP_

#include "buttonaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class ScaleButtonAccessible;

namespace base {


#define GI_GTK_SCALEBUTTONACCESSIBLE_BASE base::ScaleButtonAccessibleBase
class ScaleButtonAccessibleBase : public Gtk::ButtonAccessible
{
typedef Gtk::ButtonAccessible super_type;
public:
typedef ::GtkScaleButtonAccessible BaseObjectType;

ScaleButtonAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_scale_button_accessible_get_type(); } 

GI_INLINE_DECL Atk::Value interface_ (gi::interface_tag<Atk::Value>);

GI_INLINE_DECL operator Atk::Value ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/scalebuttonaccessible_extra_def.hpp>)
#include <gtk/scalebuttonaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/scalebuttonaccessible_extra.hpp>)
#include <gtk/scalebuttonaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ScaleButtonAccessible : public GI_GTK_SCALEBUTTONACCESSIBLE_BASE
{ typedef GI_GTK_SCALEBUTTONACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkScaleButtonAccessible>
{ typedef Gtk::ScaleButtonAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ScaleButtonAccessibleClassDef
{
typedef ScaleButtonAccessibleClassDef self;
public:
typedef Gtk::ScaleButtonAccessible instance_type;
typedef ::GtkScaleButtonAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ScaleButtonAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::ScaleButtonAccessibleClassDef, Gtk::impl::internal::ButtonAccessibleClass, Atk::impl::internal::ValueIfaceClassImpl>
{
typedef ScaleButtonAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ScaleButtonAccessibleClassDef, Gtk::impl::internal::ButtonAccessibleClass, Atk::impl::internal::ValueIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::ValueIfaceClassImpl AtkValueIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using ScaleButtonAccessibleImpl = detail::ObjectImpl<ScaleButtonAccessible, internal::ScaleButtonAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
