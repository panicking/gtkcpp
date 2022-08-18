// AUTO-GENERATED

#ifndef _GI_GIO_INPUTMESSAGE_IMPL_HPP_
#define _GI_GIO_INPUTMESSAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

static guint _field_num_vectors_get (const ::GInputMessage* obj) { return (guint) obj->num_vectors; }
// guint InputMessage::num_vectors (const ::GInputMessage* obj);
// guint InputMessage::num_vectors (const ::GInputMessage* obj);
guint base::InputMessageBase::num_vectors_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GInputMessage* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_num_vectors_get;
  auto _temp_ret = call_wrap_v ((const ::GInputMessage*) (gobj_()));
  return _temp_ret;
}

static void _field_num_vectors_set (::GInputMessage* obj, guint _value) { obj->num_vectors = (decltype(obj->num_vectors)) _value; }
//  InputMessage::num_vectors (::GInputMessage* obj, guint _value);
// void InputMessage::num_vectors (::GInputMessage* obj, guint _value);
void base::InputMessageBase::num_vectors_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GInputMessage* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_num_vectors_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GInputMessage*) (gobj_()), (guint) (_value_to_c));
}

static gsize _field_bytes_received_get (const ::GInputMessage* obj) { return (gsize) obj->bytes_received; }
// gsize InputMessage::bytes_received (const ::GInputMessage* obj);
// gsize InputMessage::bytes_received (const ::GInputMessage* obj);
gsize base::InputMessageBase::bytes_received_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GInputMessage* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_bytes_received_get;
  auto _temp_ret = call_wrap_v ((const ::GInputMessage*) (gobj_()));
  return _temp_ret;
}

static void _field_bytes_received_set (::GInputMessage* obj, gsize _value) { obj->bytes_received = (decltype(obj->bytes_received)) _value; }
//  InputMessage::bytes_received (::GInputMessage* obj, gsize _value);
// void InputMessage::bytes_received (::GInputMessage* obj, gsize _value);
void base::InputMessageBase::bytes_received_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::GInputMessage* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_bytes_received_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GInputMessage*) (gobj_()), (gsize) (_value_to_c));
}

static gint _field_flags_get (const ::GInputMessage* obj) { return (gint) obj->flags; }
// gint InputMessage::flags (const ::GInputMessage* obj);
// gint InputMessage::flags (const ::GInputMessage* obj);
gint base::InputMessageBase::flags_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GInputMessage* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_get;
  auto _temp_ret = call_wrap_v ((const ::GInputMessage*) (gobj_()));
  return _temp_ret;
}

static void _field_flags_set (::GInputMessage* obj, gint _value) { obj->flags = (decltype(obj->flags)) _value; }
//  InputMessage::flags (::GInputMessage* obj, gint _value);
// void InputMessage::flags (::GInputMessage* obj, gint _value);
void base::InputMessageBase::flags_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GInputMessage* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GInputMessage*) (gobj_()), (gint) (_value_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/inputmessage_extra_def_impl.hpp>)
#include <gio/inputmessage_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/inputmessage_extra_impl.hpp>)
#include <gio/inputmessage_extra_impl.hpp>
#endif
#endif

#endif
