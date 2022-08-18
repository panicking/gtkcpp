// AUTO-GENERATED

#ifndef _GI_GTK_ACCELMAP_HPP_
#define _GI_GTK_ACCELMAP_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class AccelKey;

class AccelMap;

namespace base {


#define GI_GTK_ACCELMAP_BASE base::AccelMapBase
class AccelMapBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkAccelMap BaseObjectType;

AccelMapBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_accel_map_get_type(); } 

// void gtk_accel_map_add_entry (const gchar* accel_path, guint accel_key, GdkModifierType accel_mods);
// void gtk_accel_map_add_entry (const char* accel_path, guint accel_key, ::GdkModifierType accel_mods);
static GI_INLINE_DECL void add_entry (const std::string & accel_path, guint accel_key, Gdk::ModifierType accel_mods) noexcept;

// void gtk_accel_map_add_filter (const gchar* filter_pattern);
// void gtk_accel_map_add_filter (const char* filter_pattern);
static GI_INLINE_DECL void add_filter (const std::string & filter_pattern) noexcept;

// gboolean gtk_accel_map_change_entry (const gchar* accel_path, guint accel_key, GdkModifierType accel_mods, gboolean replace);
// gboolean gtk_accel_map_change_entry (const char* accel_path, guint accel_key, ::GdkModifierType accel_mods, gboolean replace);
static GI_INLINE_DECL bool change_entry (const std::string & accel_path, guint accel_key, Gdk::ModifierType accel_mods, gboolean replace) noexcept;

// void gtk_accel_map_foreach (gpointer data, GtkAccelMapForeach foreach_func);
// void gtk_accel_map_foreach (void* data,  foreach_func);
// SKIP; foreach_func type  not supported

// void gtk_accel_map_foreach_unfiltered (gpointer data, GtkAccelMapForeach foreach_func);
// void gtk_accel_map_foreach_unfiltered (void* data,  foreach_func);
// SKIP; foreach_func type  not supported

// GtkAccelMap* gtk_accel_map_get ();
// ::GtkAccelMap* gtk_accel_map_get ();
static GI_INLINE_DECL Gtk::AccelMap get () noexcept;

// void gtk_accel_map_load (const gchar* file_name);
// void gtk_accel_map_load (const char* file_name);
static GI_INLINE_DECL void load (const std::string & file_name) noexcept;

// void gtk_accel_map_load_fd (gint fd);
// void gtk_accel_map_load_fd (gint fd);
static GI_INLINE_DECL void load_fd (gint fd) noexcept;

// void gtk_accel_map_load_scanner (GScanner* scanner);
// void gtk_accel_map_load_scanner (::GScanner* scanner);
static GI_INLINE_DECL void load_scanner (GLib::Scanner scanner) noexcept;

// void gtk_accel_map_lock_path (const gchar* accel_path);
// void gtk_accel_map_lock_path (const char* accel_path);
static GI_INLINE_DECL void lock_path (const std::string & accel_path) noexcept;

// gboolean gtk_accel_map_lookup_entry (const gchar* accel_path, GtkAccelKey* key);
// gboolean gtk_accel_map_lookup_entry (const char* accel_path, ::GtkAccelKey* key);
static GI_INLINE_DECL bool lookup_entry (const std::string & accel_path, Gtk::AccelKey * key = nullptr) noexcept;
static GI_INLINE_DECL std::tuple<bool, Gtk::AccelKey> lookup_entry (const std::string & accel_path) noexcept;

// void gtk_accel_map_save (const gchar* file_name);
// void gtk_accel_map_save (const char* file_name);
static GI_INLINE_DECL void save (const std::string & file_name) noexcept;

// void gtk_accel_map_save_fd (gint fd);
// void gtk_accel_map_save_fd (gint fd);
static GI_INLINE_DECL void save_fd (gint fd) noexcept;

// void gtk_accel_map_unlock_path (const gchar* accel_path);
// void gtk_accel_map_unlock_path (const char* accel_path);
static GI_INLINE_DECL void unlock_path (const std::string & accel_path) noexcept;

// signal changed
gi::signal_proxy<void(Gtk::AccelMap, const std::string & accel_path, guint accel_key, Gdk::ModifierType accel_mods)> signal_changed()
{ return gi::signal_proxy<void(Gtk::AccelMap, const std::string & accel_path, guint accel_key, Gdk::ModifierType accel_mods)> (*this, "changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accelmap_extra_def.hpp>)
#include <gtk/accelmap_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accelmap_extra.hpp>)
#include <gtk/accelmap_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AccelMap : public GI_GTK_ACCELMAP_BASE
{ typedef GI_GTK_ACCELMAP_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAccelMap>
{ typedef Gtk::AccelMap type; }; 

} // namespace repository

} // namespace gi

#endif
