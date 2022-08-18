// AUTO-GENERATED

#ifndef _GI_GST_BUS_HPP_
#define _GI_GST_BUS_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Gst {

class Message;

class Bus;

namespace base {


#define GI_GST_BUS_BASE base::BusBase
class BusBase : public Gst::Object
{
typedef Gst::Object super_type;
public:
typedef ::GstBus BaseObjectType;

BusBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_bus_get_type(); } 

// GstBus* gst_bus_new ();
// ::GstBus* gst_bus_new ();
static GI_INLINE_DECL Gst::Bus new_ () noexcept;

// void gst_bus_add_signal_watch (GstBus* bus);
// void gst_bus_add_signal_watch (::GstBus* bus);
GI_INLINE_DECL void add_signal_watch () noexcept;

// void gst_bus_add_signal_watch_full (GstBus* bus, gint priority);
// void gst_bus_add_signal_watch_full (::GstBus* bus, gint priority);
GI_INLINE_DECL void add_signal_watch_full (gint priority) noexcept;

// guint gst_bus_add_watch (GstBus* bus, GstBusFunc func, gpointer user_data);
// guint gst_bus_add_watch (::GstBus* bus, Gst::BusFunc::cfunction_type func, void* user_data);
// IGNORE; not introspectable; shadowed-by add_watch_full

// guint gst_bus_add_watch_full (GstBus* bus, gint priority, GstBusFunc func, gpointer user_data, GDestroyNotify notify);
// guint gst_bus_add_watch_full (::GstBus* bus, gint priority, Gst::BusFunc::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
GI_INLINE_DECL guint add_watch (gint priority, Gst::BusFunc func) noexcept;

// gboolean gst_bus_async_signal_func (GstBus* bus, GstMessage* message, gpointer data);
// gboolean gst_bus_async_signal_func (::GstBus* bus, ::GstMessage* message, void* data);
GI_INLINE_DECL bool async_signal_func (Gst::Message message, void* data) noexcept;

// GSource* gst_bus_create_watch (GstBus* bus);
// ::GSource* gst_bus_create_watch (::GstBus* bus);
GI_INLINE_DECL GLib::Source create_watch () noexcept;

// void gst_bus_disable_sync_message_emission (GstBus* bus);
// void gst_bus_disable_sync_message_emission (::GstBus* bus);
GI_INLINE_DECL void disable_sync_message_emission () noexcept;

// void gst_bus_enable_sync_message_emission (GstBus* bus);
// void gst_bus_enable_sync_message_emission (::GstBus* bus);
GI_INLINE_DECL void enable_sync_message_emission () noexcept;

// void gst_bus_get_pollfd (GstBus* bus, GPollFD* fd);
// void gst_bus_get_pollfd (::GstBus* bus, ::GPollFD* fd);
GI_INLINE_DECL void get_pollfd (GLib::PollFD & fd) noexcept;
GI_INLINE_DECL GLib::PollFD get_pollfd () noexcept;

// gboolean gst_bus_have_pending (GstBus* bus);
// gboolean gst_bus_have_pending (::GstBus* bus);
GI_INLINE_DECL bool have_pending () noexcept;

// GstMessage* gst_bus_peek (GstBus* bus);
// ::GstMessage* gst_bus_peek (::GstBus* bus);
GI_INLINE_DECL Gst::Message peek () noexcept;

// GstMessage* gst_bus_poll (GstBus* bus, GstMessageType events, GstClockTime timeout);
// ::GstMessage* gst_bus_poll (::GstBus* bus, ::GstMessageType events, ::GstClockTime timeout);
GI_INLINE_DECL Gst::Message poll (Gst::MessageType events, ::GstClockTime timeout) noexcept;

// GstMessage* gst_bus_pop (GstBus* bus);
// ::GstMessage* gst_bus_pop (::GstBus* bus);
GI_INLINE_DECL Gst::Message pop () noexcept;

// GstMessage* gst_bus_pop_filtered (GstBus* bus, GstMessageType types);
// ::GstMessage* gst_bus_pop_filtered (::GstBus* bus, ::GstMessageType types);
GI_INLINE_DECL Gst::Message pop_filtered (Gst::MessageType types) noexcept;

// gboolean gst_bus_post (GstBus* bus, GstMessage* message);
// gboolean gst_bus_post (::GstBus* bus, ::GstMessage* message);
GI_INLINE_DECL bool post (Gst::Message message) noexcept;

// void gst_bus_remove_signal_watch (GstBus* bus);
// void gst_bus_remove_signal_watch (::GstBus* bus);
GI_INLINE_DECL void remove_signal_watch () noexcept;

// gboolean gst_bus_remove_watch (GstBus* bus);
// gboolean gst_bus_remove_watch (::GstBus* bus);
GI_INLINE_DECL bool remove_watch () noexcept;

// void gst_bus_set_flushing (GstBus* bus, gboolean flushing);
// void gst_bus_set_flushing (::GstBus* bus, gboolean flushing);
GI_INLINE_DECL void set_flushing (gboolean flushing) noexcept;

// void gst_bus_set_sync_handler (GstBus* bus, GstBusSyncHandler func, gpointer user_data, GDestroyNotify notify);
// void gst_bus_set_sync_handler (::GstBus* bus, Gst::BusSyncHandler::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
GI_INLINE_DECL void set_sync_handler (Gst::BusSyncHandler func) noexcept;

// GstBusSyncReply gst_bus_sync_signal_handler (GstBus* bus, GstMessage* message, gpointer data);
// ::GstBusSyncReply gst_bus_sync_signal_handler (::GstBus* bus, ::GstMessage* message, void* data);
GI_INLINE_DECL Gst::BusSyncReply sync_signal_handler (Gst::Message message, void* data) noexcept;

// GstMessage* gst_bus_timed_pop (GstBus* bus, GstClockTime timeout);
// ::GstMessage* gst_bus_timed_pop (::GstBus* bus, ::GstClockTime timeout);
GI_INLINE_DECL Gst::Message timed_pop (::GstClockTime timeout) noexcept;

// GstMessage* gst_bus_timed_pop_filtered (GstBus* bus, GstClockTime timeout, GstMessageType types);
// ::GstMessage* gst_bus_timed_pop_filtered (::GstBus* bus, ::GstClockTime timeout, ::GstMessageType types);
GI_INLINE_DECL Gst::Message timed_pop_filtered (::GstClockTime timeout, Gst::MessageType types) noexcept;

gi::property_proxy_write<bool, base::BusBase> property_enable_async()
{ return gi::property_proxy_write<bool, base::BusBase> (*this, "enable-async"); }

// signal message
gi::signal_proxy<void(Gst::Bus, Gst::Message message)> signal_message()
{ return gi::signal_proxy<void(Gst::Bus, Gst::Message message)> (*this, "message"); }

// signal sync-message
gi::signal_proxy<void(Gst::Bus, Gst::Message message)> signal_sync_message()
{ return gi::signal_proxy<void(Gst::Bus, Gst::Message message)> (*this, "sync-message"); }

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/bus_extra_def.hpp>)
#include <gst/bus_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/bus_extra.hpp>)
#include <gst/bus_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Bus : public GI_GST_BUS_BASE
{ typedef GI_GST_BUS_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstBus>
{ typedef Gst::Bus type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class BusClassDef
{
typedef BusClassDef self;
public:
typedef Gst::Bus instance_type;
typedef ::GstBusClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Bus::message (GstBus* bus, GstMessage* message);
// void Bus::message (::GstBus* bus, ::GstMessage* message);
virtual void message_ (Gst::Message message) noexcept = 0;

// void Bus::sync_message (GstBus* bus, GstMessage* message);
// void Bus::sync_message (::GstBus* bus, ::GstMessage* message);
virtual void sync_message_ (Gst::Message message) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class BusClass: public detail::ClassTemplate<Gst::impl::internal::BusClassDef, Gst::impl::internal::ObjectClass>
{
typedef BusClass self;
typedef detail::ClassTemplate<Gst::impl::internal::BusClassDef, Gst::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Bus::message (GstBus* bus, GstMessage* message);
// void Bus::message (::GstBus* bus, ::GstMessage* message);
GI_INLINE_DECL void message_ (Gst::Message message) noexcept override;

// void Bus::sync_message (GstBus* bus, GstMessage* message);
// void Bus::sync_message (::GstBus* bus, ::GstMessage* message);
GI_INLINE_DECL void sync_message_ (Gst::Message message) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using BusImpl = detail::ObjectImpl<Bus, internal::BusClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
