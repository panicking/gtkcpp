// AUTO-GENERATED

#ifndef _GI_GIO_THREADEDSOCKETSERVICE_HPP_
#define _GI_GIO_THREADEDSOCKETSERVICE_HPP_

#include "socketservice.hpp"

namespace gi {

namespace repository {

namespace Gio {

class SocketConnection;

class ThreadedSocketService;

namespace base {


#define GI_GIO_THREADEDSOCKETSERVICE_BASE base::ThreadedSocketServiceBase
class ThreadedSocketServiceBase : public Gio::SocketService
{
typedef Gio::SocketService super_type;
public:
typedef ::GThreadedSocketService BaseObjectType;

ThreadedSocketServiceBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_threaded_socket_service_get_type(); } 

// GSocketService* g_threaded_socket_service_new (int max_threads);
// ::GThreadedSocketService* g_threaded_socket_service_new (gint max_threads);
static GI_INLINE_DECL Gio::ThreadedSocketService new_ (gint max_threads) noexcept;

gi::property_proxy<gint, base::ThreadedSocketServiceBase> property_max_threads()
{ return gi::property_proxy<gint, base::ThreadedSocketServiceBase> (*this, "max-threads"); }
const gi::property_proxy<gint, base::ThreadedSocketServiceBase> property_max_threads() const
{ return gi::property_proxy<gint, base::ThreadedSocketServiceBase> (*this, "max-threads"); }

// signal run
gi::signal_proxy<bool(Gio::ThreadedSocketService, Gio::SocketConnection connection, GObject::Object source_object)> signal_run()
{ return gi::signal_proxy<bool(Gio::ThreadedSocketService, Gio::SocketConnection connection, GObject::Object source_object)> (*this, "run"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/threadedsocketservice_extra_def.hpp>)
#include <gio/threadedsocketservice_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/threadedsocketservice_extra.hpp>)
#include <gio/threadedsocketservice_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class ThreadedSocketService : public GI_GIO_THREADEDSOCKETSERVICE_BASE
{ typedef GI_GIO_THREADEDSOCKETSERVICE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GThreadedSocketService>
{ typedef Gio::ThreadedSocketService type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ThreadedSocketServiceClassDef
{
typedef ThreadedSocketServiceClassDef self;
public:
typedef Gio::ThreadedSocketService instance_type;
typedef ::GThreadedSocketServiceClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean ThreadedSocketService::run (GThreadedSocketService* service, GSocketConnection* connection, GObject* source_object);
// gboolean ThreadedSocketService::run (::GThreadedSocketService* service, ::GSocketConnection* connection, ::GObject* source_object);
virtual bool run_ (Gio::SocketConnection connection, GObject::Object source_object) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ThreadedSocketServiceClass: public detail::ClassTemplate<Gio::impl::internal::ThreadedSocketServiceClassDef, Gio::impl::internal::SocketServiceClass>
{
typedef ThreadedSocketServiceClass self;
typedef detail::ClassTemplate<Gio::impl::internal::ThreadedSocketServiceClassDef, Gio::impl::internal::SocketServiceClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean ThreadedSocketService::run (GThreadedSocketService* service, GSocketConnection* connection, GObject* source_object);
// gboolean ThreadedSocketService::run (::GThreadedSocketService* service, ::GSocketConnection* connection, ::GObject* source_object);
GI_INLINE_DECL bool run_ (Gio::SocketConnection connection, GObject::Object source_object) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ThreadedSocketServiceImpl = detail::ObjectImpl<ThreadedSocketService, internal::ThreadedSocketServiceClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
