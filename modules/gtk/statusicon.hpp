// AUTO-GENERATED

#ifndef _GI_GTK_STATUSICON_HPP_
#define _GI_GTK_STATUSICON_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Menu;
class Tooltip;

class StatusIcon;

namespace base {


#define GI_GTK_STATUSICON_BASE base::StatusIconBase
class StatusIconBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkStatusIcon BaseObjectType;

StatusIconBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_status_icon_get_type(); } 

// GtkStatusIcon* gtk_status_icon_new ();
// ::GtkStatusIcon* gtk_status_icon_new ();
// IGNORE; deprecated

// GtkStatusIcon* gtk_status_icon_new_from_file (const gchar* filename);
// ::GtkStatusIcon* gtk_status_icon_new_from_file (const char* filename);
// IGNORE; deprecated

// GtkStatusIcon* gtk_status_icon_new_from_gicon (GIcon* icon);
// ::GtkStatusIcon* gtk_status_icon_new_from_gicon (::GIcon* icon);
// IGNORE; deprecated

// GtkStatusIcon* gtk_status_icon_new_from_icon_name (const gchar* icon_name);
// ::GtkStatusIcon* gtk_status_icon_new_from_icon_name (const char* icon_name);
// IGNORE; deprecated

// GtkStatusIcon* gtk_status_icon_new_from_pixbuf (GdkPixbuf* pixbuf);
// ::GtkStatusIcon* gtk_status_icon_new_from_pixbuf (::GdkPixbuf* pixbuf);
// IGNORE; deprecated

// GtkStatusIcon* gtk_status_icon_new_from_stock (const gchar* stock_id);
// ::GtkStatusIcon* gtk_status_icon_new_from_stock (const char* stock_id);
// IGNORE; deprecated

// void gtk_status_icon_position_menu (GtkMenu* menu, gint* x, gint* y, gboolean* push_in, gpointer user_data);
// void gtk_status_icon_position_menu (::GtkMenu* menu, gint* x, gint* y, gboolean* push_in, ::GtkStatusIcon* user_data);
// IGNORE; deprecated

// gboolean gtk_status_icon_get_geometry (GtkStatusIcon* status_icon, GdkScreen** screen, GdkRectangle* area, GtkOrientation* orientation);
// gboolean gtk_status_icon_get_geometry (::GtkStatusIcon* status_icon, ::GdkScreen** screen, ::GdkRectangle* area, ::GtkOrientation* orientation);
// IGNORE; deprecated

// GIcon* gtk_status_icon_get_gicon (GtkStatusIcon* status_icon);
// ::GIcon* gtk_status_icon_get_gicon (::GtkStatusIcon* status_icon);
// IGNORE; deprecated

// gboolean gtk_status_icon_get_has_tooltip (GtkStatusIcon* status_icon);
// gboolean gtk_status_icon_get_has_tooltip (::GtkStatusIcon* status_icon);
// IGNORE; deprecated

// const gchar* gtk_status_icon_get_icon_name (GtkStatusIcon* status_icon);
// const char* gtk_status_icon_get_icon_name (::GtkStatusIcon* status_icon);
// IGNORE; deprecated

// GdkPixbuf* gtk_status_icon_get_pixbuf (GtkStatusIcon* status_icon);
// ::GdkPixbuf* gtk_status_icon_get_pixbuf (::GtkStatusIcon* status_icon);
// IGNORE; deprecated

// GdkScreen* gtk_status_icon_get_screen (GtkStatusIcon* status_icon);
// ::GdkScreen* gtk_status_icon_get_screen (::GtkStatusIcon* status_icon);
// IGNORE; deprecated

// gint gtk_status_icon_get_size (GtkStatusIcon* status_icon);
// gint gtk_status_icon_get_size (::GtkStatusIcon* status_icon);
// IGNORE; deprecated

// const gchar* gtk_status_icon_get_stock (GtkStatusIcon* status_icon);
// const char* gtk_status_icon_get_stock (::GtkStatusIcon* status_icon);
// IGNORE; deprecated

// GtkImageType gtk_status_icon_get_storage_type (GtkStatusIcon* status_icon);
// ::GtkImageType gtk_status_icon_get_storage_type (::GtkStatusIcon* status_icon);
// IGNORE; deprecated

