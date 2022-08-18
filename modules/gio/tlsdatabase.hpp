// AUTO-GENERATED

#ifndef _GI_GIO_TLSDATABASE_HPP_
#define _GI_GIO_TLSDATABASE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class SocketConnectable;
class TlsCertificate;
class TlsInteraction;

class TlsDatabase;

namespace base {


#define GI_GIO_TLSDATABASE_BASE base::TlsDatabaseBase
class TlsDatabaseBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GTlsDatabase BaseObjectType;

TlsDatabaseBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_tls_database_get_type(); } 

// gchar* g_tls_database_create_certificate_handle (GTlsDatabase* self, GTlsCertificate* certificate);
// char* g_tls_database_create_certificate_handle (::GTlsDatabase* self, ::GTlsCertificate* certificate);
GI_INLINE_DECL std::string create_certificate_handle (Gio::TlsCertificate certificate) noexcept;

// GTlsCertificate* g_tls_database_lookup_certificate_for_handle (GTlsDatabase* self, const gchar* handle, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GError ** error);
// ::GTlsCertificate* g_tls_database_lookup_certificate_for_handle (::GTlsDatabase* self, const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_for_handle (const std::string & handle, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_for_handle (const std::string & handle, Gio::TlsDatabaseLookupFlags flags);
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_for_handle (const std::string & handle, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_for_handle (const std::string & handle, Gio::TlsDatabaseLookupFlags flags, GLib::Error * _error) noexcept;

// void g_tls_database_lookup_certificate_for_handle_async (GTlsDatabase* self, const gchar* handle, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_tls_database_lookup_certificate_for_handle_async (::GTlsDatabase* self, const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void lookup_certificate_for_handle_async (const std::string & handle, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void lookup_certificate_for_handle_async (const std::string & handle, Gio::TlsDatabaseLookupFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// GTlsCertificate* g_tls_database_lookup_certificate_for_handle_finish (GTlsDatabase* self, GAsyncResult* result, GError ** error);
// ::GTlsCertificate* g_tls_database_lookup_certificate_for_handle_finish (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_for_handle_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_for_handle_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GTlsCertificate* g_tls_database_lookup_certificate_issuer (GTlsDatabase* self, GTlsCertificate* certificate, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GError ** error);
// ::GTlsCertificate* g_tls_database_lookup_certificate_issuer (::GTlsDatabase* self, ::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_issuer (Gio::TlsCertificate certificate, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_issuer (Gio::TlsCertificate certificate, Gio::TlsDatabaseLookupFlags flags);
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_issuer (Gio::TlsCertificate certificate, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_issuer (Gio::TlsCertificate certificate, Gio::TlsDatabaseLookupFlags flags, GLib::Error * _error) noexcept;

// void g_tls_database_lookup_certificate_issuer_async (GTlsDatabase* self, GTlsCertificate* certificate, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_tls_database_lookup_certificate_issuer_async (::GTlsDatabase* self, ::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void lookup_certificate_issuer_async (Gio::TlsCertificate certificate, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void lookup_certificate_issuer_async (Gio::TlsCertificate certificate, Gio::TlsDatabaseLookupFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// GTlsCertificate* g_tls_database_lookup_certificate_issuer_finish (GTlsDatabase* self, GAsyncResult* result, GError ** error);
// ::GTlsCertificate* g_tls_database_lookup_certificate_issuer_finish (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_issuer_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::TlsCertificate lookup_certificate_issuer_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GList* g_tls_database_lookup_certificates_issued_by (GTlsDatabase* self, GByteArray* issuer_raw_dn, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GError ** error);
// ::GList* g_tls_database_lookup_certificates_issued_by (::GTlsDatabase* self, ::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL std::vector<Gio::TlsCertificate> lookup_certificates_issued_by (GLib::ByteArray issuer_raw_dn, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL std::vector<Gio::TlsCertificate> lookup_certificates_issued_by (GLib::ByteArray issuer_raw_dn, Gio::TlsDatabaseLookupFlags flags);
GI_INLINE_DECL std::vector<Gio::TlsCertificate> lookup_certificates_issued_by (GLib::ByteArray issuer_raw_dn, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::vector<Gio::TlsCertificate> lookup_certificates_issued_by (GLib::ByteArray issuer_raw_dn, Gio::TlsDatabaseLookupFlags flags, GLib::Error * _error) noexcept;

// void g_tls_database_lookup_certificates_issued_by_async (GTlsDatabase* self, GByteArray* issuer_raw_dn, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_tls_database_lookup_certificates_issued_by_async (::GTlsDatabase* self, ::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void lookup_certificates_issued_by_async (GLib::ByteArray issuer_raw_dn, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void lookup_certificates_issued_by_async (GLib::ByteArray issuer_raw_dn, Gio::TlsDatabaseLookupFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// GList* g_tls_database_lookup_certificates_issued_by_finish (GTlsDatabase* self, GAsyncResult* result, GError ** error);
// ::GList* g_tls_database_lookup_certificates_issued_by_finish (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL std::vector<Gio::TlsCertificate> lookup_certificates_issued_by_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::vector<Gio::TlsCertificate> lookup_certificates_issued_by_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GTlsCertificateFlags g_tls_database_verify_chain (GTlsDatabase* self, GTlsCertificate* chain, const gchar* purpose, GSocketConnectable* identity, GTlsInteraction* interaction, GTlsDatabaseVerifyFlags flags, GCancellable* cancellable, GError ** error);
// ::GTlsCertificateFlags g_tls_database_verify_chain (::GTlsDatabase* self, ::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::TlsCertificateFlags verify_chain (Gio::TlsCertificate chain, const std::string & purpose, Gio::SocketConnectable identity, Gio::TlsInteraction interaction, Gio::TlsDatabaseVerifyFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::TlsCertificateFlags verify_chain (Gio::TlsCertificate chain, const std::string & purpose, Gio::TlsDatabaseVerifyFlags flags);
GI_INLINE_DECL Gio::TlsCertificateFlags verify_chain (Gio::TlsCertificate chain, const std::string & purpose, Gio::SocketConnectable identity, Gio::TlsInteraction interaction, Gio::TlsDatabaseVerifyFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::TlsCertificateFlags verify_chain (Gio::TlsCertificate chain, const std::string & purpose, Gio::TlsDatabaseVerifyFlags flags, GLib::Error * _error) noexcept;

// void g_tls_database_verify_chain_async (GTlsDatabase* self, GTlsCertificate* chain, const gchar* purpose, GSocketConnectable* identity, GTlsInteraction* interaction, GTlsDatabaseVerifyFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_tls_database_verify_chain_async (::GTlsDatabase* self, ::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void verify_chain_async (Gio::TlsCertificate chain, const std::string & purpose, Gio::SocketConnectable identity, Gio::TlsInteraction interaction, Gio::TlsDatabaseVerifyFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void verify_chain_async (Gio::TlsCertificate chain, const std::string & purpose, Gio::TlsDatabaseVerifyFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// GTlsCertificateFlags g_tls_database_verify_chain_finish (GTlsDatabase* self, GAsyncResult* result, GError ** error);
// ::GTlsCertificateFlags g_tls_database_verify_chain_finish (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL Gio::TlsCertificateFlags verify_chain_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::TlsCertificateFlags verify_chain_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tlsdatabase_extra_def.hpp>)
#include <gio/tlsdatabase_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tlsdatabase_extra.hpp>)
#include <gio/tlsdatabase_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class TlsDatabase : public GI_GIO_TLSDATABASE_BASE
{ typedef GI_GIO_TLSDATABASE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GTlsDatabase>
{ typedef Gio::TlsDatabase type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class TlsDatabaseClassDef
{
typedef TlsDatabaseClassDef self;
public:
typedef Gio::TlsDatabase instance_type;
typedef ::GTlsDatabaseClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gchar* TlsDatabase::create_certificate_handle (GTlsDatabase* self, GTlsCertificate* certificate);
// char* TlsDatabase::create_certificate_handle (::GTlsDatabase* self, ::GTlsCertificate* certificate);
virtual std::string create_certificate_handle_ (Gio::TlsCertificate certificate) noexcept = 0;

// GTlsCertificate* TlsDatabase::lookup_certificate_for_handle (GTlsDatabase* self, const gchar* handle, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GError ** error);
// ::GTlsCertificate* TlsDatabase::lookup_certificate_for_handle (::GTlsDatabase* self, const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void TlsDatabase::lookup_certificate_for_handle_async (GTlsDatabase* self, const gchar* handle, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void TlsDatabase::lookup_certificate_for_handle_async (::GTlsDatabase* self, const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GTlsCertificate* TlsDatabase::lookup_certificate_for_handle_finish (GTlsDatabase* self, GAsyncResult* result, GError ** error);
// ::GTlsCertificate* TlsDatabase::lookup_certificate_for_handle_finish (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// GTlsCertificate* TlsDatabase::lookup_certificate_issuer (GTlsDatabase* self, GTlsCertificate* certificate, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GError ** error);
// ::GTlsCertificate* TlsDatabase::lookup_certificate_issuer (::GTlsDatabase* self, ::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void TlsDatabase::lookup_certificate_issuer_async (GTlsDatabase* self, GTlsCertificate* certificate, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void TlsDatabase::lookup_certificate_issuer_async (::GTlsDatabase* self, ::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GTlsCertificate* TlsDatabase::lookup_certificate_issuer_finish (GTlsDatabase* self, GAsyncResult* result, GError ** error);
// ::GTlsCertificate* TlsDatabase::lookup_certificate_issuer_finish (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// GList* TlsDatabase::lookup_certificates_issued_by (GTlsDatabase* self, GByteArray* issuer_raw_dn, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GError ** error);
// ::GList* TlsDatabase::lookup_certificates_issued_by (::GTlsDatabase* self, ::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; container return not supported, callee GError not supported

// void TlsDatabase::lookup_certificates_issued_by_async (GTlsDatabase* self, GByteArray* issuer_raw_dn, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void TlsDatabase::lookup_certificates_issued_by_async (::GTlsDatabase* self, ::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GList* TlsDatabase::lookup_certificates_issued_by_finish (GTlsDatabase* self, GAsyncResult* result, GError ** error);
// ::GList* TlsDatabase::lookup_certificates_issued_by_finish (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
// SKIP; container return not supported, callee GError not supported

// GTlsCertificateFlags TlsDatabase::verify_chain (GTlsDatabase* self, GTlsCertificate* chain, const gchar* purpose, GSocketConnectable* identity, GTlsInteraction* interaction, GTlsDatabaseVerifyFlags flags, GCancellable* cancellable, GError ** error);
// ::GTlsCertificateFlags TlsDatabase::verify_chain (::GTlsDatabase* self, ::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void TlsDatabase::verify_chain_async (GTlsDatabase* self, GTlsCertificate* chain, const gchar* purpose, GSocketConnectable* identity, GTlsInteraction* interaction, GTlsDatabaseVerifyFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void TlsDatabase::verify_chain_async (::GTlsDatabase* self, ::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GTlsCertificateFlags TlsDatabase::verify_chain_finish (GTlsDatabase* self, GAsyncResult* result, GError ** error);
// ::GTlsCertificateFlags TlsDatabase::verify_chain_finish (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported


};

GI_CLASS_IMPL_BEGIN


class TlsDatabaseClass: public detail::ClassTemplate<Gio::impl::internal::TlsDatabaseClassDef, GObject::impl::internal::ObjectClass>
{
typedef TlsDatabaseClass self;
typedef detail::ClassTemplate<Gio::impl::internal::TlsDatabaseClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gchar* TlsDatabase::create_certificate_handle (GTlsDatabase* self, GTlsCertificate* certificate);
// char* TlsDatabase::create_certificate_handle (::GTlsDatabase* self, ::GTlsCertificate* certificate);
GI_INLINE_DECL std::string create_certificate_handle_ (Gio::TlsCertificate certificate) noexcept override;

// GTlsCertificate* TlsDatabase::lookup_certificate_for_handle (GTlsDatabase* self, const gchar* handle, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GError ** error);
// ::GTlsCertificate* TlsDatabase::lookup_certificate_for_handle (::GTlsDatabase* self, const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void TlsDatabase::lookup_certificate_for_handle_async (GTlsDatabase* self, const gchar* handle, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void TlsDatabase::lookup_certificate_for_handle_async (::GTlsDatabase* self, const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GTlsCertificate* TlsDatabase::lookup_certificate_for_handle_finish (GTlsDatabase* self, GAsyncResult* result, GError ** error);
// ::GTlsCertificate* TlsDatabase::lookup_certificate_for_handle_finish (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// GTlsCertificate* TlsDatabase::lookup_certificate_issuer (GTlsDatabase* self, GTlsCertificate* certificate, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GError ** error);
// ::GTlsCertificate* TlsDatabase::lookup_certificate_issuer (::GTlsDatabase* self, ::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void TlsDatabase::lookup_certificate_issuer_async (GTlsDatabase* self, GTlsCertificate* certificate, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void TlsDatabase::lookup_certificate_issuer_async (::GTlsDatabase* self, ::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GTlsCertificate* TlsDatabase::lookup_certificate_issuer_finish (GTlsDatabase* self, GAsyncResult* result, GError ** error);
// ::GTlsCertificate* TlsDatabase::lookup_certificate_issuer_finish (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// GList* TlsDatabase::lookup_certificates_issued_by (GTlsDatabase* self, GByteArray* issuer_raw_dn, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GError ** error);
// ::GList* TlsDatabase::lookup_certificates_issued_by (::GTlsDatabase* self, ::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; container return not supported, callee GError not supported

// void TlsDatabase::lookup_certificates_issued_by_async (GTlsDatabase* self, GByteArray* issuer_raw_dn, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void TlsDatabase::lookup_certificates_issued_by_async (::GTlsDatabase* self, ::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GList* TlsDatabase::lookup_certificates_issued_by_finish (GTlsDatabase* self, GAsyncResult* result, GError ** error);
// ::GList* TlsDatabase::lookup_certificates_issued_by_finish (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
// SKIP; container return not supported, callee GError not supported

// GTlsCertificateFlags TlsDatabase::verify_chain (GTlsDatabase* self, GTlsCertificate* chain, const gchar* purpose, GSocketConnectable* identity, GTlsInteraction* interaction, GTlsDatabaseVerifyFlags flags, GCancellable* cancellable, GError ** error);
// ::GTlsCertificateFlags TlsDatabase::verify_chain (::GTlsDatabase* self, ::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void TlsDatabase::verify_chain_async (GTlsDatabase* self, GTlsCertificate* chain, const gchar* purpose, GSocketConnectable* identity, GTlsInteraction* interaction, GTlsDatabaseVerifyFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void TlsDatabase::verify_chain_async (::GTlsDatabase* self, ::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GTlsCertificateFlags TlsDatabase::verify_chain_finish (GTlsDatabase* self, GAsyncResult* result, GError ** error);
// ::GTlsCertificateFlags TlsDatabase::verify_chain_finish (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported


};

} // namespace internal

GI_CLASS_IMPL_END

using TlsDatabaseImpl = detail::ObjectImpl<TlsDatabase, internal::TlsDatabaseClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
