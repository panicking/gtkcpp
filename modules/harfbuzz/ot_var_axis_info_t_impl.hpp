// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_OT_VAR_AXIS_INFO_T_IMPL_HPP_
#define _GI_HARFBUZZ_OT_VAR_AXIS_INFO_T_IMPL_HPP_

namespace gi {

namespace repository {

namespace HarfBuzz {

namespace base {

static guint _field_axis_index_get (const ::hb_ot_var_axis_info_t* obj) { return (guint) obj->axis_index; }
// guint ot_var_axis_info_t::axis_index (const ::hb_ot_var_axis_info_t* obj);
// guint ot_var_axis_info_t::axis_index (const ::hb_ot_var_axis_info_t* obj);
guint base::ot_var_axis_info_tBase::axis_index_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::hb_ot_var_axis_info_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_axis_index_get;
  auto _temp_ret = call_wrap_v ((const ::hb_ot_var_axis_info_t*) (gobj_()));
  return _temp_ret;
}

static void _field_axis_index_set (::hb_ot_var_axis_info_t* obj, guint _value) { obj->axis_index = (decltype(obj->axis_index)) _value; }
//  ot_var_axis_info_t::axis_index (::hb_ot_var_axis_info_t* obj, guint _value);
// void ot_var_axis_info_t::axis_index (::hb_ot_var_axis_info_t* obj, guint _value);
void base::ot_var_axis_info_tBase::axis_index_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_ot_var_axis_info_t* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_axis_index_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_ot_var_axis_info_t*) (gobj_()), (guint) (_value_to_c));
}

static ::hb_tag_t _field_tag_get (const ::hb_ot_var_axis_info_t* obj) { return (::hb_tag_t) obj->tag; }
// ::hb_tag_t ot_var_axis_info_t::tag (const ::hb_ot_var_axis_info_t* obj);
// ::hb_tag_t ot_var_axis_info_t::tag (const ::hb_ot_var_axis_info_t* obj);
HarfBuzz::tag_t base::ot_var_axis_info_tBase::tag_ () const noexcept
{
  typedef ::hb_tag_t (*call_wrap_t) (const ::hb_ot_var_axis_info_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_tag_get;
  auto _temp_ret = call_wrap_v ((const ::hb_ot_var_axis_info_t*) (gobj_()));
  return _temp_ret;
}

static void _field_tag_set (::hb_ot_var_axis_info_t* obj, ::hb_tag_t _value) { obj->tag = (decltype(obj->tag)) _value; }
//  ot_var_axis_info_t::tag (::hb_ot_var_axis_info_t* obj, ::hb_tag_t _value);
// void ot_var_axis_info_t::tag (::hb_ot_var_axis_info_t* obj, ::hb_tag_t _value);
void base::ot_var_axis_info_tBase::tag_ (::hb_tag_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_ot_var_axis_info_t* obj, ::hb_tag_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_tag_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_ot_var_axis_info_t*) (gobj_()), (::hb_tag_t) (_value_to_c));
}

static ::hb_ot_name_id_t _field_name_id_get (const ::hb_ot_var_axis_info_t* obj) { return (::hb_ot_name_id_t) obj->name_id; }
// ::hb_ot_name_id_t ot_var_axis_info_t::name_id (const ::hb_ot_var_axis_info_t* obj);
// ::hb_ot_name_id_t ot_var_axis_info_t::name_id (const ::hb_ot_var_axis_info_t* obj);
HarfBuzz::ot_name_id_t base::ot_var_axis_info_tBase::name_id_ () const noexcept
{
  typedef ::hb_ot_name_id_t (*call_wrap_t) (const ::hb_ot_var_axis_info_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_name_id_get;
  auto _temp_ret = call_wrap_v ((const ::hb_ot_var_axis_info_t*) (gobj_()));
  return _temp_ret;
}

static void _field_name_id_set (::hb_ot_var_axis_info_t* obj, ::hb_ot_name_id_t _value) { obj->name_id = (decltype(obj->name_id)) _value; }
//  ot_var_axis_info_t::name_id (::hb_ot_var_axis_info_t* obj, ::hb_ot_name_id_t _value);
// void ot_var_axis_info_t::name_id (::hb_ot_var_axis_info_t* obj, ::hb_ot_name_id_t _value);
void base::ot_var_axis_info_tBase::name_id_ (::hb_ot_name_id_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_ot_var_axis_info_t* obj, ::hb_ot_name_id_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_name_id_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_ot_var_axis_info_t*) (gobj_()), (::hb_ot_name_id_t) (_value_to_c));
}

