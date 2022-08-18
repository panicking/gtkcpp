// AUTO-GENERATED

#ifndef _GI_GTK_FLOWBOXACCESSIBLE_HPP_
#define _GI_GTK_FLOWBOXACCESSIBLE_HPP_

#include "containeraccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class FlowBoxAccessible;

namespace base {


#define GI_GTK_FLOWBOXACCESSIBLE_BASE base::FlowBoxAccessibleBase
class FlowBoxAccessibleBase : public Gtk::ContainerAccessible
{
typedef Gtk::ContainerAccessible super_type;
public:
typedef ::GtkFlowBoxAccessible BaseObjectType;

FlowBoxAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_flow_box_accessible_get_type(); } 

GI_INLINE_DECL Atk::Selection interface_ (gi::interface_tag<Atk::Selection>);

GI_INLINE_DECL operator Atk::Selection ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/flowboxaccessible_extra_def.hpp>)
#include <gtk/flowboxaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/flowboxaccessible_extra.hpp>)
#include <gtk/flowboxaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FlowBoxAccessible : public GI_GTK_FLOWBOXACCESSIBLE_BASE
{ typedef GI_GTK_FLOWBOXACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFlowBoxAccessible>
{ typedef Gtk::FlowBoxAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FlowBoxAccessibleClassDef
{
typedef FlowBoxAccessibleClassDef self;
public:
typedef Gtk::FlowBoxAccessible instance_type;
typedef ::GtkFlowBoxAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FlowBoxAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::FlowBoxAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass, Atk::impl::internal::SelectionIfaceClassImpl>
{
typedef FlowBoxAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::FlowBoxAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass, Atk::impl::internal::SelectionIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::SelectionIfaceClassImpl AtkSelectionIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using FlowBoxAccessibleImpl = detail::ObjectImpl<FlowBoxAccessible, internal::FlowBoxAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
