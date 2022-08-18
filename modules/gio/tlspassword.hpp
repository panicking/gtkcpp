// AUTO-GENERATED

#ifndef _GI_GIO_TLSPASSWORD_HPP_
#define _GI_GIO_TLSPASSWORD_HPP_


namespace gi {

namespace repository {

namespace Gio {


class TlsPassword;

namespace base {


#define GI_GIO_TLSPASSWORD_BASE base::TlsPasswordBase
class TlsPasswordBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GTlsPassword BaseObjectType;

TlsPasswordBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_tls_password_get_type(); } 

// GTlsPassword* g_tls_password_new (GTlsPasswordFlags flags, const gchar* description);
// ::GTlsPassword* g_tls_password_new (::GTlsPasswordFlags flags, const char* description);
static GI_INLINE_DECL Gio::TlsPassword new_ (Gio::TlsPasswordFlags flags, const std::string & description) noexcept;

// const gchar* g_tls_password_get_description (GTlsPassword* password);
// const char* g_tls_password_get_description (::GTlsPassword* password);
GI_INLINE_DECL std::string get_description () noexcept;

// GTlsPasswordFlags g_tls_password_get_flags (GTlsPassword* password);
// ::GTlsPasswordFlags g_tls_password_get_flags (::GTlsPassword* password);
GI_INLINE_DECL Gio::TlsPasswordFlags get_flags () noexcept;

// const guchar* g_tls_password_get_value (GTlsPassword* password, gsize* length);
// const guint8* g_tls_password_get_value (::GTlsPassword* password, gsize* length);
GI_INLINE_DECL std::vector<guint8> get_value () noexcept;

// const gchar* g_tls_password_get_warning (GTlsPassword* password);
// const char* g_tls_password_get_warning (::GTlsPassword* password);
GI_INLINE_DECL std::string get_warning () noexcept;

// void g_tls_password_set_description (GTlsPassword* password, const gchar* description);
// void g_tls_password_set_description (::GTlsPassword* password, const char* description);
GI_INLINE_DECL void set_description (const std::string & description) noexcept;

// void g_tls_password_set_flags (GTlsPassword* password, GTlsPasswordFlags flags);
// void g_tls_password_set_flags (::GTlsPassword* password, ::GTlsPasswordFlags flags);
GI_INLINE_DECL void set_flags (Gio::TlsPasswordFlags flags) noexcept;

// void g_tls_password_set_value (GTlsPassword* password, const guchar* value, gssize length);
// void g_tls_password_set_value (::GTlsPassword* password, const guint8* value, gssize length);
GI_INLINE_DECL void set_value (guint8 * value, gssize length) noexcept;

// void g_tls_password_set_value_full (GTlsPassword* password, guchar* value, gssize length, GDestroyNotify destroy);
// void g_tls_password_set_value_full (::GTlsPassword* password, guint8* value, gssize length, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; callback misses closure info

// void g_tls_password_set_warning (GTlsPassword* password, const gchar* warning);
// void g_tls_password_set_warning (::GTlsPassword* password, const char* warning);
GI_INLINE_DECL void set_warning (const std::string & warning) noexcept;

gi::property_proxy<std::string, base::TlsPasswordBase> property_description()
{ return gi::property_proxy<std::string, base::TlsPasswordBase> (*this, "description"); }
const gi::property_proxy<std::string, base::TlsPasswordBase> property_description() const
{ return gi::property_proxy<std::string, base::TlsPasswordBase> (*this, "description"); }

gi::property_proxy<Gio::TlsPasswordFlags, base::TlsPasswordBase> property_flags()
{ return gi::property_proxy<Gio::TlsPasswordFlags, base::TlsPasswordBase> (*this, "flags"); }
const gi::property_proxy<Gio::TlsPasswordFlags, base::TlsPasswordBase> property_flags() const
{ return gi::property_proxy<Gio::TlsPasswordFlags, base::TlsPasswordBase> (*this, "flags"); }

gi::property_proxy<std::string, base::TlsPasswordBase> property_warning()
{ return gi::property_proxy<std::string, base::TlsPasswordBase> (*this, "warning"); }
const gi::property_proxy<std::string, base::TlsPasswordBase> property_warning() const
{ return gi::property_proxy<std::string, base::TlsPasswordBase> (*this, "warning"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tlspassword_extra_def.hpp>)
#include <gio/tlspassword_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tlspassword_extra.hpp>)
#include <gio/tlspassword_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class TlsPassword : public GI_GIO_TLSPASSWORD_BASE
{ typedef GI_GIO_TLSPASSWORD_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GTlsPassword>
{ typedef Gio::TlsPassword type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class TlsPasswordClassDef
{
typedef TlsPasswordClassDef self;
public:
typedef Gio::TlsPassword instance_type;
typedef ::GTlsPasswordClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// const gchar* TlsPassword::get_default_warning (GTlsPassword* password);
// const char* TlsPassword::get_default_warning (::GTlsPassword* password);
// SKIP; invalid callback return transfer none

// const guchar* TlsPassword::get_value (GTlsPassword* password, gsize* length);
// const guint8* TlsPassword::get_value (::GTlsPassword* password, gsize* length);
// SKIP; container return not supported, virtual-method out parameter not supported

// void TlsPassword::set_value (GTlsPassword* password, guchar* value, gssize length, GDestroyNotify destroy);
// void TlsPassword::set_value (::GTlsPassword* password, guint8* value, gssize length, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; virtual-method container parameter not supported, virtual-method callback parameter not supported


};

GI_CLASS_IMPL_BEGIN


class TlsPasswordClass: public detail::ClassTemplate<Gio::impl::internal::TlsPasswordClassDef, GObject::impl::internal::ObjectClass>
{
typedef TlsPasswordClass self;
typedef detail::ClassTemplate<Gio::impl::internal::TlsPasswordClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// const gchar* TlsPassword::get_default_warning (GTlsPassword* password);
// const char* TlsPassword::get_default_warning (::GTlsPassword* password);
// SKIP; invalid callback return transfer none

// const guchar* TlsPassword::get_value (GTlsPassword* password, gsize* length);
// const guint8* TlsPassword::get_value (::GTlsPassword* password, gsize* length);
// SKIP; container return not supported, virtual-method out parameter not supported

// void TlsPassword::set_value (GTlsPassword* password, guchar* value, gssize length, GDestroyNotify destroy);
// void TlsPassword::set_value (::GTlsPassword* password, guint8* value, gssize length, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; virtual-method container parameter not supported, virtual-method callback parameter not supported


};

} // namespace internal

GI_CLASS_IMPL_END

using TlsPasswordImpl = detail::ObjectImpl<TlsPassword, internal::TlsPasswordClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
