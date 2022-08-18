// AUTO-GENERATED

#ifndef _GI_GTK_STATUSBARACCESSIBLE_HPP_
#define _GI_GTK_STATUSBARACCESSIBLE_HPP_

#include "containeraccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class StatusbarAccessible;

namespace base {


#define GI_GTK_STATUSBARACCESSIBLE_BASE base::StatusbarAccessibleBase
class StatusbarAccessibleBase : public Gtk::ContainerAccessible
{
typedef Gtk::ContainerAccessible super_type;
public:
typedef ::GtkStatusbarAccessible BaseObjectType;

StatusbarAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_statusbar_accessible_get_type(); } 

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/statusbaraccessible_extra_def.hpp>)
#include <gtk/statusbaraccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/statusbaraccessible_extra.hpp>)
#include <gtk/statusbaraccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class StatusbarAccessible : public GI_GTK_STATUSBARACCESSIBLE_BASE
{ typedef GI_GTK_STATUSBARACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkStatusbarAccessible>
{ typedef Gtk::StatusbarAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class StatusbarAccessibleClassDef
{
typedef StatusbarAccessibleClassDef self;
public:
typedef Gtk::StatusbarAccessible instance_type;
typedef ::GtkStatusbarAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class StatusbarAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::StatusbarAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass>
{
typedef StatusbarAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::StatusbarAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass> super;

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

using StatusbarAccessibleImpl = detail::ObjectImpl<StatusbarAccessible, internal::StatusbarAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
