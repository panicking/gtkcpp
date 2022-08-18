// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_GLYPH_INFO_T_IMPL_HPP_
#define _GI_HARFBUZZ_GLYPH_INFO_T_IMPL_HPP_

namespace gi {

namespace repository {

namespace HarfBuzz {

namespace base {

static ::hb_codepoint_t _field_codepoint_get (const ::hb_glyph_info_t* obj) { return (::hb_codepoint_t) obj->codepoint; }
// ::hb_codepoint_t glyph_info_t::codepoint (const ::hb_glyph_info_t* obj);
// ::hb_codepoint_t glyph_info_t::codepoint (const ::hb_glyph_info_t* obj);
HarfBuzz::codepoint_t base::glyph_info_tBase::codepoint_ () const noexcept
{
  typedef ::hb_codepoint_t (*call_wrap_t) (const ::hb_glyph_info_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_codepoint_get;
  auto _temp_ret = call_wrap_v ((const ::hb_glyph_info_t*) (gobj_()));
  return _temp_ret;
}

static void _field_codepoint_set (::hb_glyph_info_t* obj, ::hb_codepoint_t _value) { obj->codepoint = (decltype(obj->codepoint)) _value; }
//  glyph_info_t::codepoint (::hb_glyph_info_t* obj, ::hb_codepoint_t _value);
// void glyph_info_t::codepoint (::hb_glyph_info_t* obj, ::hb_codepoint_t _value);
void base::glyph_info_tBase::codepoint_ (::hb_codepoint_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_glyph_info_t* obj, ::hb_codepoint_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_codepoint_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_glyph_info_t*) (gobj_()), (::hb_codepoint_t) (_value_to_c));
}

static guint32 _field_cluster_get (const ::hb_glyph_info_t* obj) { return (guint32) obj->cluster; }
// guint32 glyph_info_t::cluster (const ::hb_glyph_info_t* obj);
// guint32 glyph_info_t::cluster (const ::hb_glyph_info_t* obj);
guint32 base::glyph_info_tBase::cluster_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::hb_glyph_info_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_cluster_get;
  auto _temp_ret = call_wrap_v ((const ::hb_glyph_info_t*) (gobj_()));
  return _temp_ret;
}

static void _field_cluster_set (::hb_glyph_info_t* obj, guint32 _value) { obj->cluster = (decltype(obj->cluster)) _value; }
//  glyph_info_t::cluster (::hb_glyph_info_t* obj, guint32 _value);
// void glyph_info_t::cluster (::hb_glyph_info_t* obj, guint32 _value);
void base::glyph_info_tBase::cluster_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_glyph_info_t* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_cluster_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_glyph_info_t*) (gobj_()), (guint32) (_value_to_c));
}


} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/glyph_info_t_extra_def_impl.hpp>)
#include <harfbuzz/glyph_info_t_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/glyph_info_t_extra_impl.hpp>)
#include <harfbuzz/glyph_info_t_extra_impl.hpp>
#endif
#endif

#endif
