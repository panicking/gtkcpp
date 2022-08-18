// AUTO-GENERATED

#ifndef _GI_GST_CAPS_IMPL_HPP_
#define _GI_GST_CAPS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstCaps* gst_caps_new_any ();
// ::GstCaps* gst_caps_new_any ();
Gst::Caps base::CapsBase::new_any () noexcept
{
  typedef ::GstCaps* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_new_any;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstCaps* gst_caps_new_empty ();
// ::GstCaps* gst_caps_new_empty ();
Gst::Caps base::CapsBase::new_empty () noexcept
{
  typedef ::GstCaps* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_new_empty;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstCaps* gst_caps_new_empty_simple (const char* media_type);
// ::GstCaps* gst_caps_new_empty_simple (const char* media_type);
Gst::Caps base::CapsBase::new_empty_simple (const std::string & media_type) noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (const char* media_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_new_empty_simple;
  auto media_type_to_c = gi::unwrap (media_type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (media_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

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
void base::CapsBase::append (Gst::Caps caps2) noexcept
{
  typedef void (*call_wrap_t) (::GstCaps* caps1, ::GstCaps* caps2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_append;
  auto caps2_to_c = gi::unwrap (caps2, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::GstCaps*) (gobj_()), (::GstCaps*) (caps2_to_c));
}

// void gst_caps_append_structure (GstCaps* caps, GstStructure* structure);
// void gst_caps_append_structure (::GstCaps* caps, ::GstStructure* structure);
void base::CapsBase::append_structure (Gst::Structure structure) noexcept
{
  typedef void (*call_wrap_t) (::GstCaps* caps, ::GstStructure* structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_append_structure;
  auto structure_to_c = gi::unwrap (structure, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::GstCaps*) (gobj_()), (::GstStructure*) (structure_to_c));
}

// void gst_caps_append_structure_full (GstCaps* caps, GstStructure* structure, GstCapsFeatures* features);
// void gst_caps_append_structure_full (::GstCaps* caps, ::GstStructure* structure, ::GstCapsFeatures* features);
void base::CapsBase::append_structure_full (Gst::Structure structure, Gst::CapsFeatures features) noexcept
{
  typedef void (*call_wrap_t) (::GstCaps* caps, ::GstStructure* structure, ::GstCapsFeatures* features);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_append_structure_full;
  auto features_to_c = gi::unwrap (features, gi::transfer_full, gi::direction_in);
  auto structure_to_c = gi::unwrap (structure, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::GstCaps*) (gobj_()), (::GstStructure*) (structure_to_c), (::GstCapsFeatures*) (features_to_c));
}
void base::CapsBase::append_structure_full (Gst::Structure structure) noexcept
{
  typedef void (*call_wrap_t) (::GstCaps* caps, ::GstStructure* structure, ::GstCapsFeatures* features);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_append_structure_full;
  auto features_to_c = nullptr;
  auto structure_to_c = gi::unwrap (structure, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::GstCaps*) (gobj_()), (::GstStructure*) (structure_to_c), (::GstCapsFeatures*) (features_to_c));
}

// gboolean gst_caps_can_intersect (const GstCaps* caps1, const GstCaps* caps2);
// gboolean gst_caps_can_intersect (const ::GstCaps* caps1, const ::GstCaps* caps2);
bool base::CapsBase::can_intersect (const Gst::Caps & caps2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstCaps* caps1, const ::GstCaps* caps2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_can_intersect;
  auto caps2_to_c = gi::unwrap (caps2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstCaps*) (gobj_()), (const ::GstCaps*) (caps2_to_c));
  return _temp_ret;
}

// GstCaps* gst_caps_copy (const GstCaps* caps);
// ::GstCaps* gst_caps_copy (const ::GstCaps* caps);
Gst::Caps base::CapsBase::copy () const noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (const ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_copy;
  auto _temp_ret = call_wrap_v ((const ::GstCaps*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstCaps* gst_caps_copy_nth (const GstCaps* caps, guint nth);
// ::GstCaps* gst_caps_copy_nth (const ::GstCaps* caps, guint nth);
Gst::Caps base::CapsBase::copy_nth (guint nth) const noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (const ::GstCaps* caps, guint nth);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_copy_nth;
  auto nth_to_c = nth;
  auto _temp_ret = call_wrap_v ((const ::GstCaps*) (gobj_()), (guint) (nth_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_caps_filter_and_map_in_place (GstCaps* caps, GstCapsFilterMapFunc func, gpointer user_data);
// void gst_caps_filter_and_map_in_place (::GstCaps* caps, Gst::CapsFilterMapFunc::cfunction_type func, void* user_data);
void base::CapsBase::filter_and_map_in_place (Gst::CapsFilterMapFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GstCaps* caps, Gst::CapsFilterMapFunc::cfunction_type func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_filter_and_map_in_place;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  call_wrap_v ((::GstCaps*) (gobj_()), (Gst::CapsFilterMapFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// GstCaps* gst_caps_fixate (GstCaps* caps);
// ::GstCaps* gst_caps_fixate (::GstCaps* caps);
Gst::Caps base::CapsBase::fixate () noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_fixate;
  auto _temp_ret = call_wrap_v ((::GstCaps*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_caps_foreach (const GstCaps* caps, GstCapsForeachFunc func, gpointer user_data);
// gboolean gst_caps_foreach (const ::GstCaps* caps, Gst::CapsForeachFunc::cfunction_type func, void* user_data);
bool base::CapsBase::foreach (Gst::CapsForeachFunc func) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstCaps* caps, Gst::CapsForeachFunc::cfunction_type func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  auto _temp_ret = call_wrap_v ((const ::GstCaps*) (gobj_()), (Gst::CapsForeachFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
  return _temp_ret;
}

// GstCapsFeatures* gst_caps_get_features (const GstCaps* caps, guint index);
// ::GstCapsFeatures* gst_caps_get_features (const ::GstCaps* caps, guint index);
Gst::CapsFeatures base::CapsBase::get_features (guint index) const noexcept
{
  typedef ::GstCapsFeatures* (*call_wrap_t) (const ::GstCaps* caps, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_get_features;
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((const ::GstCaps*) (gobj_()), (guint) (index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint gst_caps_get_size (const GstCaps* caps);
// guint gst_caps_get_size (const ::GstCaps* caps);
guint base::CapsBase::get_size () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_get_size;
  auto _temp_ret = call_wrap_v ((const ::GstCaps*) (gobj_()));
  return _temp_ret;
}

// GstStructure* gst_caps_get_structure (const GstCaps* caps, guint index);
// ::GstStructure* gst_caps_get_structure (const ::GstCaps* caps, guint index);
Gst::Structure base::CapsBase::get_structure (guint index) const noexcept
{
  typedef ::GstStructure* (*call_wrap_t) (const ::GstCaps* caps, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_get_structure;
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((const ::GstCaps*) (gobj_()), (guint) (index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstCaps* gst_caps_intersect (GstCaps* caps1, GstCaps* caps2);
// ::GstCaps* gst_caps_intersect (::GstCaps* caps1, ::GstCaps* caps2);
Gst::Caps base::CapsBase::intersect (Gst::Caps caps2) noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstCaps* caps1, ::GstCaps* caps2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_intersect;
  auto caps2_to_c = gi::unwrap (caps2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstCaps*) (gobj_()), (::GstCaps*) (caps2_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstCaps* gst_caps_intersect_full (GstCaps* caps1, GstCaps* caps2, GstCapsIntersectMode mode);
// ::GstCaps* gst_caps_intersect_full (::GstCaps* caps1, ::GstCaps* caps2, ::GstCapsIntersectMode mode);
Gst::Caps base::CapsBase::intersect_full (Gst::Caps caps2, Gst::CapsIntersectMode mode) noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstCaps* caps1, ::GstCaps* caps2, ::GstCapsIntersectMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_intersect_full;
  auto mode_to_c = gi::unwrap (mode);
  auto caps2_to_c = gi::unwrap (caps2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstCaps*) (gobj_()), (::GstCaps*) (caps2_to_c), (::GstCapsIntersectMode) (mode_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_caps_is_always_compatible (const GstCaps* caps1, const GstCaps* caps2);
// gboolean gst_caps_is_always_compatible (const ::GstCaps* caps1, const ::GstCaps* caps2);
bool base::CapsBase::is_always_compatible (const Gst::Caps & caps2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstCaps* caps1, const ::GstCaps* caps2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_is_always_compatible;
  auto caps2_to_c = gi::unwrap (caps2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstCaps*) (gobj_()), (const ::GstCaps*) (caps2_to_c));
  return _temp_ret;
}

// gboolean gst_caps_is_any (const GstCaps* caps);
// gboolean gst_caps_is_any (const ::GstCaps* caps);
bool base::CapsBase::is_any () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_is_any;
  auto _temp_ret = call_wrap_v ((const ::GstCaps*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_caps_is_empty (const GstCaps* caps);
// gboolean gst_caps_is_empty (const ::GstCaps* caps);
bool base::CapsBase::is_empty () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_is_empty;
  auto _temp_ret = call_wrap_v ((const ::GstCaps*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_caps_is_equal (const GstCaps* caps1, const GstCaps* caps2);
// gboolean gst_caps_is_equal (const ::GstCaps* caps1, const ::GstCaps* caps2);
bool base::CapsBase::is_equal (const Gst::Caps & caps2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstCaps* caps1, const ::GstCaps* caps2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_is_equal;
  auto caps2_to_c = gi::unwrap (caps2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstCaps*) (gobj_()), (const ::GstCaps*) (caps2_to_c));
  return _temp_ret;
}

// gboolean gst_caps_is_equal_fixed (const GstCaps* caps1, const GstCaps* caps2);
// gboolean gst_caps_is_equal_fixed (const ::GstCaps* caps1, const ::GstCaps* caps2);
bool base::CapsBase::is_equal_fixed (const Gst::Caps & caps2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstCaps* caps1, const ::GstCaps* caps2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_is_equal_fixed;
  auto caps2_to_c = gi::unwrap (caps2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstCaps*) (gobj_()), (const ::GstCaps*) (caps2_to_c));
  return _temp_ret;
}

// gboolean gst_caps_is_fixed (const GstCaps* caps);
// gboolean gst_caps_is_fixed (const ::GstCaps* caps);
bool base::CapsBase::is_fixed () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_is_fixed;
  auto _temp_ret = call_wrap_v ((const ::GstCaps*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_caps_is_strictly_equal (const GstCaps* caps1, const GstCaps* caps2);
// gboolean gst_caps_is_strictly_equal (const ::GstCaps* caps1, const ::GstCaps* caps2);
bool base::CapsBase::is_strictly_equal (const Gst::Caps & caps2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstCaps* caps1, const ::GstCaps* caps2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_is_strictly_equal;
  auto caps2_to_c = gi::unwrap (caps2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstCaps*) (gobj_()), (const ::GstCaps*) (caps2_to_c));
  return _temp_ret;
}

// gboolean gst_caps_is_subset (const GstCaps* subset, const GstCaps* superset);
// gboolean gst_caps_is_subset (const ::GstCaps* subset, const ::GstCaps* superset);
bool base::CapsBase::is_subset (const Gst::Caps & superset) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstCaps* subset, const ::GstCaps* superset);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_is_subset;
  auto superset_to_c = gi::unwrap (superset, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstCaps*) (gobj_()), (const ::GstCaps*) (superset_to_c));
  return _temp_ret;
}

// gboolean gst_caps_is_subset_structure (const GstCaps* caps, const GstStructure* structure);
// gboolean gst_caps_is_subset_structure (const ::GstCaps* caps, const ::GstStructure* structure);
bool base::CapsBase::is_subset_structure (const Gst::Structure & structure) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstCaps* caps, const ::GstStructure* structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_is_subset_structure;
  auto structure_to_c = gi::unwrap (structure, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstCaps*) (gobj_()), (const ::GstStructure*) (structure_to_c));
  return _temp_ret;
}

// gboolean gst_caps_is_subset_structure_full (const GstCaps* caps, const GstStructure* structure, const GstCapsFeatures* features);
// gboolean gst_caps_is_subset_structure_full (const ::GstCaps* caps, const ::GstStructure* structure, const ::GstCapsFeatures* features);
bool base::CapsBase::is_subset_structure_full (const Gst::Structure & structure, const Gst::CapsFeatures & features) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstCaps* caps, const ::GstStructure* structure, const ::GstCapsFeatures* features);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_is_subset_structure_full;
  auto features_to_c = gi::unwrap (features, gi::transfer_none, gi::direction_in);
  auto structure_to_c = gi::unwrap (structure, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstCaps*) (gobj_()), (const ::GstStructure*) (structure_to_c), (const ::GstCapsFeatures*) (features_to_c));
  return _temp_ret;
}
bool base::CapsBase::is_subset_structure_full (const Gst::Structure & structure) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstCaps* caps, const ::GstStructure* structure, const ::GstCapsFeatures* features);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_is_subset_structure_full;
  auto features_to_c = nullptr;
  auto structure_to_c = gi::unwrap (structure, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstCaps*) (gobj_()), (const ::GstStructure*) (structure_to_c), (const ::GstCapsFeatures*) (features_to_c));
  return _temp_ret;
}

// gboolean gst_caps_map_in_place (GstCaps* caps, GstCapsMapFunc func, gpointer user_data);
// gboolean gst_caps_map_in_place (::GstCaps* caps, Gst::CapsMapFunc::cfunction_type func, void* user_data);
bool base::CapsBase::map_in_place (Gst::CapsMapFunc func) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstCaps* caps, Gst::CapsMapFunc::cfunction_type func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_map_in_place;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  auto _temp_ret = call_wrap_v ((::GstCaps*) (gobj_()), (Gst::CapsMapFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
  return _temp_ret;
}

// GstCaps* gst_caps_merge (GstCaps* caps1, GstCaps* caps2);
// ::GstCaps* gst_caps_merge (::GstCaps* caps1, ::GstCaps* caps2);
Gst::Caps base::CapsBase::merge (Gst::Caps caps2) noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstCaps* caps1, ::GstCaps* caps2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_merge;
  auto caps2_to_c = gi::unwrap (caps2, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstCaps*) (gobj_()), (::GstCaps*) (caps2_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstCaps* gst_caps_merge_structure (GstCaps* caps, GstStructure* structure);
// ::GstCaps* gst_caps_merge_structure (::GstCaps* caps, ::GstStructure* structure);
Gst::Caps base::CapsBase::merge_structure (Gst::Structure structure) noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstCaps* caps, ::GstStructure* structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_merge_structure;
  auto structure_to_c = gi::unwrap (structure, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstCaps*) (gobj_()), (::GstStructure*) (structure_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstCaps* gst_caps_merge_structure_full (GstCaps* caps, GstStructure* structure, GstCapsFeatures* features);
// ::GstCaps* gst_caps_merge_structure_full (::GstCaps* caps, ::GstStructure* structure, ::GstCapsFeatures* features);
Gst::Caps base::CapsBase::merge_structure_full (Gst::Structure structure, Gst::CapsFeatures features) noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstCaps* caps, ::GstStructure* structure, ::GstCapsFeatures* features);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_merge_structure_full;
  auto features_to_c = gi::unwrap (features, gi::transfer_full, gi::direction_in);
  auto structure_to_c = gi::unwrap (structure, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstCaps*) (gobj_()), (::GstStructure*) (structure_to_c), (::GstCapsFeatures*) (features_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Caps base::CapsBase::merge_structure_full (Gst::Structure structure) noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstCaps* caps, ::GstStructure* structure, ::GstCapsFeatures* features);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_merge_structure_full;
  auto features_to_c = nullptr;
  auto structure_to_c = gi::unwrap (structure, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstCaps*) (gobj_()), (::GstStructure*) (structure_to_c), (::GstCapsFeatures*) (features_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstCaps* gst_caps_normalize (GstCaps* caps);
// ::GstCaps* gst_caps_normalize (::GstCaps* caps);
Gst::Caps base::CapsBase::normalize () noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_normalize;
  auto _temp_ret = call_wrap_v ((::GstCaps*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_caps_remove_structure (GstCaps* caps, guint idx);
// void gst_caps_remove_structure (::GstCaps* caps, guint idx);
void base::CapsBase::remove_structure (guint idx) noexcept
{
  typedef void (*call_wrap_t) (::GstCaps* caps, guint idx);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_remove_structure;
  auto idx_to_c = idx;
  call_wrap_v ((::GstCaps*) (gobj_()), (guint) (idx_to_c));
}

// gchar* gst_caps_serialize (const GstCaps* caps, GstSerializeFlags flags);
// char* gst_caps_serialize (const ::GstCaps* caps, ::GstSerializeFlags flags);
std::string base::CapsBase::serialize (Gst::SerializeFlags flags) const noexcept
{
  typedef char* (*call_wrap_t) (const ::GstCaps* caps, ::GstSerializeFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_serialize;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((const ::GstCaps*) (gobj_()), (::GstSerializeFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_caps_set_features (GstCaps* caps, guint index, GstCapsFeatures* features);
// void gst_caps_set_features (::GstCaps* caps, guint index, ::GstCapsFeatures* features);
void base::CapsBase::set_features (guint index, Gst::CapsFeatures features) noexcept
{
  typedef void (*call_wrap_t) (::GstCaps* caps, guint index, ::GstCapsFeatures* features);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_set_features;
  auto features_to_c = gi::unwrap (features, gi::transfer_full, gi::direction_in);
  auto index_to_c = index;
  call_wrap_v ((::GstCaps*) (gobj_()), (guint) (index_to_c), (::GstCapsFeatures*) (features_to_c));
}
void base::CapsBase::set_features (guint index) noexcept
{
  typedef void (*call_wrap_t) (::GstCaps* caps, guint index, ::GstCapsFeatures* features);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_set_features;
  auto features_to_c = nullptr;
  auto index_to_c = index;
  call_wrap_v ((::GstCaps*) (gobj_()), (guint) (index_to_c), (::GstCapsFeatures*) (features_to_c));
}

// void gst_caps_set_features_simple (GstCaps* caps, GstCapsFeatures* features);
// void gst_caps_set_features_simple (::GstCaps* caps, ::GstCapsFeatures* features);
void base::CapsBase::set_features_simple (Gst::CapsFeatures features) noexcept
{
  typedef void (*call_wrap_t) (::GstCaps* caps, ::GstCapsFeatures* features);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_set_features_simple;
  auto features_to_c = gi::unwrap (features, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::GstCaps*) (gobj_()), (::GstCapsFeatures*) (features_to_c));
}
void base::CapsBase::set_features_simple () noexcept
{
  typedef void (*call_wrap_t) (::GstCaps* caps, ::GstCapsFeatures* features);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_set_features_simple;
  auto features_to_c = nullptr;
  call_wrap_v ((::GstCaps*) (gobj_()), (::GstCapsFeatures*) (features_to_c));
}

// void gst_caps_set_simple (GstCaps* caps, const char* field);
// void gst_caps_set_simple (::GstCaps* caps, const char* field);
// IGNORE; not introspectable, varargs not supported

// void gst_caps_set_simple_valist (GstCaps* caps, const char* field, va_list varargs);
// void gst_caps_set_simple_valist (::GstCaps* caps, const char* field,  varargs);
// IGNORE; not introspectable, varargs type  not supported

// void gst_caps_set_value (GstCaps* caps, const char* field, const GValue* value);
// void gst_caps_set_value (::GstCaps* caps, const char* field, const ::GValue* value);
void base::CapsBase::set_value (const std::string & field, const GObject::Value & value) noexcept
{
  typedef void (*call_wrap_t) (::GstCaps* caps, const char* field, const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_set_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto field_to_c = gi::unwrap (field, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstCaps*) (gobj_()), (const char*) (field_to_c), (const ::GValue*) (value_to_c));
}

// GstCaps* gst_caps_simplify (GstCaps* caps);
// ::GstCaps* gst_caps_simplify (::GstCaps* caps);
Gst::Caps base::CapsBase::simplify () noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_simplify;
  auto _temp_ret = call_wrap_v ((::GstCaps*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstStructure* gst_caps_steal_structure (GstCaps* caps, guint index);
// ::GstStructure* gst_caps_steal_structure (::GstCaps* caps, guint index);
Gst::Structure base::CapsBase::steal_structure (guint index) noexcept
{
  typedef ::GstStructure* (*call_wrap_t) (::GstCaps* caps, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_steal_structure;
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((::GstCaps*) (gobj_()), (guint) (index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstCaps* gst_caps_subtract (GstCaps* minuend, GstCaps* subtrahend);
// ::GstCaps* gst_caps_subtract (::GstCaps* minuend, ::GstCaps* subtrahend);
Gst::Caps base::CapsBase::subtract (Gst::Caps subtrahend) noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstCaps* minuend, ::GstCaps* subtrahend);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_subtract;
  auto subtrahend_to_c = gi::unwrap (subtrahend, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstCaps*) (gobj_()), (::GstCaps*) (subtrahend_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* gst_caps_to_string (const GstCaps* caps);
// char* gst_caps_to_string (const ::GstCaps* caps);
std::string base::CapsBase::to_string () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_to_string;
  auto _temp_ret = call_wrap_v ((const ::GstCaps*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstCaps* gst_caps_truncate (GstCaps* caps);
// ::GstCaps* gst_caps_truncate (::GstCaps* caps);
Gst::Caps base::CapsBase::truncate () noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_truncate;
  auto _temp_ret = call_wrap_v ((::GstCaps*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstCaps* gst_caps_from_string (const gchar* string);
// ::GstCaps* gst_caps_from_string (const char* string);
Gst::Caps base::CapsBase::from_string (const std::string & string) noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_from_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/caps_extra_def_impl.hpp>)
#include <gst/caps_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/caps_extra_impl.hpp>)
#include <gst/caps_extra_impl.hpp>
#endif
#endif

#endif
