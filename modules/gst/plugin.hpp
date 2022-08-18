// AUTO-GENERATED

#ifndef _GI_GST_PLUGIN_HPP_
#define _GI_GST_PLUGIN_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Gst {

class Structure;

class Plugin;

namespace base {


#define GI_GST_PLUGIN_BASE base::PluginBase
class PluginBase : public Gst::Object
{
typedef Gst::Object super_type;
public:
typedef ::GstPlugin BaseObjectType;

PluginBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_plugin_get_type(); } 

// void gst_plugin_list_free (GList* list);
// void gst_plugin_list_free (::GList* list);
// IGNORE; marked ignore

// GstPlugin* gst_plugin_load_by_name (const gchar* name);
// ::GstPlugin* gst_plugin_load_by_name (const char* name);
static GI_INLINE_DECL Gst::Plugin load_by_name (const std::string & name) noexcept;

// GstPlugin* gst_plugin_load_file (const gchar* filename, GError ** error);
// ::GstPlugin* gst_plugin_load_file (const char* filename, GError ** error);
static GI_INLINE_DECL Gst::Plugin load_file (const std::string & filename);
static GI_INLINE_DECL Gst::Plugin load_file (const std::string & filename, GLib::Error * _error) noexcept;

// gboolean gst_plugin_register_static (gint major_version, gint minor_version, const gchar* name, const gchar* description, GstPluginInitFunc init_func, const gchar* version, const gchar* license, const gchar* source, const gchar* package, const gchar* origin);
// gboolean gst_plugin_register_static (gint major_version, gint minor_version, const char* name, const char* description,  init_func, const char* version, const char* license, const char* source, const char* package, const char* origin);
// SKIP; init_func type  not supported

// gboolean gst_plugin_register_static_full (gint major_version, gint minor_version, const gchar* name, const gchar* description, GstPluginInitFullFunc init_full_func, const gchar* version, const gchar* license, const gchar* source, const gchar* package, const gchar* origin, gpointer user_data);
// gboolean gst_plugin_register_static_full (gint major_version, gint minor_version, const char* name, const char* description, Gst::PluginInitFullFunc::cfunction_type init_full_func, const char* version, const char* license, const char* source, const char* package, const char* origin, void* user_data);
static GI_INLINE_DECL bool register_static_full (gint major_version, gint minor_version, const std::string & name, const std::string & description, Gst::PluginInitFullFunc init_full_func, const std::string & version, const std::string & license, const std::string & source, const std::string & package, const std::string & origin) noexcept;

// void gst_plugin_add_dependency (GstPlugin* plugin, const gchar** env_vars, const gchar** paths, const gchar** names, GstPluginDependencyFlags flags);
// void gst_plugin_add_dependency (::GstPlugin* plugin, const char** env_vars, const char** paths, const char** names, ::GstPluginDependencyFlags flags);
GI_INLINE_DECL void add_dependency (const std::vector<std::string> & env_vars, const std::vector<std::string> & paths, const std::vector<std::string> & names, Gst::PluginDependencyFlags flags) noexcept;

// void gst_plugin_add_dependency_simple (GstPlugin* plugin, const gchar* env_vars, const gchar* paths, const gchar* names, GstPluginDependencyFlags flags);
// void gst_plugin_add_dependency_simple (::GstPlugin* plugin, const char* env_vars, const char* paths, const char* names, ::GstPluginDependencyFlags flags);
GI_INLINE_DECL void add_dependency_simple (const std::string & env_vars, const std::string & paths, const std::string & names, Gst::PluginDependencyFlags flags) noexcept;
GI_INLINE_DECL void add_dependency_simple (Gst::PluginDependencyFlags flags) noexcept;

// const GstStructure* gst_plugin_get_cache_data (GstPlugin* plugin);
// const ::GstStructure* gst_plugin_get_cache_data (::GstPlugin* plugin);
GI_INLINE_DECL Gst::Structure get_cache_data () noexcept;

// const gchar* gst_plugin_get_description (GstPlugin* plugin);
// const char* gst_plugin_get_description (::GstPlugin* plugin);
GI_INLINE_DECL std::string get_description () noexcept;

// const gchar* gst_plugin_get_filename (GstPlugin* plugin);
// const char* gst_plugin_get_filename (::GstPlugin* plugin);
GI_INLINE_DECL std::string get_filename () noexcept;

// const gchar* gst_plugin_get_license (GstPlugin* plugin);
// const char* gst_plugin_get_license (::GstPlugin* plugin);
GI_INLINE_DECL std::string get_license () noexcept;

// const gchar* gst_plugin_get_name (GstPlugin* plugin);
// const char* gst_plugin_get_name (::GstPlugin* plugin);
GI_INLINE_DECL std::string get_name () noexcept;

// const gchar* gst_plugin_get_origin (GstPlugin* plugin);
// const char* gst_plugin_get_origin (::GstPlugin* plugin);
GI_INLINE_DECL std::string get_origin () noexcept;

// const gchar* gst_plugin_get_package (GstPlugin* plugin);
// const char* gst_plugin_get_package (::GstPlugin* plugin);
GI_INLINE_DECL std::string get_package () noexcept;

// const gchar* gst_plugin_get_release_date_string (GstPlugin* plugin);
// const char* gst_plugin_get_release_date_string (::GstPlugin* plugin);
GI_INLINE_DECL std::string get_release_date_string () noexcept;

// const gchar* gst_plugin_get_source (GstPlugin* plugin);
// const char* gst_plugin_get_source (::GstPlugin* plugin);
GI_INLINE_DECL std::string get_source () noexcept;

// const gchar* gst_plugin_get_version (GstPlugin* plugin);
// const char* gst_plugin_get_version (::GstPlugin* plugin);
GI_INLINE_DECL std::string get_version () noexcept;

// gboolean gst_plugin_is_loaded (GstPlugin* plugin);
// gboolean gst_plugin_is_loaded (::GstPlugin* plugin);
GI_INLINE_DECL bool is_loaded () noexcept;

// GstPlugin* gst_plugin_load (GstPlugin* plugin);
// ::GstPlugin* gst_plugin_load (::GstPlugin* plugin);
GI_INLINE_DECL Gst::Plugin load () noexcept;

// void gst_plugin_set_cache_data (GstPlugin* plugin, GstStructure* cache_data);
// void gst_plugin_set_cache_data (::GstPlugin* plugin, ::GstStructure* cache_data);
GI_INLINE_DECL void set_cache_data (Gst::Structure cache_data) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/plugin_extra_def.hpp>)
#include <gst/plugin_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/plugin_extra.hpp>)
#include <gst/plugin_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Plugin : public GI_GST_PLUGIN_BASE
{ typedef GI_GST_PLUGIN_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstPlugin>
{ typedef Gst::Plugin type; }; 

} // namespace repository

} // namespace gi

#endif
