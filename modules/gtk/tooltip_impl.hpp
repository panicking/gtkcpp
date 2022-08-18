// AUTO-GENERATED

#ifndef _GI_GTK_TOOLTIP_IMPL_HPP_
#define _GI_GTK_TOOLTIP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_tooltip_trigger_tooltip_query (GdkDisplay* display);
// void gtk_tooltip_trigger_tooltip_query (::GdkDisplay* display);
void base::TooltipBase::trigger_tooltip_query (Gdk::Display display) noexcept
{
  typedef void (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tooltip_trigger_tooltip_query;
  auto display_to_c = gi::unwrap (display, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkDisplay*) (display_to_c));
}

// void gtk_tooltip_set_custom (GtkTooltip* tooltip, GtkWidget* custom_widget);
// void gtk_tooltip_set_custom (::GtkTooltip* tooltip, ::GtkWidget* custom_widget);
void base::TooltipBase::set_custom (Gtk::Widget custom_widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, ::GtkWidget* custom_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tooltip_set_custom;
  auto custom_widget_to_c = gi::unwrap (custom_widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTooltip*) (gobj_()), (::GtkWidget*) (custom_widget_to_c));
}
void base::TooltipBase::set_custom () noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, ::GtkWidget* custom_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tooltip_set_custom;
  auto custom_widget_to_c = nullptr;
  call_wrap_v ((::GtkTooltip*) (gobj_()), (::GtkWidget*) (custom_widget_to_c));
}

// void gtk_tooltip_set_icon (GtkTooltip* tooltip, GdkPixbuf* pixbuf);
// void gtk_tooltip_set_icon (::GtkTooltip* tooltip, ::GdkPixbuf* pixbuf);
void base::TooltipBase::set_icon (GdkPixbuf::Pixbuf pixbuf) noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tooltip_set_icon;
  auto pixbuf_to_c = gi::unwrap (pixbuf, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTooltip*) (gobj_()), (::GdkPixbuf*) (pixbuf_to_c));
}
void base::TooltipBase::set_icon () noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tooltip_set_icon;
  auto pixbuf_to_c = nullptr;
  call_wrap_v ((::GtkTooltip*) (gobj_()), (::GdkPixbuf*) (pixbuf_to_c));
}

// void gtk_tooltip_set_icon_from_gicon (GtkTooltip* tooltip, GIcon* gicon, GtkIconSize size);
// void gtk_tooltip_set_icon_from_gicon (::GtkTooltip* tooltip, ::GIcon* gicon, gint size);
void base::TooltipBase::set_icon_from_gicon (Gio::Icon gicon, gint size) noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, ::GIcon* gicon, gint size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tooltip_set_icon_from_gicon;
  auto size_to_c = size;
  auto gicon_to_c = gi::unwrap (gicon, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTooltip*) (gobj_()), (::GIcon*) (gicon_to_c), (gint) (size_to_c));
}
void base::TooltipBase::set_icon_from_gicon (gint size) noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, ::GIcon* gicon, gint size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tooltip_set_icon_from_gicon;
  auto size_to_c = size;
  auto gicon_to_c = nullptr;
  call_wrap_v ((::GtkTooltip*) (gobj_()), (::GIcon*) (gicon_to_c), (gint) (size_to_c));
}

// void gtk_tooltip_set_icon_from_icon_name (GtkTooltip* tooltip, const gchar* icon_name, GtkIconSize size);
// void gtk_tooltip_set_icon_from_icon_name (::GtkTooltip* tooltip, const char* icon_name, gint size);
void base::TooltipBase::set_icon_from_icon_name (const std::string & icon_name, gint size) noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, const char* icon_name, gint size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tooltip_set_icon_from_icon_name;
  auto size_to_c = size;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTooltip*) (gobj_()), (const char*) (icon_name_to_c), (gint) (size_to_c));
}
void base::TooltipBase::set_icon_from_icon_name (gint size) noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, const char* icon_name, gint size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tooltip_set_icon_from_icon_name;
  auto size_to_c = size;
  auto icon_name_to_c = nullptr;
  call_wrap_v ((::GtkTooltip*) (gobj_()), (const char*) (icon_name_to_c), (gint) (size_to_c));
}

// void gtk_tooltip_set_icon_from_stock (GtkTooltip* tooltip, const gchar* stock_id, GtkIconSize size);
// void gtk_tooltip_set_icon_from_stock (::GtkTooltip* tooltip, const char* stock_id, gint size);
// IGNORE; deprecated

// void gtk_tooltip_set_markup (GtkTooltip* tooltip, const gchar* markup);
// void gtk_tooltip_set_markup (::GtkTooltip* tooltip, const char* markup);
void base::TooltipBase::set_markup (const std::string & markup) noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, const char* markup);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tooltip_set_markup;
  auto markup_to_c = gi::unwrap (markup, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTooltip*) (gobj_()), (const char*) (markup_to_c));
}
void base::TooltipBase::set_markup () noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, const char* markup);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tooltip_set_markup;
  auto markup_to_c = nullptr;
  call_wrap_v ((::GtkTooltip*) (gobj_()), (const char*) (markup_to_c));
}

// void gtk_tooltip_set_text (GtkTooltip* tooltip, const gchar* text);
// void gtk_tooltip_set_text (::GtkTooltip* tooltip, const char* text);
void base::TooltipBase::set_text (const std::string & text) noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tooltip_set_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTooltip*) (gobj_()), (const char*) (text_to_c));
}
void base::TooltipBase::set_text () noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tooltip_set_text;
  auto text_to_c = nullptr;
  call_wrap_v ((::GtkTooltip*) (gobj_()), (const char*) (text_to_c));
}

// void gtk_tooltip_set_tip_area (GtkTooltip* tooltip, const GdkRectangle* rect);
// void gtk_tooltip_set_tip_area (::GtkTooltip* tooltip, const ::GdkRectangle* rect);
void base::TooltipBase::set_tip_area (const Gdk::Rectangle & rect) noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, const ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tooltip_set_tip_area;
  auto rect_to_c = gi::unwrap (rect, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTooltip*) (gobj_()), (const ::GdkRectangle*) (rect_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/tooltip_extra_def_impl.hpp>)
#include <gtk/tooltip_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/tooltip_extra_impl.hpp>)
#include <gtk/tooltip_extra_impl.hpp>
#endif
#endif

#endif
