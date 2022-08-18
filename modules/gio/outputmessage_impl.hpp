// AUTO-GENERATED

#ifndef _GI_GIO_OUTPUTMESSAGE_IMPL_HPP_
#define _GI_GIO_OUTPUTMESSAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

static ::GSocketAddress* _field_address_get (const ::GOutputMessage* obj) { return (::GSocketAddress*) obj->address; }
// ::GSocketAddress* OutputMessage::address (const ::GOutputMessage* obj);
// ::GSocketAddress* OutputMessage::address (const ::GOutputMessage* obj);
Gio::SocketAddress base::OutputMessageBase::address_ () const noexcept
{
  typedef ::GSocketAddress* (*call_wrap_t) (const ::GOutputMessage* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_address_get;
  auto _temp_ret = call_wrap_v ((const ::GOutputMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GOutputVector* _field_vectors_get (const ::GOutputMessage* obj) { return (::GOutputVector*) obj->vectors; }
// ::GOutputVector* OutputMessage::vectors (const ::GOutputMessage* obj);
// ::GOutputVector* OutputMessage::vectors (const ::GOutputMessage* obj);
Gio::OutputVector base::OutputMessageBase::vectors_ () const noexcept
{
  typedef ::GOutputVector* (*call_wrap_t) (const ::GOutputMessage* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_vectors_get;
  auto _temp_ret = call_wrap_v ((const ::GOutputMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static guint _field_num_vectors_get (const ::GOutputMessage* obj) { return (guint) obj->num_vectors; }
// guint OutputMessage::num_vectors (const ::GOutputMessage* obj);
// guint OutputMessage::num_vectors (const ::GOutputMessage* obj);
guint base::OutputMessageBase::num_vectors_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GOutputMessage* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_num_vectors_get;
  auto _temp_ret = call_wrap_v ((const ::GOutputMessage*) (gobj_()));
  return _temp_ret;
}

static void _field_num_vectors_set (::GOutputMessage* obj, guint _value) { obj->num_vectors = (decltype(obj->num_vectors)) _value; }
//  OutputMessage::num_vectors (::GOutputMessage* obj, guint _value);
// void OutputMessage::num_vectors (::GOutputMessage* obj, guint _value);
void base::OutputMessageBase::num_vectors_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GOutputMessage* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_num_vectors_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GOutputMessage*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_bytes_sent_get (const ::GOutputMessage* obj) { return (guint) obj->bytes_sent; }
// guint OutputMessage::bytes_sent (const ::GOutputMessage* obj);
// guint OutputMessage::bytes_sent (const ::GOutputMessage* obj);
guint base::OutputMessageBase::bytes_sent_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GOutputMessage* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_bytes_sent_get;
  auto _temp_ret = call_wrap_v ((const ::GOutputMessage*) (gobj_()));
  return _temp_ret;
}

static void _field_bytes_sent_set (::GOutputMessage* obj, guint _value) { obj->bytes_sent = (decltype(obj->bytes_sent)) _value; }
//  OutputMessage::bytes_sent (::GOutputMessage* obj, guint _value);
// void OutputMessage::bytes_sent (::GOutputMessage* obj, guint _value);
void base::OutputMessageBase::bytes_sent_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GOutputMessage* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_bytes_sent_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GOutputMessage*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_num_control_messages_get (const ::GOutputMessage* obj) { return (guint) obj->num_control_messages; }
// guint OutputMessage::num_control_messages (const ::GOutputMessage* obj);
// guint OutputMessage::num_control_messages (const ::GOutputMessage* obj);
guint base::OutputMessageBase::num_control_messages_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GOutputMessage* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_num_control_messages_get;
  auto _temp_ret = call_wrap_v ((const ::GOutputMessage*) (gobj_()));
  return _temp_ret;
}

static void _field_num_control_messages_set (::GOutputMessage* obj, guint _value) { obj->num_control_messages = (decltype(obj->num_control_messages)) _value; }
//  OutputMessage::num_control_messages (::GOutputMessage* obj, guint _value);
// void OutputMessage::num_control_messages (::GOutputMessage* obj, guint _value);
void base::OutputMessageBase::num_control_messages_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GOutputMessage* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_num_control_messages_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GOutputMessage*) (gobj_()), (guint) (_value_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/outputmessage_extra_def_impl.hpp>)
#include <gio/outputmessage_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/outputmessage_extra_impl.hpp>)
#include <gio/outputmessage_extra_impl.hpp>
#endif
#endif

#endif
