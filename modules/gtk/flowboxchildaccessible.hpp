// AUTO-GENERATED

#ifndef _GI_GTK_FLOWBOXCHILDACCESSIBLE_HPP_
#define _GI_GTK_FLOWBOXCHILDACCESSIBLE_HPP_

#include "containeraccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class FlowBoxChildAccessible;

namespace base {


#define GI_GTK_FLOWBOXCHILDACCESSIBLE_BASE base::FlowBoxChildAccessibleBase
class FlowBoxChildAccessibleBase : public Gtk::ContainerAccessible
{
typedef Gtk::ContainerAccessible super_type;
public:
typedef ::GtkFlowBoxChildAccessible BaseObjectType;

FlowBoxChildAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_flow_box_child_accessible_get_type(); } 

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/flowboxchildaccessible_extra_def.hpp>)
#include <gtk/flowboxchildaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/flowboxchildaccessible_extra.hpp>)
#include <gtk/flowboxchildaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FlowBoxChildAccessible : public GI_GTK_FLOWBOXCHILDACCESSIBLE_BASE
{ typedef GI_GTK_FLOWBOXCHILDACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFlowBoxChildAccessible>
{ typedef Gtk::FlowBoxChildAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FlowBoxChildAccessibleClassDef
{
typedef FlowBoxChildAccessibleClassDef self;
public:
typedef Gtk::FlowBoxChildAccessible instance_type;
typedef ::GtkFlowBoxChildAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FlowBoxChildAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::FlowBoxChildAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass>
{
typedef FlowBoxChildAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::FlowBoxChildAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass> super;

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

using FlowBoxChildAccessibleImpl = detail::ObjectImpl<FlowBoxChildAccessible, internal::FlowBoxChildAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