// const gchar* gtk_status_icon_get_title (GtkStatusIcon* status_icon);
// const char* gtk_status_icon_get_title (::GtkStatusIcon* status_icon);
// IGNORE; deprecated

// gchar* gtk_status_icon_get_tooltip_markup (GtkStatusIcon* status_icon);
// char* gtk_status_icon_get_tooltip_markup (::GtkStatusIcon* status_icon);
// IGNORE; deprecated

// gchar* gtk_status_icon_get_tooltip_text (GtkStatusIcon* status_icon);
// char* gtk_status_icon_get_tooltip_text (::GtkStatusIcon* status_icon);
// IGNORE; deprecated

// gboolean gtk_status_icon_get_visible (GtkStatusIcon* status_icon);
// gboolean gtk_status_icon_get_visible (::GtkStatusIcon* status_icon);
// IGNORE; deprecated

// guint32 gtk_status_icon_get_x11_window_id (GtkStatusIcon* status_icon);
// guint32 gtk_status_icon_get_x11_window_id (::GtkStatusIcon* status_icon);
// IGNORE; deprecated

// gboolean gtk_status_icon_is_embedded (GtkStatusIcon* status_icon);
// gboolean gtk_status_icon_is_embedded (::GtkStatusIcon* status_icon);
// IGNORE; deprecated

// void gtk_status_icon_set_from_file (GtkStatusIcon* status_icon, const gchar* filename);
// void gtk_status_icon_set_from_file (::GtkStatusIcon* status_icon, const char* filename);
// IGNORE; deprecated

// void gtk_status_icon_set_from_gicon (GtkStatusIcon* status_icon, GIcon* icon);
// void gtk_status_icon_set_from_gicon (::GtkStatusIcon* status_icon, ::GIcon* icon);
// IGNORE; deprecated

// void gtk_status_icon_set_from_icon_name (GtkStatusIcon* status_icon, const gchar* icon_name);
// void gtk_status_icon_set_from_icon_name (::GtkStatusIcon* status_icon, const char* icon_name);
// IGNORE; deprecated

// void gtk_status_icon_set_from_pixbuf (GtkStatusIcon* status_icon, GdkPixbuf* pixbuf);
// void gtk_status_icon_set_from_pixbuf (::GtkStatusIcon* status_icon, ::GdkPixbuf* pixbuf);
// IGNORE; deprecated

// void gtk_status_icon_set_from_stock (GtkStatusIcon* status_icon, const gchar* stock_id);
// void gtk_status_icon_set_from_stock (::GtkStatusIcon* status_icon, const char* stock_id);
// IGNORE; deprecated

// void gtk_status_icon_set_has_tooltip (GtkStatusIcon* status_icon, gboolean has_tooltip);
// void gtk_status_icon_set_has_tooltip (::GtkStatusIcon* status_icon, gboolean has_tooltip);
// IGNORE; deprecated

// void gtk_status_icon_set_name (GtkStatusIcon* status_icon, const gchar* name);
// void gtk_status_icon_set_name (::GtkStatusIcon* status_icon, const char* name);
// IGNORE; deprecated

// void gtk_status_icon_set_screen (GtkStatusIcon* status_icon, GdkScreen* screen);
// void gtk_status_icon_set_screen (::GtkStatusIcon* status_icon, ::GdkScreen* screen);
// IGNORE; deprecated

// void gtk_status_icon_set_title (GtkStatusIcon* status_icon, const gchar* title);
// void gtk_status_icon_set_title (::GtkStatusIcon* status_icon, const char* title);
// IGNORE; deprecated

// void gtk_status_icon_set_tooltip_markup (GtkStatusIcon* status_icon, const gchar* markup);
// void gtk_status_icon_set_tooltip_markup (::GtkStatusIcon* status_icon, const char* markup);
// IGNORE; deprecated

// void gtk_status_icon_set_tooltip_text (GtkStatusIcon* status_icon, const gchar* text);
// void gtk_status_icon_set_tooltip_text (::GtkStatusIcon* status_icon, const char* text);
// IGNORE; deprecated

// void gtk_status_icon_set_visible (GtkStatusIcon* status_icon, gboolean visible);
// void gtk_status_icon_set_visible (::GtkStatusIcon* status_icon, gboolean visible);
// IGNORE; deprecated

