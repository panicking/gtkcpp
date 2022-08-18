// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_SEGMENT_PROPERTIES_T_IMPL_HPP_
#define _GI_HARFBUZZ_SEGMENT_PROPERTIES_T_IMPL_HPP_

namespace gi {

namespace repository {

namespace HarfBuzz {

namespace base {

static ::hb_direction_t _field_direction_get (const ::hb_segment_properties_t* obj) { return (::hb_direction_t) obj->direction; }
// ::hb_direction_t segment_properties_t::direction (const ::hb_segment_properties_t* obj);
// ::hb_direction_t segment_properties_t::direction (const ::hb_segment_properties_t* obj);
HarfBuzz::direction_t base::segment_properties_tBase::direction_ () const noexcept
{
  typedef ::hb_direction_t (*call_wrap_t) (const ::hb_segment_properties_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_direction_get;
  auto _temp_ret = call_wrap_v ((const ::hb_segment_properties_t*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_direction_set (::hb_segment_properties_t* obj, ::hb_direction_t _value) { obj->direction = (decltype(obj->direction)) _value; }
//  segment_properties_t::direction (::hb_segment_properties_t* obj, ::hb_direction_t _value);
// void segment_properties_t::direction (::hb_segment_properties_t* obj, ::hb_direction_t _value);
void base::segment_properties_tBase::direction_ (HarfBuzz::direction_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_segment_properties_t* obj, ::hb_direction_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_direction_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::hb_segment_properties_t*) (gobj_()), (::hb_direction_t) (_value_to_c));
}

static ::hb_script_t _field_script_get (const ::hb_segment_properties_t* obj) { return (::hb_script_t) obj->script; }
// ::hb_script_t segment_properties_t::script (const ::hb_segment_properties_t* obj);
// ::hb_script_t segment_properties_t::script (const ::hb_segment_properties_t* obj);
HarfBuzz::script_t base::segment_properties_tBase::script_ () const noexcept
{
  typedef ::hb_script_t (*call_wrap_t) (const ::hb_segment_properties_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_script_get;
  auto _temp_ret = call_wrap_v ((const ::hb_segment_properties_t*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_script_set (::hb_segment_properties_t* obj, ::hb_script_t _value) { obj->script = (decltype(obj->script)) _value; }
//  segment_properties_t::script (::hb_segment_properties_t* obj, ::hb_script_t _value);
// void segment_properties_t::script (::hb_segment_properties_t* obj, ::hb_script_t _value);
void base::segment_properties_tBase::script_ (HarfBuzz::script_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_segment_properties_t* obj, ::hb_script_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_script_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::hb_segment_properties_t*) (gobj_()), (::hb_script_t) (_value_to_c));
}


} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/segment_properties_t_extra_def_impl.hpp>)
#include <harfbuzz/segment_properties_t_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/segment_properties_t_extra_impl.hpp>)
#include <harfbuzz/segment_properties_t_extra_impl.hpp>
#endif
#endif

#endif
