// AUTO-GENERATED

#ifndef _GI_GST_REGISTRY_IMPL_HPP_
#define _GI_GST_REGISTRY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// gboolean gst_registry_fork_is_enabled ();
// gboolean gst_registry_fork_is_enabled ();
bool base::RegistryBase::fork_is_enabled () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_registry_fork_is_enabled;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// void gst_registry_fork_set_enabled (gboolean enabled);
// void gst_registry_fork_set_enabled (gboolean enabled);
void base::RegistryBase::fork_set_enabled (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_registry_fork_set_enabled;
  auto enabled_to_c = enabled;
  call_wrap_v ((gboolean) (enabled_to_c));
}

// GstRegistry* gst_registry_get ();
// ::GstRegistry* gst_registry_get ();
Gst::Registry base::RegistryBase::get () noexcept
{
  typedef ::GstRegistry* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_registry_get;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gst_registry_add_feature (GstRegistry* registry, GstPluginFeature* feature);
// gboolean gst_registry_add_feature (::GstRegistry* registry, ::GstPluginFeature* feature);
bool base::RegistryBase::add_feature (Gst::PluginFeature feature) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstRegistry* registry, ::GstPluginFeature* feature);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_registry_add_feature;
  auto feature_to_c = gi::unwrap (feature, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstRegistry*) (gobj_()), (::GstPluginFeature*) (feature_to_c));
  return _temp_ret;
}

// gboolean gst_registry_add_plugin (GstRegistry* registry, GstPlugin* plugin);
// gboolean gst_registry_add_plugin (::GstRegistry* registry, ::GstPlugin* plugin);
bool base::RegistryBase::add_plugin (Gst::Plugin plugin) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstRegistry* registry, ::GstPlugin* plugin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_registry_add_plugin;
  auto plugin_to_c = gi::unwrap (plugin, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstRegistry*) (gobj_()), (::GstPlugin*) (plugin_to_c));
  return _temp_ret;
}

// gboolean gst_registry_check_feature_version (GstRegistry* registry, const gchar* feature_name, guint min_major, guint min_minor, guint min_micro);
// gboolean gst_registry_check_feature_version (::GstRegistry* registry, const char* feature_name, guint min_major, guint min_minor, guint min_micro);
bool base::RegistryBase::check_feature_version (const std::string & feature_name, guint min_major, guint min_minor, guint min_micro) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstRegistry* registry, const char* feature_name, guint min_major, guint min_minor, guint min_micro);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_registry_check_feature_version;
  auto min_micro_to_c = min_micro;
  auto min_minor_to_c = min_minor;
  auto min_major_to_c = min_major;
  auto feature_name_to_c = gi::unwrap (feature_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstRegistry*) (gobj_()), (const char*) (feature_name_to_c), (guint) (min_major_to_c), (guint) (min_minor_to_c), (guint) (min_micro_to_c));
  return _temp_ret;
}

// GList* gst_registry_feature_filter (GstRegistry* registry, GstPluginFeatureFilter filter, gboolean first, gpointer user_data);
// ::GList* gst_registry_feature_filter (::GstRegistry* registry, Gst::PluginFeatureFilter::cfunction_type filter, gboolean first, void* user_data);
std::vector<Gst::PluginFeature> base::RegistryBase::feature_filter (Gst::PluginFeatureFilter filter, gboolean first) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GstRegistry* registry, Gst::PluginFeatureFilter::cfunction_type filter, gboolean first, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_registry_feature_filter;
  auto first_to_c = first;
  auto filter_wrap_ = filter ? unwrap (std::move (filter), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(filter_wrap_)>::type> filter_wrap__sp (filter_wrap_);
  auto _temp_ret = call_wrap_v ((::GstRegistry*) (gobj_()), (Gst::PluginFeatureFilter::cfunction_type) (filter_wrap_ ? &filter_wrap_->wrapper : nullptr), (gboolean) (first_to_c), (void*) (filter_wrap_));
  return gi::detail::wrap_list<Gst::PluginFeature> (_temp_ret, gi::transfer_full);
}

// GstPluginFeature* gst_registry_find_feature (GstRegistry* registry, const gchar* name, GType type);
// ::GstPluginFeature* gst_registry_find_feature (::GstRegistry* registry, const char* name, GType type);
Gst::PluginFeature base::RegistryBase::find_feature (const std::string & name, GType type) noexcept
{
  typedef ::GstPluginFeature* (*call_wrap_t) (::GstRegistry* registry, const char* name, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_registry_find_feature;
  auto type_to_c = type;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstRegistry*) (gobj_()), (const char*) (name_to_c), (GType) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstPlugin* gst_registry_find_plugin (GstRegistry* registry, const gchar* name);
// ::GstPlugin* gst_registry_find_plugin (::GstRegistry* registry, const char* name);
Gst::Plugin base::RegistryBase::find_plugin (const std::string & name) noexcept
{
  typedef ::GstPlugin* (*call_wrap_t) (::GstRegistry* registry, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_registry_find_plugin;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstRegistry*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GList* gst_registry_get_feature_list (GstRegistry* registry, GType type);
// ::GList* gst_registry_get_feature_list (::GstRegistry* registry, GType type);
std::vector<Gst::PluginFeature> base::RegistryBase::get_feature_list (GType type) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GstRegistry* registry, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_registry_get_feature_list;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((::GstRegistry*) (gobj_()), (GType) (type_to_c));
  return gi::detail::wrap_list<Gst::PluginFeature> (_temp_ret, gi::transfer_full);
}

// GList* gst_registry_get_feature_list_by_plugin (GstRegistry* registry, const gchar* name);
// ::GList* gst_registry_get_feature_list_by_plugin (::GstRegistry* registry, const char* name);
std::vector<Gst::PluginFeature> base::RegistryBase::get_feature_list_by_plugin (const std::string & name) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GstRegistry* registry, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_registry_get_feature_list_by_plugin;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstRegistry*) (gobj_()), (const char*) (name_to_c));
  return gi::detail::wrap_list<Gst::PluginFeature> (_temp_ret, gi::transfer_full);
}

