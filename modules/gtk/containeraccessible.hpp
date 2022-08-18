// AUTO-GENERATED

#ifndef _GI_GTK_CONTAINERACCESSIBLE_HPP_
#define _GI_GTK_CONTAINERACCESSIBLE_HPP_

#include "widgetaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class ContainerAccessible;

namespace base {


#define GI_GTK_CONTAINERACCESSIBLE_BASE base::ContainerAccessibleBase
class ContainerAccessibleBase : public Gtk::WidgetAccessible
{
typedef Gtk::WidgetAccessible super_type;
public:
typedef ::GtkContainerAccessible BaseObjectType;

ContainerAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_container_accessible_get_type(); } 

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/containeraccessible_extra_def.hpp>)
#include <gtk/containeraccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/containeraccessible_extra.hpp>)
#include <gtk/containeraccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ContainerAccessible : public GI_GTK_CONTAINERACCESSIBLE_BASE
{ typedef GI_GTK_CONTAINERACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkContainerAccessible>
{ typedef Gtk::ContainerAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ContainerAccessibleClassDef
{
typedef ContainerAccessibleClassDef self;
public:
typedef Gtk::ContainerAccessible instance_type;
typedef ::GtkContainerAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ContainerAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::ContainerAccessibleClassDef, Gtk::impl::internal::WidgetAccessibleClass>
{
typedef ContainerAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ContainerAccessibleClassDef, Gtk::impl::internal::WidgetAccessibleClass> super;

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

using ContainerAccessibleImpl = detail::ObjectImpl<ContainerAccessible, internal::ContainerAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
