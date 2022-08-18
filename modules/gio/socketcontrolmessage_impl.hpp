// AUTO-GENERATED

#ifndef _GI_GIO_SOCKETCONTROLMESSAGE_IMPL_HPP_
#define _GI_GIO_SOCKETCONTROLMESSAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSocketControlMessage* g_socket_control_message_deserialize (int level, int type, gsize size, gpointer data);
// ::GSocketControlMessage* g_socket_control_message_deserialize (gint level, gint type, gsize size, guint8* data);
Gio::SocketControlMessage base::SocketControlMessageBase::deserialize (gint level, gint type, gsize size, guint8 * data) noexcept
{
  typedef ::GSocketControlMessage* (*call_wrap_t) (gint level, gint type, gsize size, guint8* data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_control_message_deserialize;
  auto data_i = detail::make_list_unwrap_range (data, size, false);
  auto data_w = unwrap (data_i, gi::transfer_none, direction_in);
  auto data_to_c = data_w.gobj_(false);
  auto type_to_c = type;
  auto level_to_c = level;
  auto _temp_ret = call_wrap_v ((gint) (level_to_c), (gint) (type_to_c), (gsize) (data_w.size()), (guint8*) (data_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// int g_socket_control_message_get_level (GSocketControlMessage* message);
// gint g_socket_control_message_get_level (::GSocketControlMessage* message);
gint base::SocketControlMessageBase::get_level () noexcept
{
  typedef gint (*call_wrap_t) (::GSocketControlMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_control_message_get_level;
  auto _temp_ret = call_wrap_v ((::GSocketControlMessage*) (gobj_()));
  return _temp_ret;
}

// int g_socket_control_message_get_msg_type (GSocketControlMessage* message);
// gint g_socket_control_message_get_msg_type (::GSocketControlMessage* message);
gint base::SocketControlMessageBase::get_msg_type () noexcept
{
  typedef gint (*call_wrap_t) (::GSocketControlMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_control_message_get_msg_type;
  auto _temp_ret = call_wrap_v ((::GSocketControlMessage*) (gobj_()));
  return _temp_ret;
}

// gsize g_socket_control_message_get_size (GSocketControlMessage* message);
// gsize g_socket_control_message_get_size (::GSocketControlMessage* message);
gsize base::SocketControlMessageBase::get_size () noexcept
{
  typedef gsize (*call_wrap_t) (::GSocketControlMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_control_message_get_size;
  auto _temp_ret = call_wrap_v ((::GSocketControlMessage*) (gobj_()));
  return _temp_ret;
}

// void g_socket_control_message_serialize (GSocketControlMessage* message, gpointer data);
// void g_socket_control_message_serialize (::GSocketControlMessage* message, void* data);
void base::SocketControlMessageBase::serialize (void* data) noexcept
{
  typedef void (*call_wrap_t) (::GSocketControlMessage* message, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_control_message_serialize;
  auto data_to_c = data;
  call_wrap_v ((::GSocketControlMessage*) (gobj_()), (void*) (data_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/socketcontrolmessage_extra_def_impl.hpp>)
#include <gio/socketcontrolmessage_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/socketcontrolmessage_extra_impl.hpp>)
#include <gio/socketcontrolmessage_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void SocketControlMessageClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GSocketControlMessageClass *methods = (::GSocketControlMessageClass *) class_struct;
  (void) methods;

  methods->get_level = (decltype (methods->get_level)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_level_>;
  methods->get_size = (decltype (methods->get_size)) detail::method_wrapper<self, gsize (*) (), gi::transfer_none_t>::wrapper<&self::get_size_>;
  methods->get_type = (decltype (methods->get_type)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_type_>;
  methods->serialize = (decltype (methods->serialize)) detail::method_wrapper<self, void (*) (void* data), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::serialize_>;
}

// int SocketControlMessage::get_level (GSocketControlMessage* message);
// gint SocketControlMessage::get_level (::GSocketControlMessage* message);
gint SocketControlMessageClass::get_level_ () noexcept
{
  if (!get_struct_()->get_level) return gint{};
  typedef gint (*call_wrap_t) (::GSocketControlMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_level;
  auto _temp_ret = call_wrap_v ((::GSocketControlMessage*) (gobj_()));
  return _temp_ret;
}

// gsize SocketControlMessage::get_size (GSocketControlMessage* message);
// gsize SocketControlMessage::get_size (::GSocketControlMessage* message);
gsize SocketControlMessageClass::get_size_ () noexcept
{
  if (!get_struct_()->get_size) return gsize{};
  typedef gsize (*call_wrap_t) (::GSocketControlMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_size;
  auto _temp_ret = call_wrap_v ((::GSocketControlMessage*) (gobj_()));
  return _temp_ret;
}

// int SocketControlMessage::get_type (GSocketControlMessage* message);
// gint SocketControlMessage::get_type (::GSocketControlMessage* message);
gint SocketControlMessageClass::get_type_ () noexcept
{
  if (!get_struct_()->get_type) return gint{};
  typedef gint (*call_wrap_t) (::GSocketControlMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_type;
  auto _temp_ret = call_wrap_v ((::GSocketControlMessage*) (gobj_()));
  return _temp_ret;
}

// void SocketControlMessage::serialize (GSocketControlMessage* message, gpointer data);
// void SocketControlMessage::serialize (::GSocketControlMessage* message, void* data);
void SocketControlMessageClass::serialize_ (void* data) noexcept
{
  if (!get_struct_()->serialize) return ;
  typedef void (*call_wrap_t) (::GSocketControlMessage* message, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->serialize;
  auto data_to_c = data;
  call_wrap_v ((::GSocketControlMessage*) (gobj_()), (void*) (data_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
