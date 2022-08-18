// AUTO-GENERATED

#ifndef _GI_GTK_STACK_HPP_
#define _GI_GTK_STACK_HPP_

#include "container.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class Stack;

namespace base {


#define GI_GTK_STACK_BASE base::StackBase
class StackBase : public Gtk::Container
{
typedef Gtk::Container super_type;
public:
typedef ::GtkStack BaseObjectType;

StackBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_stack_get_type(); } 

// GtkWidget* gtk_stack_new ();
// ::GtkStack* gtk_stack_new ();
static GI_INLINE_DECL Gtk::Stack new_ () noexcept;

// void gtk_stack_add_named (GtkStack* stack, GtkWidget* child, const gchar* name);
// void gtk_stack_add_named (::GtkStack* stack, ::GtkWidget* child, const char* name);
GI_INLINE_DECL void add_named (Gtk::Widget child, const std::string & name) noexcept;

// void gtk_stack_add_titled (GtkStack* stack, GtkWidget* child, const gchar* name, const gchar* title);
// void gtk_stack_add_titled (::GtkStack* stack, ::GtkWidget* child, const char* name, const char* title);
GI_INLINE_DECL void add_titled (Gtk::Widget child, const std::string & name, const std::string & title) noexcept;

// GtkWidget* gtk_stack_get_child_by_name (GtkStack* stack, const gchar* name);
// ::GtkWidget* gtk_stack_get_child_by_name (::GtkStack* stack, const char* name);
GI_INLINE_DECL Gtk::Widget get_child_by_name (const std::string & name) noexcept;

// gboolean gtk_stack_get_hhomogeneous (GtkStack* stack);
// gboolean gtk_stack_get_hhomogeneous (::GtkStack* stack);
GI_INLINE_DECL bool get_hhomogeneous () noexcept;

// gboolean gtk_stack_get_homogeneous (GtkStack* stack);
// gboolean gtk_stack_get_homogeneous (::GtkStack* stack);
GI_INLINE_DECL bool get_homogeneous () noexcept;

// gboolean gtk_stack_get_interpolate_size (GtkStack* stack);
// gboolean gtk_stack_get_interpolate_size (::GtkStack* stack);
GI_INLINE_DECL bool get_interpolate_size () noexcept;

// guint gtk_stack_get_transition_duration (GtkStack* stack);
// guint gtk_stack_get_transition_duration (::GtkStack* stack);
GI_INLINE_DECL guint get_transition_duration () noexcept;

// gboolean gtk_stack_get_transition_running (GtkStack* stack);
// gboolean gtk_stack_get_transition_running (::GtkStack* stack);
GI_INLINE_DECL bool get_transition_running () noexcept;

// GtkStackTransitionType gtk_stack_get_transition_type (GtkStack* stack);
// ::GtkStackTransitionType gtk_stack_get_transition_type (::GtkStack* stack);
GI_INLINE_DECL Gtk::StackTransitionType get_transition_type () noexcept;

// gboolean gtk_stack_get_vhomogeneous (GtkStack* stack);
// gboolean gtk_stack_get_vhomogeneous (::GtkStack* stack);
GI_INLINE_DECL bool get_vhomogeneous () noexcept;

// GtkWidget* gtk_stack_get_visible_child (GtkStack* stack);
// ::GtkWidget* gtk_stack_get_visible_child (::GtkStack* stack);
GI_INLINE_DECL Gtk::Widget get_visible_child () noexcept;

// const gchar* gtk_stack_get_visible_child_name (GtkStack* stack);
// const char* gtk_stack_get_visible_child_name (::GtkStack* stack);
GI_INLINE_DECL std::string get_visible_child_name () noexcept;

// void gtk_stack_set_hhomogeneous (GtkStack* stack, gboolean hhomogeneous);
// void gtk_stack_set_hhomogeneous (::GtkStack* stack, gboolean hhomogeneous);
GI_INLINE_DECL void set_hhomogeneous (gboolean hhomogeneous) noexcept;

// void gtk_stack_set_homogeneous (GtkStack* stack, gboolean homogeneous);
// void gtk_stack_set_homogeneous (::GtkStack* stack, gboolean homogeneous);
GI_INLINE_DECL void set_homogeneous (gboolean homogeneous) noexcept;

// void gtk_stack_set_interpolate_size (GtkStack* stack, gboolean interpolate_size);
// void gtk_stack_set_interpolate_size (::GtkStack* stack, gboolean interpolate_size);
GI_INLINE_DECL void set_interpolate_size (gboolean interpolate_size) noexcept;

// void gtk_stack_set_transition_duration (GtkStack* stack, guint duration);
// void gtk_stack_set_transition_duration (::GtkStack* stack, guint duration);
GI_INLINE_DECL void set_transition_duration (guint duration) noexcept;

// void gtk_stack_set_transition_type (GtkStack* stack, GtkStackTransitionType transition);
// void gtk_stack_set_transition_type (::GtkStack* stack, ::GtkStackTransitionType transition);
GI_INLINE_DECL void set_transition_type (Gtk::StackTransitionType transition) noexcept;

// void gtk_stack_set_vhomogeneous (GtkStack* stack, gboolean vhomogeneous);
// void gtk_stack_set_vhomogeneous (::GtkStack* stack, gboolean vhomogeneous);
GI_INLINE_DECL void set_vhomogeneous (gboolean vhomogeneous) noexcept;

// void gtk_stack_set_visible_child (GtkStack* stack, GtkWidget* child);
// void gtk_stack_set_visible_child (::GtkStack* stack, ::GtkWidget* child);
GI_INLINE_DECL void set_visible_child (Gtk::Widget child) noexcept;

// void gtk_stack_set_visible_child_full (GtkStack* stack, const gchar* name, GtkStackTransitionType transition);
// void gtk_stack_set_visible_child_full (::GtkStack* stack, const char* name, ::GtkStackTransitionType transition);
GI_INLINE_DECL void set_visible_child_full (const std::string & name, Gtk::StackTransitionType transition) noexcept;

// void gtk_stack_set_visible_child_name (GtkStack* stack, const gchar* name);
// void gtk_stack_set_visible_child_name (::GtkStack* stack, const char* name);
GI_INLINE_DECL void set_visible_child_name (const std::string & name) noexcept;

gi::property_proxy<bool, base::StackBase> property_hhomogeneous()
{ return gi::property_proxy<bool, base::StackBase> (*this, "hhomogeneous"); }
const gi::property_proxy<bool, base::StackBase> property_hhomogeneous() const
{ return gi::property_proxy<bool, base::StackBase> (*this, "hhomogeneous"); }

gi::property_proxy<bool, base::StackBase> property_homogeneous()
{ return gi::property_proxy<bool, base::StackBase> (*this, "homogeneous"); }
const gi::property_proxy<bool, base::StackBase> property_homogeneous() const
{ return gi::property_proxy<bool, base::StackBase> (*this, "homogeneous"); }

gi::property_proxy<bool, base::StackBase> property_interpolate_size()
{ return gi::property_proxy<bool, base::StackBase> (*this, "interpolate-size"); }
const gi::property_proxy<bool, base::StackBase> property_interpolate_size() const
{ return gi::property_proxy<bool, base::StackBase> (*this, "interpolate-size"); }

gi::property_proxy<guint, base::StackBase> property_transition_duration()
{ return gi::property_proxy<guint, base::StackBase> (*this, "transition-duration"); }
const gi::property_proxy<guint, base::StackBase> property_transition_duration() const
{ return gi::property_proxy<guint, base::StackBase> (*this, "transition-duration"); }

gi::property_proxy<bool, base::StackBase> property_transition_running()
{ return gi::property_proxy<bool, base::StackBase> (*this, "transition-running"); }
const gi::property_proxy<bool, base::StackBase> property_transition_running() const
{ return gi::property_proxy<bool, base::StackBase> (*this, "transition-running"); }

gi::property_proxy<Gtk::StackTransitionType, base::StackBase> property_transition_type()
{ return gi::property_proxy<Gtk::StackTransitionType, base::StackBase> (*this, "transition-type"); }
const gi::property_proxy<Gtk::StackTransitionType, base::StackBase> property_transition_type() const
{ return gi::property_proxy<Gtk::StackTransitionType, base::StackBase> (*this, "transition-type"); }

gi::property_proxy<bool, base::StackBase> property_vhomogeneous()
{ return gi::property_proxy<bool, base::StackBase> (*this, "vhomogeneous"); }
const gi::property_proxy<bool, base::StackBase> property_vhomogeneous() const
{ return gi::property_proxy<bool, base::StackBase> (*this, "vhomogeneous"); }

gi::property_proxy<Gtk::Widget, base::StackBase> property_visible_child()
{ return gi::property_proxy<Gtk::Widget, base::StackBase> (*this, "visible-child"); }
const gi::property_proxy<Gtk::Widget, base::StackBase> property_visible_child() const
{ return gi::property_proxy<Gtk::Widget, base::StackBase> (*this, "visible-child"); }

gi::property_proxy<std::string, base::StackBase> property_visible_child_name()
{ return gi::property_proxy<std::string, base::StackBase> (*this, "visible-child-name"); }
const gi::property_proxy<std::string, base::StackBase> property_visible_child_name() const
{ return gi::property_proxy<std::string, base::StackBase> (*this, "visible-child-name"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stack_extra_def.hpp>)
#include <gtk/stack_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stack_extra.hpp>)
#include <gtk/stack_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Stack : public GI_GTK_STACK_BASE
{ typedef GI_GTK_STACK_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkStack>
{ typedef Gtk::Stack type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class StackClassDef
{
typedef StackClassDef self;
public:
typedef Gtk::Stack instance_type;
typedef ::GtkStackClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class StackClass: public detail::ClassTemplate<Gtk::impl::internal::StackClassDef, Gtk::impl::internal::ContainerClass>
{
typedef StackClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::StackClassDef, Gtk::impl::internal::ContainerClass> super;

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

using StackImpl = detail::ObjectImpl<Stack, internal::StackClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