// guint32 gst_registry_get_feature_list_cookie (GstRegistry* registry);
// guint32 gst_registry_get_feature_list_cookie (::GstRegistry* registry);
guint32 base::RegistryBase::get_feature_list_cookie () noexcept
{
  typedef guint32 (*call_wrap_t) (::GstRegistry* registry);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_registry_get_feature_list_cookie;
  auto _temp_ret = call_wrap_v ((::GstRegistry*) (gobj_()));
  return _temp_ret;
}

// GList* gst_registry_get_plugin_list (GstRegistry* registry);
// ::GList* gst_registry_get_plugin_list (::GstRegistry* registry);
std::vector<Gst::Plugin> base::RegistryBase::get_plugin_list () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GstRegistry* registry);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_registry_get_plugin_list;
  auto _temp_ret = call_wrap_v ((::GstRegistry*) (gobj_()));
  return gi::detail::wrap_list<Gst::Plugin> (_temp_ret, gi::transfer_full);
}

// GstPlugin* gst_registry_lookup (GstRegistry* registry, const char* filename);
// ::GstPlugin* gst_registry_lookup (::GstRegistry* registry, const char* filename);
Gst::Plugin base::RegistryBase::lookup (const std::string & filename) noexcept
{
  typedef ::GstPlugin* (*call_wrap_t) (::GstRegistry* registry, const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_registry_lookup;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstRegistry*) (gobj_()), (const char*) (filename_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstPluginFeature* gst_registry_lookup_feature (GstRegistry* registry, const char* name);
// ::GstPluginFeature* gst_registry_lookup_feature (::GstRegistry* registry, const char* name);
Gst::PluginFeature base::RegistryBase::lookup_feature (const std::string & name) noexcept
{
  typedef ::GstPluginFeature* (*call_wrap_t) (::GstRegistry* registry, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_registry_lookup_feature;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstRegistry*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GList* gst_registry_plugin_filter (GstRegistry* registry, GstPluginFilter filter, gboolean first, gpointer user_data);
// ::GList* gst_registry_plugin_filter (::GstRegistry* registry, Gst::PluginFilter::cfunction_type filter, gboolean first, void* user_data);
std::vector<Gst::Plugin> base::RegistryBase::plugin_filter (Gst::PluginFilter filter, gboolean first) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GstRegistry* registry, Gst::PluginFilter::cfunction_type filter, gboolean first, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_registry_plugin_filter;
  auto first_to_c = first;
  auto filter_wrap_ = filter ? unwrap (std::move (filter), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(filter_wrap_)>::type> filter_wrap__sp (filter_wrap_);
  auto _temp_ret = call_wrap_v ((::GstRegistry*) (gobj_()), (Gst::PluginFilter::cfunction_type) (filter_wrap_ ? &filter_wrap_->wrapper : nullptr), (gboolean) (first_to_c), (void*) (filter_wrap_));
  return gi::detail::wrap_list<Gst::Plugin> (_temp_ret, gi::transfer_full);
}

// void gst_registry_remove_feature (GstRegistry* registry, GstPluginFeature* feature);
// void gst_registry_remove_feature (::GstRegistry* registry, ::GstPluginFeature* feature);
void base::RegistryBase::remove_feature (Gst::PluginFeature feature) noexcept
{
  typedef void (*call_wrap_t) (::GstRegistry* registry, ::GstPluginFeature* feature);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_registry_remove_feature;
  auto feature_to_c = gi::unwrap (feature, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstRegistry*) (gobj_()), (::GstPluginFeature*) (feature_to_c));
}

// void gst_registry_remove_plugin (GstRegistry* registry, GstPlugin* plugin);
// void gst_registry_remove_plugin (::GstRegistry* registry, ::GstPlugin* plugin);
void base::RegistryBase::remove_plugin (Gst::Plugin plugin) noexcept
{
  typedef void (*call_wrap_t) (::GstRegistry* registry, ::GstPlugin* plugin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_registry_remove_plugin;
  auto plugin_to_c = gi::unwrap (plugin, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstRegistry*) (gobj_()), (::GstPlugin*) (plugin_to_c));
}

// gboolean gst_registry_scan_path (GstRegistry* registry, const gchar* path);
// gboolean gst_registry_scan_path (::GstRegistry* registry, const char* path);
bool base::RegistryBase::scan_path (const std::string & path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstRegistry* registry, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_registry_scan_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstRegistry*) (gobj_()), (const char*) (path_to_c));
  return _temp_ret;
}




} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/registry_extra_def_impl.hpp>)
#include <gst/registry_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/registry_extra_impl.hpp>)
#include <gst/registry_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void RegistryClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstRegistryClass *methods = (::GstRegistryClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
