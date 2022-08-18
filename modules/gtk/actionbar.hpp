// AUTO-GENERATED

#ifndef _GI_GTK_ACTIONBAR_HPP_
#define _GI_GTK_ACTIONBAR_HPP_

#include "bin.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class ActionBar;

namespace base {


#define GI_GTK_ACTIONBAR_BASE base::ActionBarBase
class ActionBarBase : public Gtk::Bin
{
typedef Gtk::Bin super_type;
public:
typedef ::GtkActionBar BaseObjectType;

ActionBarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_action_bar_get_type(); } 

// GtkWidget* gtk_action_bar_new ();
// ::GtkActionBar* gtk_action_bar_new ();
static GI_INLINE_DECL Gtk::ActionBar new_ () noexcept;

// GtkWidget* gtk_action_bar_get_center_widget (GtkActionBar* action_bar);
// ::GtkWidget* gtk_action_bar_get_center_widget (::GtkActionBar* action_bar);
GI_INLINE_DECL Gtk::Widget get_center_widget () noexcept;

// void gtk_action_bar_pack_end (GtkActionBar* action_bar, GtkWidget* child);
// void gtk_action_bar_pack_end (::GtkActionBar* action_bar, ::GtkWidget* child);
GI_INLINE_DECL void pack_end (Gtk::Widget child) noexcept;

// void gtk_action_bar_pack_start (GtkActionBar* action_bar, GtkWidget* child);
// void gtk_action_bar_pack_start (::GtkActionBar* action_bar, ::GtkWidget* child);
GI_INLINE_DECL void pack_start (Gtk::Widget child) noexcept;

// void gtk_action_bar_set_center_widget (GtkActionBar* action_bar, GtkWidget* center_widget);
// void gtk_action_bar_set_center_widget (::GtkActionBar* action_bar, ::GtkWidget* center_widget);
GI_INLINE_DECL void set_center_widget (Gtk::Widget center_widget) noexcept;
GI_INLINE_DECL void set_center_widget () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/actionbar_extra_def.hpp>)
#include <gtk/actionbar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/actionbar_extra.hpp>)
#include <gtk/actionbar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ActionBar : public GI_GTK_ACTIONBAR_BASE
{ typedef GI_GTK_ACTIONBAR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkActionBar>
{ typedef Gtk::ActionBar type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ActionBarClassDef
{
typedef ActionBarClassDef self;
public:
typedef Gtk::ActionBar instance_type;
typedef ::GtkActionBarClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ActionBarClass: public detail::ClassTemplate<Gtk::impl::internal::ActionBarClassDef, Gtk::impl::internal::BinClass>
{
typedef ActionBarClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ActionBarClassDef, Gtk::impl::internal::BinClass> super;

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

using ActionBarImpl = detail::ObjectImpl<ActionBar, internal::ActionBarClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
