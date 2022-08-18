// AUTO-GENERATED

#ifndef _GI_GTK_SEARCHBAR_IMPL_HPP_
#define _GI_GTK_SEARCHBAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_search_bar_new ();
// ::GtkSearchBar* gtk_search_bar_new ();
Gtk::SearchBar base::SearchBarBase::new_ () noexcept
{
  typedef ::GtkSearchBar* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_search_bar_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_search_bar_connect_entry (GtkSearchBar* bar, GtkEntry* entry);
// void gtk_search_bar_connect_entry (::GtkSearchBar* bar, ::GtkEntry* entry);
void base::SearchBarBase::connect_entry (Gtk::Entry entry) noexcept
{
  typedef void (*call_wrap_t) (::GtkSearchBar* bar, ::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_search_bar_connect_entry;
  auto entry_to_c = gi::unwrap (entry, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkSearchBar*) (gobj_()), (::GtkEntry*) (entry_to_c));
}

// gboolean gtk_search_bar_get_search_mode (GtkSearchBar* bar);
// gboolean gtk_search_bar_get_search_mode (::GtkSearchBar* bar);
bool base::SearchBarBase::get_search_mode () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSearchBar* bar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_search_bar_get_search_mode;
  auto _temp_ret = call_wrap_v ((::GtkSearchBar*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_search_bar_get_show_close_button (GtkSearchBar* bar);
// gboolean gtk_search_bar_get_show_close_button (::GtkSearchBar* bar);
bool base::SearchBarBase::get_show_close_button () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSearchBar* bar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_search_bar_get_show_close_button;
  auto _temp_ret = call_wrap_v ((::GtkSearchBar*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_search_bar_handle_event (GtkSearchBar* bar, GdkEvent* event);
// gboolean gtk_search_bar_handle_event (::GtkSearchBar* bar,  event);
// SKIP; event type  not supported

// void gtk_search_bar_set_search_mode (GtkSearchBar* bar, gboolean search_mode);
// void gtk_search_bar_set_search_mode (::GtkSearchBar* bar, gboolean search_mode);
void base::SearchBarBase::set_search_mode (gboolean search_mode) noexcept
{
  typedef void (*call_wrap_t) (::GtkSearchBar* bar, gboolean search_mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_search_bar_set_search_mode;
  auto search_mode_to_c = search_mode;
  call_wrap_v ((::GtkSearchBar*) (gobj_()), (gboolean) (search_mode_to_c));
}

// void gtk_search_bar_set_show_close_button (GtkSearchBar* bar, gboolean visible);
// void gtk_search_bar_set_show_close_button (::GtkSearchBar* bar, gboolean visible);
void base::SearchBarBase::set_show_close_button (gboolean visible) noexcept
{
  typedef void (*call_wrap_t) (::GtkSearchBar* bar, gboolean visible);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_search_bar_set_show_close_button;
  auto visible_to_c = visible;
  call_wrap_v ((::GtkSearchBar*) (gobj_()), (gboolean) (visible_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/searchbar_extra_def_impl.hpp>)
#include <gtk/searchbar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/searchbar_extra_impl.hpp>)
#include <gtk/searchbar_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void SearchBarClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkSearchBarClass *methods = (::GtkSearchBarClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
