// AUTO-GENERATED

#ifndef _GI_GIO_UNIXMOUNTPOINT_HPP_
#define _GI_GIO_UNIXMOUNTPOINT_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Icon;

class UnixMountPoint;

namespace base {


#define GI_GIO_UNIXMOUNTPOINT_BASE base::UnixMountPointBase
class UnixMountPointBase : public gi::detail::GBoxedWrapper<UnixMountPointBase, ::GUnixMountPoint>
{
typedef gi::detail::GBoxedWrapper<UnixMountPointBase, ::GUnixMountPoint> super_type;
public:

UnixMountPointBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_unix_mount_point_get_type(); } 

// gint g_unix_mount_point_compare (GUnixMountPoint* mount1, GUnixMountPoint* mount2);
// gint g_unix_mount_point_compare (::GUnixMountPoint* mount1, ::GUnixMountPoint* mount2);
GI_INLINE_DECL gint compare (Gio::UnixMountPoint mount2) noexcept;

// GUnixMountPoint* g_unix_mount_point_copy (GUnixMountPoint* mount_point);
// ::GUnixMountPoint* g_unix_mount_point_copy (::GUnixMountPoint* mount_point);
GI_INLINE_DECL Gio::UnixMountPoint copy () noexcept;

// void g_unix_mount_point_free (GUnixMountPoint* mount_point);
// void g_unix_mount_point_free (::GUnixMountPoint* mount_point);
// IGNORE; marked ignore

// const char* g_unix_mount_point_get_device_path (GUnixMountPoint* mount_point);
// const char* g_unix_mount_point_get_device_path (::GUnixMountPoint* mount_point);
GI_INLINE_DECL std::string get_device_path () noexcept;

// const char* g_unix_mount_point_get_fs_type (GUnixMountPoint* mount_point);
// const char* g_unix_mount_point_get_fs_type (::GUnixMountPoint* mount_point);
GI_INLINE_DECL std::string get_fs_type () noexcept;

// const char* g_unix_mount_point_get_mount_path (GUnixMountPoint* mount_point);
// const char* g_unix_mount_point_get_mount_path (::GUnixMountPoint* mount_point);
GI_INLINE_DECL std::string get_mount_path () noexcept;

// const char* g_unix_mount_point_get_options (GUnixMountPoint* mount_point);
// const char* g_unix_mount_point_get_options (::GUnixMountPoint* mount_point);
GI_INLINE_DECL std::string get_options () noexcept;

// gboolean g_unix_mount_point_guess_can_eject (GUnixMountPoint* mount_point);
// gboolean g_unix_mount_point_guess_can_eject (::GUnixMountPoint* mount_point);
GI_INLINE_DECL bool guess_can_eject () noexcept;

// GIcon* g_unix_mount_point_guess_icon (GUnixMountPoint* mount_point);
// ::GIcon* g_unix_mount_point_guess_icon (::GUnixMountPoint* mount_point);
GI_INLINE_DECL Gio::Icon guess_icon () noexcept;

// char* g_unix_mount_point_guess_name (GUnixMountPoint* mount_point);
// char* g_unix_mount_point_guess_name (::GUnixMountPoint* mount_point);
GI_INLINE_DECL std::string guess_name () noexcept;

// GIcon* g_unix_mount_point_guess_symbolic_icon (GUnixMountPoint* mount_point);
// ::GIcon* g_unix_mount_point_guess_symbolic_icon (::GUnixMountPoint* mount_point);
GI_INLINE_DECL Gio::Icon guess_symbolic_icon () noexcept;

// gboolean g_unix_mount_point_is_loopback (GUnixMountPoint* mount_point);
// gboolean g_unix_mount_point_is_loopback (::GUnixMountPoint* mount_point);
GI_INLINE_DECL bool is_loopback () noexcept;

// gboolean g_unix_mount_point_is_readonly (GUnixMountPoint* mount_point);
// gboolean g_unix_mount_point_is_readonly (::GUnixMountPoint* mount_point);
GI_INLINE_DECL bool is_readonly () noexcept;

// gboolean g_unix_mount_point_is_user_mountable (GUnixMountPoint* mount_point);
// gboolean g_unix_mount_point_is_user_mountable (::GUnixMountPoint* mount_point);
GI_INLINE_DECL bool is_user_mountable () noexcept;

// GUnixMountPoint* g_unix_mount_point_at (const char* mount_path, guint64* time_read);
// ::GUnixMountPoint* g_unix_mount_point_at (const char* mount_path, guint64* time_read);
static GI_INLINE_DECL Gio::UnixMountPoint at (const std::string & mount_path, guint64 * time_read = nullptr) noexcept;
static GI_INLINE_DECL std::tuple<Gio::UnixMountPoint, guint64> at (const std::string & mount_path) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/unixmountpoint_extra_def.hpp>)
#include <gio/unixmountpoint_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/unixmountpoint_extra.hpp>)
#include <gio/unixmountpoint_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class UnixMountPoint : public GI_GIO_UNIXMOUNTPOINT_BASE
{ typedef GI_GIO_UNIXMOUNTPOINT_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GUnixMountPoint>
{ typedef Gio::UnixMountPoint type; }; 

} // namespace repository

} // namespace gi

#endif
