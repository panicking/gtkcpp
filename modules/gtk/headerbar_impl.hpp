// AUTO-GENERATED

#ifndef _GI_GTK_HEADERBAR_IMPL_HPP_
#define _GI_GTK_HEADERBAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_header_bar_new ();
// ::GtkHeaderBar* gtk_header_bar_new ();
Gtk::HeaderBar base::HeaderBarBase::new_ () noexcept
{
  typedef ::GtkHeaderBar* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_header_bar_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_header_bar_get_custom_title (GtkHeaderBar* bar);
// ::GtkWidget* gtk_header_bar_get_custom_title (::GtkHeaderBar* bar);
Gtk::Widget base::HeaderBarBase::get_custom_title () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkHeaderBar* bar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_header_bar_get_custom_title;
  auto _temp_ret = call_wrap_v ((::GtkHeaderBar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_header_bar_get_decoration_layout (GtkHeaderBar* bar);
// const char* gtk_header_bar_get_decoration_layout (::GtkHeaderBar* bar);
std::string base::HeaderBarBase::get_decoration_layout () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkHeaderBar* bar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_header_bar_get_decoration_layout;
  auto _temp_ret = call_wrap_v ((::GtkHeaderBar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_header_bar_get_has_subtitle (GtkHeaderBar* bar);
// gboolean gtk_header_bar_get_has_subtitle (::GtkHeaderBar* bar);
bool base::HeaderBarBase::get_has_subtitle () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkHeaderBar* bar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_header_bar_get_has_subtitle;
  auto _temp_ret = call_wrap_v ((::GtkHeaderBar*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_header_bar_get_show_close_button (GtkHeaderBar* bar);
// gboolean gtk_header_bar_get_show_close_button (::GtkHeaderBar* bar);
bool base::HeaderBarBase::get_show_close_button () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkHeaderBar* bar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_header_bar_get_show_close_button;
  auto _temp_ret = call_wrap_v ((::GtkHeaderBar*) (gobj_()));
  return _temp_ret;
}

// const gchar* gtk_header_bar_get_subtitle (GtkHeaderBar* bar);
// const char* gtk_header_bar_get_subtitle (::GtkHeaderBar* bar);
std::string base::HeaderBarBase::get_subtitle () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkHeaderBar* bar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_header_bar_get_subtitle;
  auto _temp_ret = call_wrap_v ((::GtkHeaderBar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_header_bar_get_title (GtkHeaderBar* bar);
// const char* gtk_header_bar_get_title (::GtkHeaderBar* bar);
std::string base::HeaderBarBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkHeaderBar* bar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_header_bar_get_title;
  auto _temp_ret = call_wrap_v ((::GtkHeaderBar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_header_bar_pack_end (GtkHeaderBar* bar, GtkWidget* child);
// void gtk_header_bar_pack_end (::GtkHeaderBar* bar, ::GtkWidget* child);
void base::HeaderBarBase::pack_end (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkHeaderBar* bar, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_header_bar_pack_end;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkHeaderBar*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_header_bar_pack_start (GtkHeaderBar* bar, GtkWidget* child);
// void gtk_header_bar_pack_start (::GtkHeaderBar* bar, ::GtkWidget* child);
void base::HeaderBarBase::pack_start (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkHeaderBar* bar, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_header_bar_pack_start;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkHeaderBar*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_header_bar_set_custom_title (GtkHeaderBar* bar, GtkWidget* title_widget);
// void gtk_header_bar_set_custom_title (::GtkHeaderBar* bar, ::GtkWidget* title_widget);
void base::HeaderBarBase::set_custom_title (Gtk::Widget title_widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkHeaderBar* bar, ::GtkWidget* title_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_header_bar_set_custom_title;
  auto title_widget_to_c = gi::unwrap (title_widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkHeaderBar*) (gobj_()), (::GtkWidget*) (title_widget_to_c));
}
void base::HeaderBarBase::set_custom_title () noexcept
{
  typedef void (*call_wrap_t) (::GtkHeaderBar* bar, ::GtkWidget* title_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_header_bar_set_custom_title;
  auto title_widget_to_c = nullptr;
  call_wrap_v ((::GtkHeaderBar*) (gobj_()), (::GtkWidget*) (title_widget_to_c));
}

// void gtk_header_bar_set_decoration_layout (GtkHeaderBar* bar, const gchar* layout);
// void gtk_header_bar_set_decoration_layout (::GtkHeaderBar* bar, const char* layout);
void base::HeaderBarBase::set_decoration_layout (const std::string & layout) noexcept
{
  typedef void (*call_wrap_t) (::GtkHeaderBar* bar, const char* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_header_bar_set_decoration_layout;
  auto layout_to_c = gi::unwrap (layout, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkHeaderBar*) (gobj_()), (const char*) (layout_to_c));
}
void base::HeaderBarBase::set_decoration_layout () noexcept
{
  typedef void (*call_wrap_t) (::GtkHeaderBar* bar, const char* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_header_bar_set_decoration_layout;
  auto layout_to_c = nullptr;
  call_wrap_v ((::GtkHeaderBar*) (gobj_()), (const char*) (layout_to_c));
}

// void gtk_header_bar_set_has_subtitle (GtkHeaderBar* bar, gboolean setting);
// void gtk_header_bar_set_has_subtitle (::GtkHeaderBar* bar, gboolean setting);
void base::HeaderBarBase::set_has_subtitle (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkHeaderBar* bar, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_header_bar_set_has_subtitle;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkHeaderBar*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_header_bar_set_show_close_button (GtkHeaderBar* bar, gboolean setting);
// void gtk_header_bar_set_show_close_button (::GtkHeaderBar* bar, gboolean setting);
void base::HeaderBarBase::set_show_close_button (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkHeaderBar* bar, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_header_bar_set_show_close_button;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkHeaderBar*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_header_bar_set_subtitle (GtkHeaderBar* bar, const gchar* subtitle);
// void gtk_header_bar_set_subtitle (::GtkHeaderBar* bar, const char* subtitle);
void base::HeaderBarBase::set_subtitle (const std::string & subtitle) noexcept
{
  typedef void (*call_wrap_t) (::GtkHeaderBar* bar, const char* subtitle);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_header_bar_set_subtitle;
  auto subtitle_to_c = gi::unwrap (subtitle, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkHeaderBar*) (gobj_()), (const char*) (subtitle_to_c));
}
void base::HeaderBarBase::set_subtitle () noexcept
{
  typedef void (*call_wrap_t) (::GtkHeaderBar* bar, const char* subtitle);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_header_bar_set_subtitle;
  auto subtitle_to_c = nullptr;
  call_wrap_v ((::GtkHeaderBar*) (gobj_()), (const char*) (subtitle_to_c));
}

// void gtk_header_bar_set_title (GtkHeaderBar* bar, const gchar* title);
// void gtk_header_bar_set_title (::GtkHeaderBar* bar, const char* title);
void base::HeaderBarBase::set_title (const std::string & title) noexcept
{
  typedef void (*call_wrap_t) (::GtkHeaderBar* bar, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_header_bar_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkHeaderBar*) (gobj_()), (const char*) (title_to_c));
}
void base::HeaderBarBase::set_title () noexcept
{
  typedef void (*call_wrap_t) (::GtkHeaderBar* bar, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_header_bar_set_title;
  auto title_to_c = nullptr;
  call_wrap_v ((::GtkHeaderBar*) (gobj_()), (const char*) (title_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/headerbar_extra_def_impl.hpp>)
#include <gtk/headerbar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/headerbar_extra_impl.hpp>)
#include <gtk/headerbar_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void HeaderBarClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkHeaderBarClass *methods = (::GtkHeaderBarClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
