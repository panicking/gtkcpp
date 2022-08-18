// AUTO-GENERATED

#ifndef _GI_GTK_PLACESSIDEBAR_HPP_
#define _GI_GTK_PLACESSIDEBAR_HPP_

#include "scrolledwindow.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class PlacesSidebar;

namespace base {


#define GI_GTK_PLACESSIDEBAR_BASE base::PlacesSidebarBase
class PlacesSidebarBase : public Gtk::ScrolledWindow
{
typedef Gtk::ScrolledWindow super_type;
public:
typedef ::GtkPlacesSidebar BaseObjectType;

PlacesSidebarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_places_sidebar_get_type(); } 

// GtkWidget* gtk_places_sidebar_new ();
// ::GtkPlacesSidebar* gtk_places_sidebar_new ();
static GI_INLINE_DECL Gtk::PlacesSidebar new_ () noexcept;

// void gtk_places_sidebar_add_shortcut (GtkPlacesSidebar* sidebar, GFile* location);
// void gtk_places_sidebar_add_shortcut (::GtkPlacesSidebar* sidebar, ::GFile* location);
GI_INLINE_DECL void add_shortcut (Gio::File location) noexcept;

// gboolean gtk_places_sidebar_get_local_only (GtkPlacesSidebar* sidebar);
// gboolean gtk_places_sidebar_get_local_only (::GtkPlacesSidebar* sidebar);
GI_INLINE_DECL bool get_local_only () noexcept;

// GFile* gtk_places_sidebar_get_location (GtkPlacesSidebar* sidebar);
// ::GFile* gtk_places_sidebar_get_location (::GtkPlacesSidebar* sidebar);
GI_INLINE_DECL Gio::File get_location () noexcept;

// GFile* gtk_places_sidebar_get_nth_bookmark (GtkPlacesSidebar* sidebar, gint n);
// ::GFile* gtk_places_sidebar_get_nth_bookmark (::GtkPlacesSidebar* sidebar, gint n);
GI_INLINE_DECL Gio::File get_nth_bookmark (gint n) noexcept;

// GtkPlacesOpenFlags gtk_places_sidebar_get_open_flags (GtkPlacesSidebar* sidebar);
// ::GtkPlacesOpenFlags gtk_places_sidebar_get_open_flags (::GtkPlacesSidebar* sidebar);
GI_INLINE_DECL Gtk::PlacesOpenFlags get_open_flags () noexcept;

// gboolean gtk_places_sidebar_get_show_connect_to_server (GtkPlacesSidebar* sidebar);
// gboolean gtk_places_sidebar_get_show_connect_to_server (::GtkPlacesSidebar* sidebar);
// IGNORE; deprecated

// gboolean gtk_places_sidebar_get_show_desktop (GtkPlacesSidebar* sidebar);
// gboolean gtk_places_sidebar_get_show_desktop (::GtkPlacesSidebar* sidebar);
GI_INLINE_DECL bool get_show_desktop () noexcept;

// gboolean gtk_places_sidebar_get_show_enter_location (GtkPlacesSidebar* sidebar);
// gboolean gtk_places_sidebar_get_show_enter_location (::GtkPlacesSidebar* sidebar);
GI_INLINE_DECL bool get_show_enter_location () noexcept;

// gboolean gtk_places_sidebar_get_show_other_locations (GtkPlacesSidebar* sidebar);
// gboolean gtk_places_sidebar_get_show_other_locations (::GtkPlacesSidebar* sidebar);
GI_INLINE_DECL bool get_show_other_locations () noexcept;

// gboolean gtk_places_sidebar_get_show_recent (GtkPlacesSidebar* sidebar);
// gboolean gtk_places_sidebar_get_show_recent (::GtkPlacesSidebar* sidebar);
GI_INLINE_DECL bool get_show_recent () noexcept;

// gboolean gtk_places_sidebar_get_show_starred_location (GtkPlacesSidebar* sidebar);
// gboolean gtk_places_sidebar_get_show_starred_location (::GtkPlacesSidebar* sidebar);
GI_INLINE_DECL bool get_show_starred_location () noexcept;

// gboolean gtk_places_sidebar_get_show_trash (GtkPlacesSidebar* sidebar);
// gboolean gtk_places_sidebar_get_show_trash (::GtkPlacesSidebar* sidebar);
GI_INLINE_DECL bool get_show_trash () noexcept;

// GSList* gtk_places_sidebar_list_shortcuts (GtkPlacesSidebar* sidebar);
// ::GSList* gtk_places_sidebar_list_shortcuts (::GtkPlacesSidebar* sidebar);
GI_INLINE_DECL std::vector<Gio::File> list_shortcuts () noexcept;

// void gtk_places_sidebar_remove_shortcut (GtkPlacesSidebar* sidebar, GFile* location);
// void gtk_places_sidebar_remove_shortcut (::GtkPlacesSidebar* sidebar, ::GFile* location);
GI_INLINE_DECL void remove_shortcut (Gio::File location) noexcept;

// void gtk_places_sidebar_set_drop_targets_visible (GtkPlacesSidebar* sidebar, gboolean visible, GdkDragContext* context);
// void gtk_places_sidebar_set_drop_targets_visible (::GtkPlacesSidebar* sidebar, gboolean visible, ::GdkDragContext* context);
GI_INLINE_DECL void set_drop_targets_visible (gboolean visible, Gdk::DragContext context) noexcept;

// void gtk_places_sidebar_set_local_only (GtkPlacesSidebar* sidebar, gboolean local_only);
// void gtk_places_sidebar_set_local_only (::GtkPlacesSidebar* sidebar, gboolean local_only);
GI_INLINE_DECL void set_local_only (gboolean local_only) noexcept;

// void gtk_places_sidebar_set_location (GtkPlacesSidebar* sidebar, GFile* location);
// void gtk_places_sidebar_set_location (::GtkPlacesSidebar* sidebar, ::GFile* location);
GI_INLINE_DECL void set_location (Gio::File location) noexcept;
GI_INLINE_DECL void set_location () noexcept;

// void gtk_places_sidebar_set_open_flags (GtkPlacesSidebar* sidebar, GtkPlacesOpenFlags flags);
// void gtk_places_sidebar_set_open_flags (::GtkPlacesSidebar* sidebar, ::GtkPlacesOpenFlags flags);
GI_INLINE_DECL void set_open_flags (Gtk::PlacesOpenFlags flags) noexcept;

// void gtk_places_sidebar_set_show_connect_to_server (GtkPlacesSidebar* sidebar, gboolean show_connect_to_server);
// void gtk_places_sidebar_set_show_connect_to_server (::GtkPlacesSidebar* sidebar, gboolean show_connect_to_server);
// IGNORE; deprecated

// void gtk_places_sidebar_set_show_desktop (GtkPlacesSidebar* sidebar, gboolean show_desktop);
// void gtk_places_sidebar_set_show_desktop (::GtkPlacesSidebar* sidebar, gboolean show_desktop);
GI_INLINE_DECL void set_show_desktop (gboolean show_desktop) noexcept;

// void gtk_places_sidebar_set_show_enter_location (GtkPlacesSidebar* sidebar, gboolean show_enter_location);
// void gtk_places_sidebar_set_show_enter_location (::GtkPlacesSidebar* sidebar, gboolean show_enter_location);
GI_INLINE_DECL void set_show_enter_location (gboolean show_enter_location) noexcept;

// void gtk_places_sidebar_set_show_other_locations (GtkPlacesSidebar* sidebar, gboolean show_other_locations);
// void gtk_places_sidebar_set_show_other_locations (::GtkPlacesSidebar* sidebar, gboolean show_other_locations);
GI_INLINE_DECL void set_show_other_locations (gboolean show_other_locations) noexcept;

// void gtk_places_sidebar_set_show_recent (GtkPlacesSidebar* sidebar, gboolean show_recent);
// void gtk_places_sidebar_set_show_recent (::GtkPlacesSidebar* sidebar, gboolean show_recent);
GI_INLINE_DECL void set_show_recent (gboolean show_recent) noexcept;

// void gtk_places_sidebar_set_show_starred_location (GtkPlacesSidebar* sidebar, gboolean show_starred_location);
// void gtk_places_sidebar_set_show_starred_location (::GtkPlacesSidebar* sidebar, gboolean show_starred_location);
GI_INLINE_DECL void set_show_starred_location (gboolean show_starred_location) noexcept;

// void gtk_places_sidebar_set_show_trash (GtkPlacesSidebar* sidebar, gboolean show_trash);
// void gtk_places_sidebar_set_show_trash (::GtkPlacesSidebar* sidebar, gboolean show_trash);
GI_INLINE_DECL void set_show_trash (gboolean show_trash) noexcept;

gi::property_proxy<bool, base::PlacesSidebarBase> property_local_only()
{ return gi::property_proxy<bool, base::PlacesSidebarBase> (*this, "local-only"); }
const gi::property_proxy<bool, base::PlacesSidebarBase> property_local_only() const
{ return gi::property_proxy<bool, base::PlacesSidebarBase> (*this, "local-only"); }

gi::property_proxy<Gio::File, base::PlacesSidebarBase> property_location()
{ return gi::property_proxy<Gio::File, base::PlacesSidebarBase> (*this, "location"); }
const gi::property_proxy<Gio::File, base::PlacesSidebarBase> property_location() const
{ return gi::property_proxy<Gio::File, base::PlacesSidebarBase> (*this, "location"); }

gi::property_proxy<Gtk::PlacesOpenFlags, base::PlacesSidebarBase> property_open_flags()
{ return gi::property_proxy<Gtk::PlacesOpenFlags, base::PlacesSidebarBase> (*this, "open-flags"); }
const gi::property_proxy<Gtk::PlacesOpenFlags, base::PlacesSidebarBase> property_open_flags() const
{ return gi::property_proxy<Gtk::PlacesOpenFlags, base::PlacesSidebarBase> (*this, "open-flags"); }

gi::property_proxy<bool, base::PlacesSidebarBase> property_populate_all()
{ return gi::property_proxy<bool, base::PlacesSidebarBase> (*this, "populate-all"); }
const gi::property_proxy<bool, base::PlacesSidebarBase> property_populate_all() const
{ return gi::property_proxy<bool, base::PlacesSidebarBase> (*this, "populate-all"); }

gi::property_proxy<bool, base::PlacesSidebarBase> property_show_connect_to_server()
{ return gi::property_proxy<bool, base::PlacesSidebarBase> (*this, "show-connect-to-server"); }
const gi::property_proxy<bool, base::PlacesSidebarBase> property_show_connect_to_server() const
{ return gi::property_proxy<bool, base::PlacesSidebarBase> (*this, "show-connect-to-server"); }

gi::property_proxy<bool, base::PlacesSidebarBase> property_show_desktop()
{ return gi::property_proxy<bool, base::PlacesSidebarBase> (*this, "show-desktop"); }
const gi::property_proxy<bool, base::PlacesSidebarBase> property_show_desktop() const
{ return gi::property_proxy<bool, base::PlacesSidebarBase> (*this, "show-desktop"); }

gi::property_proxy<bool, base::PlacesSidebarBase> property_show_enter_location()
{ return gi::property_proxy<bool, base::PlacesSidebarBase> (*this, "show-enter-location"); }
const gi::property_proxy<bool, base::PlacesSidebarBase> property_show_enter_location() const
{ return gi::property_proxy<bool, base::PlacesSidebarBase> (*this, "show-enter-location"); }

gi::property_proxy<bool, base::PlacesSidebarBase> property_show_other_locations()
{ return gi::property_proxy<bool, base::PlacesSidebarBase> (*this, "show-other-locations"); }
const gi::property_proxy<bool, base::PlacesSidebarBase> property_show_other_locations() const
{ return gi::property_proxy<bool, base::PlacesSidebarBase> (*this, "show-other-locations"); }

gi::property_proxy<bool, base::PlacesSidebarBase> property_show_recent()
{ return gi::property_proxy<bool, base::PlacesSidebarBase> (*this, "show-recent"); }
const gi::property_proxy<bool, base::PlacesSidebarBase> property_show_recent() const
{ return gi::property_proxy<bool, base::PlacesSidebarBase> (*this, "show-recent"); }

gi::property_proxy<bool, base::PlacesSidebarBase> property_show_starred_location()
{ return gi::property_proxy<bool, base::PlacesSidebarBase> (*this, "show-starred-location"); }
const gi::property_proxy<bool, base::PlacesSidebarBase> property_show_starred_location() const
{ return gi::property_proxy<bool, base::PlacesSidebarBase> (*this, "show-starred-location"); }

gi::property_proxy<bool, base::PlacesSidebarBase> property_show_trash()
{ return gi::property_proxy<bool, base::PlacesSidebarBase> (*this, "show-trash"); }
const gi::property_proxy<bool, base::PlacesSidebarBase> property_show_trash() const
{ return gi::property_proxy<bool, base::PlacesSidebarBase> (*this, "show-trash"); }

// signal drag-action-ask
gi::signal_proxy<gint(Gtk::PlacesSidebar, gint actions)> signal_drag_action_ask()
{ return gi::signal_proxy<gint(Gtk::PlacesSidebar, gint actions)> (*this, "drag-action-ask"); }

// signal drag-action-requested
// SKIP; glib:signal container parameter not supported

// signal drag-perform-drop
// SKIP; glib:signal container parameter not supported

// signal mount
gi::signal_proxy<void(Gtk::PlacesSidebar, Gio::MountOperation mount_operation)> signal_mount()
{ return gi::signal_proxy<void(Gtk::PlacesSidebar, Gio::MountOperation mount_operation)> (*this, "mount"); }

// signal open-location
gi::signal_proxy<void(Gtk::PlacesSidebar, Gio::File location, Gtk::PlacesOpenFlags open_flags)> signal_open_location()
{ return gi::signal_proxy<void(Gtk::PlacesSidebar, Gio::File location, Gtk::PlacesOpenFlags open_flags)> (*this, "open-location"); }

// signal populate-popup
gi::signal_proxy<void(Gtk::PlacesSidebar, Gtk::Widget container, Gio::File selected_item, Gio::Volume selected_volume)> signal_populate_popup()
{ return gi::signal_proxy<void(Gtk::PlacesSidebar, Gtk::Widget container, Gio::File selected_item, Gio::Volume selected_volume)> (*this, "populate-popup"); }

// signal show-connect-to-server
// IGNORE; deprecated

// signal show-enter-location
gi::signal_proxy<void(Gtk::PlacesSidebar)> signal_show_enter_location()
{ return gi::signal_proxy<void(Gtk::PlacesSidebar)> (*this, "show-enter-location"); }

// signal show-error-message
gi::signal_proxy<void(Gtk::PlacesSidebar, const std::string & primary, const std::string & secondary)> signal_show_error_message()
{ return gi::signal_proxy<void(Gtk::PlacesSidebar, const std::string & primary, const std::string & secondary)> (*this, "show-error-message"); }

// signal show-other-locations
// IGNORE; deprecated

// signal show-other-locations-with-flags
gi::signal_proxy<void(Gtk::PlacesSidebar, Gtk::PlacesOpenFlags open_flags)> signal_show_other_locations_with_flags()
{ return gi::signal_proxy<void(Gtk::PlacesSidebar, Gtk::PlacesOpenFlags open_flags)> (*this, "show-other-locations-with-flags"); }

// signal show-starred-location
gi::signal_proxy<void(Gtk::PlacesSidebar, Gtk::PlacesOpenFlags open_flags)> signal_show_starred_location()
{ return gi::signal_proxy<void(Gtk::PlacesSidebar, Gtk::PlacesOpenFlags open_flags)> (*this, "show-starred-location"); }

// signal unmount
gi::signal_proxy<void(Gtk::PlacesSidebar, Gio::MountOperation mount_operation)> signal_unmount()
{ return gi::signal_proxy<void(Gtk::PlacesSidebar, Gio::MountOperation mount_operation)> (*this, "unmount"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/placessidebar_extra_def.hpp>)
#include <gtk/placessidebar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/placessidebar_extra.hpp>)
#include <gtk/placessidebar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PlacesSidebar : public GI_GTK_PLACESSIDEBAR_BASE
{ typedef GI_GTK_PLACESSIDEBAR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPlacesSidebar>
{ typedef Gtk::PlacesSidebar type; }; 

} // namespace repository

} // namespace gi

#endif
