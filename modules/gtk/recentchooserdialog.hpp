// AUTO-GENERATED

#ifndef _GI_GTK_RECENTCHOOSERDIALOG_HPP_
#define _GI_GTK_RECENTCHOOSERDIALOG_HPP_

#include "dialog.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class RecentChooser;
class RecentManager;
class Window;

class RecentChooserDialog;

namespace base {


#define GI_GTK_RECENTCHOOSERDIALOG_BASE base::RecentChooserDialogBase
class RecentChooserDialogBase : public Gtk::Dialog
{
typedef Gtk::Dialog super_type;
public:
typedef ::GtkRecentChooserDialog BaseObjectType;

RecentChooserDialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_recent_chooser_dialog_get_type(); } 

GI_INLINE_DECL Gtk::RecentChooser interface_ (gi::interface_tag<Gtk::RecentChooser>);

GI_INLINE_DECL operator Gtk::RecentChooser ();

// GtkWidget* gtk_recent_chooser_dialog_new (const gchar* title, GtkWindow* parent, const gchar* first_button_text);
// ::GtkRecentChooserDialog* gtk_recent_chooser_dialog_new (const char* title, ::GtkWindow* parent, const char* first_button_text);
// IGNORE; not introspectable, varargs not supported

// GtkWidget* gtk_recent_chooser_dialog_new_for_manager (const gchar* title, GtkWindow* parent, GtkRecentManager* manager, const gchar* first_button_text);
// ::GtkRecentChooserDialog* gtk_recent_chooser_dialog_new_for_manager (const char* title, ::GtkWindow* parent, ::GtkRecentManager* manager, const char* first_button_text);
// IGNORE; not introspectable, varargs not supported

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/recentchooserdialog_extra_def.hpp>)
#include <gtk/recentchooserdialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/recentchooserdialog_extra.hpp>)
#include <gtk/recentchooserdialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class RecentChooserDialog : public GI_GTK_RECENTCHOOSERDIALOG_BASE
{ typedef GI_GTK_RECENTCHOOSERDIALOG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRecentChooserDialog>
{ typedef Gtk::RecentChooserDialog type; }; 

} // namespace repository

} // namespace gi

#include "recentchooser.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class RecentChooserDialogClassDef
{
typedef RecentChooserDialogClassDef self;
public:
typedef Gtk::RecentChooserDialog instance_type;
typedef ::GtkRecentChooserDialogClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class RecentChooserDialogClass: public detail::ClassTemplate<Gtk::impl::internal::RecentChooserDialogClassDef, Gtk::impl::internal::DialogClass, Gtk::impl::internal::RecentChooserIfaceClassImpl>
{
typedef RecentChooserDialogClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::RecentChooserDialogClassDef, Gtk::impl::internal::DialogClass, Gtk::impl::internal::RecentChooserIfaceClassImpl> super;

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

using RecentChooserDialogImpl = detail::ObjectImpl<RecentChooserDialog, internal::RecentChooserDialogClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
