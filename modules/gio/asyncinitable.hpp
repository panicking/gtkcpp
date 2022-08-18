// AUTO-GENERATED

#ifndef _GI_GIO_ASYNCINITABLE_HPP_
#define _GI_GIO_ASYNCINITABLE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;

class AsyncInitable;

namespace base {


#define GI_GIO_ASYNCINITABLE_BASE base::AsyncInitableBase
class AsyncInitableBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GAsyncInitable BaseObjectType;

AsyncInitableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_async_initable_get_type(); } 

// void g_async_initable_new_async (GType object_type, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data, const gchar* first_property_name);
// void g_async_initable_new_async (GType object_type, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data, const char* first_property_name);
// IGNORE; not introspectable, varargs not supported

// void g_async_initable_new_valist_async (GType object_type, const gchar* first_property_name, va_list var_args, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_async_initable_new_valist_async (GType object_type, const char* first_property_name,  var_args, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; not introspectable, var_args type  not supported

// void g_async_initable_newv_async (GType object_type, guint n_parameters, GParameter* parameters, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_async_initable_newv_async (GType object_type, guint n_parameters,  parameters, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated

// void g_async_initable_init_async (GAsyncInitable* initable, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_async_initable_init_async (::GAsyncInitable* initable, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void init_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void init_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_async_initable_init_finish (GAsyncInitable* initable, GAsyncResult* res, GError ** error);
// gboolean g_async_initable_init_finish (::GAsyncInitable* initable, ::GAsyncResult* res, GError ** error);
GI_INLINE_DECL bool init_finish (Gio::AsyncResult res);
GI_INLINE_DECL bool init_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GObject* g_async_initable_new_finish (GAsyncInitable* initable, GAsyncResult* res, GError ** error);
// ::GObject* g_async_initable_new_finish (::GAsyncInitable* initable, ::GAsyncResult* res, GError ** error);
GI_INLINE_DECL GObject::Object new_finish (Gio::AsyncResult res);
GI_INLINE_DECL GObject::Object new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/asyncinitable_extra_def.hpp>)
#include <gio/asyncinitable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/asyncinitable_extra.hpp>)
#include <gio/asyncinitable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class AsyncInitable : public GI_GIO_ASYNCINITABLE_BASE
{ typedef GI_GIO_ASYNCINITABLE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GAsyncInitable>
{ typedef Gio::AsyncInitable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class AsyncInitableIfaceDef
{
typedef AsyncInitableIfaceDef self;
public:
typedef Gio::AsyncInitable instance_type;
typedef ::GAsyncInitableIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void AsyncInitable::init_async (GAsyncInitable* initable, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void AsyncInitable::init_async (::GAsyncInitable* initable, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean AsyncInitable::init_finish (GAsyncInitable* initable, GAsyncResult* res, GError ** error);
// gboolean AsyncInitable::init_finish (::GAsyncInitable* initable, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported


};

using AsyncInitableImpl = detail::InterfaceImpl<AsyncInitableIfaceDef>;

class AsyncInitableIfaceClassImpl: public detail::InterfaceClassImpl<AsyncInitableImpl>
{
typedef AsyncInitableIfaceClassImpl self;
typedef detail::InterfaceClassImpl<AsyncInitableImpl> super;

protected:
using super::super;

// void AsyncInitable::init_async (GAsyncInitable* initable, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void AsyncInitable::init_async (::GAsyncInitable* initable, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean AsyncInitable::init_finish (GAsyncInitable* initable, GAsyncResult* res, GError ** error);
// gboolean AsyncInitable::init_finish (::GAsyncInitable* initable, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
