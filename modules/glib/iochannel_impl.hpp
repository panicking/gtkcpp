// AUTO-GENERATED

#ifndef _GI_GLIB_IOCHANNEL_IMPL_HPP_
#define _GI_GLIB_IOCHANNEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GIOChannel* g_io_channel_new_file (const gchar* filename, const gchar* mode, GError ** error);
// ::GIOChannel* g_io_channel_new_file (const char* filename, const char* mode, GError ** error);
GLib::IOChannel base::IOChannelBase::new_file (const std::string & filename, const std::string & mode)
{
  typedef ::GIOChannel* (*call_wrap_t) (const char* filename, const char* mode, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_new_file;
  auto mode_to_c = gi::unwrap (mode, gi::transfer_none, gi::direction_in);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const char*) (mode_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::IOChannel base::IOChannelBase::new_file (const std::string & filename, const std::string & mode, GLib::Error * _error) noexcept
{
  typedef ::GIOChannel* (*call_wrap_t) (const char* filename, const char* mode, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_new_file;
  auto mode_to_c = gi::unwrap (mode, gi::transfer_none, gi::direction_in);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const char*) (mode_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GIOChannel* g_io_channel_unix_new (int fd);
// ::GIOChannel* g_io_channel_unix_new (gint fd);
GLib::IOChannel base::IOChannelBase::unix_new (gint fd) noexcept
{
  typedef ::GIOChannel* (*call_wrap_t) (gint fd);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_unix_new;
  auto fd_to_c = fd;
  auto _temp_ret = call_wrap_v ((gint) (fd_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_io_channel_close (GIOChannel* channel);
// void g_io_channel_close (::GIOChannel* channel);
// IGNORE; deprecated

// GIOStatus g_io_channel_flush (GIOChannel* channel, GError ** error);
// ::GIOStatus g_io_channel_flush (::GIOChannel* channel, GError ** error);
GLib::IOStatus base::IOChannelBase::flush ()
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_flush;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
GLib::IOStatus base::IOChannelBase::flush (GLib::Error * _error) noexcept
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_flush;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}

// GIOCondition g_io_channel_get_buffer_condition (GIOChannel* channel);
// ::GIOCondition g_io_channel_get_buffer_condition (::GIOChannel* channel);
GLib::IOCondition base::IOChannelBase::get_buffer_condition () noexcept
{
  typedef ::GIOCondition (*call_wrap_t) (::GIOChannel* channel);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_get_buffer_condition;
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gsize g_io_channel_get_buffer_size (GIOChannel* channel);
// gsize g_io_channel_get_buffer_size (::GIOChannel* channel);
gsize base::IOChannelBase::get_buffer_size () noexcept
{
  typedef gsize (*call_wrap_t) (::GIOChannel* channel);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_get_buffer_size;
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()));
  return _temp_ret;
}

// gboolean g_io_channel_get_buffered (GIOChannel* channel);
// gboolean g_io_channel_get_buffered (::GIOChannel* channel);
bool base::IOChannelBase::get_buffered () noexcept
{
  typedef gboolean (*call_wrap_t) (::GIOChannel* channel);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_get_buffered;
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()));
  return _temp_ret;
}

// gboolean g_io_channel_get_close_on_unref (GIOChannel* channel);
// gboolean g_io_channel_get_close_on_unref (::GIOChannel* channel);
// IGNORE; marked ignore

// const gchar* g_io_channel_get_encoding (GIOChannel* channel);
// const char* g_io_channel_get_encoding (::GIOChannel* channel);
std::string base::IOChannelBase::get_encoding () noexcept
{
  typedef const char* (*call_wrap_t) (::GIOChannel* channel);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_get_encoding;
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GIOFlags g_io_channel_get_flags (GIOChannel* channel);
// ::GIOFlags g_io_channel_get_flags (::GIOChannel* channel);
GLib::IOFlags base::IOChannelBase::get_flags () noexcept
{
  typedef ::GIOFlags (*call_wrap_t) (::GIOChannel* channel);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_get_flags;
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const gchar* g_io_channel_get_line_term (GIOChannel* channel, gint* length);
// const char* g_io_channel_get_line_term (::GIOChannel* channel, gint length);
// SKIP; inconsistent in length pointer depth (1 vs 0)

// void g_io_channel_init (GIOChannel* channel);
// void g_io_channel_init (::GIOChannel* channel);
void base::IOChannelBase::init () noexcept
{
  typedef void (*call_wrap_t) (::GIOChannel* channel);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_init;
  call_wrap_v ((::GIOChannel*) (gobj_()));
}

// GIOError g_io_channel_read (GIOChannel* channel, gchar* buf, gsize count, gsize* bytes_read);
// ::GIOError g_io_channel_read (::GIOChannel* channel, char* buf, gsize count, gsize bytes_read);
// IGNORE; deprecated

// GIOStatus g_io_channel_read_chars (GIOChannel* channel, gchar* buf, gsize count, gsize* bytes_read, GError ** error);
// ::GIOStatus g_io_channel_read_chars (::GIOChannel* channel, guint8* buf, gsize count, gsize* bytes_read, GError ** error);
GLib::IOStatus base::IOChannelBase::read_chars (guint8 * buf, gsize count, gsize * bytes_read)
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, guint8* buf, gsize count, gsize* bytes_read, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_read_chars;
  gsize bytes_read_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (guint8*) (buf), (gsize) (count), (gsize*) (bytes_read ? &bytes_read_o : nullptr), &error);
  if (bytes_read) *bytes_read = bytes_read_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
GLib::IOStatus base::IOChannelBase::read_chars (guint8 * buf, gsize count, gsize * bytes_read, GLib::Error * _error) noexcept
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, guint8* buf, gsize count, gsize* bytes_read, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_read_chars;
  gsize bytes_read_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (guint8*) (buf), (gsize) (count), (gsize*) (bytes_read ? &bytes_read_o : nullptr), _error ? &_error_o : nullptr);
  if (bytes_read) *bytes_read = bytes_read_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}
std::tuple<GLib::IOStatus, gsize> base::IOChannelBase::read_chars (guint8 * buf, gsize count)
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, guint8* buf, gsize count, gsize* bytes_read, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_read_chars;
  gsize bytes_read_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (guint8*) (buf), (gsize) (count), (gsize*) (&bytes_read_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret), bytes_read_o);
}
std::tuple<GLib::IOStatus, gsize> base::IOChannelBase::read_chars (guint8 * buf, gsize count, GLib::Error * _error) noexcept
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, guint8* buf, gsize count, gsize* bytes_read, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_read_chars;
  gsize bytes_read_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (guint8*) (buf), (gsize) (count), (gsize*) (&bytes_read_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret), bytes_read_o);
}

