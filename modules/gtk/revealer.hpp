// AUTO-GENERATED

#ifndef _GI_GTK_REVEALER_HPP_
#define _GI_GTK_REVEALER_HPP_

#include "bin.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class Revealer;

namespace base {


#define GI_GTK_REVEALER_BASE base::RevealerBase
class RevealerBase : public Gtk::Bin
{
typedef Gtk::Bin super_type;
public:
typedef ::GtkRevealer BaseObjectType;

RevealerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_revealer_get_type(); } 

// GtkWidget* gtk_revealer_new ();
// ::GtkRevealer* gtk_revealer_new ();
static GI_INLINE_DECL Gtk::Revealer new_ () noexcept;

// gboolean gtk_revealer_get_child_revealed (GtkRevealer* revealer);
// gboolean gtk_revealer_get_child_revealed (::GtkRevealer* revealer);
GI_INLINE_DECL bool get_child_revealed () noexcept;

// gboolean gtk_revealer_get_reveal_child (GtkRevealer* revealer);
// gboolean gtk_revealer_get_reveal_child (::GtkRevealer* revealer);
GI_INLINE_DECL bool get_reveal_child () noexcept;

// guint gtk_revealer_get_transition_duration (GtkRevealer* revealer);
// guint gtk_revealer_get_transition_duration (::GtkRevealer* revealer);
GI_INLINE_DECL guint get_transition_duration () noexcept;

// GtkRevealerTransitionType gtk_revealer_get_transition_type (GtkRevealer* revealer);
// ::GtkRevealerTransitionType gtk_revealer_get_transition_type (::GtkRevealer* revealer);
GI_INLINE_DECL Gtk::RevealerTransitionType get_transition_type () noexcept;

// void gtk_revealer_set_reveal_child (GtkRevealer* revealer, gboolean reveal_child);
// void gtk_revealer_set_reveal_child (::GtkRevealer* revealer, gboolean reveal_child);
GI_INLINE_DECL void set_reveal_child (gboolean reveal_child) noexcept;

// void gtk_revealer_set_transition_duration (GtkRevealer* revealer, guint duration);
// void gtk_revealer_set_transition_duration (::GtkRevealer* revealer, guint duration);
GI_INLINE_DECL void set_transition_duration (guint duration) noexcept;

// void gtk_revealer_set_transition_type (GtkRevealer* revealer, GtkRevealerTransitionType transition);
// void gtk_revealer_set_transition_type (::GtkRevealer* revealer, ::GtkRevealerTransitionType transition);
GI_INLINE_DECL void set_transition_type (Gtk::RevealerTransitionType transition) noexcept;

gi::property_proxy<bool, base::RevealerBase> property_child_revealed()
{ return gi::property_proxy<bool, base::RevealerBase> (*this, "child-revealed"); }
const gi::property_proxy<bool, base::RevealerBase> property_child_revealed() const
{ return gi::property_proxy<bool, base::RevealerBase> (*this, "child-revealed"); }

gi::property_proxy<bool, base::RevealerBase> property_reveal_child()
{ return gi::property_proxy<bool, base::RevealerBase> (*this, "reveal-child"); }
const gi::property_proxy<bool, base::RevealerBase> property_reveal_child() const
{ return gi::property_proxy<bool, base::RevealerBase> (*this, "reveal-child"); }

gi::property_proxy<guint, base::RevealerBase> property_transition_duration()
{ return gi::property_proxy<guint, base::RevealerBase> (*this, "transition-duration"); }
const gi::property_proxy<guint, base::RevealerBase> property_transition_duration() const
{ return gi::property_proxy<guint, base::RevealerBase> (*this, "transition-duration"); }

gi::property_proxy<Gtk::RevealerTransitionType, base::RevealerBase> property_transition_type()
{ return gi::property_proxy<Gtk::RevealerTransitionType, base::RevealerBase> (*this, "transition-type"); }
const gi::property_proxy<Gtk::RevealerTransitionType, base::RevealerBase> property_transition_type() const
{ return gi::property_proxy<Gtk::RevealerTransitionType, base::RevealerBase> (*this, "transition-type"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/revealer_extra_def.hpp>)
#include <gtk/revealer_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/revealer_extra.hpp>)
#include <gtk/revealer_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Revealer : public GI_GTK_REVEALER_BASE
{ typedef GI_GTK_REVEALER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRevealer>
{ typedef Gtk::Revealer type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class RevealerClassDef
{
typedef RevealerClassDef self;
public:
typedef Gtk::Revealer instance_type;
typedef ::GtkRevealerClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class RevealerClass: public detail::ClassTemplate<Gtk::impl::internal::RevealerClassDef, Gtk::impl::internal::BinClass>
{
typedef RevealerClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::RevealerClassDef, Gtk::impl::internal::BinClass> super;

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

using RevealerImpl = detail::ObjectImpl<Revealer, internal::RevealerClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
