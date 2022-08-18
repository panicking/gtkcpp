// AUTO-GENERATED

#ifndef _GI_ATK_KEYEVENTSTRUCT_IMPL_HPP_
#define _GI_ATK_KEYEVENTSTRUCT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

static gint _field_type_get (const ::AtkKeyEventStruct* obj) { return (gint) obj->type; }
// gint KeyEventStruct::type (const ::AtkKeyEventStruct* obj);
// gint KeyEventStruct::type (const ::AtkKeyEventStruct* obj);
gint base::KeyEventStructBase::type_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::AtkKeyEventStruct* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::AtkKeyEventStruct*) (gobj_()));
  return _temp_ret;
}

static void _field_type_set (::AtkKeyEventStruct* obj, gint _value) { obj->type = (decltype(obj->type)) _value; }
//  KeyEventStruct::type (::AtkKeyEventStruct* obj, gint _value);
// void KeyEventStruct::type (::AtkKeyEventStruct* obj, gint _value);
void base::KeyEventStructBase::type_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::AtkKeyEventStruct* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = _value;
  call_wrap_v ((::AtkKeyEventStruct*) (gobj_()), (gint) (_value_to_c));
}

static guint _field_state_get (const ::AtkKeyEventStruct* obj) { return (guint) obj->state; }
// guint KeyEventStruct::state (const ::AtkKeyEventStruct* obj);
// guint KeyEventStruct::state (const ::AtkKeyEventStruct* obj);
guint base::KeyEventStructBase::state_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::AtkKeyEventStruct* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_get;
  auto _temp_ret = call_wrap_v ((const ::AtkKeyEventStruct*) (gobj_()));
  return _temp_ret;
}

static void _field_state_set (::AtkKeyEventStruct* obj, guint _value) { obj->state = (decltype(obj->state)) _value; }
//  KeyEventStruct::state (::AtkKeyEventStruct* obj, guint _value);
// void KeyEventStruct::state (::AtkKeyEventStruct* obj, guint _value);
void base::KeyEventStructBase::state_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::AtkKeyEventStruct* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_set;
  auto _value_to_c = _value;
  call_wrap_v ((::AtkKeyEventStruct*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_keyval_get (const ::AtkKeyEventStruct* obj) { return (guint) obj->keyval; }
// guint KeyEventStruct::keyval (const ::AtkKeyEventStruct* obj);
// guint KeyEventStruct::keyval (const ::AtkKeyEventStruct* obj);
guint base::KeyEventStructBase::keyval_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::AtkKeyEventStruct* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_keyval_get;
  auto _temp_ret = call_wrap_v ((const ::AtkKeyEventStruct*) (gobj_()));
  return _temp_ret;
}

static void _field_keyval_set (::AtkKeyEventStruct* obj, guint _value) { obj->keyval = (decltype(obj->keyval)) _value; }
//  KeyEventStruct::keyval (::AtkKeyEventStruct* obj, guint _value);
// void KeyEventStruct::keyval (::AtkKeyEventStruct* obj, guint _value);
void base::KeyEventStructBase::keyval_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::AtkKeyEventStruct* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_keyval_set;
  auto _value_to_c = _value;
  call_wrap_v ((::AtkKeyEventStruct*) (gobj_()), (guint) (_value_to_c));
}

static gint _field_length_get (const ::AtkKeyEventStruct* obj) { return (gint) obj->length; }
// gint KeyEventStruct::length (const ::AtkKeyEventStruct* obj);
// gint KeyEventStruct::length (const ::AtkKeyEventStruct* obj);
gint base::KeyEventStructBase::length_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::AtkKeyEventStruct* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_length_get;
  auto _temp_ret = call_wrap_v ((const ::AtkKeyEventStruct*) (gobj_()));
  return _temp_ret;
}

static void _field_length_set (::AtkKeyEventStruct* obj, gint _value) { obj->length = (decltype(obj->length)) _value; }
//  KeyEventStruct::length (::AtkKeyEventStruct* obj, gint _value);
// void KeyEventStruct::length (::AtkKeyEventStruct* obj, gint _value);
void base::KeyEventStructBase::length_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::AtkKeyEventStruct* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_length_set;
  auto _value_to_c = _value;
  call_wrap_v ((::AtkKeyEventStruct*) (gobj_()), (gint) (_value_to_c));
}

static char* _field_string_get (const ::AtkKeyEventStruct* obj) { return (char*) obj->string; }
// char* KeyEventStruct::string (const ::AtkKeyEventStruct* obj);
// char* KeyEventStruct::string (const ::AtkKeyEventStruct* obj);
std::string base::KeyEventStructBase::string_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::AtkKeyEventStruct* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_string_get;
  auto _temp_ret = call_wrap_v ((const ::AtkKeyEventStruct*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static guint16 _field_keycode_get (const ::AtkKeyEventStruct* obj) { return (guint16) obj->keycode; }
// guint16 KeyEventStruct::keycode (const ::AtkKeyEventStruct* obj);
// guint16 KeyEventStruct::keycode (const ::AtkKeyEventStruct* obj);
guint16 base::KeyEventStructBase::keycode_ () const noexcept
{
  typedef guint16 (*call_wrap_t) (const ::AtkKeyEventStruct* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_keycode_get;
  auto _temp_ret = call_wrap_v ((const ::AtkKeyEventStruct*) (gobj_()));
  return _temp_ret;
}

static void _field_keycode_set (::AtkKeyEventStruct* obj, guint16 _value) { obj->keycode = (decltype(obj->keycode)) _value; }
//  KeyEventStruct::keycode (::AtkKeyEventStruct* obj, guint16 _value);
// void KeyEventStruct::keycode (::AtkKeyEventStruct* obj, guint16 _value);
void base::KeyEventStructBase::keycode_ (guint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::AtkKeyEventStruct* obj, guint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_keycode_set;
  auto _value_to_c = _value;
  call_wrap_v ((::AtkKeyEventStruct*) (gobj_()), (guint16) (_value_to_c));
}

static guint32 _field_timestamp_get (const ::AtkKeyEventStruct* obj) { return (guint32) obj->timestamp; }
// guint32 KeyEventStruct::timestamp (const ::AtkKeyEventStruct* obj);
// guint32 KeyEventStruct::timestamp (const ::AtkKeyEventStruct* obj);
guint32 base::KeyEventStructBase::timestamp_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::AtkKeyEventStruct* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_timestamp_get;
  auto _temp_ret = call_wrap_v ((const ::AtkKeyEventStruct*) (gobj_()));
  return _temp_ret;
}

static void _field_timestamp_set (::AtkKeyEventStruct* obj, guint32 _value) { obj->timestamp = (decltype(obj->timestamp)) _value; }
//  KeyEventStruct::timestamp (::AtkKeyEventStruct* obj, guint32 _value);
// void KeyEventStruct::timestamp (::AtkKeyEventStruct* obj, guint32 _value);
void base::KeyEventStructBase::timestamp_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::AtkKeyEventStruct* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_timestamp_set;
  auto _value_to_c = _value;
  call_wrap_v ((::AtkKeyEventStruct*) (gobj_()), (guint32) (_value_to_c));
}


} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/keyeventstruct_extra_def_impl.hpp>)
#include <atk/keyeventstruct_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/keyeventstruct_extra_impl.hpp>)
#include <atk/keyeventstruct_extra_impl.hpp>
#endif
#endif

#endif
