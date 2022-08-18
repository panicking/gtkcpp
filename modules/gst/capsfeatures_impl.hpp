// AUTO-GENERATED

#ifndef _GI_GST_CAPSFEATURES_IMPL_HPP_
#define _GI_GST_CAPSFEATURES_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstCapsFeatures* gst_caps_features_new (const gchar* feature1);
// ::GstCapsFeatures* gst_caps_features_new (const char* feature1);
// IGNORE; not introspectable, varargs not supported

// GstCapsFeatures* gst_caps_features_new_any ();
// ::GstCapsFeatures* gst_caps_features_new_any ();
Gst::CapsFeatures base::CapsFeaturesBase::new_any () noexcept
{
  typedef ::GstCapsFeatures* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_features_new_any;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstCapsFeatures* gst_caps_features_new_empty ();
// ::GstCapsFeatures* gst_caps_features_new_empty ();
Gst::CapsFeatures base::CapsFeaturesBase::new_empty () noexcept
{
  typedef ::GstCapsFeatures* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_features_new_empty;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstCapsFeatures* gst_caps_features_new_id (GQuark feature1);
// ::GstCapsFeatures* gst_caps_features_new_id (::GQuark feature1);
// IGNORE; not introspectable, varargs not supported

// GstCapsFeatures* gst_caps_features_new_id_valist (GQuark feature1, va_list varargs);
// ::GstCapsFeatures* gst_caps_features_new_id_valist (::GQuark feature1,  varargs);
// IGNORE; not introspectable, varargs type  not supported

// GstCapsFeatures* gst_caps_features_new_single (const gchar* feature);
// ::GstCapsFeatures* gst_caps_features_new_single (const char* feature);
Gst::CapsFeatures base::CapsFeaturesBase::new_single (const std::string & feature) noexcept
{
  typedef ::GstCapsFeatures* (*call_wrap_t) (const char* feature);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_features_new_single;
  auto feature_to_c = gi::unwrap (feature, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (feature_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstCapsFeatures* gst_caps_features_new_valist (const gchar* feature1, va_list varargs);
// ::GstCapsFeatures* gst_caps_features_new_valist (const char* feature1,  varargs);
// IGNORE; not introspectable, varargs type  not supported

// void gst_caps_features_add (GstCapsFeatures* features, const gchar* feature);
// void gst_caps_features_add (::GstCapsFeatures* features, const char* feature);
void base::CapsFeaturesBase::add (const std::string & feature) noexcept
{
  typedef void (*call_wrap_t) (::GstCapsFeatures* features, const char* feature);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_features_add;
  auto feature_to_c = gi::unwrap (feature, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstCapsFeatures*) (gobj_()), (const char*) (feature_to_c));
}

// void gst_caps_features_add_id (GstCapsFeatures* features, GQuark feature);
// void gst_caps_features_add_id (::GstCapsFeatures* features, ::GQuark feature);
void base::CapsFeaturesBase::add_id (::GQuark feature) noexcept
{
  typedef void (*call_wrap_t) (::GstCapsFeatures* features, ::GQuark feature);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_features_add_id;
  auto feature_to_c = feature;
  call_wrap_v ((::GstCapsFeatures*) (gobj_()), (::GQuark) (feature_to_c));
}

// gboolean gst_caps_features_contains (const GstCapsFeatures* features, const gchar* feature);
// gboolean gst_caps_features_contains (const ::GstCapsFeatures* features, const char* feature);
bool base::CapsFeaturesBase::contains (const std::string & feature) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstCapsFeatures* features, const char* feature);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_features_contains;
  auto feature_to_c = gi::unwrap (feature, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstCapsFeatures*) (gobj_()), (const char*) (feature_to_c));
  return _temp_ret;
}

// gboolean gst_caps_features_contains_id (const GstCapsFeatures* features, GQuark feature);
// gboolean gst_caps_features_contains_id (const ::GstCapsFeatures* features, ::GQuark feature);
bool base::CapsFeaturesBase::contains_id (::GQuark feature) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstCapsFeatures* features, ::GQuark feature);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_features_contains_id;
  auto feature_to_c = feature;
  auto _temp_ret = call_wrap_v ((const ::GstCapsFeatures*) (gobj_()), (::GQuark) (feature_to_c));
  return _temp_ret;
}

