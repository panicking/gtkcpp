// AUTO-GENERATED

#ifndef _GI_GST_CAPS_HPP_
#define _GI_GST_CAPS_HPP_


namespace gi {

namespace repository {

namespace Gst {

class CapsFeatures;
class Structure;

class Caps;

namespace base {


#define GI_GST_CAPS_BASE base::CapsBase
class CapsBase : public gi::detail::GBoxedWrapper<CapsBase, ::GstCaps>
{
typedef gi::detail::GBoxedWrapper<CapsBase, ::GstCaps> super_type;
public:

CapsBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gst_caps_get_type(); } 

// GstCaps* gst_caps_new_any ();
// ::GstCaps* gst_caps_new_any ();
static GI_INLINE_DECL Gst::Caps new_any () noexcept;

// GstCaps* gst_caps_new_empty ();
// ::GstCaps* gst_caps_new_empty ();
static GI_INLINE_DECL Gst::Caps new_empty () noexcept;

// GstCaps* gst_caps_new_empty_simple (const char* media_type);
// ::GstCaps* gst_caps_new_empty_simple (const char* media_type);
static GI_INLINE_DECL Gst::Caps new_empty_simple (const std::string & media_type) noexcept;

// GstCaps* gst_caps_new_full (GstStructure* struct1);
// ::GstCaps* gst_caps_new_full (::GstStructure* struct1);
// IGNORE; not introspectable, varargs not supported

// GstCaps* gst_caps_new_full_valist (GstStructure* structure, va_list var_args);
// ::GstCaps* gst_caps_new_full_valist (::GstStructure* structure,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// GstCaps* gst_caps_new_simple (const char* media_type, const char* fieldname);
// ::GstCaps* gst_caps_new_simple (const char* media_type, const char* fieldname);
// IGNORE; not introspectable, varargs not supported

// void gst_caps_append (GstCaps* caps1, GstCaps* caps2);
// void gst_caps_append (::GstCaps* caps1, ::GstCaps* caps2);
GI_INLINE_DECL void append (Gst::Caps caps2) noexcept;

// void gst_caps_append_structure (GstCaps* caps, GstStructure* structure);
// void gst_caps_append_structure (::GstCaps* caps, ::GstStructure* structure);
GI_INLINE_DECL void append_structure (Gst::Structure structure) noexcept;

// void gst_caps_append_structure_full (GstCaps* caps, GstStructure* structure, GstCapsFeatures* features);
// void gst_caps_append_structure_full (::GstCaps* caps, ::GstStructure* structure, ::GstCapsFeatures* features);
GI_INLINE_DECL void append_structure_full (Gst::Structure structure, Gst::CapsFeatures features) noexcept;
GI_INLINE_DECL void append_structure_full (Gst::Structure structure) noexcept;

// gboolean gst_caps_can_intersect (const GstCaps* caps1, const GstCaps* caps2);
// gboolean gst_caps_can_intersect (const ::GstCaps* caps1, const ::GstCaps* caps2);
GI_INLINE_DECL bool can_intersect (const Gst::Caps & caps2) const noexcept;

// GstCaps* gst_caps_copy (const GstCaps* caps);
// ::GstCaps* gst_caps_copy (const ::GstCaps* caps);
GI_INLINE_DECL Gst::Caps copy () const noexcept;

// GstCaps* gst_caps_copy_nth (const GstCaps* caps, guint nth);
// ::GstCaps* gst_caps_copy_nth (const ::GstCaps* caps, guint nth);
GI_INLINE_DECL Gst::Caps copy_nth (guint nth) const noexcept;

// void gst_caps_filter_and_map_in_place (GstCaps* caps, GstCapsFilterMapFunc func, gpointer user_data);
// void gst_caps_filter_and_map_in_place (::GstCaps* caps, Gst::CapsFilterMapFunc::cfunction_type func, void* user_data);
GI_INLINE_DECL void filter_and_map_in_place (Gst::CapsFilterMapFunc func) noexcept;

// GstCaps* gst_caps_fixate (GstCaps* caps);
// ::GstCaps* gst_caps_fixate (::GstCaps* caps);
GI_INLINE_DECL Gst::Caps fixate () noexcept;

// gboolean gst_caps_foreach (const GstCaps* caps, GstCapsForeachFunc func, gpointer user_data);
// gboolean gst_caps_foreach (const ::GstCaps* caps, Gst::CapsForeachFunc::cfunction_type func, void* user_data);
GI_INLINE_DECL bool foreach (Gst::CapsForeachFunc func) const noexcept;

// GstCapsFeatures* gst_caps_get_features (const GstCaps* caps, guint index);
// ::GstCapsFeatures* gst_caps_get_features (const ::GstCaps* caps, guint index);
GI_INLINE_DECL Gst::CapsFeatures get_features (guint index) const noexcept;

// guint gst_caps_get_size (const GstCaps* caps);
// guint gst_caps_get_size (const ::GstCaps* caps);
GI_INLINE_DECL guint get_size () const noexcept;

// GstStructure* gst_caps_get_structure (const GstCaps* caps, guint index);
// ::GstStructure* gst_caps_get_structure (const ::GstCaps* caps, guint index);
GI_INLINE_DECL Gst::Structure get_structure (guint index) const noexcept;

// GstCaps* gst_caps_intersect (GstCaps* caps1, GstCaps* caps2);
// ::GstCaps* gst_caps_intersect (::GstCaps* caps1, ::GstCaps* caps2);
GI_INLINE_DECL Gst::Caps intersect (Gst::Caps caps2) noexcept;

// GstCaps* gst_caps_intersect_full (GstCaps* caps1, GstCaps* caps2, GstCapsIntersectMode mode);
// ::GstCaps* gst_caps_intersect_full (::GstCaps* caps1, ::GstCaps* caps2, ::GstCapsIntersectMode mode);
GI_INLINE_DECL Gst::Caps intersect_full (Gst::Caps caps2, Gst::CapsIntersectMode mode) noexcept;

// gboolean gst_caps_is_always_compatible (const GstCaps* caps1, const GstCaps* caps2);
// gboolean gst_caps_is_always_compatible (const ::GstCaps* caps1, const ::GstCaps* caps2);
GI_INLINE_DECL bool is_always_compatible (const Gst::Caps & caps2) const noexcept;

// gboolean gst_caps_is_any (const GstCaps* caps);
// gboolean gst_caps_is_any (const ::GstCaps* caps);
GI_INLINE_DECL bool is_any () const noexcept;

// gboolean gst_caps_is_empty (const GstCaps* caps);
// gboolean gst_caps_is_empty (const ::GstCaps* caps);
GI_INLINE_DECL bool is_empty () const noexcept;

// gboolean gst_caps_is_equal (const GstCaps* caps1, const GstCaps* caps2);
// gboolean gst_caps_is_equal (const ::GstCaps* caps1, const ::GstCaps* caps2);
GI_INLINE_DECL bool is_equal (const Gst::Caps & caps2) const noexcept;

// gboolean gst_caps_is_equal_fixed (const GstCaps* caps1, const GstCaps* caps2);
// gboolean gst_caps_is_equal_fixed (const ::GstCaps* caps1, const ::GstCaps* caps2);
GI_INLINE_DECL bool is_equal_fixed (const Gst::Caps & caps2) const noexcept;

// gboolean gst_caps_is_fixed (const GstCaps* caps);
// gboolean gst_caps_is_fixed (const ::GstCaps* caps);
GI_INLINE_DECL bool is_fixed () const noexcept;

// gboolean gst_caps_is_strictly_equal (const GstCaps* caps1, const GstCaps* caps2);
// gboolean gst_caps_is_strictly_equal (const ::GstCaps* caps1, const ::GstCaps* caps2);
GI_INLINE_DECL bool is_strictly_equal (const Gst::Caps & caps2) const noexcept;

// gboolean gst_caps_is_subset (const GstCaps* subset, const GstCaps* superset);
// gboolean gst_caps_is_subset (const ::GstCaps* subset, const ::GstCaps* superset);
GI_INLINE_DECL bool is_subset (const Gst::Caps & superset) const noexcept;

// gboolean gst_caps_is_subset_structure (const GstCaps* caps, const GstStructure* structure);
// gboolean gst_caps_is_subset_structure (const ::GstCaps* caps, const ::GstStructure* structure);
GI_INLINE_DECL bool is_subset_structure (const Gst::Structure & structure) const noexcept;

// gboolean gst_caps_is_subset_structure_full (const GstCaps* caps, const GstStructure* structure, const GstCapsFeatures* features);
// gboolean gst_caps_is_subset_structure_full (const ::GstCaps* caps, const ::GstStructure* structure, const ::GstCapsFeatures* features);
GI_INLINE_DECL bool is_subset_structure_full (const Gst::Structure & structure, const Gst::CapsFeatures & features) const noexcept;
GI_INLINE_DECL bool is_subset_structure_full (const Gst::Structure & structure) const noexcept;

// gboolean gst_caps_map_in_place (GstCaps* caps, GstCapsMapFunc func, gpointer user_data);
// gboolean gst_caps_map_in_place (::GstCaps* caps, Gst::CapsMapFunc::cfunction_type func, void* user_data);
GI_INLINE_DECL bool map_in_place (Gst::CapsMapFunc func) noexcept;

// GstCaps* gst_caps_merge (GstCaps* caps1, GstCaps* caps2);
// ::GstCaps* gst_caps_merge (::GstCaps* caps1, ::GstCaps* caps2);
GI_INLINE_DECL Gst::Caps merge (Gst::Caps caps2) noexcept;

// GstCaps* gst_caps_merge_structure (GstCaps* caps, GstStructure* structure);
// ::GstCaps* gst_caps_merge_structure (::GstCaps* caps, ::GstStructure* structure);
GI_INLINE_DECL Gst::Caps merge_structure (Gst::Structure structure) noexcept;

// GstCaps* gst_caps_merge_structure_full (GstCaps* caps, GstStructure* structure, GstCapsFeatures* features);
// ::GstCaps* gst_caps_merge_structure_full (::GstCaps* caps, ::GstStructure* structure, ::GstCapsFeatures* features);
GI_INLINE_DECL Gst::Caps merge_structure_full (Gst::Structure structure, Gst::CapsFeatures features) noexcept;
GI_INLINE_DECL Gst::Caps merge_structure_full (Gst::Structure structure) noexcept;

// GstCaps* gst_caps_normalize (GstCaps* caps);
// ::GstCaps* gst_caps_normalize (::GstCaps* caps);
GI_INLINE_DECL Gst::Caps normalize () noexcept;

// void gst_caps_remove_structure (GstCaps* caps, guint idx);
// void gst_caps_remove_structure (::GstCaps* caps, guint idx);
GI_INLINE_DECL void remove_structure (guint idx) noexcept;

// gchar* gst_caps_serialize (const GstCaps* caps, GstSerializeFlags flags);
// char* gst_caps_serialize (const ::GstCaps* caps, ::GstSerializeFlags flags);
GI_INLINE_DECL std::string serialize (Gst::SerializeFlags flags) const noexcept;

// void gst_caps_set_features (GstCaps* caps, guint index, GstCapsFeatures* features);
// void gst_caps_set_features (::GstCaps* caps, guint index, ::GstCapsFeatures* features);
GI_INLINE_DECL void set_features (guint index, Gst::CapsFeatures features) noexcept;
GI_INLINE_DECL void set_features (guint index) noexcept;

// void gst_caps_set_features_simple (GstCaps* caps, GstCapsFeatures* features);
// void gst_caps_set_features_simple (::GstCaps* caps, ::GstCapsFeatures* features);
GI_INLINE_DECL void set_features_simple (Gst::CapsFeatures features) noexcept;
GI_INLINE_DECL void set_features_simple () noexcept;

// void gst_caps_set_simple (GstCaps* caps, const char* field);
// void gst_caps_set_simple (::GstCaps* caps, const char* field);
// IGNORE; not introspectable, varargs not supported

// void gst_caps_set_simple_valist (GstCaps* caps, const char* field, va_list varargs);
// void gst_caps_set_simple_valist (::GstCaps* caps, const char* field,  varargs);
// IGNORE; not introspectable, varargs type  not supported

// void gst_caps_set_value (GstCaps* caps, const char* field, const GValue* value);
// void gst_caps_set_value (::GstCaps* caps, const char* field, const ::GValue* value);
GI_INLINE_DECL void set_value (const std::string & field, const GObject::Value & value) noexcept;

// GstCaps* gst_caps_simplify (GstCaps* caps);
// ::GstCaps* gst_caps_simplify (::GstCaps* caps);
GI_INLINE_DECL Gst::Caps simplify () noexcept;

// GstStructure* gst_caps_steal_structure (GstCaps* caps, guint index);
// ::GstStructure* gst_caps_steal_structure (::GstCaps* caps, guint index);
GI_INLINE_DECL Gst::Structure steal_structure (guint index) noexcept;

// GstCaps* gst_caps_subtract (GstCaps* minuend, GstCaps* subtrahend);
// ::GstCaps* gst_caps_subtract (::GstCaps* minuend, ::GstCaps* subtrahend);
GI_INLINE_DECL Gst::Caps subtract (Gst::Caps subtrahend) noexcept;

// gchar* gst_caps_to_string (const GstCaps* caps);
// char* gst_caps_to_string (const ::GstCaps* caps);
GI_INLINE_DECL std::string to_string () const noexcept;

// GstCaps* gst_caps_truncate (GstCaps* caps);
// ::GstCaps* gst_caps_truncate (::GstCaps* caps);
GI_INLINE_DECL Gst::Caps truncate () noexcept;

// GstCaps* gst_caps_from_string (const gchar* string);
// ::GstCaps* gst_caps_from_string (const char* string);
static GI_INLINE_DECL Gst::Caps from_string (const std::string & string) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/caps_extra_def.hpp>)
#include <gst/caps_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/caps_extra.hpp>)
#include <gst/caps_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Caps : public GI_GST_CAPS_BASE
{ typedef GI_GST_CAPS_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstCaps>
{ typedef Gst::Caps type; }; 

} // namespace repository

} // namespace gi

#endif
