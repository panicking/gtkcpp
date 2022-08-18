// AUTO-GENERATED

#ifndef _GI_GTK_STACKACCESSIBLE_HPP_
#define _GI_GTK_STACKACCESSIBLE_HPP_

#include "containeraccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class StackAccessible;

namespace base {


#define GI_GTK_STACKACCESSIBLE_BASE base::StackAccessibleBase
class StackAccessibleBase : public Gtk::ContainerAccessible
{
typedef Gtk::ContainerAccessible super_type;
public:
typedef ::GtkStackAccessible BaseObjectType;

StackAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_stack_accessible_get_type(); } 

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stackaccessible_extra_def.hpp>)
#include <gtk/stackaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stackaccessible_extra.hpp>)
#include <gtk/stackaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class StackAccessible : public GI_GTK_STACKACCESSIBLE_BASE
{ typedef GI_GTK_STACKACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkStackAccessible>
{ typedef Gtk::StackAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class StackAccessibleClassDef
{
typedef StackAccessibleClassDef self;
public:
typedef Gtk::StackAccessible instance_type;
typedef ::GtkStackAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class StackAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::StackAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass>
{
typedef StackAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::StackAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass> super;

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

using StackAccessibleImpl = detail::ObjectImpl<StackAccessible, internal::StackAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
