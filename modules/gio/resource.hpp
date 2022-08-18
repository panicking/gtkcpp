// AUTO-GENERATED

#ifndef _GI_GIO_RESOURCE_HPP_
#define _GI_GIO_RESOURCE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class InputStream;

class Resource;

namespace base {


#define GI_GIO_RESOURCE_BASE base::ResourceBase
class ResourceBase : public gi::detail::GBoxedWrapper<ResourceBase, ::GResource>
{
typedef gi::detail::GBoxedWrapper<ResourceBase, ::GResource> super_type;
public:

ResourceBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_resource_get_type(); } 

// GResource* g_resource_new_from_data (GBytes* data, GError ** error);
// ::GResource* g_resource_new_from_data (::GBytes* data, GError ** error);
static GI_INLINE_DECL Gio::Resource new_from_data (GLib::Bytes data);
static GI_INLINE_DECL Gio::Resource new_from_data (GLib::Bytes data, GLib::Error * _error) noexcept;

// void g_resources_register (GResource* resource);
// void g_resources_register (::GResource* resource);
GI_INLINE_DECL void _register () noexcept;

// void g_resources_unregister (GResource* resource);
// void g_resources_unregister (::GResource* resource);
GI_INLINE_DECL void _unregister () noexcept;

// char** g_resource_enumerate_children (GResource* resource, const char* path, GResourceLookupFlags lookup_flags, GError ** error);
// char** g_resource_enumerate_children (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
GI_INLINE_DECL std::vector<std::string> enumerate_children (const std::string & path, Gio::ResourceLookupFlags lookup_flags);
GI_INLINE_DECL std::vector<std::string> enumerate_children (const std::string & path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept;

// gboolean g_resource_get_info (GResource* resource, const char* path, GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
// gboolean g_resource_get_info (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
GI_INLINE_DECL bool get_info (const std::string & path, Gio::ResourceLookupFlags lookup_flags, gsize * size = nullptr, guint32 * flags = nullptr);
GI_INLINE_DECL bool get_info (const std::string & path, Gio::ResourceLookupFlags lookup_flags, gsize * size, guint32 * flags, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gsize, guint32> get_info (const std::string & path, Gio::ResourceLookupFlags lookup_flags);
GI_INLINE_DECL std::tuple<bool, gsize, guint32> get_info (const std::string & path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept;

// GBytes* g_resource_lookup_data (GResource* resource, const char* path, GResourceLookupFlags lookup_flags, GError ** error);
// ::GBytes* g_resource_lookup_data (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
GI_INLINE_DECL GLib::Bytes lookup_data (const std::string & path, Gio::ResourceLookupFlags lookup_flags);
GI_INLINE_DECL GLib::Bytes lookup_data (const std::string & path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept;

// GInputStream* g_resource_open_stream (GResource* resource, const char* path, GResourceLookupFlags lookup_flags, GError ** error);
// ::GInputStream* g_resource_open_stream (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
GI_INLINE_DECL Gio::InputStream open_stream (const std::string & path, Gio::ResourceLookupFlags lookup_flags);
GI_INLINE_DECL Gio::InputStream open_stream (const std::string & path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept;

// GResource* g_resource_ref (GResource* resource);
// ::GResource* g_resource_ref (::GResource* resource);
// IGNORE; marked ignore

// void g_resource_unref (GResource* resource);
// void g_resource_unref (::GResource* resource);
// IGNORE; marked ignore

// GResource* g_resource_load (const gchar* filename, GError ** error);
// ::GResource* g_resource_load (const char* filename, GError ** error);
static GI_INLINE_DECL Gio::Resource load (const std::string & filename);
static GI_INLINE_DECL Gio::Resource load (const std::string & filename, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/resource_extra_def.hpp>)
#include <gio/resource_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/resource_extra.hpp>)
#include <gio/resource_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Resource : public GI_GIO_RESOURCE_BASE
{ typedef GI_GIO_RESOURCE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GResource>
{ typedef Gio::Resource type; }; 

} // namespace repository

} // namespace gi

#endif
