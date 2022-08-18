// AUTO-GENERATED

#ifndef _GI_GTK_SCROLLABLE_HPP_
#define _GI_GTK_SCROLLABLE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;
class Border;

class Scrollable;

namespace base {


#define GI_GTK_SCROLLABLE_BASE base::ScrollableBase
class ScrollableBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkScrollable BaseObjectType;

ScrollableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_scrollable_get_type(); } 

// gboolean gtk_scrollable_get_border (GtkScrollable* scrollable, GtkBorder* border);
// gboolean gtk_scrollable_get_border (::GtkScrollable* scrollable, ::GtkBorder* border);
GI_INLINE_DECL bool get_border (Gtk::Border & border) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::Border> get_border () noexcept;

// GtkAdjustment* gtk_scrollable_get_hadjustment (GtkScrollable* scrollable);
// ::GtkAdjustment* gtk_scrollable_get_hadjustment (::GtkScrollable* scrollable);
GI_INLINE_DECL Gtk::Adjustment get_hadjustment () noexcept;

// GtkScrollablePolicy gtk_scrollable_get_hscroll_policy (GtkScrollable* scrollable);
// ::GtkScrollablePolicy gtk_scrollable_get_hscroll_policy (::GtkScrollable* scrollable);
GI_INLINE_DECL Gtk::ScrollablePolicy get_hscroll_policy () noexcept;

// GtkAdjustment* gtk_scrollable_get_vadjustment (GtkScrollable* scrollable);
// ::GtkAdjustment* gtk_scrollable_get_vadjustment (::GtkScrollable* scrollable);
GI_INLINE_DECL Gtk::Adjustment get_vadjustment () noexcept;

// GtkScrollablePolicy gtk_scrollable_get_vscroll_policy (GtkScrollable* scrollable);
// ::GtkScrollablePolicy gtk_scrollable_get_vscroll_policy (::GtkScrollable* scrollable);
GI_INLINE_DECL Gtk::ScrollablePolicy get_vscroll_policy () noexcept;

// void gtk_scrollable_set_hadjustment (GtkScrollable* scrollable, GtkAdjustment* hadjustment);
// void gtk_scrollable_set_hadjustment (::GtkScrollable* scrollable, ::GtkAdjustment* hadjustment);
GI_INLINE_DECL void set_hadjustment (Gtk::Adjustment hadjustment) noexcept;
GI_INLINE_DECL void set_hadjustment () noexcept;

// void gtk_scrollable_set_hscroll_policy (GtkScrollable* scrollable, GtkScrollablePolicy policy);
// void gtk_scrollable_set_hscroll_policy (::GtkScrollable* scrollable, ::GtkScrollablePolicy policy);
GI_INLINE_DECL void set_hscroll_policy (Gtk::ScrollablePolicy policy) noexcept;

// void gtk_scrollable_set_vadjustment (GtkScrollable* scrollable, GtkAdjustment* vadjustment);
// void gtk_scrollable_set_vadjustment (::GtkScrollable* scrollable, ::GtkAdjustment* vadjustment);
GI_INLINE_DECL void set_vadjustment (Gtk::Adjustment vadjustment) noexcept;
GI_INLINE_DECL void set_vadjustment () noexcept;

// void gtk_scrollable_set_vscroll_policy (GtkScrollable* scrollable, GtkScrollablePolicy policy);
// void gtk_scrollable_set_vscroll_policy (::GtkScrollable* scrollable, ::GtkScrollablePolicy policy);
GI_INLINE_DECL void set_vscroll_policy (Gtk::ScrollablePolicy policy) noexcept;

gi::property_proxy<Gtk::Adjustment, base::ScrollableBase> property_hadjustment()
{ return gi::property_proxy<Gtk::Adjustment, base::ScrollableBase> (*this, "hadjustment"); }
const gi::property_proxy<Gtk::Adjustment, base::ScrollableBase> property_hadjustment() const
{ return gi::property_proxy<Gtk::Adjustment, base::ScrollableBase> (*this, "hadjustment"); }

gi::property_proxy<Gtk::ScrollablePolicy, base::ScrollableBase> property_hscroll_policy()
{ return gi::property_proxy<Gtk::ScrollablePolicy, base::ScrollableBase> (*this, "hscroll-policy"); }
const gi::property_proxy<Gtk::ScrollablePolicy, base::ScrollableBase> property_hscroll_policy() const
{ return gi::property_proxy<Gtk::ScrollablePolicy, base::ScrollableBase> (*this, "hscroll-policy"); }

gi::property_proxy<Gtk::Adjustment, base::ScrollableBase> property_vadjustment()
{ return gi::property_proxy<Gtk::Adjustment, base::ScrollableBase> (*this, "vadjustment"); }
const gi::property_proxy<Gtk::Adjustment, base::ScrollableBase> property_vadjustment() const
{ return gi::property_proxy<Gtk::Adjustment, base::ScrollableBase> (*this, "vadjustment"); }

gi::property_proxy<Gtk::ScrollablePolicy, base::ScrollableBase> property_vscroll_policy()
{ return gi::property_proxy<Gtk::ScrollablePolicy, base::ScrollableBase> (*this, "vscroll-policy"); }
const gi::property_proxy<Gtk::ScrollablePolicy, base::ScrollableBase> property_vscroll_policy() const
{ return gi::property_proxy<Gtk::ScrollablePolicy, base::ScrollableBase> (*this, "vscroll-policy"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/scrollable_extra_def.hpp>)
#include <gtk/scrollable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/scrollable_extra.hpp>)
#include <gtk/scrollable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Scrollable : public GI_GTK_SCROLLABLE_BASE
{ typedef GI_GTK_SCROLLABLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkScrollable>
{ typedef Gtk::Scrollable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ScrollableInterfaceDef
{
typedef ScrollableInterfaceDef self;
public:
typedef Gtk::Scrollable instance_type;
typedef ::GtkScrollableInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Scrollable::get_border (GtkScrollable* scrollable, GtkBorder* border);
// gboolean Scrollable::get_border (::GtkScrollable* scrollable, ::GtkBorder* border);
// SKIP; virtual-method out parameter not supported


};

using ScrollableImpl = detail::InterfaceImpl<ScrollableInterfaceDef>;

class ScrollableInterfaceClassImpl: public detail::InterfaceClassImpl<ScrollableImpl>
{
typedef ScrollableInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<ScrollableImpl> super;

protected:
using super::super;

// gboolean Scrollable::get_border (GtkScrollable* scrollable, GtkBorder* border);
// gboolean Scrollable::get_border (::GtkScrollable* scrollable, ::GtkBorder* border);
// SKIP; virtual-method out parameter not supported


};

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
