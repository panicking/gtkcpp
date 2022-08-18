// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_VARIATION_T_IMPL_HPP_
#define _GI_HARFBUZZ_VARIATION_T_IMPL_HPP_

namespace gi {

namespace repository {

namespace HarfBuzz {

namespace base {

static ::hb_tag_t _field_tag_get (const ::hb_variation_t* obj) { return (::hb_tag_t) obj->tag; }
// ::hb_tag_t variation_t::tag (const ::hb_variation_t* obj);
// ::hb_tag_t variation_t::tag (const ::hb_variation_t* obj);
HarfBuzz::tag_t base::variation_tBase::tag_ () const noexcept
{
  typedef ::hb_tag_t (*call_wrap_t) (const ::hb_variation_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_tag_get;
  auto _temp_ret = call_wrap_v ((const ::hb_variation_t*) (gobj_()));
  return _temp_ret;
}

static void _field_tag_set (::hb_variation_t* obj, ::hb_tag_t _value) { obj->tag = (decltype(obj->tag)) _value; }
//  variation_t::tag (::hb_variation_t* obj, ::hb_tag_t _value);
// void variation_t::tag (::hb_variation_t* obj, ::hb_tag_t _value);
void base::variation_tBase::tag_ (::hb_tag_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_variation_t* obj, ::hb_tag_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_tag_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_variation_t*) (gobj_()), (::hb_tag_t) (_value_to_c));
}

static gfloat _field_value_get (const ::hb_variation_t* obj) { return (gfloat) obj->value; }
// gfloat variation_t::value (const ::hb_variation_t* obj);
// gfloat variation_t::value (const ::hb_variation_t* obj);
gfloat base::variation_tBase::value_ () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::hb_variation_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_get;
  auto _temp_ret = call_wrap_v ((const ::hb_variation_t*) (gobj_()));
  return _temp_ret;
}

static void _field_value_set (::hb_variation_t* obj, gfloat _value) { obj->value = (decltype(obj->value)) _value; }
//  variation_t::value (::hb_variation_t* obj, gfloat _value);
// void variation_t::value (::hb_variation_t* obj, gfloat _value);
void base::variation_tBase::value_ (gfloat _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_variation_t* obj, gfloat _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_variation_t*) (gobj_()), (gfloat) (_value_to_c));
}

// void hb_variation_to_string (hb_variation_t* variation, char* buf, unsigned int size);
// void hb_variation_to_string (::hb_variation_t* variation, char* buf, guint size);
void base::variation_tBase::_string (const std::string & buf, guint size) noexcept
{
  typedef void (*call_wrap_t) (::hb_variation_t* variation, char* buf, guint size);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_variation_to_string;
  auto size_to_c = size;
  auto buf_to_c = gi::unwrap (buf, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_variation_t*) (gobj_()), (char*) (buf_to_c), (guint) (size_to_c));
}


} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/variation_t_extra_def_impl.hpp>)
#include <harfbuzz/variation_t_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/variation_t_extra_impl.hpp>)
#include <harfbuzz/variation_t_extra_impl.hpp>
#endif
#endif

#endif
