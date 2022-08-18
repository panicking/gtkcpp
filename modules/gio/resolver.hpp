// AUTO-GENERATED

#ifndef _GI_GIO_RESOLVER_HPP_
#define _GI_GIO_RESOLVER_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class InetAddress;
class SrvTarget;

class Resolver;

namespace base {


#define GI_GIO_RESOLVER_BASE base::ResolverBase
class ResolverBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GResolver BaseObjectType;

ResolverBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_resolver_get_type(); } 

// void g_resolver_free_addresses (GList* addresses);
// void g_resolver_free_addresses (::GList* addresses);
static GI_INLINE_DECL void free_addresses (const std::vector<gpointer> & addresses) noexcept;

// void g_resolver_free_targets (GList* targets);
// void g_resolver_free_targets (::GList* targets);
static GI_INLINE_DECL void free_targets (const std::vector<gpointer> & targets) noexcept;

// GResolver* g_resolver_get_default ();
// ::GResolver* g_resolver_get_default ();
static GI_INLINE_DECL Gio::Resolver get_default () noexcept;

// gchar* g_resolver_lookup_by_address (GResolver* resolver, GInetAddress* address, GCancellable* cancellable, GError ** error);
// char* g_resolver_lookup_by_address (::GResolver* resolver, ::GInetAddress* address, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL std::string lookup_by_address (Gio::InetAddress address, Gio::Cancellable cancellable);
GI_INLINE_DECL std::string lookup_by_address (Gio::InetAddress address);
GI_INLINE_DECL std::string lookup_by_address (Gio::InetAddress address, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::string lookup_by_address (Gio::InetAddress address, GLib::Error * _error) noexcept;

// void g_resolver_lookup_by_address_async (GResolver* resolver, GInetAddress* address, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_resolver_lookup_by_address_async (::GResolver* resolver, ::GInetAddress* address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void lookup_by_address_async (Gio::InetAddress address, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void lookup_by_address_async (Gio::InetAddress address, Gio::AsyncReadyCallback callback) noexcept;

// gchar* g_resolver_lookup_by_address_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// char* g_resolver_lookup_by_address_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL std::string lookup_by_address_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::string lookup_by_address_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GList* g_resolver_lookup_by_name (GResolver* resolver, const gchar* hostname, GCancellable* cancellable, GError ** error);
// ::GList* g_resolver_lookup_by_name (::GResolver* resolver, const char* hostname, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL std::vector<Gio::InetAddress> lookup_by_name (const std::string & hostname, Gio::Cancellable cancellable);
GI_INLINE_DECL std::vector<Gio::InetAddress> lookup_by_name (const std::string & hostname);
GI_INLINE_DECL std::vector<Gio::InetAddress> lookup_by_name (const std::string & hostname, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::vector<Gio::InetAddress> lookup_by_name (const std::string & hostname, GLib::Error * _error) noexcept;

// void g_resolver_lookup_by_name_async (GResolver* resolver, const gchar* hostname, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_resolver_lookup_by_name_async (::GResolver* resolver, const char* hostname, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void lookup_by_name_async (const std::string & hostname, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void lookup_by_name_async (const std::string & hostname, Gio::AsyncReadyCallback callback) noexcept;

// GList* g_resolver_lookup_by_name_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// ::GList* g_resolver_lookup_by_name_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL std::vector<Gio::InetAddress> lookup_by_name_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::vector<Gio::InetAddress> lookup_by_name_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GList* g_resolver_lookup_by_name_with_flags (GResolver* resolver, const gchar* hostname, GResolverNameLookupFlags flags, GCancellable* cancellable, GError ** error);
// ::GList* g_resolver_lookup_by_name_with_flags (::GResolver* resolver, const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL std::vector<Gio::InetAddress> lookup_by_name_with_flags (const std::string & hostname, Gio::ResolverNameLookupFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL std::vector<Gio::InetAddress> lookup_by_name_with_flags (const std::string & hostname, Gio::ResolverNameLookupFlags flags);
GI_INLINE_DECL std::vector<Gio::InetAddress> lookup_by_name_with_flags (const std::string & hostname, Gio::ResolverNameLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::vector<Gio::InetAddress> lookup_by_name_with_flags (const std::string & hostname, Gio::ResolverNameLookupFlags flags, GLib::Error * _error) noexcept;

// void g_resolver_lookup_by_name_with_flags_async (GResolver* resolver, const gchar* hostname, GResolverNameLookupFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_resolver_lookup_by_name_with_flags_async (::GResolver* resolver, const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void lookup_by_name_with_flags_async (const std::string & hostname, Gio::ResolverNameLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void lookup_by_name_with_flags_async (const std::string & hostname, Gio::ResolverNameLookupFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// GList* g_resolver_lookup_by_name_with_flags_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// ::GList* g_resolver_lookup_by_name_with_flags_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL std::vector<Gio::InetAddress> lookup_by_name_with_flags_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::vector<Gio::InetAddress> lookup_by_name_with_flags_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GList* g_resolver_lookup_records (GResolver* resolver, const gchar* rrname, GResolverRecordType record_type, GCancellable* cancellable, GError ** error);
// ::GList* g_resolver_lookup_records (::GResolver* resolver, const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL std::vector<GLib::Variant> lookup_records (const std::string & rrname, Gio::ResolverRecordType record_type, Gio::Cancellable cancellable);
GI_INLINE_DECL std::vector<GLib::Variant> lookup_records (const std::string & rrname, Gio::ResolverRecordType record_type);
GI_INLINE_DECL std::vector<GLib::Variant> lookup_records (const std::string & rrname, Gio::ResolverRecordType record_type, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::vector<GLib::Variant> lookup_records (const std::string & rrname, Gio::ResolverRecordType record_type, GLib::Error * _error) noexcept;

// void g_resolver_lookup_records_async (GResolver* resolver, const gchar* rrname, GResolverRecordType record_type, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_resolver_lookup_records_async (::GResolver* resolver, const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void lookup_records_async (const std::string & rrname, Gio::ResolverRecordType record_type, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void lookup_records_async (const std::string & rrname, Gio::ResolverRecordType record_type, Gio::AsyncReadyCallback callback) noexcept;

// GList* g_resolver_lookup_records_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// ::GList* g_resolver_lookup_records_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL std::vector<GLib::Variant> lookup_records_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::vector<GLib::Variant> lookup_records_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GList* g_resolver_lookup_service (GResolver* resolver, const gchar* service, const gchar* protocol, const gchar* domain, GCancellable* cancellable, GError ** error);
// ::GList* g_resolver_lookup_service (::GResolver* resolver, const char* service, const char* protocol, const char* domain, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL std::vector<Gio::SrvTarget> lookup_service (const std::string & service, const std::string & protocol, const std::string & domain, Gio::Cancellable cancellable);
GI_INLINE_DECL std::vector<Gio::SrvTarget> lookup_service (const std::string & service, const std::string & protocol, const std::string & domain);
GI_INLINE_DECL std::vector<Gio::SrvTarget> lookup_service (const std::string & service, const std::string & protocol, const std::string & domain, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::vector<Gio::SrvTarget> lookup_service (const std::string & service, const std::string & protocol, const std::string & domain, GLib::Error * _error) noexcept;

// void g_resolver_lookup_service_async (GResolver* resolver, const gchar* service, const gchar* protocol, const gchar* domain, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_resolver_lookup_service_async (::GResolver* resolver, const char* service, const char* protocol, const char* domain, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void lookup_service_async (const std::string & service, const std::string & protocol, const std::string & domain, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void lookup_service_async (const std::string & service, const std::string & protocol, const std::string & domain, Gio::AsyncReadyCallback callback) noexcept;

// GList* g_resolver_lookup_service_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// ::GList* g_resolver_lookup_service_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL std::vector<Gio::SrvTarget> lookup_service_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::vector<Gio::SrvTarget> lookup_service_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_resolver_set_default (GResolver* resolver);
// void g_resolver_set_default (::GResolver* resolver);
GI_INLINE_DECL void set_default () noexcept;

// signal reload
gi::signal_proxy<void(Gio::Resolver)> signal_reload()
{ return gi::signal_proxy<void(Gio::Resolver)> (*this, "reload"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/resolver_extra_def.hpp>)
#include <gio/resolver_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/resolver_extra.hpp>)
#include <gio/resolver_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Resolver : public GI_GIO_RESOLVER_BASE
{ typedef GI_GIO_RESOLVER_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GResolver>
{ typedef Gio::Resolver type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ResolverClassDef
{
typedef ResolverClassDef self;
public:
typedef Gio::Resolver instance_type;
typedef ::GResolverClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gchar* Resolver::lookup_by_address (GResolver* resolver, GInetAddress* address, GCancellable* cancellable, GError ** error);
// char* Resolver::lookup_by_address (::GResolver* resolver, ::GInetAddress* address, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void Resolver::lookup_by_address_async (GResolver* resolver, GInetAddress* address, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Resolver::lookup_by_address_async (::GResolver* resolver, ::GInetAddress* address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gchar* Resolver::lookup_by_address_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// char* Resolver::lookup_by_address_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// GList* Resolver::lookup_by_name (GResolver* resolver, const gchar* hostname, GCancellable* cancellable, GError ** error);
// ::GList* Resolver::lookup_by_name (::GResolver* resolver, const char* hostname, ::GCancellable* cancellable, GError ** error);
// SKIP; container return not supported, callee GError not supported

// void Resolver::lookup_by_name_async (GResolver* resolver, const gchar* hostname, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Resolver::lookup_by_name_async (::GResolver* resolver, const char* hostname, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GList* Resolver::lookup_by_name_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// ::GList* Resolver::lookup_by_name_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
// SKIP; container return not supported, callee GError not supported

// GList* Resolver::lookup_by_name_with_flags (GResolver* resolver, const gchar* hostname, GResolverNameLookupFlags flags, GCancellable* cancellable, GError ** error);
// ::GList* Resolver::lookup_by_name_with_flags (::GResolver* resolver, const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; container return not supported, callee GError not supported

// void Resolver::lookup_by_name_with_flags_async (GResolver* resolver, const gchar* hostname, GResolverNameLookupFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Resolver::lookup_by_name_with_flags_async (::GResolver* resolver, const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GList* Resolver::lookup_by_name_with_flags_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// ::GList* Resolver::lookup_by_name_with_flags_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
// SKIP; container return not supported, callee GError not supported

// GList* Resolver::lookup_records (GResolver* resolver, const gchar* rrname, GResolverRecordType record_type, GCancellable* cancellable, GError ** error);
// ::GList* Resolver::lookup_records (::GResolver* resolver, const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, GError ** error);
// SKIP; container return not supported, callee GError not supported

// void Resolver::lookup_records_async (GResolver* resolver, const gchar* rrname, GResolverRecordType record_type, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Resolver::lookup_records_async (::GResolver* resolver, const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GList* Resolver::lookup_records_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// ::GList* Resolver::lookup_records_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
// SKIP; container return not supported, callee GError not supported

// void Resolver::lookup_service_async (GResolver* resolver, const gchar* rrname, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Resolver::lookup_service_async (::GResolver* resolver, const char* rrname, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GList* Resolver::lookup_service_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// ::GList* Resolver::lookup_service_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
// SKIP; container return not supported, callee GError not supported

// void Resolver::reload (GResolver* resolver);
// void Resolver::reload (::GResolver* resolver);
virtual void reload_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ResolverClass: public detail::ClassTemplate<Gio::impl::internal::ResolverClassDef, GObject::impl::internal::ObjectClass>
{
typedef ResolverClass self;
typedef detail::ClassTemplate<Gio::impl::internal::ResolverClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gchar* Resolver::lookup_by_address (GResolver* resolver, GInetAddress* address, GCancellable* cancellable, GError ** error);
// char* Resolver::lookup_by_address (::GResolver* resolver, ::GInetAddress* address, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void Resolver::lookup_by_address_async (GResolver* resolver, GInetAddress* address, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Resolver::lookup_by_address_async (::GResolver* resolver, ::GInetAddress* address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gchar* Resolver::lookup_by_address_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// char* Resolver::lookup_by_address_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// GList* Resolver::lookup_by_name (GResolver* resolver, const gchar* hostname, GCancellable* cancellable, GError ** error);
// ::GList* Resolver::lookup_by_name (::GResolver* resolver, const char* hostname, ::GCancellable* cancellable, GError ** error);
// SKIP; container return not supported, callee GError not supported

// void Resolver::lookup_by_name_async (GResolver* resolver, const gchar* hostname, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Resolver::lookup_by_name_async (::GResolver* resolver, const char* hostname, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GList* Resolver::lookup_by_name_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// ::GList* Resolver::lookup_by_name_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
// SKIP; container return not supported, callee GError not supported

// GList* Resolver::lookup_by_name_with_flags (GResolver* resolver, const gchar* hostname, GResolverNameLookupFlags flags, GCancellable* cancellable, GError ** error);
// ::GList* Resolver::lookup_by_name_with_flags (::GResolver* resolver, const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; container return not supported, callee GError not supported

// void Resolver::lookup_by_name_with_flags_async (GResolver* resolver, const gchar* hostname, GResolverNameLookupFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Resolver::lookup_by_name_with_flags_async (::GResolver* resolver, const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GList* Resolver::lookup_by_name_with_flags_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// ::GList* Resolver::lookup_by_name_with_flags_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
// SKIP; container return not supported, callee GError not supported

// GList* Resolver::lookup_records (GResolver* resolver, const gchar* rrname, GResolverRecordType record_type, GCancellable* cancellable, GError ** error);
// ::GList* Resolver::lookup_records (::GResolver* resolver, const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, GError ** error);
// SKIP; container return not supported, callee GError not supported

// void Resolver::lookup_records_async (GResolver* resolver, const gchar* rrname, GResolverRecordType record_type, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Resolver::lookup_records_async (::GResolver* resolver, const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GList* Resolver::lookup_records_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// ::GList* Resolver::lookup_records_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
// SKIP; container return not supported, callee GError not supported

// void Resolver::lookup_service_async (GResolver* resolver, const gchar* rrname, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Resolver::lookup_service_async (::GResolver* resolver, const char* rrname, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GList* Resolver::lookup_service_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// ::GList* Resolver::lookup_service_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
// SKIP; container return not supported, callee GError not supported

// void Resolver::reload (GResolver* resolver);
// void Resolver::reload (::GResolver* resolver);
GI_INLINE_DECL void reload_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ResolverImpl = detail::ObjectImpl<Resolver, internal::ResolverClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
