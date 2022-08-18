// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_OT_NAME_ENTRY_T_IMPL_HPP_
#define _GI_HARFBUZZ_OT_NAME_ENTRY_T_IMPL_HPP_

namespace gi {

namespace repository {

namespace HarfBuzz {

namespace base {

static ::hb_ot_name_id_t _field_name_id_get (const ::hb_ot_name_entry_t* obj) { return (::hb_ot_name_id_t) obj->name_id; }
// ::hb_ot_name_id_t ot_name_entry_t::name_id (const ::hb_ot_name_entry_t* obj);
// ::hb_ot_name_id_t ot_name_entry_t::name_id (const ::hb_ot_name_entry_t* obj);
HarfBuzz::ot_name_id_t base::ot_name_entry_tBase::name_id_ () const noexcept
{
  typedef ::hb_ot_name_id_t (*call_wrap_t) (const ::hb_ot_name_entry_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_name_id_get;
  auto _temp_ret = call_wrap_v ((const ::hb_ot_name_entry_t*) (gobj_()));
  return _temp_ret;
}

static void _field_name_id_set (::hb_ot_name_entry_t* obj, ::hb_ot_name_id_t _value) { obj->name_id = (decltype(obj->name_id)) _value; }
//  ot_name_entry_t::name_id (::hb_ot_name_entry_t* obj, ::hb_ot_name_id_t _value);
// void ot_name_entry_t::name_id (::hb_ot_name_entry_t* obj, ::hb_ot_name_id_t _value);
void base::ot_name_entry_tBase::name_id_ (::hb_ot_name_id_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_ot_name_entry_t* obj, ::hb_ot_name_id_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_name_id_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_ot_name_entry_t*) (gobj_()), (::hb_ot_name_id_t) (_value_to_c));
}


} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/ot_name_entry_t_extra_def_impl.hpp>)
#include <harfbuzz/ot_name_entry_t_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/ot_name_entry_t_extra_impl.hpp>)
#include <harfbuzz/ot_name_entry_t_extra_impl.hpp>
#endif
#endif

#endif
