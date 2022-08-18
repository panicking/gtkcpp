// AUTO-GENERATED

#ifndef _GI_GTK_FLOWBOXCHILD_HPP_
#define _GI_GTK_FLOWBOXCHILD_HPP_

#include "bin.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class FlowBoxChild;

namespace base {


#define GI_GTK_FLOWBOXCHILD_BASE base::FlowBoxChildBase
class FlowBoxChildBase : public Gtk::Bin
{
typedef Gtk::Bin super_type;
public:
typedef ::GtkFlowBoxChild BaseObjectType;

FlowBoxChildBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_flow_box_child_get_type(); } 

// GtkWidget* gtk_flow_box_child_new ();
// ::GtkFlowBoxChild* gtk_flow_box_child_new ();
static GI_INLINE_DECL Gtk::FlowBoxChild new_ () noexcept;

// void gtk_flow_box_child_changed (GtkFlowBoxChild* child);
// void gtk_flow_box_child_changed (::GtkFlowBoxChild* child);
GI_INLINE_DECL void changed () noexcept;

// gint gtk_flow_box_child_get_index (GtkFlowBoxChild* child);
// gint gtk_flow_box_child_get_index (::GtkFlowBoxChild* child);
GI_INLINE_DECL gint get_index () noexcept;

// gboolean gtk_flow_box_child_is_selected (GtkFlowBoxChild* child);
// gboolean gtk_flow_box_child_is_selected (::GtkFlowBoxChild* child);
GI_INLINE_DECL bool is_selected () noexcept;

// signal activate
gi::signal_proxy<void(Gtk::FlowBoxChild)> signal_activate()
{ return gi::signal_proxy<void(Gtk::FlowBoxChild)> (*this, "activate"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/flowboxchild_extra_def.hpp>)
#include <gtk/flowboxchild_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/flowboxchild_extra.hpp>)
#include <gtk/flowboxchild_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FlowBoxChild : public GI_GTK_FLOWBOXCHILD_BASE
{ typedef GI_GTK_FLOWBOXCHILD_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFlowBoxChild>
{ typedef Gtk::FlowBoxChild type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FlowBoxChildClassDef
{
typedef FlowBoxChildClassDef self;
public:
typedef Gtk::FlowBoxChild instance_type;
typedef ::GtkFlowBoxChildClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void FlowBoxChild::activate (GtkFlowBoxChild* child);
// void FlowBoxChild::activate (::GtkFlowBoxChild* child);
virtual void activate_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class FlowBoxChildClass: public detail::ClassTemplate<Gtk::impl::internal::FlowBoxChildClassDef, Gtk::impl::internal::BinClass>
{
typedef FlowBoxChildClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::FlowBoxChildClassDef, Gtk::impl::internal::BinClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void FlowBoxChild::activate (GtkFlowBoxChild* child);
// void FlowBoxChild::activate (::GtkFlowBoxChild* child);
GI_INLINE_DECL void activate_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using FlowBoxChildImpl = detail::ObjectImpl<FlowBoxChild, internal::FlowBoxChildClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
