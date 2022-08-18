// AUTO-GENERATED

#ifndef _GI_GTK_DIALOG_HPP_
#define _GI_GTK_DIALOG_HPP_

#include "window.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Box;
class HeaderBar;
class Widget;
class Window;

class Dialog;

namespace base {


#define GI_GTK_DIALOG_BASE base::DialogBase
class DialogBase : public Gtk::Window
{
typedef Gtk::Window super_type;
public:
typedef ::GtkDialog BaseObjectType;

DialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_dialog_get_type(); } 

// GtkWidget* gtk_dialog_new ();
// ::GtkDialog* gtk_dialog_new ();
static GI_INLINE_DECL Gtk::Dialog new_ () noexcept;

// GtkWidget* gtk_dialog_new_with_buttons (const gchar* title, GtkWindow* parent, GtkDialogFlags flags, const gchar* first_button_text);
// ::GtkDialog* gtk_dialog_new_with_buttons (const char* title, ::GtkWindow* parent, ::GtkDialogFlags flags, const char* first_button_text);
// IGNORE; not introspectable, varargs not supported

// void gtk_dialog_add_action_widget (GtkDialog* dialog, GtkWidget* child, gint response_id);
// void gtk_dialog_add_action_widget (::GtkDialog* dialog, ::GtkWidget* child, gint response_id);
GI_INLINE_DECL void add_action_widget (Gtk::Widget child, gint response_id) noexcept;

// GtkWidget* gtk_dialog_add_button (GtkDialog* dialog, const gchar* button_text, gint response_id);
// ::GtkWidget* gtk_dialog_add_button (::GtkDialog* dialog, const char* button_text, gint response_id);
GI_INLINE_DECL Gtk::Widget add_button (const std::string & button_text, gint response_id) noexcept;

// void gtk_dialog_add_buttons (GtkDialog* dialog, const gchar* first_button_text);
// void gtk_dialog_add_buttons (::GtkDialog* dialog, const char* first_button_text);
// IGNORE; not introspectable, varargs not supported

// GtkWidget* gtk_dialog_get_action_area (GtkDialog* dialog);
// ::GtkBox* gtk_dialog_get_action_area (::GtkDialog* dialog);
// IGNORE; deprecated

// GtkWidget* gtk_dialog_get_content_area (GtkDialog* dialog);
// ::GtkBox* gtk_dialog_get_content_area (::GtkDialog* dialog);
GI_INLINE_DECL Gtk::Box get_content_area () noexcept;

// GtkWidget* gtk_dialog_get_header_bar (GtkDialog* dialog);
// ::GtkHeaderBar* gtk_dialog_get_header_bar (::GtkDialog* dialog);
GI_INLINE_DECL Gtk::HeaderBar get_header_bar () noexcept;

// gint gtk_dialog_get_response_for_widget (GtkDialog* dialog, GtkWidget* widget);
// gint gtk_dialog_get_response_for_widget (::GtkDialog* dialog, ::GtkWidget* widget);
GI_INLINE_DECL gint get_response_for_widget (Gtk::Widget widget) noexcept;

// GtkWidget* gtk_dialog_get_widget_for_response (GtkDialog* dialog, gint response_id);
// ::GtkWidget* gtk_dialog_get_widget_for_response (::GtkDialog* dialog, gint response_id);
GI_INLINE_DECL Gtk::Widget get_widget_for_response (gint response_id) noexcept;

// void gtk_dialog_response (GtkDialog* dialog, gint response_id);
// void gtk_dialog_response (::GtkDialog* dialog, gint response_id);
GI_INLINE_DECL void response (gint response_id) noexcept;

// gint gtk_dialog_run (GtkDialog* dialog);
// gint gtk_dialog_run (::GtkDialog* dialog);
GI_INLINE_DECL gint run () noexcept;

// void gtk_dialog_set_alternative_button_order (GtkDialog* dialog, gint first_response_id);
// void gtk_dialog_set_alternative_button_order (::GtkDialog* dialog, gint first_response_id);
// IGNORE; deprecated, varargs not supported

// void gtk_dialog_set_alternative_button_order_from_array (GtkDialog* dialog, gint n_params, gint* new_order);
// void gtk_dialog_set_alternative_button_order_from_array (::GtkDialog* dialog, gint n_params, gint* new_order);
// IGNORE; deprecated

// void gtk_dialog_set_default_response (GtkDialog* dialog, gint response_id);
// void gtk_dialog_set_default_response (::GtkDialog* dialog, gint response_id);
GI_INLINE_DECL void set_default_response (gint response_id) noexcept;

// void gtk_dialog_set_response_sensitive (GtkDialog* dialog, gint response_id, gboolean setting);
// void gtk_dialog_set_response_sensitive (::GtkDialog* dialog, gint response_id, gboolean setting);
GI_INLINE_DECL void set_response_sensitive (gint response_id, gboolean setting) noexcept;

gi::property_proxy<gint, base::DialogBase> property_use_header_bar()
{ return gi::property_proxy<gint, base::DialogBase> (*this, "use-header-bar"); }
const gi::property_proxy<gint, base::DialogBase> property_use_header_bar() const
{ return gi::property_proxy<gint, base::DialogBase> (*this, "use-header-bar"); }

// signal close
gi::signal_proxy<void(Gtk::Dialog)> signal_close()
{ return gi::signal_proxy<void(Gtk::Dialog)> (*this, "close"); }

// signal response
gi::signal_proxy<void(Gtk::Dialog, gint response_id)> signal_response()
{ return gi::signal_proxy<void(Gtk::Dialog, gint response_id)> (*this, "response"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/dialog_extra_def.hpp>)
#include <gtk/dialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/dialog_extra.hpp>)
#include <gtk/dialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Dialog : public GI_GTK_DIALOG_BASE
{ typedef GI_GTK_DIALOG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkDialog>
{ typedef Gtk::Dialog type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class DialogClassDef
{
typedef DialogClassDef self;
public:
typedef Gtk::Dialog instance_type;
typedef ::GtkDialogClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Dialog::close (GtkDialog* dialog);
// void Dialog::close (::GtkDialog* dialog);
virtual void close_ () noexcept = 0;

// void Dialog::response (GtkDialog* dialog, gint response_id);
// void Dialog::response (::GtkDialog* dialog, gint response_id);
virtual void response_ (gint response_id) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class DialogClass: public detail::ClassTemplate<Gtk::impl::internal::DialogClassDef, Gtk::impl::internal::WindowClass>
{
typedef DialogClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::DialogClassDef, Gtk::impl::internal::WindowClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Dialog::close (GtkDialog* dialog);
// void Dialog::close (::GtkDialog* dialog);
GI_INLINE_DECL void close_ () noexcept override;

// void Dialog::response (GtkDialog* dialog, gint response_id);
// void Dialog::response (::GtkDialog* dialog, gint response_id);
GI_INLINE_DECL void response_ (gint response_id) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using DialogImpl = detail::ObjectImpl<Dialog, internal::DialogClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