// GIOStatus g_io_channel_read_line (GIOChannel* channel, gchar** str_return, gsize* length, gsize* terminator_pos, GError ** error);
// ::GIOStatus g_io_channel_read_line (::GIOChannel* channel, char** str_return, gsize* length, gsize* terminator_pos, GError ** error);
GLib::IOStatus base::IOChannelBase::read_line (std::string & str_return, gsize * length, gsize * terminator_pos)
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, char** str_return, gsize* length, gsize* terminator_pos, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_read_line;
  gsize terminator_pos_o {};
  gsize length_o {};
  char* str_return_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (char**) (&str_return_o), (gsize*) (length ? &length_o : nullptr), (gsize*) (terminator_pos ? &terminator_pos_o : nullptr), &error);
  if (terminator_pos) *terminator_pos = terminator_pos_o;
  if (length) *length = length_o;
  str_return = gi::wrap (str_return_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
GLib::IOStatus base::IOChannelBase::read_line (std::string & str_return, gsize * length, gsize * terminator_pos, GLib::Error * _error) noexcept
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, char** str_return, gsize* length, gsize* terminator_pos, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_read_line;
  gsize terminator_pos_o {};
  gsize length_o {};
  char* str_return_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (char**) (&str_return_o), (gsize*) (length ? &length_o : nullptr), (gsize*) (terminator_pos ? &terminator_pos_o : nullptr), _error ? &_error_o : nullptr);
  if (terminator_pos) *terminator_pos = terminator_pos_o;
  if (length) *length = length_o;
  str_return = gi::wrap (str_return_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}
