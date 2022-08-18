// AUTO-GENERATED

#ifndef _GI_GOBJECT_SIGNALGROUP_HPP_
#define _GI_GOBJECT_SIGNALGROUP_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace GObject {

class Object;

class SignalGroup;

namespace base {


#define GI_GOBJECT_SIGNALGROUP_BASE base::SignalGroupBase
class SignalGroupBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GSignalGroup BaseObjectType;

SignalGroupBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_signal_group_get_type(); } 

// GSignalGroup* g_signal_group_new (GType target_type);
// ::GSignalGroup* g_signal_group_new (GType target_type);
static GI_INLINE_DECL GObject::SignalGroup new_ (GType target_type) noexcept;

// void g_signal_group_block (GSignalGroup* self);
// void g_signal_group_block (::GSignalGroup* self);
GI_INLINE_DECL void block () noexcept;

// void g_signal_group_connect (GSignalGroup* self, const gchar* detailed_signal, GCallback c_handler, gpointer data);
// void g_signal_group_connect (::GSignalGroup* self, const char* detailed_signal,  c_handler, void* data);
// IGNORE; not introspectable, c_handler type  not supported

// void g_signal_group_connect_after (GSignalGroup* self, const gchar* detailed_signal, GCallback c_handler, gpointer data);
// void g_signal_group_connect_after (::GSignalGroup* self, const char* detailed_signal,  c_handler, void* data);
// IGNORE; not introspectable, c_handler type  not supported

// void g_signal_group_connect_data (GSignalGroup* self, const gchar* detailed_signal, GCallback c_handler, gpointer data, GClosureNotify notify, GConnectFlags flags);
// void g_signal_group_connect_data (::GSignalGroup* self, const char* detailed_signal,  c_handler, void* data,  notify, ::GConnectFlags flags);
// SKIP; notify type  not supported, c_handler type  not supported

// void g_signal_group_connect_object (GSignalGroup* self, const gchar* detailed_signal, GCallback c_handler, gpointer object, GConnectFlags flags);
// void g_signal_group_connect_object (::GSignalGroup* self, const char* detailed_signal,  c_handler, void* object, ::GConnectFlags flags);
// IGNORE; not introspectable, c_handler type  not supported

// void g_signal_group_connect_swapped (GSignalGroup* self, const gchar* detailed_signal, GCallback c_handler, gpointer data);
// void g_signal_group_connect_swapped (::GSignalGroup* self, const char* detailed_signal,  c_handler, void* data);
// SKIP; c_handler type  not supported

// gpointer g_signal_group_dup_target (GSignalGroup* self);
// ::GObject* g_signal_group_dup_target (::GSignalGroup* self);
GI_INLINE_DECL GObject::Object dup_target () noexcept;

// void g_signal_group_set_target (GSignalGroup* self, gpointer target);
// void g_signal_group_set_target (::GSignalGroup* self, ::GObject* target);
GI_INLINE_DECL void set_target (GObject::Object target) noexcept;
GI_INLINE_DECL void set_target () noexcept;

// void g_signal_group_unblock (GSignalGroup* self);
// void g_signal_group_unblock (::GSignalGroup* self);
GI_INLINE_DECL void unblock () noexcept;

gi::property_proxy<GObject::Object, base::SignalGroupBase> property_target()
{ return gi::property_proxy<GObject::Object, base::SignalGroupBase> (*this, "target"); }
const gi::property_proxy<GObject::Object, base::SignalGroupBase> property_target() const
{ return gi::property_proxy<GObject::Object, base::SignalGroupBase> (*this, "target"); }

gi::property_proxy<GType, base::SignalGroupBase> property_target_type()
{ return gi::property_proxy<GType, base::SignalGroupBase> (*this, "target-type"); }
const gi::property_proxy<GType, base::SignalGroupBase> property_target_type() const
{ return gi::property_proxy<GType, base::SignalGroupBase> (*this, "target-type"); }

// signal bind
gi::signal_proxy<void(GObject::SignalGroup, GObject::Object instance)> signal_bind()
{ return gi::signal_proxy<void(GObject::SignalGroup, GObject::Object instance)> (*this, "bind"); }

// signal unbind
gi::signal_proxy<void(GObject::SignalGroup)> signal_unbind()
{ return gi::signal_proxy<void(GObject::SignalGroup)> (*this, "unbind"); }

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/signalgroup_extra_def.hpp>)
#include <gobject/signalgroup_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/signalgroup_extra.hpp>)
#include <gobject/signalgroup_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class SignalGroup : public GI_GOBJECT_SIGNALGROUP_BASE
{ typedef GI_GOBJECT_SIGNALGROUP_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GSignalGroup>
{ typedef GObject::SignalGroup type; }; 

} // namespace repository

} // namespace gi

#endif
