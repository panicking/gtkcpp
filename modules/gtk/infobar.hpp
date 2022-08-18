// AUTO-GENERATED

#ifndef _GI_GTK_INFOBAR_HPP_
#define _GI_GTK_INFOBAR_HPP_

#include "box.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Box;
class Button;
class Widget;

class InfoBar;

namespace base {


#define GI_GTK_INFOBAR_BASE base::InfoBarBase
class InfoBarBase : public Gtk::Box
{
typedef Gtk::Box super_type;
public:
typedef ::GtkInfoBar BaseObjectType;

InfoBarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_info_bar_get_type(); } 

// GtkWidget* gtk_info_bar_new ();
// ::GtkInfoBar* gtk_info_bar_new ();
static GI_INLINE_DECL Gtk::InfoBar new_ () noexcept;

// GtkWidget* gtk_info_bar_new_with_buttons (const gchar* first_button_text);
// ::GtkInfoBar* gtk_info_bar_new_with_buttons (const char* first_button_text);
// IGNORE; not introspectable, varargs not supported

// void gtk_info_bar_add_action_widget (GtkInfoBar* info_bar, GtkWidget* child, gint response_id);
// void gtk_info_bar_add_action_widget (::GtkInfoBar* info_bar, ::GtkWidget* child, gint response_id);
GI_INLINE_DECL void add_action_widget (Gtk::Widget child, gint response_id) noexcept;

// GtkWidget* gtk_info_bar_add_button (GtkInfoBar* info_bar, const gchar* button_text, gint response_id);
// ::GtkButton* gtk_info_bar_add_button (::GtkInfoBar* info_bar, const char* button_text, gint response_id);
GI_INLINE_DECL Gtk::Button add_button (const std::string & button_text, gint response_id) noexcept;

// void gtk_info_bar_add_buttons (GtkInfoBar* info_bar, const gchar* first_button_text);
// void gtk_info_bar_add_buttons (::GtkInfoBar* info_bar, const char* first_button_text);
// IGNORE; not introspectable, varargs not supported

// GtkWidget* gtk_info_bar_get_action_area (GtkInfoBar* info_bar);
// ::GtkBox* gtk_info_bar_get_action_area (::GtkInfoBar* info_bar);
GI_INLINE_DECL Gtk::Box get_action_area () noexcept;

// GtkWidget* gtk_info_bar_get_content_area (GtkInfoBar* info_bar);
// ::GtkBox* gtk_info_bar_get_content_area (::GtkInfoBar* info_bar);
GI_INLINE_DECL Gtk::Box get_content_area () noexcept;

// GtkMessageType gtk_info_bar_get_message_type (GtkInfoBar* info_bar);
// ::GtkMessageType gtk_info_bar_get_message_type (::GtkInfoBar* info_bar);
GI_INLINE_DECL Gtk::MessageType get_message_type () noexcept;

// gboolean gtk_info_bar_get_revealed (GtkInfoBar* info_bar);
// gboolean gtk_info_bar_get_revealed (::GtkInfoBar* info_bar);
GI_INLINE_DECL bool get_revealed () noexcept;

// gboolean gtk_info_bar_get_show_close_button (GtkInfoBar* info_bar);
// gboolean gtk_info_bar_get_show_close_button (::GtkInfoBar* info_bar);
GI_INLINE_DECL bool get_show_close_button () noexcept;

// void gtk_info_bar_response (GtkInfoBar* info_bar, gint response_id);
// void gtk_info_bar_response (::GtkInfoBar* info_bar, gint response_id);
GI_INLINE_DECL void response (gint response_id) noexcept;

// void gtk_info_bar_set_default_response (GtkInfoBar* info_bar, gint response_id);
// void gtk_info_bar_set_default_response (::GtkInfoBar* info_bar, gint response_id);
GI_INLINE_DECL void set_default_response (gint response_id) noexcept;

// void gtk_info_bar_set_message_type (GtkInfoBar* info_bar, GtkMessageType message_type);
// void gtk_info_bar_set_message_type (::GtkInfoBar* info_bar, ::GtkMessageType message_type);
GI_INLINE_DECL void set_message_type (Gtk::MessageType message_type) noexcept;

// void gtk_info_bar_set_response_sensitive (GtkInfoBar* info_bar, gint response_id, gboolean setting);
// void gtk_info_bar_set_response_sensitive (::GtkInfoBar* info_bar, gint response_id, gboolean setting);
GI_INLINE_DECL void set_response_sensitive (gint response_id, gboolean setting) noexcept;

// void gtk_info_bar_set_revealed (GtkInfoBar* info_bar, gboolean revealed);
// void gtk_info_bar_set_revealed (::GtkInfoBar* info_bar, gboolean revealed);
GI_INLINE_DECL void set_revealed (gboolean revealed) noexcept;

// void gtk_info_bar_set_show_close_button (GtkInfoBar* info_bar, gboolean setting);
// void gtk_info_bar_set_show_close_button (::GtkInfoBar* info_bar, gboolean setting);
GI_INLINE_DECL void set_show_close_button (gboolean setting) noexcept;

gi::property_proxy<Gtk::MessageType, base::InfoBarBase> property_message_type()
{ return gi::property_proxy<Gtk::MessageType, base::InfoBarBase> (*this, "message-type"); }
const gi::property_proxy<Gtk::MessageType, base::InfoBarBase> property_message_type() const
{ return gi::property_proxy<Gtk::MessageType, base::InfoBarBase> (*this, "message-type"); }

gi::property_proxy<bool, base::InfoBarBase> property_revealed()
{ return gi::property_proxy<bool, base::InfoBarBase> (*this, "revealed"); }
const gi::property_proxy<bool, base::InfoBarBase> property_revealed() const
{ return gi::property_proxy<bool, base::InfoBarBase> (*this, "revealed"); }

gi::property_proxy<bool, base::InfoBarBase> property_show_close_button()
{ return gi::property_proxy<bool, base::InfoBarBase> (*this, "show-close-button"); }
const gi::property_proxy<bool, base::InfoBarBase> property_show_close_button() const
{ return gi::property_proxy<bool, base::InfoBarBase> (*this, "show-close-button"); }

// signal close
gi::signal_proxy<void(Gtk::InfoBar)> signal_close()
{ return gi::signal_proxy<void(Gtk::InfoBar)> (*this, "close"); }

// signal response
gi::signal_proxy<void(Gtk::InfoBar, gint response_id)> signal_response()
{ return gi::signal_proxy<void(Gtk::InfoBar, gint response_id)> (*this, "response"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/infobar_extra_def.hpp>)
#include <gtk/infobar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/infobar_extra.hpp>)
#include <gtk/infobar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class InfoBar : public GI_GTK_INFOBAR_BASE
{ typedef GI_GTK_INFOBAR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkInfoBar>
{ typedef Gtk::InfoBar type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class InfoBarClassDef
{
typedef InfoBarClassDef self;
public:
typedef Gtk::InfoBar instance_type;
typedef ::GtkInfoBarClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void InfoBar::close (GtkInfoBar* info_bar);
// void InfoBar::close (::GtkInfoBar* info_bar);
virtual void close_ () noexcept = 0;

// void InfoBar::response (GtkInfoBar* info_bar, gint response_id);
// void InfoBar::response (::GtkInfoBar* info_bar, gint response_id);
virtual void response_ (gint response_id) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class InfoBarClass: public detail::ClassTemplate<Gtk::impl::internal::InfoBarClassDef, Gtk::impl::internal::BoxClass>
{
typedef InfoBarClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::InfoBarClassDef, Gtk::impl::internal::BoxClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void InfoBar::close (GtkInfoBar* info_bar);
// void InfoBar::close (::GtkInfoBar* info_bar);
GI_INLINE_DECL void close_ () noexcept override;

// void InfoBar::response (GtkInfoBar* info_bar, gint response_id);
// void InfoBar::response (::GtkInfoBar* info_bar, gint response_id);
GI_INLINE_DECL void response_ (gint response_id) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using InfoBarImpl = detail::ObjectImpl<InfoBar, internal::InfoBarClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
