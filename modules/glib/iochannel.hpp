// AUTO-GENERATED

#ifndef _GI_GLIB_IOCHANNEL_HPP_
#define _GI_GLIB_IOCHANNEL_HPP_


namespace gi {

namespace repository {

namespace GLib {

class String;

class IOChannel;

namespace base {


#define GI_GLIB_IOCHANNEL_BASE base::IOChannelBase
class IOChannelBase : public gi::detail::GBoxedWrapper<IOChannelBase, ::GIOChannel>
{
typedef gi::detail::GBoxedWrapper<IOChannelBase, ::GIOChannel> super_type;
public:

IOChannelBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_io_channel_get_type(); } 

// GIOChannel* g_io_channel_new_file (const gchar* filename, const gchar* mode, GError ** error);
// ::GIOChannel* g_io_channel_new_file (const char* filename, const char* mode, GError ** error);
static GI_INLINE_DECL GLib::IOChannel new_file (const std::string & filename, const std::string & mode);
static GI_INLINE_DECL GLib::IOChannel new_file (const std::string & filename, const std::string & mode, GLib::Error * _error) noexcept;

// GIOChannel* g_io_channel_unix_new (int fd);
// ::GIOChannel* g_io_channel_unix_new (gint fd);
static GI_INLINE_DECL GLib::IOChannel unix_new (gint fd) noexcept;

// void g_io_channel_close (GIOChannel* channel);
// void g_io_channel_close (::GIOChannel* channel);
// IGNORE; deprecated

// GIOStatus g_io_channel_flush (GIOChannel* channel, GError ** error);
// ::GIOStatus g_io_channel_flush (::GIOChannel* channel, GError ** error);
GI_INLINE_DECL GLib::IOStatus flush ();
GI_INLINE_DECL GLib::IOStatus flush (GLib::Error * _error) noexcept;

// GIOCondition g_io_channel_get_buffer_condition (GIOChannel* channel);
// ::GIOCondition g_io_channel_get_buffer_condition (::GIOChannel* channel);
GI_INLINE_DECL GLib::IOCondition get_buffer_condition () noexcept;

// gsize g_io_channel_get_buffer_size (GIOChannel* channel);
// gsize g_io_channel_get_buffer_size (::GIOChannel* channel);
GI_INLINE_DECL gsize get_buffer_size () noexcept;

// gboolean g_io_channel_get_buffered (GIOChannel* channel);
// gboolean g_io_channel_get_buffered (::GIOChannel* channel);
GI_INLINE_DECL bool get_buffered () noexcept;

// gboolean g_io_channel_get_close_on_unref (GIOChannel* channel);
// gboolean g_io_channel_get_close_on_unref (::GIOChannel* channel);
// IGNORE; marked ignore

// const gchar* g_io_channel_get_encoding (GIOChannel* channel);
// const char* g_io_channel_get_encoding (::GIOChannel* channel);
GI_INLINE_DECL std::string get_encoding () noexcept;

// GIOFlags g_io_channel_get_flags (GIOChannel* channel);
// ::GIOFlags g_io_channel_get_flags (::GIOChannel* channel);
GI_INLINE_DECL GLib::IOFlags get_flags () noexcept;

// const gchar* g_io_channel_get_line_term (GIOChannel* channel, gint* length);
// const char* g_io_channel_get_line_term (::GIOChannel* channel, gint length);
// SKIP; inconsistent in length pointer depth (1 vs 0)

// void g_io_channel_init (GIOChannel* channel);
// void g_io_channel_init (::GIOChannel* channel);
GI_INLINE_DECL void init () noexcept;

// GIOError g_io_channel_read (GIOChannel* channel, gchar* buf, gsize count, gsize* bytes_read);
// ::GIOError g_io_channel_read (::GIOChannel* channel, char* buf, gsize count, gsize bytes_read);
// IGNORE; deprecated

// GIOStatus g_io_channel_read_chars (GIOChannel* channel, gchar* buf, gsize count, gsize* bytes_read, GError ** error);
// ::GIOStatus g_io_channel_read_chars (::GIOChannel* channel, guint8* buf, gsize count, gsize* bytes_read, GError ** error);
GI_INLINE_DECL GLib::IOStatus read_chars (guint8 * buf, gsize count, gsize * bytes_read = nullptr);
GI_INLINE_DECL GLib::IOStatus read_chars (guint8 * buf, gsize count, gsize * bytes_read, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::IOStatus, gsize> read_chars (guint8 * buf, gsize count);
GI_INLINE_DECL std::tuple<GLib::IOStatus, gsize> read_chars (guint8 * buf, gsize count, GLib::Error * _error) noexcept;

// GIOStatus g_io_channel_read_line (GIOChannel* channel, gchar** str_return, gsize* length, gsize* terminator_pos, GError ** error);
// ::GIOStatus g_io_channel_read_line (::GIOChannel* channel, char** str_return, gsize* length, gsize* terminator_pos, GError ** error);
GI_INLINE_DECL GLib::IOStatus read_line (std::string & str_return, gsize * length = nullptr, gsize * terminator_pos = nullptr);
GI_INLINE_DECL GLib::IOStatus read_line (std::string & str_return, gsize * length, gsize * terminator_pos, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::IOStatus, std::string, gsize, gsize> read_line ();
GI_INLINE_DECL std::tuple<GLib::IOStatus, std::string, gsize, gsize> read_line (GLib::Error * _error) noexcept;

// GIOStatus g_io_channel_read_line_string (GIOChannel* channel, GString* buffer, gsize* terminator_pos, GError ** error);
// ::GIOStatus g_io_channel_read_line_string (::GIOChannel* channel, ::GString* buffer, gsize terminator_pos, GError ** error);
// SKIP; inconsistent in terminator_pos pointer depth (1 vs 0)

// GIOStatus g_io_channel_read_to_end (GIOChannel* channel, gchar** str_return, gsize* length, GError ** error);
// ::GIOStatus g_io_channel_read_to_end (::GIOChannel* channel, guint8** str_return, gsize* length, GError ** error);
GI_INLINE_DECL GLib::IOStatus read_to_end (std::vector<guint8> & str_return);
GI_INLINE_DECL GLib::IOStatus read_to_end (std::vector<guint8> & str_return, GLib::Error * _error) noexcept;

// GIOStatus g_io_channel_read_unichar (GIOChannel* channel, gunichar* thechar, GError ** error);
// ::GIOStatus g_io_channel_read_unichar (::GIOChannel* channel, gunichar* thechar, GError ** error);
GI_INLINE_DECL GLib::IOStatus read_unichar (gunichar & thechar);
GI_INLINE_DECL GLib::IOStatus read_unichar (gunichar & thechar, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::IOStatus, gunichar> read_unichar ();
GI_INLINE_DECL std::tuple<GLib::IOStatus, gunichar> read_unichar (GLib::Error * _error) noexcept;

// GIOChannel* g_io_channel_ref (GIOChannel* channel);
// ::GIOChannel* g_io_channel_ref (::GIOChannel* channel);
// IGNORE; marked ignore

// GIOError g_io_channel_seek (GIOChannel* channel, gint64 offset, GSeekType type);
// ::GIOError g_io_channel_seek (::GIOChannel* channel, gint64 offset, ::GSeekType type);
// IGNORE; deprecated

// GIOStatus g_io_channel_seek_position (GIOChannel* channel, gint64 offset, GSeekType type, GError ** error);
// ::GIOStatus g_io_channel_seek_position (::GIOChannel* channel, gint64 offset, ::GSeekType type, GError ** error);
GI_INLINE_DECL GLib::IOStatus seek_position (gint64 offset, GLib::SeekType type);
GI_INLINE_DECL GLib::IOStatus seek_position (gint64 offset, GLib::SeekType type, GLib::Error * _error) noexcept;

// void g_io_channel_set_buffer_size (GIOChannel* channel, gsize size);
// void g_io_channel_set_buffer_size (::GIOChannel* channel, gsize size);
GI_INLINE_DECL void set_buffer_size (gsize size) noexcept;

// void g_io_channel_set_buffered (GIOChannel* channel, gboolean buffered);
// void g_io_channel_set_buffered (::GIOChannel* channel, gboolean buffered);
GI_INLINE_DECL void set_buffered (gboolean buffered) noexcept;

// void g_io_channel_set_close_on_unref (GIOChannel* channel, gboolean do_close);
// void g_io_channel_set_close_on_unref (::GIOChannel* channel, gboolean do_close);
// IGNORE; marked ignore

// GIOStatus g_io_channel_set_encoding (GIOChannel* channel, const gchar* encoding, GError ** error);
// ::GIOStatus g_io_channel_set_encoding (::GIOChannel* channel, const char* encoding, GError ** error);
GI_INLINE_DECL GLib::IOStatus set_encoding (const std::string & encoding);
GI_INLINE_DECL GLib::IOStatus set_encoding ();
GI_INLINE_DECL GLib::IOStatus set_encoding (const std::string & encoding, GLib::Error * _error) noexcept;
GI_INLINE_DECL GLib::IOStatus set_encoding (GLib::Error * _error) noexcept;

// GIOStatus g_io_channel_set_flags (GIOChannel* channel, GIOFlags flags, GError ** error);
// ::GIOStatus g_io_channel_set_flags (::GIOChannel* channel, ::GIOFlags flags, GError ** error);
GI_INLINE_DECL GLib::IOStatus set_flags (GLib::IOFlags flags);
GI_INLINE_DECL GLib::IOStatus set_flags (GLib::IOFlags flags, GLib::Error * _error) noexcept;

// void g_io_channel_set_line_term (GIOChannel* channel, const gchar* line_term, gint length);
// void g_io_channel_set_line_term (::GIOChannel* channel, const char* line_term, gint length);
GI_INLINE_DECL void set_line_term (const std::string & line_term, gint length) noexcept;
GI_INLINE_DECL void set_line_term (gint length) noexcept;

// GIOStatus g_io_channel_shutdown (GIOChannel* channel, gboolean flush, GError ** error);
// ::GIOStatus g_io_channel_shutdown (::GIOChannel* channel, gboolean flush, GError ** error);
GI_INLINE_DECL GLib::IOStatus shutdown (gboolean flush);
GI_INLINE_DECL GLib::IOStatus shutdown (gboolean flush, GLib::Error * _error) noexcept;

// gint g_io_channel_unix_get_fd (GIOChannel* channel);
// gint g_io_channel_unix_get_fd (::GIOChannel* channel);
GI_INLINE_DECL gint unix_get_fd () noexcept;

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
GI_INLINE_DECL GLib::IOStatus write_unichar (gunichar thechar);
GI_INLINE_DECL GLib::IOStatus write_unichar (gunichar thechar, GLib::Error * _error) noexcept;

// GIOChannelError g_io_channel_error_from_errno (gint en);
// ::GIOChannelError g_io_channel_error_from_errno (gint en);
static GI_INLINE_DECL GLib::IOChannelError error_from_errno (gint en) noexcept;

// GQuark g_io_channel_error_quark ();
// ::GQuark g_io_channel_error_quark ();
static GI_INLINE_DECL GLib::Quark error_quark () noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/iochannel_extra_def.hpp>)
#include <glib/iochannel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/iochannel_extra.hpp>)
#include <glib/iochannel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class IOChannel : public GI_GLIB_IOCHANNEL_BASE
{ typedef GI_GLIB_IOCHANNEL_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GIOChannel>
{ typedef GLib::IOChannel type; }; 

} // namespace repository

} // namespace gi

#endif
