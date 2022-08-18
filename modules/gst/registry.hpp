// AUTO-GENERATED

#ifndef _GI_GST_REGISTRY_HPP_
#define _GI_GST_REGISTRY_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Gst {

class Plugin;
class PluginFeature;

class Registry;

namespace base {


#define GI_GST_REGISTRY_BASE base::RegistryBase
class RegistryBase : public Gst::Object
{
typedef Gst::Object super_type;
public:
typedef ::GstRegistry BaseObjectType;

RegistryBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_registry_get_type(); } 

// gboolean gst_registry_fork_is_enabled ();
// gboolean gst_registry_fork_is_enabled ();
static GI_INLINE_DECL bool fork_is_enabled () noexcept;

// void gst_registry_fork_set_enabled (gboolean enabled);
// void gst_registry_fork_set_enabled (gboolean enabled);
static GI_INLINE_DECL void fork_set_enabled (gboolean enabled) noexcept;

// GstRegistry* gst_registry_get ();
// ::GstRegistry* gst_registry_get ();
static GI_INLINE_DECL Gst::Registry get () noexcept;

// gboolean gst_registry_add_feature (GstRegistry* registry, GstPluginFeature* feature);
// gboolean gst_registry_add_feature (::GstRegistry* registry, ::GstPluginFeature* feature);
GI_INLINE_DECL bool add_feature (Gst::PluginFeature feature) noexcept;

// gboolean gst_registry_add_plugin (GstRegistry* registry, GstPlugin* plugin);
// gboolean gst_registry_add_plugin (::GstRegistry* registry, ::GstPlugin* plugin);
GI_INLINE_DECL bool add_plugin (Gst::Plugin plugin) noexcept;

// gboolean gst_registry_check_feature_version (GstRegistry* registry, const gchar* feature_name, guint min_major, guint min_minor, guint min_micro);
// gboolean gst_registry_check_feature_version (::GstRegistry* registry, const char* feature_name, guint min_major, guint min_minor, guint min_micro);
GI_INLINE_DECL bool check_feature_version (const std::string & feature_name, guint min_major, guint min_minor, guint min_micro) noexcept;

// GList* gst_registry_feature_filter (GstRegistry* registry, GstPluginFeatureFilter filter, gboolean first, gpointer user_data);
// ::GList* gst_registry_feature_filter (::GstRegistry* registry, Gst::PluginFeatureFilter::cfunction_type filter, gboolean first, void* user_data);
GI_INLINE_DECL std::vector<Gst::PluginFeature> feature_filter (Gst::PluginFeatureFilter filter, gboolean first) noexcept;

// GstPluginFeature* gst_registry_find_feature (GstRegistry* registry, const gchar* name, GType type);
// ::GstPluginFeature* gst_registry_find_feature (::GstRegistry* registry, const char* name, GType type);
GI_INLINE_DECL Gst::PluginFeature find_feature (const std::string & name, GType type) noexcept;

// GstPlugin* gst_registry_find_plugin (GstRegistry* registry, const gchar* name);
// ::GstPlugin* gst_registry_find_plugin (::GstRegistry* registry, const char* name);
GI_INLINE_DECL Gst::Plugin find_plugin (const std::string & name) noexcept;

// GList* gst_registry_get_feature_list (GstRegistry* registry, GType type);
// ::GList* gst_registry_get_feature_list (::GstRegistry* registry, GType type);
GI_INLINE_DECL std::vector<Gst::PluginFeature> get_feature_list (GType type) noexcept;

// GList* gst_registry_get_feature_list_by_plugin (GstRegistry* registry, const gchar* name);
// ::GList* gst_registry_get_feature_list_by_plugin (::GstRegistry* registry, const char* name);
GI_INLINE_DECL std::vector<Gst::PluginFeature> get_feature_list_by_plugin (const std::string & name) noexcept;

// guint32 gst_registry_get_feature_list_cookie (GstRegistry* registry);
// guint32 gst_registry_get_feature_list_cookie (::GstRegistry* registry);
GI_INLINE_DECL guint32 get_feature_list_cookie () noexcept;

// GList* gst_registry_get_plugin_list (GstRegistry* registry);
// ::GList* gst_registry_get_plugin_list (::GstRegistry* registry);
GI_INLINE_DECL std::vector<Gst::Plugin> get_plugin_list () noexcept;

// GstPlugin* gst_registry_lookup (GstRegistry* registry, const char* filename);
// ::GstPlugin* gst_registry_lookup (::GstRegistry* registry, const char* filename);
GI_INLINE_DECL Gst::Plugin lookup (const std::string & filename) noexcept;

// GstPluginFeature* gst_registry_lookup_feature (GstRegistry* registry, const char* name);
// ::GstPluginFeature* gst_registry_lookup_feature (::GstRegistry* registry, const char* name);
GI_INLINE_DECL Gst::PluginFeature lookup_feature (const std::string & name) noexcept;

// GList* gst_registry_plugin_filter (GstRegistry* registry, GstPluginFilter filter, gboolean first, gpointer user_data);
// ::GList* gst_registry_plugin_filter (::GstRegistry* registry, Gst::PluginFilter::cfunction_type filter, gboolean first, void* user_data);
GI_INLINE_DECL std::vector<Gst::Plugin> plugin_filter (Gst::PluginFilter filter, gboolean first) noexcept;

// void gst_registry_remove_feature (GstRegistry* registry, GstPluginFeature* feature);
// void gst_registry_remove_feature (::GstRegistry* registry, ::GstPluginFeature* feature);
GI_INLINE_DECL void remove_feature (Gst::PluginFeature feature) noexcept;

// void gst_registry_remove_plugin (GstRegistry* registry, GstPlugin* plugin);
// void gst_registry_remove_plugin (::GstRegistry* registry, ::GstPlugin* plugin);
GI_INLINE_DECL void remove_plugin (Gst::Plugin plugin) noexcept;

// gboolean gst_registry_scan_path (GstRegistry* registry, const gchar* path);
// gboolean gst_registry_scan_path (::GstRegistry* registry, const char* path);
GI_INLINE_DECL bool scan_path (const std::string & path) noexcept;

// signal feature-added
gi::signal_proxy<void(Gst::Registry, Gst::PluginFeature feature)> signal_feature_added()
{ return gi::signal_proxy<void(Gst::Registry, Gst::PluginFeature feature)> (*this, "feature-added"); }

// signal plugin-added
gi::signal_proxy<void(Gst::Registry, Gst::Plugin plugin)> signal_plugin_added()
{ return gi::signal_proxy<void(Gst::Registry, Gst::Plugin plugin)> (*this, "plugin-added"); }

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/registry_extra_def.hpp>)
#include <gst/registry_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/registry_extra.hpp>)
#include <gst/registry_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Registry : public GI_GST_REGISTRY_BASE
{ typedef GI_GST_REGISTRY_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstRegistry>
{ typedef Gst::Registry type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class RegistryClassDef
{
typedef RegistryClassDef self;
public:
typedef Gst::Registry instance_type;
typedef ::GstRegistryClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class RegistryClass: public detail::ClassTemplate<Gst::impl::internal::RegistryClassDef, Gst::impl::internal::ObjectClass>
{
typedef RegistryClass self;
typedef detail::ClassTemplate<Gst::impl::internal::RegistryClassDef, Gst::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using RegistryImpl = detail::ObjectImpl<Registry, internal::RegistryClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
