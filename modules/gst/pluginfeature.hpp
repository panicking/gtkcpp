// AUTO-GENERATED

#ifndef _GI_GST_PLUGINFEATURE_HPP_
#define _GI_GST_PLUGINFEATURE_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Gst {

class Plugin;

class PluginFeature;

namespace base {


#define GI_GST_PLUGINFEATURE_BASE base::PluginFeatureBase
class PluginFeatureBase : public Gst::Object
{
typedef Gst::Object super_type;
public:
typedef ::GstPluginFeature BaseObjectType;

PluginFeatureBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_plugin_feature_get_type(); } 

// GList* gst_plugin_feature_list_copy (GList* list);
// ::GList* gst_plugin_feature_list_copy (::GList* list);
static GI_INLINE_DECL std::vector<Gst::PluginFeature> list_copy (const std::vector<Gst::PluginFeature> & list) noexcept;

// void gst_plugin_feature_list_debug (GList* list);
// void gst_plugin_feature_list_debug (::GList* list);
static GI_INLINE_DECL void list_debug (const std::vector<Gst::PluginFeature> & list) noexcept;

// void gst_plugin_feature_list_free (GList* list);
// void gst_plugin_feature_list_free (::GList* list);
// IGNORE; marked ignore

// gint gst_plugin_feature_rank_compare_func (gconstpointer p1, gconstpointer p2);
// gint gst_plugin_feature_rank_compare_func (const void* p1, const void* p2);
static GI_INLINE_DECL gint rank_compare_func (const void* p1, const void* p2) noexcept;

// gboolean gst_plugin_feature_check_version (GstPluginFeature* feature, guint min_major, guint min_minor, guint min_micro);
// gboolean gst_plugin_feature_check_version (::GstPluginFeature* feature, guint min_major, guint min_minor, guint min_micro);
GI_INLINE_DECL bool check_version (guint min_major, guint min_minor, guint min_micro) noexcept;

// GstPlugin* gst_plugin_feature_get_plugin (GstPluginFeature* feature);
// ::GstPlugin* gst_plugin_feature_get_plugin (::GstPluginFeature* feature);
GI_INLINE_DECL Gst::Plugin get_plugin () noexcept;

// const gchar* gst_plugin_feature_get_plugin_name (GstPluginFeature* feature);
// const char* gst_plugin_feature_get_plugin_name (::GstPluginFeature* feature);
GI_INLINE_DECL std::string get_plugin_name () noexcept;

// guint gst_plugin_feature_get_rank (GstPluginFeature* feature);
// guint gst_plugin_feature_get_rank (::GstPluginFeature* feature);
GI_INLINE_DECL guint get_rank () noexcept;

// GstPluginFeature* gst_plugin_feature_load (GstPluginFeature* feature);
// ::GstPluginFeature* gst_plugin_feature_load (::GstPluginFeature* feature);
GI_INLINE_DECL Gst::PluginFeature load () noexcept;

// void gst_plugin_feature_set_rank (GstPluginFeature* feature, guint rank);
// void gst_plugin_feature_set_rank (::GstPluginFeature* feature, guint rank);
GI_INLINE_DECL void set_rank (guint rank) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/pluginfeature_extra_def.hpp>)
#include <gst/pluginfeature_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/pluginfeature_extra.hpp>)
#include <gst/pluginfeature_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class PluginFeature : public GI_GST_PLUGINFEATURE_BASE
{ typedef GI_GST_PLUGINFEATURE_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstPluginFeature>
{ typedef Gst::PluginFeature type; }; 

} // namespace repository

} // namespace gi

#endif