std::tuple<GLib::IOStatus, std::string, gsize, gsize> base::IOChannelBase::read_line ()
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, char** str_return, gsize* length, gsize* terminator_pos, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_read_line;
  gsize terminator_pos_o {};
  gsize length_o {};
  char* str_return_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (char**) (&str_return_o), (gsize*) (&length_o), (gsize*) (&terminator_pos_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret), gi::wrap (str_return_o, gi::transfer_full, gi::direction_out), length_o, terminator_pos_o);
}
std::tuple<GLib::IOStatus, std::string, gsize, gsize> base::IOChannelBase::read_line (GLib::Error * _error) noexcept
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, char** str_return, gsize* length, gsize* terminator_pos, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_read_line;
  gsize terminator_pos_o {};
  gsize length_o {};
  char* str_return_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (char**) (&str_return_o), (gsize*) (&length_o), (gsize*) (&terminator_pos_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret), gi::wrap (str_return_o, gi::transfer_full, gi::direction_out), length_o, terminator_pos_o);
}

// GIOStatus g_io_channel_read_line_string (GIOChannel* channel, GString* buffer, gsize* terminator_pos, GError ** error);
// ::GIOStatus g_io_channel_read_line_string (::GIOChannel* channel, ::GString* buffer, gsize terminator_pos, GError ** error);
// SKIP; inconsistent in terminator_pos pointer depth (1 vs 0)

// GIOStatus g_io_channel_read_to_end (GIOChannel* channel, gchar** str_return, gsize* length, GError ** error);
// ::GIOStatus g_io_channel_read_to_end (::GIOChannel* channel, guint8** str_return, gsize* length, GError ** error);
GLib::IOStatus base::IOChannelBase::read_to_end (std::vector<guint8> & str_return)
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, guint8** str_return, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_read_to_end;
  typedef guint8 str_return_cpptype;
  typedef traits::ctype<str_return_cpptype>::type str_return_ctype;
  str_return_ctype *str_return_o;
  gsize length;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (guint8**) ((guint8**) &str_return_o), (gsize*) (&length), &error);
  str_return.resize(length);
  detail::wrap_array (str_return_o, gi::transfer_full, length, str_return.data());
  g_free (str_return_o);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
GLib::IOStatus base::IOChannelBase::read_to_end (std::vector<guint8> & str_return, GLib::Error * _error) noexcept
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, guint8** str_return, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_read_to_end;
  typedef guint8 str_return_cpptype;
  typedef traits::ctype<str_return_cpptype>::type str_return_ctype;
  str_return_ctype *str_return_o;
  gsize length;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (guint8**) ((guint8**) &str_return_o), (gsize*) (&length), _error ? &_error_o : nullptr);
  str_return.resize(length);
  detail::wrap_array (str_return_o, gi::transfer_full, length, str_return.data());
  g_free (str_return_o);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}

// GIOStatus g_io_channel_read_unichar (GIOChannel* channel, gunichar* thechar, GError ** error);
// ::GIOStatus g_io_channel_read_unichar (::GIOChannel* channel, gunichar* thechar, GError ** error);
GLib::IOStatus base::IOChannelBase::read_unichar (gunichar & thechar)
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, gunichar* thechar, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_read_unichar;
  gunichar thechar_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (gunichar*) (&thechar_o), &error);
  thechar = thechar_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
GLib::IOStatus base::IOChannelBase::read_unichar (gunichar & thechar, GLib::Error * _error) noexcept
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, gunichar* thechar, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_read_unichar;
  gunichar thechar_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (gunichar*) (&thechar_o), _error ? &_error_o : nullptr);
  thechar = thechar_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}
std::tuple<GLib::IOStatus, gunichar> base::IOChannelBase::read_unichar ()
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, gunichar* thechar, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_read_unichar;
  gunichar thechar_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (gunichar*) (&thechar_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret), thechar_o);
}
std::tuple<GLib::IOStatus, gunichar> base::IOChannelBase::read_unichar (GLib::Error * _error) noexcept
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, gunichar* thechar, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_read_unichar;
  gunichar thechar_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (gunichar*) (&thechar_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret), thechar_o);
}

// GIOChannel* g_io_channel_ref (GIOChannel* channel);
// ::GIOChannel* g_io_channel_ref (::GIOChannel* channel);
// IGNORE; marked ignore

