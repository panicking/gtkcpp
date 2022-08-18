// AUTO-GENERATED

#ifndef _GI_GTK_PLACESSIDEBAR_IMPL_HPP_
#define _GI_GTK_PLACESSIDEBAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_places_sidebar_new ();
// ::GtkPlacesSidebar* gtk_places_sidebar_new ();
Gtk::PlacesSidebar base::PlacesSidebarBase::new_ () noexcept
{
  typedef ::GtkPlacesSidebar* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_places_sidebar_add_shortcut (GtkPlacesSidebar* sidebar, GFile* location);
// void gtk_places_sidebar_add_shortcut (::GtkPlacesSidebar* sidebar, ::GFile* location);
void base::PlacesSidebarBase::add_shortcut (Gio::File location) noexcept
{
  typedef void (*call_wrap_t) (::GtkPlacesSidebar* sidebar, ::GFile* location);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_add_shortcut;
  auto location_to_c = gi::unwrap (location, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPlacesSidebar*) (gobj_()), (::GFile*) (location_to_c));
}

// gboolean gtk_places_sidebar_get_local_only (GtkPlacesSidebar* sidebar);
// gboolean gtk_places_sidebar_get_local_only (::GtkPlacesSidebar* sidebar);
bool base::PlacesSidebarBase::get_local_only () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPlacesSidebar* sidebar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_get_local_only;
  auto _temp_ret = call_wrap_v ((::GtkPlacesSidebar*) (gobj_()));
  return _temp_ret;
}

