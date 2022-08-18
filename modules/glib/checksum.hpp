// AUTO-GENERATED

#ifndef _GI_GLIB_CHECKSUM_HPP_
#define _GI_GLIB_CHECKSUM_HPP_


namespace gi {

namespace repository {

namespace GLib {


class Checksum;

namespace base {


#define GI_GLIB_CHECKSUM_BASE base::ChecksumBase
class ChecksumBase : public gi::detail::GBoxedWrapper<ChecksumBase, ::GChecksum>
{
typedef gi::detail::GBoxedWrapper<ChecksumBase, ::GChecksum> super_type;
public:

ChecksumBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_checksum_get_type(); } 

// GChecksum* g_checksum_new (GChecksumType checksum_type);
// ::GChecksum* g_checksum_new (::GChecksumType checksum_type);
static GI_INLINE_DECL GLib::Checksum new_ (GLib::ChecksumType checksum_type) noexcept;

// GChecksum* g_checksum_copy (const GChecksum* checksum);
// ::GChecksum* g_checksum_copy (const ::GChecksum* checksum);
GI_INLINE_DECL GLib::Checksum copy () const noexcept;

// void g_checksum_free (GChecksum* checksum);
// void g_checksum_free (::GChecksum* checksum);
// IGNORE; marked ignore

// void g_checksum_get_digest (GChecksum* checksum, guint8* buffer, gsize* digest_len);
// void g_checksum_get_digest (::GChecksum* checksum, guint8* buffer, gsize* digest_len);
GI_INLINE_DECL void get_digest (guint8 * buffer, gsize digest_len) noexcept;

// const gchar* g_checksum_get_string (GChecksum* checksum);
// const char* g_checksum_get_string (::GChecksum* checksum);
GI_INLINE_DECL std::string get_string () noexcept;

// void g_checksum_reset (GChecksum* checksum);
// void g_checksum_reset (::GChecksum* checksum);
GI_INLINE_DECL void reset () noexcept;

// void g_checksum_update (GChecksum* checksum, const guchar* data, gssize length);
// void g_checksum_update (::GChecksum* checksum, const guint8* data, gssize length);
GI_INLINE_DECL void update (guint8 * data, gssize length) noexcept;

// gssize g_checksum_type_get_length (GChecksumType checksum_type);
// gssize g_checksum_type_get_length (::GChecksumType checksum_type);
static GI_INLINE_DECL gssize type_get_length (GLib::ChecksumType checksum_type) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/checksum_extra_def.hpp>)
#include <glib/checksum_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/checksum_extra.hpp>)
#include <glib/checksum_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Checksum : public GI_GLIB_CHECKSUM_BASE
{ typedef GI_GLIB_CHECKSUM_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GChecksum>
{ typedef GLib::Checksum type; }; 

} // namespace repository

} // namespace gi

#endif
