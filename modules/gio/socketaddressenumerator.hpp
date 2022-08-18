// AUTO-GENERATED

#ifndef _GI_GIO_SOCKETADDRESSENUMERATOR_HPP_
#define _GI_GIO_SOCKETADDRESSENUMERATOR_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class SocketAddress;

class SocketAddressEnumerator;

namespace base {


#define GI_GIO_SOCKETADDRESSENUMERATOR_BASE base::SocketAddressEnumeratorBase
class SocketAddressEnumeratorBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GSocketAddressEnumerator BaseObjectType;

SocketAddressEnumeratorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_socket_address_enumerator_get_type(); } 

// GSocketAddress* g_socket_address_enumerator_next (GSocketAddressEnumerator* enumerator, GCancellable* cancellable, GError ** error);
// ::GSocketAddress* g_socket_address_enumerator_next (::GSocketAddressEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::SocketAddress next (Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::SocketAddress next ();
GI_INLINE_DECL Gio::SocketAddress next (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::SocketAddress next (GLib::Error * _error) noexcept;

// void g_socket_address_enumerator_next_async (GSocketAddressEnumerator* enumerator, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_socket_address_enumerator_next_async (::GSocketAddressEnumerator* enumerator, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void next_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void next_async (Gio::AsyncReadyCallback callback) noexcept;

// GSocketAddress* g_socket_address_enumerator_next_finish (GSocketAddressEnumerator* enumerator, GAsyncResult* result, GError ** error);
// ::GSocketAddress* g_socket_address_enumerator_next_finish (::GSocketAddressEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL Gio::SocketAddress next_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::SocketAddress next_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/socketaddressenumerator_extra_def.hpp>)
#include <gio/socketaddressenumerator_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/socketaddressenumerator_extra.hpp>)
#include <gio/socketaddressenumerator_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SocketAddressEnumerator : public GI_GIO_SOCKETADDRESSENUMERATOR_BASE
{ typedef GI_GIO_SOCKETADDRESSENUMERATOR_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSocketAddressEnumerator>
{ typedef Gio::SocketAddressEnumerator type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class SocketAddressEnumeratorClassDef
{
typedef SocketAddressEnumeratorClassDef self;
public:
typedef Gio::SocketAddressEnumerator instance_type;
typedef ::GSocketAddressEnumeratorClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// GSocketAddress* SocketAddressEnumerator::next (GSocketAddressEnumerator* enumerator, GCancellable* cancellable, GError ** error);
// ::GSocketAddress* SocketAddressEnumerator::next (::GSocketAddressEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void SocketAddressEnumerator::next_async (GSocketAddressEnumerator* enumerator, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void SocketAddressEnumerator::next_async (::GSocketAddressEnumerator* enumerator, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GSocketAddress* SocketAddressEnumerator::next_finish (GSocketAddressEnumerator* enumerator, GAsyncResult* result, GError ** error);
// ::GSocketAddress* SocketAddressEnumerator::next_finish (::GSocketAddressEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported


};

GI_CLASS_IMPL_BEGIN


class SocketAddressEnumeratorClass: public detail::ClassTemplate<Gio::impl::internal::SocketAddressEnumeratorClassDef, GObject::impl::internal::ObjectClass>
{
typedef SocketAddressEnumeratorClass self;
typedef detail::ClassTemplate<Gio::impl::internal::SocketAddressEnumeratorClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// GSocketAddress* SocketAddressEnumerator::next (GSocketAddressEnumerator* enumerator, GCancellable* cancellable, GError ** error);
// ::GSocketAddress* SocketAddressEnumerator::next (::GSocketAddressEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void SocketAddressEnumerator::next_async (GSocketAddressEnumerator* enumerator, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void SocketAddressEnumerator::next_async (::GSocketAddressEnumerator* enumerator, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GSocketAddress* SocketAddressEnumerator::next_finish (GSocketAddressEnumerator* enumerator, GAsyncResult* result, GError ** error);
// ::GSocketAddress* SocketAddressEnumerator::next_finish (::GSocketAddressEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported


};

} // namespace internal

GI_CLASS_IMPL_END

using SocketAddressEnumeratorImpl = detail::ObjectImpl<SocketAddressEnumerator, internal::SocketAddressEnumeratorClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
