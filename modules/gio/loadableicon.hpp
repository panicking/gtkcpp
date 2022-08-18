// AUTO-GENERATED

#ifndef _GI_GIO_LOADABLEICON_HPP_
#define _GI_GIO_LOADABLEICON_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class InputStream;

class LoadableIcon;

namespace base {


#define GI_GIO_LOADABLEICON_BASE base::LoadableIconBase
class LoadableIconBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GLoadableIcon BaseObjectType;

LoadableIconBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_loadable_icon_get_type(); } 

// GInputStream* g_loadable_icon_load (GLoadableIcon* icon, int size, char** type, GCancellable* cancellable, GError ** error);
// ::GInputStream* g_loadable_icon_load (::GLoadableIcon* icon, gint size, char** type, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::InputStream load (gint size, std::string * type, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::InputStream load (gint size, std::string * type = nullptr);
GI_INLINE_DECL Gio::InputStream load (gint size, std::string * type, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::InputStream load (gint size, std::string * type, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::InputStream, std::string> load (gint size, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<Gio::InputStream, std::string> load (gint size);
GI_INLINE_DECL std::tuple<Gio::InputStream, std::string> load (gint size, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::InputStream, std::string> load (gint size, GLib::Error * _error) noexcept;

// void g_loadable_icon_load_async (GLoadableIcon* icon, int size, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_loadable_icon_load_async (::GLoadableIcon* icon, gint size, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void load_async (gint size, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void load_async (gint size, Gio::AsyncReadyCallback callback) noexcept;

// GInputStream* g_loadable_icon_load_finish (GLoadableIcon* icon, GAsyncResult* res, char** type, GError ** error);
// ::GInputStream* g_loadable_icon_load_finish (::GLoadableIcon* icon, ::GAsyncResult* res, char** type, GError ** error);
GI_INLINE_DECL Gio::InputStream load_finish (Gio::AsyncResult res, std::string * type = nullptr);
GI_INLINE_DECL Gio::InputStream load_finish (Gio::AsyncResult res, std::string * type, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::InputStream, std::string> load_finish (Gio::AsyncResult res);
GI_INLINE_DECL std::tuple<Gio::InputStream, std::string> load_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/loadableicon_extra_def.hpp>)
#include <gio/loadableicon_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/loadableicon_extra.hpp>)
#include <gio/loadableicon_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class LoadableIcon : public GI_GIO_LOADABLEICON_BASE
{ typedef GI_GIO_LOADABLEICON_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GLoadableIcon>
{ typedef Gio::LoadableIcon type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class LoadableIconIfaceDef
{
typedef LoadableIconIfaceDef self;
public:
typedef Gio::LoadableIcon instance_type;
typedef ::GLoadableIconIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GInputStream* LoadableIcon::load (GLoadableIcon* icon, int size, char** type, GCancellable* cancellable, GError ** error);
// ::GInputStream* LoadableIcon::load (::GLoadableIcon* icon, gint size, char** type, ::GCancellable* cancellable, GError ** error);
// SKIP; virtual-method out parameter not supported, callee GError not supported

// void LoadableIcon::load_async (GLoadableIcon* icon, int size, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void LoadableIcon::load_async (::GLoadableIcon* icon, gint size, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GInputStream* LoadableIcon::load_finish (GLoadableIcon* icon, GAsyncResult* res, char** type, GError ** error);
// ::GInputStream* LoadableIcon::load_finish (::GLoadableIcon* icon, ::GAsyncResult* res, char** type, GError ** error);
// SKIP; virtual-method out parameter not supported, callee GError not supported


};

using LoadableIconImpl = detail::InterfaceImpl<LoadableIconIfaceDef>;

class LoadableIconIfaceClassImpl: public detail::InterfaceClassImpl<LoadableIconImpl>
{
typedef LoadableIconIfaceClassImpl self;
typedef detail::InterfaceClassImpl<LoadableIconImpl> super;

protected:
using super::super;

// GInputStream* LoadableIcon::load (GLoadableIcon* icon, int size, char** type, GCancellable* cancellable, GError ** error);
// ::GInputStream* LoadableIcon::load (::GLoadableIcon* icon, gint size, char** type, ::GCancellable* cancellable, GError ** error);
// SKIP; virtual-method out parameter not supported, callee GError not supported

// void LoadableIcon::load_async (GLoadableIcon* icon, int size, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void LoadableIcon::load_async (::GLoadableIcon* icon, gint size, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GInputStream* LoadableIcon::load_finish (GLoadableIcon* icon, GAsyncResult* res, char** type, GError ** error);
// ::GInputStream* LoadableIcon::load_finish (::GLoadableIcon* icon, ::GAsyncResult* res, char** type, GError ** error);
// SKIP; virtual-method out parameter not supported, callee GError not supported


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
