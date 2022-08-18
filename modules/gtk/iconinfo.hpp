// AUTO-GENERATED

#ifndef _GI_GTK_ICONINFO_HPP_
#define _GI_GTK_ICONINFO_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class IconTheme;
class Style;
class StyleContext;

class IconInfo;

namespace base {


#define GI_GTK_ICONINFO_BASE base::IconInfoBase
class IconInfoBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkIconInfo BaseObjectType;

IconInfoBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_icon_info_get_type(); } 

// GtkIconInfo* gtk_icon_info_new_for_pixbuf (GtkIconTheme* icon_theme, GdkPixbuf* pixbuf);
// ::GtkIconInfo* gtk_icon_info_new_for_pixbuf (::GtkIconTheme* icon_theme, ::GdkPixbuf* pixbuf);
static GI_INLINE_DECL Gtk::IconInfo new_for_pixbuf (Gtk::IconTheme icon_theme, GdkPixbuf::Pixbuf pixbuf) noexcept;

// GtkIconInfo* gtk_icon_info_copy (GtkIconInfo* icon_info);
// ::GtkIconInfo* gtk_icon_info_copy (::GtkIconInfo* icon_info);
// IGNORE; deprecated

// void gtk_icon_info_free (GtkIconInfo* icon_info);
// void gtk_icon_info_free (::GtkIconInfo* icon_info);
// IGNORE; marked ignore

// gboolean gtk_icon_info_get_attach_points (GtkIconInfo* icon_info, GdkPoint** points, gint* n_points);
// gboolean gtk_icon_info_get_attach_points (::GtkIconInfo* icon_info, ::GdkPoint*** points, gint* n_points);
// IGNORE; deprecated

// gint gtk_icon_info_get_base_scale (GtkIconInfo* icon_info);
// gint gtk_icon_info_get_base_scale (::GtkIconInfo* icon_info);
GI_INLINE_DECL gint get_base_scale () noexcept;

// gint gtk_icon_info_get_base_size (GtkIconInfo* icon_info);
// gint gtk_icon_info_get_base_size (::GtkIconInfo* icon_info);
GI_INLINE_DECL gint get_base_size () noexcept;

// GdkPixbuf* gtk_icon_info_get_builtin_pixbuf (GtkIconInfo* icon_info);
// ::GdkPixbuf* gtk_icon_info_get_builtin_pixbuf (::GtkIconInfo* icon_info);
// IGNORE; deprecated

// const gchar* gtk_icon_info_get_display_name (GtkIconInfo* icon_info);
// const char* gtk_icon_info_get_display_name (::GtkIconInfo* icon_info);
// IGNORE; deprecated

// gboolean gtk_icon_info_get_embedded_rect (GtkIconInfo* icon_info, GdkRectangle* rectangle);
// gboolean gtk_icon_info_get_embedded_rect (::GtkIconInfo* icon_info, ::GdkRectangle* rectangle);
// IGNORE; deprecated

// const gchar* gtk_icon_info_get_filename (GtkIconInfo* icon_info);
// const char* gtk_icon_info_get_filename (::GtkIconInfo* icon_info);
GI_INLINE_DECL std::string get_filename () noexcept;

// gboolean gtk_icon_info_is_symbolic (GtkIconInfo* icon_info);
// gboolean gtk_icon_info_is_symbolic (::GtkIconInfo* icon_info);
GI_INLINE_DECL bool is_symbolic () noexcept;

// GdkPixbuf* gtk_icon_info_load_icon (GtkIconInfo* icon_info, GError ** error);
// ::GdkPixbuf* gtk_icon_info_load_icon (::GtkIconInfo* icon_info, GError ** error);
GI_INLINE_DECL GdkPixbuf::Pixbuf load_icon ();
GI_INLINE_DECL GdkPixbuf::Pixbuf load_icon (GLib::Error * _error) noexcept;

// void gtk_icon_info_load_icon_async (GtkIconInfo* icon_info, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void gtk_icon_info_load_icon_async (::GtkIconInfo* icon_info, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void load_icon_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void load_icon_async (Gio::AsyncReadyCallback callback) noexcept;

