// AUTO-GENERATED

#ifndef _GI_GST_CAPSFEATURES_HPP_
#define _GI_GST_CAPSFEATURES_HPP_


namespace gi {

namespace repository {

namespace Gst {


class CapsFeatures;

namespace base {


#define GI_GST_CAPSFEATURES_BASE base::CapsFeaturesBase
class CapsFeaturesBase : public gi::detail::GBoxedWrapper<CapsFeaturesBase, ::GstCapsFeatures>
{
typedef gi::detail::GBoxedWrapper<CapsFeaturesBase, ::GstCapsFeatures> super_type;
public:

CapsFeaturesBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gst_caps_features_get_type(); } 

// GstCapsFeatures* gst_caps_features_new (const gchar* feature1);
// ::GstCapsFeatures* gst_caps_features_new (const char* feature1);
// IGNORE; not introspectable, varargs not supported

// GstCapsFeatures* gst_caps_features_new_any ();
// ::GstCapsFeatures* gst_caps_features_new_any ();
static GI_INLINE_DECL Gst::CapsFeatures new_any () noexcept;

// GstCapsFeatures* gst_caps_features_new_empty ();
// ::GstCapsFeatures* gst_caps_features_new_empty ();
static GI_INLINE_DECL Gst::CapsFeatures new_empty () noexcept;

// GstCapsFeatures* gst_caps_features_new_id (GQuark feature1);
// ::GstCapsFeatures* gst_caps_features_new_id (::GQuark feature1);
// IGNORE; not introspectable, varargs not supported

// GstCapsFeatures* gst_caps_features_new_id_valist (GQuark feature1, va_list varargs);
// ::GstCapsFeatures* gst_caps_features_new_id_valist (::GQuark feature1,  varargs);
// IGNORE; not introspectable, varargs type  not supported

// GstCapsFeatures* gst_caps_features_new_single (const gchar* feature);
// ::GstCapsFeatures* gst_caps_features_new_single (const char* feature);
static GI_INLINE_DECL Gst::CapsFeatures new_single (const std::string & feature) noexcept;

// GstCapsFeatures* gst_caps_features_new_valist (const gchar* feature1, va_list varargs);
// ::GstCapsFeatures* gst_caps_features_new_valist (const char* feature1,  varargs);
// IGNORE; not introspectable, varargs type  not supported

// void gst_caps_features_add (GstCapsFeatures* features, const gchar* feature);
// void gst_caps_features_add (::GstCapsFeatures* features, const char* feature);
GI_INLINE_DECL void add (const std::string & feature) noexcept;

// void gst_caps_features_add_id (GstCapsFeatures* features, GQuark feature);
// void gst_caps_features_add_id (::GstCapsFeatures* features, ::GQuark feature);
GI_INLINE_DECL void add_id (::GQuark feature) noexcept;

// gboolean gst_caps_features_contains (const GstCapsFeatures* features, const gchar* feature);
// gboolean gst_caps_features_contains (const ::GstCapsFeatures* features, const char* feature);
GI_INLINE_DECL bool contains (const std::string & feature) const noexcept;

// gboolean gst_caps_features_contains_id (const GstCapsFeatures* features, GQuark feature);
// gboolean gst_caps_features_contains_id (const ::GstCapsFeatures* features, ::GQuark feature);
GI_INLINE_DECL bool contains_id (::GQuark feature) const noexcept;

// GstCapsFeatures* gst_caps_features_copy (const GstCapsFeatures* features);
// ::GstCapsFeatures* gst_caps_features_copy (const ::GstCapsFeatures* features);
GI_INLINE_DECL Gst::CapsFeatures copy () const noexcept;

// void gst_caps_features_free (GstCapsFeatures* features);
// void gst_caps_features_free (::GstCapsFeatures* features);
// IGNORE; marked ignore

// const gchar* gst_caps_features_get_nth (const GstCapsFeatures* features, guint i);
// const char* gst_caps_features_get_nth (const ::GstCapsFeatures* features, guint i);
GI_INLINE_DECL std::string get_nth (guint i) const noexcept;

// GQuark gst_caps_features_get_nth_id (const GstCapsFeatures* features, guint i);
// ::GQuark gst_caps_features_get_nth_id (const ::GstCapsFeatures* features, guint i);
GI_INLINE_DECL GLib::Quark get_nth_id (guint i) const noexcept;

// guint gst_caps_features_get_size (const GstCapsFeatures* features);
// guint gst_caps_features_get_size (const ::GstCapsFeatures* features);
GI_INLINE_DECL guint get_size () const noexcept;

// gboolean gst_caps_features_is_any (const GstCapsFeatures* features);
// gboolean gst_caps_features_is_any (const ::GstCapsFeatures* features);
GI_INLINE_DECL bool is_any () const noexcept;

// gboolean gst_caps_features_is_equal (const GstCapsFeatures* features1, const GstCapsFeatures* features2);
// gboolean gst_caps_features_is_equal (const ::GstCapsFeatures* features1, const ::GstCapsFeatures* features2);
GI_INLINE_DECL bool is_equal (const Gst::CapsFeatures & features2) const noexcept;

// void gst_caps_features_remove (GstCapsFeatures* features, const gchar* feature);
// void gst_caps_features_remove (::GstCapsFeatures* features, const char* feature);
GI_INLINE_DECL void remove (const std::string & feature) noexcept;

// void gst_caps_features_remove_id (GstCapsFeatures* features, GQuark feature);
// void gst_caps_features_remove_id (::GstCapsFeatures* features, ::GQuark feature);
GI_INLINE_DECL void remove_id (::GQuark feature) noexcept;

// gboolean gst_caps_features_set_parent_refcount (GstCapsFeatures* features, gint* refcount);
// gboolean gst_caps_features_set_parent_refcount (::GstCapsFeatures* features, gint refcount);
// SKIP; inconsistent in refcount pointer depth (1 vs 0)

// gchar* gst_caps_features_to_string (const GstCapsFeatures* features);
// char* gst_caps_features_to_string (const ::GstCapsFeatures* features);
GI_INLINE_DECL std::string to_string () const noexcept;

// GstCapsFeatures* gst_caps_features_from_string (const gchar* features);
// ::GstCapsFeatures* gst_caps_features_from_string (const char* features);
static GI_INLINE_DECL Gst::CapsFeatures from_string (const std::string & features) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/capsfeatures_extra_def.hpp>)
#include <gst/capsfeatures_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/capsfeatures_extra.hpp>)
#include <gst/capsfeatures_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class CapsFeatures : public GI_GST_CAPSFEATURES_BASE
{ typedef GI_GST_CAPSFEATURES_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstCapsFeatures>
{ typedef Gst::CapsFeatures type; }; 

} // namespace repository

} // namespace gi

#endif
