// AUTO-GENERATED

#ifndef _GI_GIO_UNIXFDMESSAGE_IMPL_HPP_
#define _GI_GIO_UNIXFDMESSAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSocketControlMessage* g_unix_fd_message_new ();
// ::GUnixFDMessage* g_unix_fd_message_new ();
Gio::UnixFDMessage base::UnixFDMessageBase::new_ () noexcept
{
  typedef ::GUnixFDMessage* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_fd_message_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSocketControlMessage* g_unix_fd_message_new_with_fd_list (GUnixFDList* fd_list);
// ::GUnixFDMessage* g_unix_fd_message_new_with_fd_list (::GUnixFDList* fd_list);
Gio::UnixFDMessage base::UnixFDMessageBase::new_with_fd_list (Gio::UnixFDList fd_list) noexcept
{
  typedef ::GUnixFDMessage* (*call_wrap_t) (::GUnixFDList* fd_list);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_fd_message_new_with_fd_list;
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GUnixFDList*) (fd_list_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_unix_fd_message_append_fd (GUnixFDMessage* message, gint fd, GError ** error);
// gboolean g_unix_fd_message_append_fd (::GUnixFDMessage* message, gint fd, GError ** error);
bool base::UnixFDMessageBase::append_fd (gint fd)
{
  typedef gboolean (*call_wrap_t) (::GUnixFDMessage* message, gint fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_fd_message_append_fd;
  auto fd_to_c = fd;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GUnixFDMessage*) (gobj_()), (gint) (fd_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::UnixFDMessageBase::append_fd (gint fd, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixFDMessage* message, gint fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_fd_message_append_fd;
  auto fd_to_c = fd;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GUnixFDMessage*) (gobj_()), (gint) (fd_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// GUnixFDList* g_unix_fd_message_get_fd_list (GUnixFDMessage* message);
// ::GUnixFDList* g_unix_fd_message_get_fd_list (::GUnixFDMessage* message);
Gio::UnixFDList base::UnixFDMessageBase::get_fd_list () noexcept
{
  typedef ::GUnixFDList* (*call_wrap_t) (::GUnixFDMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_fd_message_get_fd_list;
  auto _temp_ret = call_wrap_v ((::GUnixFDMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint* g_unix_fd_message_steal_fds (GUnixFDMessage* message, gint* length);
// gint* g_unix_fd_message_steal_fds (::GUnixFDMessage* message, gint* length);
std::vector<gint> base::UnixFDMessageBase::steal_fds () noexcept
{
  typedef gint* (*call_wrap_t) (::GUnixFDMessage* message, gint* length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_fd_message_steal_fds;
  gint length;
  std::vector<gint> _temp_ret;
  auto _ret_o = call_wrap_v ((::GUnixFDMessage*) (gobj_()), (gint*) (&length));
  _temp_ret.resize(length);
  detail::wrap_array (_ret_o, gi::transfer_full, length, _temp_ret.data());
  g_free (_ret_o);
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/unixfdmessage_extra_def_impl.hpp>)
#include <gio/unixfdmessage_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/unixfdmessage_extra_impl.hpp>)
#include <gio/unixfdmessage_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void UnixFDMessageClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GUnixFDMessageClass *methods = (::GUnixFDMessageClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