static ::hb_ot_var_axis_flags_t _field_flags_get (const ::hb_ot_var_axis_info_t* obj) { return (::hb_ot_var_axis_flags_t) obj->flags; }
// ::hb_ot_var_axis_flags_t ot_var_axis_info_t::flags (const ::hb_ot_var_axis_info_t* obj);
// ::hb_ot_var_axis_flags_t ot_var_axis_info_t::flags (const ::hb_ot_var_axis_info_t* obj);
HarfBuzz::ot_var_axis_flags_t base::ot_var_axis_info_tBase::flags_ () const noexcept
{
  typedef ::hb_ot_var_axis_flags_t (*call_wrap_t) (const ::hb_ot_var_axis_info_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_get;
  auto _temp_ret = call_wrap_v ((const ::hb_ot_var_axis_info_t*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_flags_set (::hb_ot_var_axis_info_t* obj, ::hb_ot_var_axis_flags_t _value) { obj->flags = (decltype(obj->flags)) _value; }
//  ot_var_axis_info_t::flags (::hb_ot_var_axis_info_t* obj, ::hb_ot_var_axis_flags_t _value);
// void ot_var_axis_info_t::flags (::hb_ot_var_axis_info_t* obj, ::hb_ot_var_axis_flags_t _value);
void base::ot_var_axis_info_tBase::flags_ (HarfBuzz::ot_var_axis_flags_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_ot_var_axis_info_t* obj, ::hb_ot_var_axis_flags_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::hb_ot_var_axis_info_t*) (gobj_()), (::hb_ot_var_axis_flags_t) (_value_to_c));
}

static gfloat _field_min_value_get (const ::hb_ot_var_axis_info_t* obj) { return (gfloat) obj->min_value; }
// gfloat ot_var_axis_info_t::min_value (const ::hb_ot_var_axis_info_t* obj);
// gfloat ot_var_axis_info_t::min_value (const ::hb_ot_var_axis_info_t* obj);
gfloat base::ot_var_axis_info_tBase::min_value_ () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::hb_ot_var_axis_info_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_min_value_get;
  auto _temp_ret = call_wrap_v ((const ::hb_ot_var_axis_info_t*) (gobj_()));
  return _temp_ret;
}

static void _field_min_value_set (::hb_ot_var_axis_info_t* obj, gfloat _value) { obj->min_value = (decltype(obj->min_value)) _value; }
//  ot_var_axis_info_t::min_value (::hb_ot_var_axis_info_t* obj, gfloat _value);
// void ot_var_axis_info_t::min_value (::hb_ot_var_axis_info_t* obj, gfloat _value);
void base::ot_var_axis_info_tBase::min_value_ (gfloat _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_ot_var_axis_info_t* obj, gfloat _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_min_value_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_ot_var_axis_info_t*) (gobj_()), (gfloat) (_value_to_c));
}

static gfloat _field_default_value_get (const ::hb_ot_var_axis_info_t* obj) { return (gfloat) obj->default_value; }
// gfloat ot_var_axis_info_t::default_value (const ::hb_ot_var_axis_info_t* obj);
// gfloat ot_var_axis_info_t::default_value (const ::hb_ot_var_axis_info_t* obj);
gfloat base::ot_var_axis_info_tBase::default_value_ () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::hb_ot_var_axis_info_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_default_value_get;
  auto _temp_ret = call_wrap_v ((const ::hb_ot_var_axis_info_t*) (gobj_()));
  return _temp_ret;
}

static void _field_default_value_set (::hb_ot_var_axis_info_t* obj, gfloat _value) { obj->default_value = (decltype(obj->default_value)) _value; }
//  ot_var_axis_info_t::default_value (::hb_ot_var_axis_info_t* obj, gfloat _value);
// void ot_var_axis_info_t::default_value (::hb_ot_var_axis_info_t* obj, gfloat _value);
void base::ot_var_axis_info_tBase::default_value_ (gfloat _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_ot_var_axis_info_t* obj, gfloat _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_default_value_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_ot_var_axis_info_t*) (gobj_()), (gfloat) (_value_to_c));
}

static gfloat _field_max_value_get (const ::hb_ot_var_axis_info_t* obj) { return (gfloat) obj->max_value; }
// gfloat ot_var_axis_info_t::max_value (const ::hb_ot_var_axis_info_t* obj);
// gfloat ot_var_axis_info_t::max_value (const ::hb_ot_var_axis_info_t* obj);
gfloat base::ot_var_axis_info_tBase::max_value_ () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::hb_ot_var_axis_info_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_max_value_get;
  auto _temp_ret = call_wrap_v ((const ::hb_ot_var_axis_info_t*) (gobj_()));
  return _temp_ret;
}

static void _field_max_value_set (::hb_ot_var_axis_info_t* obj, gfloat _value) { obj->max_value = (decltype(obj->max_value)) _value; }
//  ot_var_axis_info_t::max_value (::hb_ot_var_axis_info_t* obj, gfloat _value);
// void ot_var_axis_info_t::max_value (::hb_ot_var_axis_info_t* obj, gfloat _value);
void base::ot_var_axis_info_tBase::max_value_ (gfloat _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_ot_var_axis_info_t* obj, gfloat _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_max_value_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_ot_var_axis_info_t*) (gobj_()), (gfloat) (_value_to_c));
}


} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/ot_var_axis_info_t_extra_def_impl.hpp>)
#include <harfbuzz/ot_var_axis_info_t_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/ot_var_axis_info_t_extra_impl.hpp>)
#include <harfbuzz/ot_var_axis_info_t_extra_impl.hpp>
#endif
#endif

#endif
