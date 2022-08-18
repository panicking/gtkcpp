// AUTO-GENERATED

#ifndef _GI_GTK_STACKSWITCHER_HPP_
#define _GI_GTK_STACKSWITCHER_HPP_

#include "box.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Stack;

class StackSwitcher;

namespace base {


#define GI_GTK_STACKSWITCHER_BASE base::StackSwitcherBase
class StackSwitcherBase : public Gtk::Box
{
typedef Gtk::Box super_type;
public:
typedef ::GtkStackSwitcher BaseObjectType;

StackSwitcherBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_stack_switcher_get_type(); } 

// GtkWidget* gtk_stack_switcher_new ();
// ::GtkStackSwitcher* gtk_stack_switcher_new ();
static GI_INLINE_DECL Gtk::StackSwitcher new_ () noexcept;

// GtkStack* gtk_stack_switcher_get_stack (GtkStackSwitcher* switcher);
// ::GtkStack* gtk_stack_switcher_get_stack (::GtkStackSwitcher* switcher);
GI_INLINE_DECL Gtk::Stack get_stack () noexcept;

// void gtk_stack_switcher_set_stack (GtkStackSwitcher* switcher, GtkStack* stack);
// void gtk_stack_switcher_set_stack (::GtkStackSwitcher* switcher, ::GtkStack* stack);
GI_INLINE_DECL void set_stack (Gtk::Stack stack) noexcept;
GI_INLINE_DECL void set_stack () noexcept;

gi::property_proxy<gint, base::StackSwitcherBase> property_icon_size()
{ return gi::property_proxy<gint, base::StackSwitcherBase> (*this, "icon-size"); }
const gi::property_proxy<gint, base::StackSwitcherBase> property_icon_size() const
{ return gi::property_proxy<gint, base::StackSwitcherBase> (*this, "icon-size"); }

gi::property_proxy<Gtk::Stack, base::StackSwitcherBase> property_stack()
{ return gi::property_proxy<Gtk::Stack, base::StackSwitcherBase> (*this, "stack"); }
const gi::property_proxy<Gtk::Stack, base::StackSwitcherBase> property_stack() const
{ return gi::property_proxy<Gtk::Stack, base::StackSwitcherBase> (*this, "stack"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stackswitcher_extra_def.hpp>)
#include <gtk/stackswitcher_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stackswitcher_extra.hpp>)
#include <gtk/stackswitcher_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class StackSwitcher : public GI_GTK_STACKSWITCHER_BASE
{ typedef GI_GTK_STACKSWITCHER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkStackSwitcher>
{ typedef Gtk::StackSwitcher type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class StackSwitcherClassDef
{
typedef StackSwitcherClassDef self;
public:
typedef Gtk::StackSwitcher instance_type;
typedef ::GtkStackSwitcherClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class StackSwitcherClass: public detail::ClassTemplate<Gtk::impl::internal::StackSwitcherClassDef, Gtk::impl::internal::BoxClass>
{
typedef StackSwitcherClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::StackSwitcherClassDef, Gtk::impl::internal::BoxClass> super;

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

using StackSwitcherImpl = detail::ObjectImpl<StackSwitcher, internal::StackSwitcherClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
