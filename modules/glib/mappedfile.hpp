// AUTO-GENERATED

#ifndef _GI_GLIB_MAPPEDFILE_HPP_
#define _GI_GLIB_MAPPEDFILE_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Bytes;

class MappedFile;

namespace base {


#define GI_GLIB_MAPPEDFILE_BASE base::MappedFileBase
class MappedFileBase : public gi::detail::GBoxedWrapper<MappedFileBase, ::GMappedFile>
{
typedef gi::detail::GBoxedWrapper<MappedFileBase, ::GMappedFile> super_type;
public:

MappedFileBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_mapped_file_get_type(); } 

// GMappedFile* g_mapped_file_new (const gchar* filename, gboolean writable, GError ** error);
// ::GMappedFile* g_mapped_file_new (const char* filename, gboolean writable, GError ** error);
static GI_INLINE_DECL GLib::MappedFile new_ (const std::string & filename, gboolean writable);
static GI_INLINE_DECL GLib::MappedFile new_ (const std::string & filename, gboolean writable, GLib::Error * _error) noexcept;

// GMappedFile* g_mapped_file_new_from_fd (gint fd, gboolean writable, GError ** error);
// ::GMappedFile* g_mapped_file_new_from_fd (gint fd, gboolean writable, GError ** error);
static GI_INLINE_DECL GLib::MappedFile new_from_fd (gint fd, gboolean writable);
static GI_INLINE_DECL GLib::MappedFile new_from_fd (gint fd, gboolean writable, GLib::Error * _error) noexcept;

// void g_mapped_file_free (GMappedFile* file);
// void g_mapped_file_free (::GMappedFile* file);
// IGNORE; marked ignore

// GBytes* g_mapped_file_get_bytes (GMappedFile* file);
// ::GBytes* g_mapped_file_get_bytes (::GMappedFile* file);
GI_INLINE_DECL GLib::Bytes get_bytes () noexcept;

// gchar* g_mapped_file_get_contents (GMappedFile* file);
// char* g_mapped_file_get_contents (::GMappedFile* file);
GI_INLINE_DECL std::string get_contents () noexcept;

// gsize g_mapped_file_get_length (GMappedFile* file);
// gsize g_mapped_file_get_length (::GMappedFile* file);
GI_INLINE_DECL gsize get_length () noexcept;

// GMappedFile* g_mapped_file_ref (GMappedFile* file);
// ::GMappedFile* g_mapped_file_ref (::GMappedFile* file);
// IGNORE; marked ignore

// void g_mapped_file_unref (GMappedFile* file);
// void g_mapped_file_unref (::GMappedFile* file);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/mappedfile_extra_def.hpp>)
#include <glib/mappedfile_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/mappedfile_extra.hpp>)
#include <glib/mappedfile_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class MappedFile : public GI_GLIB_MAPPEDFILE_BASE
{ typedef GI_GLIB_MAPPEDFILE_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GMappedFile>
{ typedef GLib::MappedFile type; }; 

} // namespace repository

} // namespace gi

#endif