gi::property_proxy<bool, base::StatusIconBase> property_embedded()
{ return gi::property_proxy<bool, base::StatusIconBase> (*this, "embedded"); }
const gi::property_proxy<bool, base::StatusIconBase> property_embedded() const
{ return gi::property_proxy<bool, base::StatusIconBase> (*this, "embedded"); }

gi::property_proxy_write<std::string, base::StatusIconBase> property_file()
{ return gi::property_proxy_write<std::string, base::StatusIconBase> (*this, "file"); }

gi::property_proxy<Gio::Icon, base::StatusIconBase> property_gicon()
{ return gi::property_proxy<Gio::Icon, base::StatusIconBase> (*this, "gicon"); }
const gi::property_proxy<Gio::Icon, base::StatusIconBase> property_gicon() const
{ return gi::property_proxy<Gio::Icon, base::StatusIconBase> (*this, "gicon"); }

gi::property_proxy<bool, base::StatusIconBase> property_has_tooltip()
{ return gi::property_proxy<bool, base::StatusIconBase> (*this, "has-tooltip"); }
const gi::property_proxy<bool, base::StatusIconBase> property_has_tooltip() const
{ return gi::property_proxy<bool, base::StatusIconBase> (*this, "has-tooltip"); }

gi::property_proxy<std::string, base::StatusIconBase> property_icon_name()
{ return gi::property_proxy<std::string, base::StatusIconBase> (*this, "icon-name"); }
const gi::property_proxy<std::string, base::StatusIconBase> property_icon_name() const
{ return gi::property_proxy<std::string, base::StatusIconBase> (*this, "icon-name"); }

gi::property_proxy<Gtk::Orientation, base::StatusIconBase> property_orientation()
{ return gi::property_proxy<Gtk::Orientation, base::StatusIconBase> (*this, "orientation"); }
const gi::property_proxy<Gtk::Orientation, base::StatusIconBase> property_orientation() const
{ return gi::property_proxy<Gtk::Orientation, base::StatusIconBase> (*this, "orientation"); }

gi::property_proxy<GdkPixbuf::Pixbuf, base::StatusIconBase> property_pixbuf()
{ return gi::property_proxy<GdkPixbuf::Pixbuf, base::StatusIconBase> (*this, "pixbuf"); }
const gi::property_proxy<GdkPixbuf::Pixbuf, base::StatusIconBase> property_pixbuf() const
{ return gi::property_proxy<GdkPixbuf::Pixbuf, base::StatusIconBase> (*this, "pixbuf"); }

gi::property_proxy<Gdk::Screen, base::StatusIconBase> property_screen()
{ return gi::property_proxy<Gdk::Screen, base::StatusIconBase> (*this, "screen"); }
const gi::property_proxy<Gdk::Screen, base::StatusIconBase> property_screen() const
{ return gi::property_proxy<Gdk::Screen, base::StatusIconBase> (*this, "screen"); }

gi::property_proxy<gint, base::StatusIconBase> property_size()
{ return gi::property_proxy<gint, base::StatusIconBase> (*this, "size"); }
const gi::property_proxy<gint, base::StatusIconBase> property_size() const
{ return gi::property_proxy<gint, base::StatusIconBase> (*this, "size"); }

gi::property_proxy<std::string, base::StatusIconBase> property_stock()
{ return gi::property_proxy<std::string, base::StatusIconBase> (*this, "stock"); }
const gi::property_proxy<std::string, base::StatusIconBase> property_stock() const
{ return gi::property_proxy<std::string, base::StatusIconBase> (*this, "stock"); }

gi::property_proxy<Gtk::ImageType, base::StatusIconBase> property_storage_type()
{ return gi::property_proxy<Gtk::ImageType, base::StatusIconBase> (*this, "storage-type"); }
const gi::property_proxy<Gtk::ImageType, base::StatusIconBase> property_storage_type() const
{ return gi::property_proxy<Gtk::ImageType, base::StatusIconBase> (*this, "storage-type"); }

