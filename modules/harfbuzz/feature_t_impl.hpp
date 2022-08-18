// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_FEATURE_T_IMPL_HPP_
#define _GI_HARFBUZZ_FEATURE_T_IMPL_HPP_

namespace gi {

namespace repository {

namespace HarfBuzz {

namespace base {

static ::hb_tag_t _field_tag_get (const ::hb_feature_t* obj) { return (::hb_tag_t) obj->tag; }
// ::hb_tag_t feature_t::tag (const ::hb_feature_t* obj);
// ::hb_tag_t feature_t::tag (const ::hb_feature_t* obj);
HarfBuzz::tag_t base::feature_tBase::tag_ () const noexcept
{
  typedef ::hb_tag_t (*call_wrap_t) (const ::hb_feature_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_tag_get;
  auto _temp_ret = call_wrap_v ((const ::hb_feature_t*) (gobj_()));
  return _temp_ret;
}

static void _field_tag_set (::hb_feature_t* obj, ::hb_tag_t _value) { obj->tag = (decltype(obj->tag)) _value; }
//  feature_t::tag (::hb_feature_t* obj, ::hb_tag_t _value);
// void feature_t::tag (::hb_feature_t* obj, ::hb_tag_t _value);
void base::feature_tBase::tag_ (::hb_tag_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_feature_t* obj, ::hb_tag_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_tag_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_feature_t*) (gobj_()), (::hb_tag_t) (_value_to_c));
}

static guint32 _field_value_get (const ::hb_feature_t* obj) { return (guint32) obj->value; }
// guint32 feature_t::value (const ::hb_feature_t* obj);
// guint32 feature_t::value (const ::hb_feature_t* obj);
guint32 base::feature_tBase::value_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::hb_feature_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_get;
  auto _temp_ret = call_wrap_v ((const ::hb_feature_t*) (gobj_()));
  return _temp_ret;
}

static void _field_value_set (::hb_feature_t* obj, guint32 _value) { obj->value = (decltype(obj->value)) _value; }
//  feature_t::value (::hb_feature_t* obj, guint32 _value);
// void feature_t::value (::hb_feature_t* obj, guint32 _value);
void base::feature_tBase::value_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_feature_t* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_feature_t*) (gobj_()), (guint32) (_value_to_c));
}

static guint _field_start_get (const ::hb_feature_t* obj) { return (guint) obj->start; }
// guint feature_t::start (const ::hb_feature_t* obj);
// guint feature_t::start (const ::hb_feature_t* obj);
guint base::feature_tBase::start_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::hb_feature_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_get;
  auto _temp_ret = call_wrap_v ((const ::hb_feature_t*) (gobj_()));
  return _temp_ret;
}

static void _field_start_set (::hb_feature_t* obj, guint _value) { obj->start = (decltype(obj->start)) _value; }
//  feature_t::start (::hb_feature_t* obj, guint _value);
// void feature_t::start (::hb_feature_t* obj, guint _value);
void base::feature_tBase::start_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_feature_t* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_feature_t*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_end_get (const ::hb_feature_t* obj) { return (guint) obj->end; }
// guint feature_t::end (const ::hb_feature_t* obj);
// guint feature_t::end (const ::hb_feature_t* obj);
guint base::feature_tBase::end_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::hb_feature_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_end_get;
  auto _temp_ret = call_wrap_v ((const ::hb_feature_t*) (gobj_()));
  return _temp_ret;
}

static void _field_end_set (::hb_feature_t* obj, guint _value) { obj->end = (decltype(obj->end)) _value; }
//  feature_t::end (::hb_feature_t* obj, guint _value);
// void feature_t::end (::hb_feature_t* obj, guint _value);
void base::feature_tBase::end_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_feature_t* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_end_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_feature_t*) (gobj_()), (guint) (_value_to_c));
}

// void hb_feature_to_string (hb_feature_t* feature, char* buf, unsigned int size);
// void hb_feature_to_string (::hb_feature_t* feature, char*** buf, guint size);
// SKIP; inconsistent out buf pointer depth (1 vs 3)


} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/feature_t_extra_def_impl.hpp>)
#include <harfbuzz/feature_t_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/feature_t_extra_impl.hpp>)
#include <harfbuzz/feature_t_extra_impl.hpp>
#endif
#endif

#endif