// GdkPixbuf* gtk_icon_info_load_icon_finish (GtkIconInfo* icon_info, GAsyncResult* res, GError ** error);
// ::GdkPixbuf* gtk_icon_info_load_icon_finish (::GtkIconInfo* icon_info, ::GAsyncResult* res, GError ** error);
GI_INLINE_DECL GdkPixbuf::Pixbuf load_icon_finish (Gio::AsyncResult res);
GI_INLINE_DECL GdkPixbuf::Pixbuf load_icon_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// cairo_surface_t* gtk_icon_info_load_surface (GtkIconInfo* icon_info, GdkWindow* for_window, GError ** error);
// ::cairo_surface_t* gtk_icon_info_load_surface (::GtkIconInfo* icon_info, ::GdkWindow* for_window, GError ** error);
GI_INLINE_DECL cairo::Surface load_surface (Gdk::Window for_window);
GI_INLINE_DECL cairo::Surface load_surface ();
GI_INLINE_DECL cairo::Surface load_surface (Gdk::Window for_window, GLib::Error * _error) noexcept;
GI_INLINE_DECL cairo::Surface load_surface (GLib::Error * _error) noexcept;

// GdkPixbuf* gtk_icon_info_load_symbolic (GtkIconInfo* icon_info, const GdkRGBA* fg, const GdkRGBA* success_color, const GdkRGBA* warning_color, const GdkRGBA* error_color, gboolean* was_symbolic, GError ** error);
// ::GdkPixbuf* gtk_icon_info_load_symbolic (::GtkIconInfo* icon_info, const ::GdkRGBA* fg, const ::GdkRGBA* success_color, const ::GdkRGBA* warning_color, const ::GdkRGBA* error_color, gboolean* was_symbolic, GError ** error);
GI_INLINE_DECL GdkPixbuf::Pixbuf load_symbolic (const Gdk::RGBA & fg, const Gdk::RGBA & success_color, const Gdk::RGBA & warning_color, const Gdk::RGBA & error_color, bool * was_symbolic = nullptr);
GI_INLINE_DECL GdkPixbuf::Pixbuf load_symbolic (const Gdk::RGBA & fg, bool * was_symbolic = nullptr);
GI_INLINE_DECL GdkPixbuf::Pixbuf load_symbolic (const Gdk::RGBA & fg, const Gdk::RGBA & success_color, const Gdk::RGBA & warning_color, const Gdk::RGBA & error_color, bool * was_symbolic, GLib::Error * _error) noexcept;
GI_INLINE_DECL GdkPixbuf::Pixbuf load_symbolic (const Gdk::RGBA & fg, bool * was_symbolic, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GdkPixbuf::Pixbuf, bool> load_symbolic (const Gdk::RGBA & fg, const Gdk::RGBA & success_color, const Gdk::RGBA & warning_color, const Gdk::RGBA & error_color);
GI_INLINE_DECL std::tuple<GdkPixbuf::Pixbuf, bool> load_symbolic (const Gdk::RGBA & fg);
GI_INLINE_DECL std::tuple<GdkPixbuf::Pixbuf, bool> load_symbolic (const Gdk::RGBA & fg, const Gdk::RGBA & success_color, const Gdk::RGBA & warning_color, const Gdk::RGBA & error_color, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GdkPixbuf::Pixbuf, bool> load_symbolic (const Gdk::RGBA & fg, GLib::Error * _error) noexcept;

// void gtk_icon_info_load_symbolic_async (GtkIconInfo* icon_info, const GdkRGBA* fg, const GdkRGBA* success_color, const GdkRGBA* warning_color, const GdkRGBA* error_color, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void gtk_icon_info_load_symbolic_async (::GtkIconInfo* icon_info, const ::GdkRGBA* fg, const ::GdkRGBA* success_color, const ::GdkRGBA* warning_color, const ::GdkRGBA* error_color, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void load_symbolic_async (const Gdk::RGBA & fg, const Gdk::RGBA & success_color, const Gdk::RGBA & warning_color, const Gdk::RGBA & error_color, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void load_symbolic_async (const Gdk::RGBA & fg, Gio::AsyncReadyCallback callback) noexcept;

// GdkPixbuf* gtk_icon_info_load_symbolic_finish (GtkIconInfo* icon_info, GAsyncResult* res, gboolean* was_symbolic, GError ** error);
// ::GdkPixbuf* gtk_icon_info_load_symbolic_finish (::GtkIconInfo* icon_info, ::GAsyncResult* res, gboolean* was_symbolic, GError ** error);
GI_INLINE_DECL GdkPixbuf::Pixbuf load_symbolic_finish (Gio::AsyncResult res, bool * was_symbolic = nullptr);
GI_INLINE_DECL GdkPixbuf::Pixbuf load_symbolic_finish (Gio::AsyncResult res, bool * was_symbolic, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GdkPixbuf::Pixbuf, bool> load_symbolic_finish (Gio::AsyncResult res);
GI_INLINE_DECL std::tuple<GdkPixbuf::Pixbuf, bool> load_symbolic_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GdkPixbuf* gtk_icon_info_load_symbolic_for_context (GtkIconInfo* icon_info, GtkStyleContext* context, gboolean* was_symbolic, GError ** error);
// ::GdkPixbuf* gtk_icon_info_load_symbolic_for_context (::GtkIconInfo* icon_info, ::GtkStyleContext* context, gboolean* was_symbolic, GError ** error);
GI_INLINE_DECL GdkPixbuf::Pixbuf load_symbolic_for_context (Gtk::StyleContext context, bool * was_symbolic = nullptr);
GI_INLINE_DECL GdkPixbuf::Pixbuf load_symbolic_for_context (Gtk::StyleContext context, bool * was_symbolic, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GdkPixbuf::Pixbuf, bool> load_symbolic_for_context (Gtk::StyleContext context);
GI_INLINE_DECL std::tuple<GdkPixbuf::Pixbuf, bool> load_symbolic_for_context (Gtk::StyleContext context, GLib::Error * _error) noexcept;

// void gtk_icon_info_load_symbolic_for_context_async (GtkIconInfo* icon_info, GtkStyleContext* context, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void gtk_icon_info_load_symbolic_for_context_async (::GtkIconInfo* icon_info, ::GtkStyleContext* context, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void load_symbolic_for_context_async (Gtk::StyleContext context, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void load_symbolic_for_context_async (Gtk::StyleContext context, Gio::AsyncReadyCallback callback) noexcept;

// GdkPixbuf* gtk_icon_info_load_symbolic_for_context_finish (GtkIconInfo* icon_info, GAsyncResult* res, gboolean* was_symbolic, GError ** error);
// ::GdkPixbuf* gtk_icon_info_load_symbolic_for_context_finish (::GtkIconInfo* icon_info, ::GAsyncResult* res, gboolean* was_symbolic, GError ** error);
GI_INLINE_DECL GdkPixbuf::Pixbuf load_symbolic_for_context_finish (Gio::AsyncResult res, bool * was_symbolic = nullptr);
GI_INLINE_DECL GdkPixbuf::Pixbuf load_symbolic_for_context_finish (Gio::AsyncResult res, bool * was_symbolic, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GdkPixbuf::Pixbuf, bool> load_symbolic_for_context_finish (Gio::AsyncResult res);
GI_INLINE_DECL std::tuple<GdkPixbuf::Pixbuf, bool> load_symbolic_for_context_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GdkPixbuf* gtk_icon_info_load_symbolic_for_style (GtkIconInfo* icon_info, GtkStyle* style, GtkStateType state, gboolean* was_symbolic, GError ** error);
// ::GdkPixbuf* gtk_icon_info_load_symbolic_for_style (::GtkIconInfo* icon_info, ::GtkStyle* style,  state, gboolean* was_symbolic, GError ** error);
// IGNORE; deprecated

// void gtk_icon_info_set_raw_coordinates (GtkIconInfo* icon_info, gboolean raw_coordinates);
// void gtk_icon_info_set_raw_coordinates (::GtkIconInfo* icon_info, gboolean raw_coordinates);
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/iconinfo_extra_def.hpp>)
#include <gtk/iconinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/iconinfo_extra.hpp>)
#include <gtk/iconinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class IconInfo : public GI_GTK_ICONINFO_BASE
{ typedef GI_GTK_ICONINFO_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkIconInfo>
{ typedef Gtk::IconInfo type; }; 

} // namespace repository

} // namespace gi

#endif
