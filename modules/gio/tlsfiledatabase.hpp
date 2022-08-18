// AUTO-GENERATED

#ifndef _GI_GIO_TLSFILEDATABASE_HPP_
#define _GI_GIO_TLSFILEDATABASE_HPP_


namespace gi {

namespace repository {

namespace Gio {


class TlsFileDatabase;

namespace base {


#define GI_GIO_TLSFILEDATABASE_BASE base::TlsFileDatabaseBase
class TlsFileDatabaseBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GTlsFileDatabase BaseObjectType;

TlsFileDatabaseBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_tls_file_database_get_type(); } 

// GTlsDatabase* g_tls_file_database_new (const gchar* anchors, GError ** error);
// ::GTlsFileDatabase* g_tls_file_database_new (const char* anchors, GError ** error);
static GI_INLINE_DECL Gio::TlsFileDatabase new_ (const std::string & anchors);
static GI_INLINE_DECL Gio::TlsFileDatabase new_ (const std::string & anchors, GLib::Error * _error) noexcept;

gi::property_proxy<std::string, base::TlsFileDatabaseBase> property_anchors()
{ return gi::property_proxy<std::string, base::TlsFileDatabaseBase> (*this, "anchors"); }
const gi::property_proxy<std::string, base::TlsFileDatabaseBase> property_anchors() const
{ return gi::property_proxy<std::string, base::TlsFileDatabaseBase> (*this, "anchors"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tlsfiledatabase_extra_def.hpp>)
#include <gio/tlsfiledatabase_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tlsfiledatabase_extra.hpp>)
#include <gio/tlsfiledatabase_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class TlsFileDatabase : public GI_GIO_TLSFILEDATABASE_BASE
{ typedef GI_GIO_TLSFILEDATABASE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GTlsFileDatabase>
{ typedef Gio::TlsFileDatabase type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class TlsFileDatabaseInterfaceDef
{
typedef TlsFileDatabaseInterfaceDef self;
public:
typedef Gio::TlsFileDatabase instance_type;
typedef ::GTlsFileDatabaseInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );


};

using TlsFileDatabaseImpl = detail::InterfaceImpl<TlsFileDatabaseInterfaceDef>;

class TlsFileDatabaseInterfaceClassImpl: public detail::InterfaceClassImpl<TlsFileDatabaseImpl>
{
typedef TlsFileDatabaseInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<TlsFileDatabaseImpl> super;

protected:
using super::super;


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
