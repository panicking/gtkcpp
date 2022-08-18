// AUTO-GENERATED

#ifndef _GI_GST_PLUGIN_IMPL_HPP_
#define _GI_GST_PLUGIN_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// void gst_plugin_list_free (GList* list);
// void gst_plugin_list_free (::GList* list);
// IGNORE; marked ignore

// GstPlugin* gst_plugin_load_by_name (const gchar* name);
// ::GstPlugin* gst_plugin_load_by_name (const char* name);
Gst::Plugin base::PluginBase::load_by_name (const std::string & name) noexcept
{
  typedef ::GstPlugin* (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_load_by_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstPlugin* gst_plugin_load_file (const gchar* filename, GError ** error);
// ::GstPlugin* gst_plugin_load_file (const char* filename, GError ** error);
Gst::Plugin base::PluginBase::load_file (const std::string & filename)
{
  typedef ::GstPlugin* (*call_wrap_t) (const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_load_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Plugin base::PluginBase::load_file (const std::string & filename, GLib::Error * _error) noexcept
{
  typedef ::GstPlugin* (*call_wrap_t) (const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_load_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_plugin_register_static (gint major_version, gint minor_version, const gchar* name, const gchar* description, GstPluginInitFunc init_func, const gchar* version, const gchar* license, const gchar* source, const gchar* package, const gchar* origin);
// gboolean gst_plugin_register_static (gint major_version, gint minor_version, const char* name, const char* description,  init_func, const char* version, const char* license, const char* source, const char* package, const char* origin);
// SKIP; init_func type  not supported

// gboolean gst_plugin_register_static_full (gint major_version, gint minor_version, const gchar* name, const gchar* description, GstPluginInitFullFunc init_full_func, const gchar* version, const gchar* license, const gchar* source, const gchar* package, const gchar* origin, gpointer user_data);
// gboolean gst_plugin_register_static_full (gint major_version, gint minor_version, const char* name, const char* description, Gst::PluginInitFullFunc::cfunction_type init_full_func, const char* version, const char* license, const char* source, const char* package, const char* origin, void* user_data);
bool base::PluginBase::register_static_full (gint major_version, gint minor_version, const std::string & name, const std::string & description, Gst::PluginInitFullFunc init_full_func, const std::string & version, const std::string & license, const std::string & source, const std::string & package, const std::string & origin) noexcept
{
  typedef gboolean (*call_wrap_t) (gint major_version, gint minor_version, const char* name, const char* description, Gst::PluginInitFullFunc::cfunction_type init_full_func, const char* version, const char* license, const char* source, const char* package, const char* origin, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_register_static_full;
  auto origin_to_c = gi::unwrap (origin, gi::transfer_none, gi::direction_in);
  auto package_to_c = gi::unwrap (package, gi::transfer_none, gi::direction_in);
  auto source_to_c = gi::unwrap (source, gi::transfer_none, gi::direction_in);
  auto license_to_c = gi::unwrap (license, gi::transfer_none, gi::direction_in);
  auto version_to_c = gi::unwrap (version, gi::transfer_none, gi::direction_in);
  auto init_full_func_wrap_ = init_full_func ? unwrap (std::move (init_full_func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(init_full_func_wrap_)>::type> init_full_func_wrap__sp (init_full_func_wrap_);
  auto description_to_c = gi::unwrap (description, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto minor_version_to_c = minor_version;
  auto major_version_to_c = major_version;
  auto _temp_ret = call_wrap_v ((gint) (major_version_to_c), (gint) (minor_version_to_c), (const char*) (name_to_c), (const char*) (description_to_c), (Gst::PluginInitFullFunc::cfunction_type) (init_full_func_wrap_ ? &init_full_func_wrap_->wrapper : nullptr), (const char*) (version_to_c), (const char*) (license_to_c), (const char*) (source_to_c), (const char*) (package_to_c), (const char*) (origin_to_c), (void*) (init_full_func_wrap_));
  return _temp_ret;
}

// void gst_plugin_add_dependency (GstPlugin* plugin, const gchar** env_vars, const gchar** paths, const gchar** names, GstPluginDependencyFlags flags);
// void gst_plugin_add_dependency (::GstPlugin* plugin, const char** env_vars, const char** paths, const char** names, ::GstPluginDependencyFlags flags);
void base::PluginBase::add_dependency (const std::vector<std::string> & env_vars, const std::vector<std::string> & paths, const std::vector<std::string> & names, Gst::PluginDependencyFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GstPlugin* plugin, const char** env_vars, const char** paths, const char** names, ::GstPluginDependencyFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_add_dependency;
  auto flags_to_c = gi::unwrap (flags);
  auto names_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (names);
  auto names_w = unwrap (names_i, gi::transfer_none, direction_in);
  auto names_to_c = names_w.gobj_(false);
  auto paths_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (paths);
  auto paths_w = unwrap (paths_i, gi::transfer_none, direction_in);
  auto paths_to_c = paths_w.gobj_(false);
  auto env_vars_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (env_vars);
  auto env_vars_w = unwrap (env_vars_i, gi::transfer_none, direction_in);
  auto env_vars_to_c = env_vars_w.gobj_(false);
  call_wrap_v ((::GstPlugin*) (gobj_()), (const char**) (env_vars_to_c), (const char**) (paths_to_c), (const char**) (names_to_c), (::GstPluginDependencyFlags) (flags_to_c));
}

// void gst_plugin_add_dependency_simple (GstPlugin* plugin, const gchar* env_vars, const gchar* paths, const gchar* names, GstPluginDependencyFlags flags);
// void gst_plugin_add_dependency_simple (::GstPlugin* plugin, const char* env_vars, const char* paths, const char* names, ::GstPluginDependencyFlags flags);
void base::PluginBase::add_dependency_simple (const std::string & env_vars, const std::string & paths, const std::string & names, Gst::PluginDependencyFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GstPlugin* plugin, const char* env_vars, const char* paths, const char* names, ::GstPluginDependencyFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_add_dependency_simple;
  auto flags_to_c = gi::unwrap (flags);
  auto names_to_c = gi::unwrap (names, gi::transfer_none, gi::direction_in);
  auto paths_to_c = gi::unwrap (paths, gi::transfer_none, gi::direction_in);
  auto env_vars_to_c = gi::unwrap (env_vars, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstPlugin*) (gobj_()), (const char*) (env_vars_to_c), (const char*) (paths_to_c), (const char*) (names_to_c), (::GstPluginDependencyFlags) (flags_to_c));
}
void base::PluginBase::add_dependency_simple (Gst::PluginDependencyFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GstPlugin* plugin, const char* env_vars, const char* paths, const char* names, ::GstPluginDependencyFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_add_dependency_simple;
  auto flags_to_c = gi::unwrap (flags);
  auto names_to_c = nullptr;
  auto paths_to_c = nullptr;
  auto env_vars_to_c = nullptr;
  call_wrap_v ((::GstPlugin*) (gobj_()), (const char*) (env_vars_to_c), (const char*) (paths_to_c), (const char*) (names_to_c), (::GstPluginDependencyFlags) (flags_to_c));
}

// const GstStructure* gst_plugin_get_cache_data (GstPlugin* plugin);
// const ::GstStructure* gst_plugin_get_cache_data (::GstPlugin* plugin);
Gst::Structure base::PluginBase::get_cache_data () noexcept
{
  typedef const ::GstStructure* (*call_wrap_t) (::GstPlugin* plugin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_get_cache_data;
  auto _temp_ret = call_wrap_v ((::GstPlugin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gst_plugin_get_description (GstPlugin* plugin);
// const char* gst_plugin_get_description (::GstPlugin* plugin);
std::string base::PluginBase::get_description () noexcept
{
  typedef const char* (*call_wrap_t) (::GstPlugin* plugin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_get_description;
  auto _temp_ret = call_wrap_v ((::GstPlugin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gst_plugin_get_filename (GstPlugin* plugin);
// const char* gst_plugin_get_filename (::GstPlugin* plugin);
std::string base::PluginBase::get_filename () noexcept
{
  typedef const char* (*call_wrap_t) (::GstPlugin* plugin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_get_filename;
  auto _temp_ret = call_wrap_v ((::GstPlugin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gst_plugin_get_license (GstPlugin* plugin);
// const char* gst_plugin_get_license (::GstPlugin* plugin);
std::string base::PluginBase::get_license () noexcept
{
  typedef const char* (*call_wrap_t) (::GstPlugin* plugin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_get_license;
  auto _temp_ret = call_wrap_v ((::GstPlugin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gst_plugin_get_name (GstPlugin* plugin);
// const char* gst_plugin_get_name (::GstPlugin* plugin);
std::string base::PluginBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GstPlugin* plugin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_get_name;
  auto _temp_ret = call_wrap_v ((::GstPlugin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gst_plugin_get_origin (GstPlugin* plugin);
// const char* gst_plugin_get_origin (::GstPlugin* plugin);
std::string base::PluginBase::get_origin () noexcept
{
  typedef const char* (*call_wrap_t) (::GstPlugin* plugin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_get_origin;
  auto _temp_ret = call_wrap_v ((::GstPlugin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gst_plugin_get_package (GstPlugin* plugin);
// const char* gst_plugin_get_package (::GstPlugin* plugin);
std::string base::PluginBase::get_package () noexcept
{
  typedef const char* (*call_wrap_t) (::GstPlugin* plugin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_get_package;
  auto _temp_ret = call_wrap_v ((::GstPlugin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gst_plugin_get_release_date_string (GstPlugin* plugin);
// const char* gst_plugin_get_release_date_string (::GstPlugin* plugin);
std::string base::PluginBase::get_release_date_string () noexcept
{
  typedef const char* (*call_wrap_t) (::GstPlugin* plugin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_get_release_date_string;
  auto _temp_ret = call_wrap_v ((::GstPlugin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gst_plugin_get_source (GstPlugin* plugin);
// const char* gst_plugin_get_source (::GstPlugin* plugin);
std::string base::PluginBase::get_source () noexcept
{
  typedef const char* (*call_wrap_t) (::GstPlugin* plugin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_get_source;
  auto _temp_ret = call_wrap_v ((::GstPlugin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gst_plugin_get_version (GstPlugin* plugin);
// const char* gst_plugin_get_version (::GstPlugin* plugin);
std::string base::PluginBase::get_version () noexcept
{
  typedef const char* (*call_wrap_t) (::GstPlugin* plugin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_get_version;
  auto _temp_ret = call_wrap_v ((::GstPlugin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gst_plugin_is_loaded (GstPlugin* plugin);
// gboolean gst_plugin_is_loaded (::GstPlugin* plugin);
bool base::PluginBase::is_loaded () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPlugin* plugin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_is_loaded;
  auto _temp_ret = call_wrap_v ((::GstPlugin*) (gobj_()));
  return _temp_ret;
}

// GstPlugin* gst_plugin_load (GstPlugin* plugin);
// ::GstPlugin* gst_plugin_load (::GstPlugin* plugin);
Gst::Plugin base::PluginBase::load () noexcept
{
  typedef ::GstPlugin* (*call_wrap_t) (::GstPlugin* plugin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_load;
  auto _temp_ret = call_wrap_v ((::GstPlugin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_plugin_set_cache_data (GstPlugin* plugin, GstStructure* cache_data);
// void gst_plugin_set_cache_data (::GstPlugin* plugin, ::GstStructure* cache_data);
void base::PluginBase::set_cache_data (Gst::Structure cache_data) noexcept
{
  typedef void (*call_wrap_t) (::GstPlugin* plugin, ::GstStructure* cache_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_set_cache_data;
  auto cache_data_to_c = gi::unwrap (cache_data, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::GstPlugin*) (gobj_()), (::GstStructure*) (cache_data_to_c));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/plugin_extra_def_impl.hpp>)
#include <gst/plugin_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/plugin_extra_impl.hpp>)
#include <gst/plugin_extra_impl.hpp>
#endif
#endif

#endif