// GFile* gtk_places_sidebar_get_location (GtkPlacesSidebar* sidebar);
// ::GFile* gtk_places_sidebar_get_location (::GtkPlacesSidebar* sidebar);
Gio::File base::PlacesSidebarBase::get_location () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GtkPlacesSidebar* sidebar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_get_location;
  auto _temp_ret = call_wrap_v ((::GtkPlacesSidebar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFile* gtk_places_sidebar_get_nth_bookmark (GtkPlacesSidebar* sidebar, gint n);
// ::GFile* gtk_places_sidebar_get_nth_bookmark (::GtkPlacesSidebar* sidebar, gint n);
Gio::File base::PlacesSidebarBase::get_nth_bookmark (gint n) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GtkPlacesSidebar* sidebar, gint n);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_get_nth_bookmark;
  auto n_to_c = n;
  auto _temp_ret = call_wrap_v ((::GtkPlacesSidebar*) (gobj_()), (gint) (n_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkPlacesOpenFlags gtk_places_sidebar_get_open_flags (GtkPlacesSidebar* sidebar);
// ::GtkPlacesOpenFlags gtk_places_sidebar_get_open_flags (::GtkPlacesSidebar* sidebar);
Gtk::PlacesOpenFlags base::PlacesSidebarBase::get_open_flags () noexcept
{
  typedef ::GtkPlacesOpenFlags (*call_wrap_t) (::GtkPlacesSidebar* sidebar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_get_open_flags;
  auto _temp_ret = call_wrap_v ((::GtkPlacesSidebar*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_places_sidebar_get_show_connect_to_server (GtkPlacesSidebar* sidebar);
// gboolean gtk_places_sidebar_get_show_connect_to_server (::GtkPlacesSidebar* sidebar);
// IGNORE; deprecated

// gboolean gtk_places_sidebar_get_show_desktop (GtkPlacesSidebar* sidebar);
// gboolean gtk_places_sidebar_get_show_desktop (::GtkPlacesSidebar* sidebar);
bool base::PlacesSidebarBase::get_show_desktop () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPlacesSidebar* sidebar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_get_show_desktop;
  auto _temp_ret = call_wrap_v ((::GtkPlacesSidebar*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_places_sidebar_get_show_enter_location (GtkPlacesSidebar* sidebar);
// gboolean gtk_places_sidebar_get_show_enter_location (::GtkPlacesSidebar* sidebar);
bool base::PlacesSidebarBase::get_show_enter_location () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPlacesSidebar* sidebar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_get_show_enter_location;
  auto _temp_ret = call_wrap_v ((::GtkPlacesSidebar*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_places_sidebar_get_show_other_locations (GtkPlacesSidebar* sidebar);
// gboolean gtk_places_sidebar_get_show_other_locations (::GtkPlacesSidebar* sidebar);
bool base::PlacesSidebarBase::get_show_other_locations () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPlacesSidebar* sidebar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_get_show_other_locations;
  auto _temp_ret = call_wrap_v ((::GtkPlacesSidebar*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_places_sidebar_get_show_recent (GtkPlacesSidebar* sidebar);
// gboolean gtk_places_sidebar_get_show_recent (::GtkPlacesSidebar* sidebar);
bool base::PlacesSidebarBase::get_show_recent () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPlacesSidebar* sidebar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_get_show_recent;
  auto _temp_ret = call_wrap_v ((::GtkPlacesSidebar*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_places_sidebar_get_show_starred_location (GtkPlacesSidebar* sidebar);
// gboolean gtk_places_sidebar_get_show_starred_location (::GtkPlacesSidebar* sidebar);
bool base::PlacesSidebarBase::get_show_starred_location () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPlacesSidebar* sidebar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_get_show_starred_location;
  auto _temp_ret = call_wrap_v ((::GtkPlacesSidebar*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_places_sidebar_get_show_trash (GtkPlacesSidebar* sidebar);
// gboolean gtk_places_sidebar_get_show_trash (::GtkPlacesSidebar* sidebar);
bool base::PlacesSidebarBase::get_show_trash () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPlacesSidebar* sidebar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_get_show_trash;
  auto _temp_ret = call_wrap_v ((::GtkPlacesSidebar*) (gobj_()));
  return _temp_ret;
}

// GSList* gtk_places_sidebar_list_shortcuts (GtkPlacesSidebar* sidebar);
// ::GSList* gtk_places_sidebar_list_shortcuts (::GtkPlacesSidebar* sidebar);
std::vector<Gio::File> base::PlacesSidebarBase::list_shortcuts () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::GtkPlacesSidebar* sidebar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_list_shortcuts;
  auto _temp_ret = call_wrap_v ((::GtkPlacesSidebar*) (gobj_()));
  return gi::detail::wrap_list<Gio::File> (_temp_ret, gi::transfer_full);
}

// void gtk_places_sidebar_remove_shortcut (GtkPlacesSidebar* sidebar, GFile* location);
// void gtk_places_sidebar_remove_shortcut (::GtkPlacesSidebar* sidebar, ::GFile* location);
void base::PlacesSidebarBase::remove_shortcut (Gio::File location) noexcept
{
  typedef void (*call_wrap_t) (::GtkPlacesSidebar* sidebar, ::GFile* location);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_remove_shortcut;
  auto location_to_c = gi::unwrap (location, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPlacesSidebar*) (gobj_()), (::GFile*) (location_to_c));
}

// void gtk_places_sidebar_set_drop_targets_visible (GtkPlacesSidebar* sidebar, gboolean visible, GdkDragContext* context);
// void gtk_places_sidebar_set_drop_targets_visible (::GtkPlacesSidebar* sidebar, gboolean visible, ::GdkDragContext* context);
void base::PlacesSidebarBase::set_drop_targets_visible (gboolean visible, Gdk::DragContext context) noexcept
{
  typedef void (*call_wrap_t) (::GtkPlacesSidebar* sidebar, gboolean visible, ::GdkDragContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_set_drop_targets_visible;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto visible_to_c = visible;
  call_wrap_v ((::GtkPlacesSidebar*) (gobj_()), (gboolean) (visible_to_c), (::GdkDragContext*) (context_to_c));
}

// void gtk_places_sidebar_set_local_only (GtkPlacesSidebar* sidebar, gboolean local_only);
// void gtk_places_sidebar_set_local_only (::GtkPlacesSidebar* sidebar, gboolean local_only);
void base::PlacesSidebarBase::set_local_only (gboolean local_only) noexcept
{
  typedef void (*call_wrap_t) (::GtkPlacesSidebar* sidebar, gboolean local_only);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_set_local_only;
  auto local_only_to_c = local_only;
  call_wrap_v ((::GtkPlacesSidebar*) (gobj_()), (gboolean) (local_only_to_c));
}

// void gtk_places_sidebar_set_location (GtkPlacesSidebar* sidebar, GFile* location);
// void gtk_places_sidebar_set_location (::GtkPlacesSidebar* sidebar, ::GFile* location);
void base::PlacesSidebarBase::set_location (Gio::File location) noexcept
{
  typedef void (*call_wrap_t) (::GtkPlacesSidebar* sidebar, ::GFile* location);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_set_location;
  auto location_to_c = gi::unwrap (location, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPlacesSidebar*) (gobj_()), (::GFile*) (location_to_c));
}
void base::PlacesSidebarBase::set_location () noexcept
{
  typedef void (*call_wrap_t) (::GtkPlacesSidebar* sidebar, ::GFile* location);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_set_location;
  auto location_to_c = nullptr;
  call_wrap_v ((::GtkPlacesSidebar*) (gobj_()), (::GFile*) (location_to_c));
}

// void gtk_places_sidebar_set_open_flags (GtkPlacesSidebar* sidebar, GtkPlacesOpenFlags flags);
// void gtk_places_sidebar_set_open_flags (::GtkPlacesSidebar* sidebar, ::GtkPlacesOpenFlags flags);
void base::PlacesSidebarBase::set_open_flags (Gtk::PlacesOpenFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GtkPlacesSidebar* sidebar, ::GtkPlacesOpenFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_set_open_flags;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GtkPlacesSidebar*) (gobj_()), (::GtkPlacesOpenFlags) (flags_to_c));
}

// void gtk_places_sidebar_set_show_connect_to_server (GtkPlacesSidebar* sidebar, gboolean show_connect_to_server);
// void gtk_places_sidebar_set_show_connect_to_server (::GtkPlacesSidebar* sidebar, gboolean show_connect_to_server);
// IGNORE; deprecated

// void gtk_places_sidebar_set_show_desktop (GtkPlacesSidebar* sidebar, gboolean show_desktop);
// void gtk_places_sidebar_set_show_desktop (::GtkPlacesSidebar* sidebar, gboolean show_desktop);
void base::PlacesSidebarBase::set_show_desktop (gboolean show_desktop) noexcept
{
  typedef void (*call_wrap_t) (::GtkPlacesSidebar* sidebar, gboolean show_desktop);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_set_show_desktop;
  auto show_desktop_to_c = show_desktop;
  call_wrap_v ((::GtkPlacesSidebar*) (gobj_()), (gboolean) (show_desktop_to_c));
}

// void gtk_places_sidebar_set_show_enter_location (GtkPlacesSidebar* sidebar, gboolean show_enter_location);
// void gtk_places_sidebar_set_show_enter_location (::GtkPlacesSidebar* sidebar, gboolean show_enter_location);
void base::PlacesSidebarBase::set_show_enter_location (gboolean show_enter_location) noexcept
{
  typedef void (*call_wrap_t) (::GtkPlacesSidebar* sidebar, gboolean show_enter_location);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_set_show_enter_location;
  auto show_enter_location_to_c = show_enter_location;
  call_wrap_v ((::GtkPlacesSidebar*) (gobj_()), (gboolean) (show_enter_location_to_c));
}

// void gtk_places_sidebar_set_show_other_locations (GtkPlacesSidebar* sidebar, gboolean show_other_locations);
// void gtk_places_sidebar_set_show_other_locations (::GtkPlacesSidebar* sidebar, gboolean show_other_locations);
void base::PlacesSidebarBase::set_show_other_locations (gboolean show_other_locations) noexcept
{
  typedef void (*call_wrap_t) (::GtkPlacesSidebar* sidebar, gboolean show_other_locations);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_set_show_other_locations;
  auto show_other_locations_to_c = show_other_locations;
  call_wrap_v ((::GtkPlacesSidebar*) (gobj_()), (gboolean) (show_other_locations_to_c));
}

// void gtk_places_sidebar_set_show_recent (GtkPlacesSidebar* sidebar, gboolean show_recent);
// void gtk_places_sidebar_set_show_recent (::GtkPlacesSidebar* sidebar, gboolean show_recent);
void base::PlacesSidebarBase::set_show_recent (gboolean show_recent) noexcept
{
  typedef void (*call_wrap_t) (::GtkPlacesSidebar* sidebar, gboolean show_recent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_set_show_recent;
  auto show_recent_to_c = show_recent;
  call_wrap_v ((::GtkPlacesSidebar*) (gobj_()), (gboolean) (show_recent_to_c));
}

// void gtk_places_sidebar_set_show_starred_location (GtkPlacesSidebar* sidebar, gboolean show_starred_location);
// void gtk_places_sidebar_set_show_starred_location (::GtkPlacesSidebar* sidebar, gboolean show_starred_location);
void base::PlacesSidebarBase::set_show_starred_location (gboolean show_starred_location) noexcept
{
  typedef void (*call_wrap_t) (::GtkPlacesSidebar* sidebar, gboolean show_starred_location);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_set_show_starred_location;
  auto show_starred_location_to_c = show_starred_location;
  call_wrap_v ((::GtkPlacesSidebar*) (gobj_()), (gboolean) (show_starred_location_to_c));
}

// void gtk_places_sidebar_set_show_trash (GtkPlacesSidebar* sidebar, gboolean show_trash);
// void gtk_places_sidebar_set_show_trash (::GtkPlacesSidebar* sidebar, gboolean show_trash);
void base::PlacesSidebarBase::set_show_trash (gboolean show_trash) noexcept
{
  typedef void (*call_wrap_t) (::GtkPlacesSidebar* sidebar, gboolean show_trash);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_places_sidebar_set_show_trash;
  auto show_trash_to_c = show_trash;
  call_wrap_v ((::GtkPlacesSidebar*) (gobj_()), (gboolean) (show_trash_to_c));
}


// SKIP; glib:signal container parameter not supported

// SKIP; glib:signal container parameter not supported




// IGNORE; deprecated



// IGNORE; deprecated





} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/placessidebar_extra_def_impl.hpp>)
#include <gtk/placessidebar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/placessidebar_extra_impl.hpp>)
#include <gtk/placessidebar_extra_impl.hpp>
#endif
#endif

#endif
