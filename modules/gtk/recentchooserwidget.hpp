// AUTO-GENERATED

#ifndef _GI_GTK_RECENTCHOOSERWIDGET_HPP_
#define _GI_GTK_RECENTCHOOSERWIDGET_HPP_

#include "box.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class RecentChooser;
class RecentManager;

class RecentChooserWidget;

namespace base {


#define GI_GTK_RECENTCHOOSERWIDGET_BASE base::RecentChooserWidgetBase
class RecentChooserWidgetBase : public Gtk::Box
{
typedef Gtk::Box super_type;
public:
typedef ::GtkRecentChooserWidget BaseObjectType;

RecentChooserWidgetBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_recent_chooser_widget_get_type(); } 

GI_INLINE_DECL Gtk::RecentChooser interface_ (gi::interface_tag<Gtk::RecentChooser>);

GI_INLINE_DECL operator Gtk::RecentChooser ();

// GtkWidget* gtk_recent_chooser_widget_new ();
// ::GtkRecentChooserWidget* gtk_recent_chooser_widget_new ();
static GI_INLINE_DECL Gtk::RecentChooserWidget new_ () noexcept;

// GtkWidget* gtk_recent_chooser_widget_new_for_manager (GtkRecentManager* manager);
// ::GtkRecentChooserWidget* gtk_recent_chooser_widget_new_for_manager (::GtkRecentManager* manager);
static GI_INLINE_DECL Gtk::RecentChooserWidget new_for_manager (Gtk::RecentManager manager) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/recentchooserwidget_extra_def.hpp>)
#include <gtk/recentchooserwidget_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/recentchooserwidget_extra.hpp>)
#include <gtk/recentchooserwidget_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class RecentChooserWidget : public GI_GTK_RECENTCHOOSERWIDGET_BASE
{ typedef GI_GTK_RECENTCHOOSERWIDGET_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRecentChooserWidget>
{ typedef Gtk::RecentChooserWidget type; }; 

} // namespace repository

} // namespace gi

#include "recentchooser.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class RecentChooserWidgetClassDef
{
typedef RecentChooserWidgetClassDef self;
public:
typedef Gtk::RecentChooserWidget instance_type;
typedef ::GtkRecentChooserWidgetClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class RecentChooserWidgetClass: public detail::ClassTemplate<Gtk::impl::internal::RecentChooserWidgetClassDef, Gtk::impl::internal::BoxClass, Gtk::impl::internal::RecentChooserIfaceClassImpl>
{
typedef RecentChooserWidgetClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::RecentChooserWidgetClassDef, Gtk::impl::internal::BoxClass, Gtk::impl::internal::RecentChooserIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::RecentChooserIfaceClassImpl GtkRecentChooserIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using RecentChooserWidgetImpl = detail::ObjectImpl<RecentChooserWidget, internal::RecentChooserWidgetClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
