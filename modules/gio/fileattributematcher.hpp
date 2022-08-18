// AUTO-GENERATED

#ifndef _GI_GIO_FILEATTRIBUTEMATCHER_HPP_
#define _GI_GIO_FILEATTRIBUTEMATCHER_HPP_


namespace gi {

namespace repository {

namespace Gio {


class FileAttributeMatcher;

namespace base {


#define GI_GIO_FILEATTRIBUTEMATCHER_BASE base::FileAttributeMatcherBase
class FileAttributeMatcherBase : public gi::detail::GBoxedWrapper<FileAttributeMatcherBase, ::GFileAttributeMatcher>
{
typedef gi::detail::GBoxedWrapper<FileAttributeMatcherBase, ::GFileAttributeMatcher> super_type;
public:

FileAttributeMatcherBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_file_attribute_matcher_get_type(); } 

// GFileAttributeMatcher* g_file_attribute_matcher_new (const char* attributes);
// ::GFileAttributeMatcher* g_file_attribute_matcher_new (const char* attributes);
static GI_INLINE_DECL Gio::FileAttributeMatcher new_ (const std::string & attributes) noexcept;

// gboolean g_file_attribute_matcher_enumerate_namespace (GFileAttributeMatcher* matcher, const char* ns);
// gboolean g_file_attribute_matcher_enumerate_namespace (::GFileAttributeMatcher* matcher, const char* ns);
GI_INLINE_DECL bool enumerate_namespace (const std::string & ns) noexcept;

// const char* g_file_attribute_matcher_enumerate_next (GFileAttributeMatcher* matcher);
// const char* g_file_attribute_matcher_enumerate_next (::GFileAttributeMatcher* matcher);
GI_INLINE_DECL std::string enumerate_next () noexcept;

// gboolean g_file_attribute_matcher_matches (GFileAttributeMatcher* matcher, const char* attribute);
// gboolean g_file_attribute_matcher_matches (::GFileAttributeMatcher* matcher, const char* attribute);
GI_INLINE_DECL bool matches (const std::string & attribute) noexcept;

// gboolean g_file_attribute_matcher_matches_only (GFileAttributeMatcher* matcher, const char* attribute);
// gboolean g_file_attribute_matcher_matches_only (::GFileAttributeMatcher* matcher, const char* attribute);
GI_INLINE_DECL bool matches_only (const std::string & attribute) noexcept;

// GFileAttributeMatcher* g_file_attribute_matcher_ref (GFileAttributeMatcher* matcher);
// ::GFileAttributeMatcher* g_file_attribute_matcher_ref (::GFileAttributeMatcher* matcher);
// IGNORE; marked ignore

// GFileAttributeMatcher* g_file_attribute_matcher_subtract (GFileAttributeMatcher* matcher, GFileAttributeMatcher* subtract);
// ::GFileAttributeMatcher* g_file_attribute_matcher_subtract (::GFileAttributeMatcher* matcher, ::GFileAttributeMatcher* subtract);
GI_INLINE_DECL Gio::FileAttributeMatcher subtract (Gio::FileAttributeMatcher subtract) noexcept;
GI_INLINE_DECL Gio::FileAttributeMatcher subtract () noexcept;

// char* g_file_attribute_matcher_to_string (GFileAttributeMatcher* matcher);
// char* g_file_attribute_matcher_to_string (::GFileAttributeMatcher* matcher);
GI_INLINE_DECL std::string to_string () noexcept;

// void g_file_attribute_matcher_unref (GFileAttributeMatcher* matcher);
// void g_file_attribute_matcher_unref (::GFileAttributeMatcher* matcher);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileattributematcher_extra_def.hpp>)
#include <gio/fileattributematcher_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileattributematcher_extra.hpp>)
#include <gio/fileattributematcher_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class FileAttributeMatcher : public GI_GIO_FILEATTRIBUTEMATCHER_BASE
{ typedef GI_GIO_FILEATTRIBUTEMATCHER_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GFileAttributeMatcher>
{ typedef Gio::FileAttributeMatcher type; }; 

} // namespace repository

} // namespace gi

#endif
