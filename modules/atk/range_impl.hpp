// AUTO-GENERATED

#ifndef _GI_ATK_RANGE_IMPL_HPP_
#define _GI_ATK_RANGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

// AtkRange* atk_range_new (gdouble lower_limit, gdouble upper_limit, const gchar* description);
// ::AtkRange* atk_range_new (gdouble lower_limit, gdouble upper_limit, const char* description);
Atk::Range base::RangeBase::new_ (gdouble lower_limit, gdouble upper_limit, const std::string & description) noexcept
{
  typedef ::AtkRange* (*call_wrap_t) (gdouble lower_limit, gdouble upper_limit, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_range_new;
  auto description_to_c = gi::unwrap (description, gi::transfer_none, gi::direction_in);
  auto upper_limit_to_c = upper_limit;
  auto lower_limit_to_c = lower_limit;
  auto _temp_ret = call_wrap_v ((gdouble) (lower_limit_to_c), (gdouble) (upper_limit_to_c), (const char*) (description_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// AtkRange* atk_range_copy (AtkRange* src);
// ::AtkRange* atk_range_copy (::AtkRange* src);
Atk::Range base::RangeBase::copy () noexcept
{
  typedef ::AtkRange* (*call_wrap_t) (::AtkRange* src);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_range_copy;
  auto _temp_ret = call_wrap_v ((::AtkRange*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void atk_range_free (AtkRange* range);
// void atk_range_free (::AtkRange* range);
// IGNORE; marked ignore

// const gchar* atk_range_get_description (AtkRange* range);
// const char* atk_range_get_description (::AtkRange* range);
std::string base::RangeBase::get_description () noexcept
{
  typedef const char* (*call_wrap_t) (::AtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_range_get_description;
  auto _temp_ret = call_wrap_v ((::AtkRange*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gdouble atk_range_get_lower_limit (AtkRange* range);
// gdouble atk_range_get_lower_limit (::AtkRange* range);
gdouble base::RangeBase::get_lower_limit () noexcept
{
  typedef gdouble (*call_wrap_t) (::AtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_range_get_lower_limit;
  auto _temp_ret = call_wrap_v ((::AtkRange*) (gobj_()));
  return _temp_ret;
}

// gdouble atk_range_get_upper_limit (AtkRange* range);
// gdouble atk_range_get_upper_limit (::AtkRange* range);
gdouble base::RangeBase::get_upper_limit () noexcept
{
  typedef gdouble (*call_wrap_t) (::AtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_range_get_upper_limit;
  auto _temp_ret = call_wrap_v ((::AtkRange*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/range_extra_def_impl.hpp>)
#include <atk/range_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/range_extra_impl.hpp>)
#include <atk/range_extra_impl.hpp>
#endif
#endif

#endif
