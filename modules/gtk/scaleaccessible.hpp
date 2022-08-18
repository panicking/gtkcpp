// AUTO-GENERATED

#ifndef _GI_GTK_SCALEACCESSIBLE_HPP_
#define _GI_GTK_SCALEACCESSIBLE_HPP_

#include "rangeaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class ScaleAccessible;

namespace base {


#define GI_GTK_SCALEACCESSIBLE_BASE base::ScaleAccessibleBase
class ScaleAccessibleBase : public Gtk::RangeAccessible
{
typedef Gtk::RangeAccessible super_type;
public:
typedef ::GtkScaleAccessible BaseObjectType;

ScaleAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_scale_accessible_get_type(); } 

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/scaleaccessible_extra_def.hpp>)
#include <gtk/scaleaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/scaleaccessible_extra.hpp>)
#include <gtk/scaleaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ScaleAccessible : public GI_GTK_SCALEACCESSIBLE_BASE
{ typedef GI_GTK_SCALEACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkScaleAccessible>
{ typedef Gtk::ScaleAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ScaleAccessibleClassDef
{
typedef ScaleAccessibleClassDef self;
public:
typedef Gtk::ScaleAccessible instance_type;
typedef ::GtkScaleAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ScaleAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::ScaleAccessibleClassDef, Gtk::impl::internal::RangeAccessibleClass>
{
typedef ScaleAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ScaleAccessibleClassDef, Gtk::impl::internal::RangeAccessibleClass> super;

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

using ScaleAccessibleImpl = detail::ObjectImpl<ScaleAccessible, internal::ScaleAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
