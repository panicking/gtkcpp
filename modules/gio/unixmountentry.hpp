// AUTO-GENERATED

#ifndef _GI_GIO_UNIXMOUNTENTRY_HPP_
#define _GI_GIO_UNIXMOUNTENTRY_HPP_


namespace gi {

namespace repository {

namespace Gio {


class UnixMountEntry;

namespace base {


#define GI_GIO_UNIXMOUNTENTRY_BASE base::UnixMountEntryBase
class UnixMountEntryBase : public gi::detail::GBoxedWrapper<UnixMountEntryBase, ::GUnixMountEntry>
{
typedef gi::detail::GBoxedWrapper<UnixMountEntryBase, ::GUnixMountEntry> super_type;
public:

UnixMountEntryBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_unix_mount_entry_get_type(); } 

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/unixmountentry_extra_def.hpp>)
#include <gio/unixmountentry_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/unixmountentry_extra.hpp>)
#include <gio/unixmountentry_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class UnixMountEntry : public GI_GIO_UNIXMOUNTENTRY_BASE
{ typedef GI_GIO_UNIXMOUNTENTRY_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GUnixMountEntry>
{ typedef Gio::UnixMountEntry type; }; 

} // namespace repository

} // namespace gi

#endif
