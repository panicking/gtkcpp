// AUTO-GENERATED

#ifndef _GI_GST_DEBUGCATEGORY_IMPL_HPP_
#define _GI_GST_DEBUGCATEGORY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// void gst_debug_category_free (GstDebugCategory* category);
// void gst_debug_category_free (::GstDebugCategory* category);
// IGNORE; marked ignore

// guint gst_debug_category_get_color (GstDebugCategory* category);
// guint gst_debug_category_get_color (::GstDebugCategory* category);
guint base::DebugCategoryBase::get_color () noexcept
{
  typedef guint (*call_wrap_t) (::GstDebugCategory* category);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_category_get_color;
  auto _temp_ret = call_wrap_v ((::GstDebugCategory*) (gobj_()));
  return _temp_ret;
}

// const gchar* gst_debug_category_get_description (GstDebugCategory* category);
// const char* gst_debug_category_get_description (::GstDebugCategory* category);
std::string base::DebugCategoryBase::get_description () noexcept
{
  typedef const char* (*call_wrap_t) (::GstDebugCategory* category);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_category_get_description;
  auto _temp_ret = call_wrap_v ((::GstDebugCategory*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gst_debug_category_get_name (GstDebugCategory* category);
// const char* gst_debug_category_get_name (::GstDebugCategory* category);
std::string base::DebugCategoryBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GstDebugCategory* category);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_category_get_name;
  auto _temp_ret = call_wrap_v ((::GstDebugCategory*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstDebugLevel gst_debug_category_get_threshold (GstDebugCategory* category);
// ::GstDebugLevel gst_debug_category_get_threshold (::GstDebugCategory* category);
Gst::DebugLevel base::DebugCategoryBase::get_threshold () noexcept
{
  typedef ::GstDebugLevel (*call_wrap_t) (::GstDebugCategory* category);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_category_get_threshold;
  auto _temp_ret = call_wrap_v ((::GstDebugCategory*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gst_debug_category_reset_threshold (GstDebugCategory* category);
// void gst_debug_category_reset_threshold (::GstDebugCategory* category);
void base::DebugCategoryBase::reset_threshold () noexcept
{
  typedef void (*call_wrap_t) (::GstDebugCategory* category);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_category_reset_threshold;
  call_wrap_v ((::GstDebugCategory*) (gobj_()));
}

// void gst_debug_category_set_threshold (GstDebugCategory* category, GstDebugLevel level);
// void gst_debug_category_set_threshold (::GstDebugCategory* category, ::GstDebugLevel level);
void base::DebugCategoryBase::set_threshold (Gst::DebugLevel level) noexcept
{
  typedef void (*call_wrap_t) (::GstDebugCategory* category, ::GstDebugLevel level);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_debug_category_set_threshold;
  auto level_to_c = gi::unwrap (level);
  call_wrap_v ((::GstDebugCategory*) (gobj_()), (::GstDebugLevel) (level_to_c));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/debugcategory_extra_def_impl.hpp>)
#include <gst/debugcategory_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/debugcategory_extra_impl.hpp>)
#include <gst/debugcategory_extra_impl.hpp>
#endif
#endif

#endif
