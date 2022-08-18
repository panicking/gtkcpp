// AUTO-GENERATED

#ifndef _GI_GST_PLUGINFEATURE_IMPL_HPP_
#define _GI_GST_PLUGINFEATURE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GList* gst_plugin_feature_list_copy (GList* list);
// ::GList* gst_plugin_feature_list_copy (::GList* list);
std::vector<Gst::PluginFeature> base::PluginFeatureBase::list_copy (const std::vector<Gst::PluginFeature> & list) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_feature_list_copy;
  auto list_i = detail::make_list_unwrap_range<::GList> (list);
  auto list_w = unwrap (list_i, gi::transfer_none, direction_in);
  auto list_to_c = list_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GList*) (list_to_c));
  return gi::detail::wrap_list<Gst::PluginFeature> (_temp_ret, gi::transfer_full);
}

// void gst_plugin_feature_list_debug (GList* list);
// void gst_plugin_feature_list_debug (::GList* list);
void base::PluginFeatureBase::list_debug (const std::vector<Gst::PluginFeature> & list) noexcept
{
  typedef void (*call_wrap_t) (::GList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_feature_list_debug;
  auto list_i = detail::make_list_unwrap_range<::GList> (list);
  auto list_w = unwrap (list_i, gi::transfer_none, direction_in);
  auto list_to_c = list_w.gobj_(false);
  call_wrap_v ((::GList*) (list_to_c));
}

// void gst_plugin_feature_list_free (GList* list);
// void gst_plugin_feature_list_free (::GList* list);
// IGNORE; marked ignore

// gint gst_plugin_feature_rank_compare_func (gconstpointer p1, gconstpointer p2);
// gint gst_plugin_feature_rank_compare_func (const void* p1, const void* p2);
gint base::PluginFeatureBase::rank_compare_func (const void* p1, const void* p2) noexcept
{
  typedef gint (*call_wrap_t) (const void* p1, const void* p2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_feature_rank_compare_func;
  auto p2_to_c = p2;
  auto p1_to_c = p1;
  auto _temp_ret = call_wrap_v ((const void*) (p1_to_c), (const void*) (p2_to_c));
  return _temp_ret;
}

// gboolean gst_plugin_feature_check_version (GstPluginFeature* feature, guint min_major, guint min_minor, guint min_micro);
// gboolean gst_plugin_feature_check_version (::GstPluginFeature* feature, guint min_major, guint min_minor, guint min_micro);
bool base::PluginFeatureBase::check_version (guint min_major, guint min_minor, guint min_micro) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPluginFeature* feature, guint min_major, guint min_minor, guint min_micro);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_feature_check_version;
  auto min_micro_to_c = min_micro;
  auto min_minor_to_c = min_minor;
  auto min_major_to_c = min_major;
  auto _temp_ret = call_wrap_v ((::GstPluginFeature*) (gobj_()), (guint) (min_major_to_c), (guint) (min_minor_to_c), (guint) (min_micro_to_c));
  return _temp_ret;
}

// GstPlugin* gst_plugin_feature_get_plugin (GstPluginFeature* feature);
// ::GstPlugin* gst_plugin_feature_get_plugin (::GstPluginFeature* feature);
Gst::Plugin base::PluginFeatureBase::get_plugin () noexcept
{
  typedef ::GstPlugin* (*call_wrap_t) (::GstPluginFeature* feature);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_feature_get_plugin;
  auto _temp_ret = call_wrap_v ((::GstPluginFeature*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* gst_plugin_feature_get_plugin_name (GstPluginFeature* feature);
// const char* gst_plugin_feature_get_plugin_name (::GstPluginFeature* feature);
std::string base::PluginFeatureBase::get_plugin_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GstPluginFeature* feature);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_feature_get_plugin_name;
  auto _temp_ret = call_wrap_v ((::GstPluginFeature*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint gst_plugin_feature_get_rank (GstPluginFeature* feature);
// guint gst_plugin_feature_get_rank (::GstPluginFeature* feature);
guint base::PluginFeatureBase::get_rank () noexcept
{
  typedef guint (*call_wrap_t) (::GstPluginFeature* feature);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_feature_get_rank;
  auto _temp_ret = call_wrap_v ((::GstPluginFeature*) (gobj_()));
  return _temp_ret;
}

// GstPluginFeature* gst_plugin_feature_load (GstPluginFeature* feature);
// ::GstPluginFeature* gst_plugin_feature_load (::GstPluginFeature* feature);
Gst::PluginFeature base::PluginFeatureBase::load () noexcept
{
  typedef ::GstPluginFeature* (*call_wrap_t) (::GstPluginFeature* feature);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_feature_load;
  auto _temp_ret = call_wrap_v ((::GstPluginFeature*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_plugin_feature_set_rank (GstPluginFeature* feature, guint rank);
// void gst_plugin_feature_set_rank (::GstPluginFeature* feature, guint rank);
void base::PluginFeatureBase::set_rank (guint rank) noexcept
{
  typedef void (*call_wrap_t) (::GstPluginFeature* feature, guint rank);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_plugin_feature_set_rank;
  auto rank_to_c = rank;
  call_wrap_v ((::GstPluginFeature*) (gobj_()), (guint) (rank_to_c));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/pluginfeature_extra_def_impl.hpp>)
#include <gst/pluginfeature_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/pluginfeature_extra_impl.hpp>)
#include <gst/pluginfeature_extra_impl.hpp>
#endif
#endif

#endif