gi::property_proxy<std::string, base::StatusIconBase> property_title()
{ return gi::property_proxy<std::string, base::StatusIconBase> (*this, "title"); }
const gi::property_proxy<std::string, base::StatusIconBase> property_title() const
{ return gi::property_proxy<std::string, base::StatusIconBase> (*this, "title"); }

gi::property_proxy<std::string, base::StatusIconBase> property_tooltip_markup()
{ return gi::property_proxy<std::string, base::StatusIconBase> (*this, "tooltip-markup"); }
const gi::property_proxy<std::string, base::StatusIconBase> property_tooltip_markup() const
{ return gi::property_proxy<std::string, base::StatusIconBase> (*this, "tooltip-markup"); }

gi::property_proxy<std::string, base::StatusIconBase> property_tooltip_text()
{ return gi::property_proxy<std::string, base::StatusIconBase> (*this, "tooltip-text"); }
const gi::property_proxy<std::string, base::StatusIconBase> property_tooltip_text() const
{ return gi::property_proxy<std::string, base::StatusIconBase> (*this, "tooltip-text"); }

gi::property_proxy<bool, base::StatusIconBase> property_visible()
{ return gi::property_proxy<bool, base::StatusIconBase> (*this, "visible"); }
const gi::property_proxy<bool, base::StatusIconBase> property_visible() const
{ return gi::property_proxy<bool, base::StatusIconBase> (*this, "visible"); }

// signal activate
gi::signal_proxy<void(Gtk::StatusIcon)> signal_activate()
{ return gi::signal_proxy<void(Gtk::StatusIcon)> (*this, "activate"); }

// signal button-press-event
gi::signal_proxy<bool(Gtk::StatusIcon, Gdk::EventButton event)> signal_button_press_event()
{ return gi::signal_proxy<bool(Gtk::StatusIcon, Gdk::EventButton event)> (*this, "button-press-event"); }

// signal button-release-event
gi::signal_proxy<bool(Gtk::StatusIcon, Gdk::EventButton event)> signal_button_release_event()
{ return gi::signal_proxy<bool(Gtk::StatusIcon, Gdk::EventButton event)> (*this, "button-release-event"); }

// signal popup-menu
gi::signal_proxy<void(Gtk::StatusIcon, guint button, guint activate_time)> signal_popup_menu()
{ return gi::signal_proxy<void(Gtk::StatusIcon, guint button, guint activate_time)> (*this, "popup-menu"); }

// signal query-tooltip
gi::signal_proxy<bool(Gtk::StatusIcon, gint x, gint y, gboolean keyboard_mode, Gtk::Tooltip tooltip)> signal_query_tooltip()
{ return gi::signal_proxy<bool(Gtk::StatusIcon, gint x, gint y, gboolean keyboard_mode, Gtk::Tooltip tooltip)> (*this, "query-tooltip"); }

// signal scroll-event
gi::signal_proxy<bool(Gtk::StatusIcon, Gdk::EventScroll event)> signal_scroll_event()
{ return gi::signal_proxy<bool(Gtk::StatusIcon, Gdk::EventScroll event)> (*this, "scroll-event"); }