// GstCapsFeatures* gst_caps_features_copy (const GstCapsFeatures* features);
// ::GstCapsFeatures* gst_caps_features_copy (const ::GstCapsFeatures* features);
Gst::CapsFeatures base::CapsFeaturesBase::copy () const noexcept
{
  typedef ::GstCapsFeatures* (*call_wrap_t) (const ::GstCapsFeatures* features);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_features_copy;
  auto _temp_ret = call_wrap_v ((const ::GstCapsFeatures*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_caps_features_free (GstCapsFeatures* features);
// void gst_caps_features_free (::GstCapsFeatures* features);
// IGNORE; marked ignore

// const gchar* gst_caps_features_get_nth (const GstCapsFeatures* features, guint i);
// const char* gst_caps_features_get_nth (const ::GstCapsFeatures* features, guint i);
std::string base::CapsFeaturesBase::get_nth (guint i) const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstCapsFeatures* features, guint i);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_features_get_nth;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((const ::GstCapsFeatures*) (gobj_()), (guint) (i_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GQuark gst_caps_features_get_nth_id (const GstCapsFeatures* features, guint i);
// ::GQuark gst_caps_features_get_nth_id (const ::GstCapsFeatures* features, guint i);
GLib::Quark base::CapsFeaturesBase::get_nth_id (guint i) const noexcept
{
  typedef ::GQuark (*call_wrap_t) (const ::GstCapsFeatures* features, guint i);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_features_get_nth_id;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((const ::GstCapsFeatures*) (gobj_()), (guint) (i_to_c));
  return _temp_ret;
}

// guint gst_caps_features_get_size (const GstCapsFeatures* features);
// guint gst_caps_features_get_size (const ::GstCapsFeatures* features);
guint base::CapsFeaturesBase::get_size () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GstCapsFeatures* features);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_features_get_size;
  auto _temp_ret = call_wrap_v ((const ::GstCapsFeatures*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_caps_features_is_any (const GstCapsFeatures* features);
// gboolean gst_caps_features_is_any (const ::GstCapsFeatures* features);
bool base::CapsFeaturesBase::is_any () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstCapsFeatures* features);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_features_is_any;
  auto _temp_ret = call_wrap_v ((const ::GstCapsFeatures*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_caps_features_is_equal (const GstCapsFeatures* features1, const GstCapsFeatures* features2);
// gboolean gst_caps_features_is_equal (const ::GstCapsFeatures* features1, const ::GstCapsFeatures* features2);
bool base::CapsFeaturesBase::is_equal (const Gst::CapsFeatures & features2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstCapsFeatures* features1, const ::GstCapsFeatures* features2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_features_is_equal;
  auto features2_to_c = gi::unwrap (features2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstCapsFeatures*) (gobj_()), (const ::GstCapsFeatures*) (features2_to_c));
  return _temp_ret;
}

// void gst_caps_features_remove (GstCapsFeatures* features, const gchar* feature);
// void gst_caps_features_remove (::GstCapsFeatures* features, const char* feature);
void base::CapsFeaturesBase::remove (const std::string & feature) noexcept
{
  typedef void (*call_wrap_t) (::GstCapsFeatures* features, const char* feature);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_features_remove;
  auto feature_to_c = gi::unwrap (feature, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstCapsFeatures*) (gobj_()), (const char*) (feature_to_c));
}

// void gst_caps_features_remove_id (GstCapsFeatures* features, GQuark feature);
// void gst_caps_features_remove_id (::GstCapsFeatures* features, ::GQuark feature);
void base::CapsFeaturesBase::remove_id (::GQuark feature) noexcept
{
  typedef void (*call_wrap_t) (::GstCapsFeatures* features, ::GQuark feature);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_features_remove_id;
  auto feature_to_c = feature;
  call_wrap_v ((::GstCapsFeatures*) (gobj_()), (::GQuark) (feature_to_c));
}

// gboolean gst_caps_features_set_parent_refcount (GstCapsFeatures* features, gint* refcount);
// gboolean gst_caps_features_set_parent_refcount (::GstCapsFeatures* features, gint refcount);
// SKIP; inconsistent in refcount pointer depth (1 vs 0)

// gchar* gst_caps_features_to_string (const GstCapsFeatures* features);
// char* gst_caps_features_to_string (const ::GstCapsFeatures* features);
std::string base::CapsFeaturesBase::to_string () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GstCapsFeatures* features);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_features_to_string;
  auto _temp_ret = call_wrap_v ((const ::GstCapsFeatures*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstCapsFeatures* gst_caps_features_from_string (const gchar* features);
// ::GstCapsFeatures* gst_caps_features_from_string (const char* features);
Gst::CapsFeatures base::CapsFeaturesBase::from_string (const std::string & features) noexcept
{
  typedef ::GstCapsFeatures* (*call_wrap_t) (const char* features);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_caps_features_from_string;
  auto features_to_c = gi::unwrap (features, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (features_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/capsfeatures_extra_def_impl.hpp>)
#include <gst/capsfeatures_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/capsfeatures_extra_impl.hpp>)
#include <gst/capsfeatures_extra_impl.hpp>
#endif
#endif

#endif