// GIOError g_io_channel_seek (GIOChannel* channel, gint64 offset, GSeekType type);
// ::GIOError g_io_channel_seek (::GIOChannel* channel, gint64 offset, ::GSeekType type);
// IGNORE; deprecated

// GIOStatus g_io_channel_seek_position (GIOChannel* channel, gint64 offset, GSeekType type, GError ** error);
// ::GIOStatus g_io_channel_seek_position (::GIOChannel* channel, gint64 offset, ::GSeekType type, GError ** error);
GLib::IOStatus base::IOChannelBase::seek_position (gint64 offset, GLib::SeekType type)
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, gint64 offset, ::GSeekType type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_seek_position;
  auto type_to_c = gi::unwrap (type);
  auto offset_to_c = offset;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (gint64) (offset_to_c), (::GSeekType) (type_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
GLib::IOStatus base::IOChannelBase::seek_position (gint64 offset, GLib::SeekType type, GLib::Error * _error) noexcept
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, gint64 offset, ::GSeekType type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_seek_position;
  auto type_to_c = gi::unwrap (type);
  auto offset_to_c = offset;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (gint64) (offset_to_c), (::GSeekType) (type_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}

// void g_io_channel_set_buffer_size (GIOChannel* channel, gsize size);
// void g_io_channel_set_buffer_size (::GIOChannel* channel, gsize size);
void base::IOChannelBase::set_buffer_size (gsize size) noexcept
{
  typedef void (*call_wrap_t) (::GIOChannel* channel, gsize size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_set_buffer_size;
  auto size_to_c = size;
  call_wrap_v ((::GIOChannel*) (gobj_()), (gsize) (size_to_c));
}

// void g_io_channel_set_buffered (GIOChannel* channel, gboolean buffered);
// void g_io_channel_set_buffered (::GIOChannel* channel, gboolean buffered);
void base::IOChannelBase::set_buffered (gboolean buffered) noexcept
{
  typedef void (*call_wrap_t) (::GIOChannel* channel, gboolean buffered);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_set_buffered;
  auto buffered_to_c = buffered;
  call_wrap_v ((::GIOChannel*) (gobj_()), (gboolean) (buffered_to_c));
}

// void g_io_channel_set_close_on_unref (GIOChannel* channel, gboolean do_close);
// void g_io_channel_set_close_on_unref (::GIOChannel* channel, gboolean do_close);
// IGNORE; marked ignore

// GIOStatus g_io_channel_set_encoding (GIOChannel* channel, const gchar* encoding, GError ** error);
// ::GIOStatus g_io_channel_set_encoding (::GIOChannel* channel, const char* encoding, GError ** error);
GLib::IOStatus base::IOChannelBase::set_encoding (const std::string & encoding)
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, const char* encoding, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_set_encoding;
  auto encoding_to_c = gi::unwrap (encoding, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (const char*) (encoding_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
GLib::IOStatus base::IOChannelBase::set_encoding ()
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, const char* encoding, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_set_encoding;
  auto encoding_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (const char*) (encoding_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
GLib::IOStatus base::IOChannelBase::set_encoding (const std::string & encoding, GLib::Error * _error) noexcept
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, const char* encoding, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_set_encoding;
  auto encoding_to_c = gi::unwrap (encoding, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (const char*) (encoding_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}
GLib::IOStatus base::IOChannelBase::set_encoding (GLib::Error * _error) noexcept
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, const char* encoding, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_set_encoding;
  auto encoding_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (const char*) (encoding_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}

// GIOStatus g_io_channel_set_flags (GIOChannel* channel, GIOFlags flags, GError ** error);
// ::GIOStatus g_io_channel_set_flags (::GIOChannel* channel, ::GIOFlags flags, GError ** error);
GLib::IOStatus base::IOChannelBase::set_flags (GLib::IOFlags flags)
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, ::GIOFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_set_flags;
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (::GIOFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
GLib::IOStatus base::IOChannelBase::set_flags (GLib::IOFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, ::GIOFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_set_flags;
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (::GIOFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}

// void g_io_channel_set_line_term (GIOChannel* channel, const gchar* line_term, gint length);
// void g_io_channel_set_line_term (::GIOChannel* channel, const char* line_term, gint length);
void base::IOChannelBase::set_line_term (const std::string & line_term, gint length) noexcept
{
  typedef void (*call_wrap_t) (::GIOChannel* channel, const char* line_term, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_set_line_term;
  auto length_to_c = length;
  auto line_term_to_c = gi::unwrap (line_term, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GIOChannel*) (gobj_()), (const char*) (line_term_to_c), (gint) (length_to_c));
}
void base::IOChannelBase::set_line_term (gint length) noexcept
{
  typedef void (*call_wrap_t) (::GIOChannel* channel, const char* line_term, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_set_line_term;
  auto length_to_c = length;
  auto line_term_to_c = nullptr;
  call_wrap_v ((::GIOChannel*) (gobj_()), (const char*) (line_term_to_c), (gint) (length_to_c));
}

// GIOStatus g_io_channel_shutdown (GIOChannel* channel, gboolean flush, GError ** error);
// ::GIOStatus g_io_channel_shutdown (::GIOChannel* channel, gboolean flush, GError ** error);
GLib::IOStatus base::IOChannelBase::shutdown (gboolean flush)
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, gboolean flush, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_shutdown;
  auto flush_to_c = flush;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (gboolean) (flush_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
GLib::IOStatus base::IOChannelBase::shutdown (gboolean flush, GLib::Error * _error) noexcept
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, gboolean flush, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_shutdown;
  auto flush_to_c = flush;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (gboolean) (flush_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}

// gint g_io_channel_unix_get_fd (GIOChannel* channel);
// gint g_io_channel_unix_get_fd (::GIOChannel* channel);
gint base::IOChannelBase::unix_get_fd () noexcept
{
  typedef gint (*call_wrap_t) (::GIOChannel* channel);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_unix_get_fd;
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()));
  return _temp_ret;
}

// void g_io_channel_unref (GIOChannel* channel);
// void g_io_channel_unref (::GIOChannel* channel);
// IGNORE; marked ignore

// GIOError g_io_channel_write (GIOChannel* channel, const gchar* buf, gsize count, gsize* bytes_written);
// ::GIOError g_io_channel_write (::GIOChannel* channel, const char* buf, gsize count, gsize bytes_written);
// IGNORE; deprecated

// GIOStatus g_io_channel_write_chars (GIOChannel* channel, gssize count, gsize* bytes_written, GError ** error);
// ::GIOStatus g_io_channel_write_chars (::GIOChannel* channel, gssize count, gsize* bytes_written, GError ** error);
// SKIP; inconsistent array info

// GIOStatus g_io_channel_write_unichar (GIOChannel* channel, gunichar thechar, GError ** error);
// ::GIOStatus g_io_channel_write_unichar (::GIOChannel* channel, gunichar thechar, GError ** error);
GLib::IOStatus base::IOChannelBase::write_unichar (gunichar thechar)
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, gunichar thechar, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_write_unichar;
  auto thechar_to_c = thechar;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (gunichar) (thechar_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
GLib::IOStatus base::IOChannelBase::write_unichar (gunichar thechar, GLib::Error * _error) noexcept
{
  typedef ::GIOStatus (*call_wrap_t) (::GIOChannel* channel, gunichar thechar, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_write_unichar;
  auto thechar_to_c = thechar;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (gobj_()), (gunichar) (thechar_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}

// GIOChannelError g_io_channel_error_from_errno (gint en);
// ::GIOChannelError g_io_channel_error_from_errno (gint en);
GLib::IOChannelError base::IOChannelBase::error_from_errno (gint en) noexcept
{
  typedef ::GIOChannelError (*call_wrap_t) (gint en);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_error_from_errno;
  auto en_to_c = en;
  auto _temp_ret = call_wrap_v ((gint) (en_to_c));
  return gi::wrap (_temp_ret);
}

// GQuark g_io_channel_error_quark ();
// ::GQuark g_io_channel_error_quark ();
GLib::Quark base::IOChannelBase::error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_channel_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/iochannel_extra_def_impl.hpp>)
#include <glib/iochannel_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/iochannel_extra_impl.hpp>)
#include <glib/iochannel_extra_impl.hpp>
#endif
#endif

#endif