// signal size-changed
gi::signal_proxy<bool(Gtk::StatusIcon, gint size)> signal_size_changed()
{ return gi::signal_proxy<bool(Gtk::StatusIcon, gint size)> (*this, "size-changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/statusicon_extra_def.hpp>)
#include <gtk/statusicon_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/statusicon_extra.hpp>)
#include <gtk/statusicon_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class StatusIcon : public GI_GTK_STATUSICON_BASE
{ typedef GI_GTK_STATUSICON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkStatusIcon>
{ typedef Gtk::StatusIcon type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class StatusIconClassDef
{
typedef StatusIconClassDef self;
public:
typedef Gtk::StatusIcon instance_type;
typedef ::GtkStatusIconClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void StatusIcon::activate (GtkStatusIcon* status_icon);
// void StatusIcon::activate (::GtkStatusIcon* status_icon);
virtual void activate_ () noexcept = 0;

// gboolean StatusIcon::button_press_event (GtkStatusIcon* status_icon, GdkEventButton* event);
// gboolean StatusIcon::button_press_event (::GtkStatusIcon* status_icon, ::GdkEventButton* event);
virtual bool button_press_event_ (Gdk::EventButton event) noexcept = 0;

// gboolean StatusIcon::button_release_event (GtkStatusIcon* status_icon, GdkEventButton* event);
// gboolean StatusIcon::button_release_event (::GtkStatusIcon* status_icon, ::GdkEventButton* event);
virtual bool button_release_event_ (Gdk::EventButton event) noexcept = 0;

// void StatusIcon::popup_menu (GtkStatusIcon* status_icon, guint button, guint32 activate_time);
// void StatusIcon::popup_menu (::GtkStatusIcon* status_icon, guint button, guint32 activate_time);
virtual void popup_menu_ (guint button, guint32 activate_time) noexcept = 0;

// gboolean StatusIcon::query_tooltip (GtkStatusIcon* status_icon, gint x, gint y, gboolean keyboard_mode, GtkTooltip* tooltip);
// gboolean StatusIcon::query_tooltip (::GtkStatusIcon* status_icon, gint x, gint y, gboolean keyboard_mode, ::GtkTooltip* tooltip);
virtual bool query_tooltip_ (gint x, gint y, gboolean keyboard_mode, Gtk::Tooltip tooltip) noexcept = 0;

// gboolean StatusIcon::scroll_event (GtkStatusIcon* status_icon, GdkEventScroll* event);
// gboolean StatusIcon::scroll_event (::GtkStatusIcon* status_icon, ::GdkEventScroll* event);
virtual bool scroll_event_ (Gdk::EventScroll event) noexcept = 0;

// gboolean StatusIcon::size_changed (GtkStatusIcon* status_icon, gint size);
// gboolean StatusIcon::size_changed (::GtkStatusIcon* status_icon, gint size);
virtual bool size_changed_ (gint size) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class StatusIconClass: public detail::ClassTemplate<Gtk::impl::internal::StatusIconClassDef, GObject::impl::internal::ObjectClass>
{
typedef StatusIconClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::StatusIconClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void StatusIcon::activate (GtkStatusIcon* status_icon);
// void StatusIcon::activate (::GtkStatusIcon* status_icon);
GI_INLINE_DECL void activate_ () noexcept override;

// gboolean StatusIcon::button_press_event (GtkStatusIcon* status_icon, GdkEventButton* event);
// gboolean StatusIcon::button_press_event (::GtkStatusIcon* status_icon, ::GdkEventButton* event);
GI_INLINE_DECL bool button_press_event_ (Gdk::EventButton event) noexcept override;

// gboolean StatusIcon::button_release_event (GtkStatusIcon* status_icon, GdkEventButton* event);
// gboolean StatusIcon::button_release_event (::GtkStatusIcon* status_icon, ::GdkEventButton* event);
GI_INLINE_DECL bool button_release_event_ (Gdk::EventButton event) noexcept override;

// void StatusIcon::popup_menu (GtkStatusIcon* status_icon, guint button, guint32 activate_time);
// void StatusIcon::popup_menu (::GtkStatusIcon* status_icon, guint button, guint32 activate_time);
GI_INLINE_DECL void popup_menu_ (guint button, guint32 activate_time) noexcept override;

// gboolean StatusIcon::query_tooltip (GtkStatusIcon* status_icon, gint x, gint y, gboolean keyboard_mode, GtkTooltip* tooltip);
// gboolean StatusIcon::query_tooltip (::GtkStatusIcon* status_icon, gint x, gint y, gboolean keyboard_mode, ::GtkTooltip* tooltip);
GI_INLINE_DECL bool query_tooltip_ (gint x, gint y, gboolean keyboard_mode, Gtk::Tooltip tooltip) noexcept override;

// gboolean StatusIcon::scroll_event (GtkStatusIcon* status_icon, GdkEventScroll* event);
// gboolean StatusIcon::scroll_event (::GtkStatusIcon* status_icon, ::GdkEventScroll* event);
GI_INLINE_DECL bool scroll_event_ (Gdk::EventScroll event) noexcept override;

// gboolean StatusIcon::size_changed (GtkStatusIcon* status_icon, gint size);
// gboolean StatusIcon::size_changed (::GtkStatusIcon* status_icon, gint size);
GI_INLINE_DECL bool size_changed_ (gint size) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using StatusIconImpl = detail::ObjectImpl<StatusIcon, internal::StatusIconClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
