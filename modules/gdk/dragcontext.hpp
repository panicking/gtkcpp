// AUTO-GENERATED

#ifndef _GI_GDK_DRAGCONTEXT_HPP_
#define _GI_GDK_DRAGCONTEXT_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Device;
class Window;

class DragContext;

namespace base {


#define GI_GDK_DRAGCONTEXT_BASE base::DragContextBase
class DragContextBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkDragContext BaseObjectType;

DragContextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_drag_context_get_type(); } 

// GdkDragAction gdk_drag_context_get_actions (GdkDragContext* context);
// ::GdkDragAction gdk_drag_context_get_actions (::GdkDragContext* context);
GI_INLINE_DECL Gdk::DragAction get_actions () noexcept;

// GdkWindow* gdk_drag_context_get_dest_window (GdkDragContext* context);
// ::GdkWindow* gdk_drag_context_get_dest_window (::GdkDragContext* context);
GI_INLINE_DECL Gdk::Window get_dest_window () noexcept;

// GdkDevice* gdk_drag_context_get_device (GdkDragContext* context);
// ::GdkDevice* gdk_drag_context_get_device (::GdkDragContext* context);
GI_INLINE_DECL Gdk::Device get_device () noexcept;

// GdkWindow* gdk_drag_context_get_drag_window (GdkDragContext* context);
// ::GdkWindow* gdk_drag_context_get_drag_window (::GdkDragContext* context);
GI_INLINE_DECL Gdk::Window get_drag_window () noexcept;

// GdkDragProtocol gdk_drag_context_get_protocol (GdkDragContext* context);
// ::GdkDragProtocol gdk_drag_context_get_protocol (::GdkDragContext* context);
GI_INLINE_DECL Gdk::DragProtocol get_protocol () noexcept;

// GdkDragAction gdk_drag_context_get_selected_action (GdkDragContext* context);
// ::GdkDragAction gdk_drag_context_get_selected_action (::GdkDragContext* context);
GI_INLINE_DECL Gdk::DragAction get_selected_action () noexcept;

// GdkWindow* gdk_drag_context_get_source_window (GdkDragContext* context);
// ::GdkWindow* gdk_drag_context_get_source_window (::GdkDragContext* context);
GI_INLINE_DECL Gdk::Window get_source_window () noexcept;

// GdkDragAction gdk_drag_context_get_suggested_action (GdkDragContext* context);
// ::GdkDragAction gdk_drag_context_get_suggested_action (::GdkDragContext* context);
GI_INLINE_DECL Gdk::DragAction get_suggested_action () noexcept;

//  gdk_drag_context_list_targets (GdkDragContext* context);
//  gdk_drag_context_list_targets (::GdkDragContext* context);
// SKIP; container element not supported

// gboolean gdk_drag_context_manage_dnd (GdkDragContext* context, GdkWindow* ipc_window, GdkDragAction actions);
// gboolean gdk_drag_context_manage_dnd (::GdkDragContext* context, ::GdkWindow* ipc_window, ::GdkDragAction actions);
GI_INLINE_DECL bool manage_dnd (Gdk::Window ipc_window, Gdk::DragAction actions) noexcept;

// void gdk_drag_context_set_device (GdkDragContext* context, GdkDevice* device);
// void gdk_drag_context_set_device (::GdkDragContext* context, ::GdkDevice* device);
GI_INLINE_DECL void set_device (Gdk::Device device) noexcept;

// void gdk_drag_context_set_hotspot (GdkDragContext* context, gint hot_x, gint hot_y);
// void gdk_drag_context_set_hotspot (::GdkDragContext* context, gint hot_x, gint hot_y);
GI_INLINE_DECL void set_hotspot (gint hot_x, gint hot_y) noexcept;

// signal action-changed
gi::signal_proxy<void(Gdk::DragContext, Gdk::DragAction action)> signal_action_changed()
{ return gi::signal_proxy<void(Gdk::DragContext, Gdk::DragAction action)> (*this, "action-changed"); }

// signal cancel
gi::signal_proxy<void(Gdk::DragContext, Gdk::DragCancelReason reason)> signal_cancel()
{ return gi::signal_proxy<void(Gdk::DragContext, Gdk::DragCancelReason reason)> (*this, "cancel"); }

// signal dnd-finished
gi::signal_proxy<void(Gdk::DragContext)> signal_dnd_finished()
{ return gi::signal_proxy<void(Gdk::DragContext)> (*this, "dnd-finished"); }

// signal drop-performed
gi::signal_proxy<void(Gdk::DragContext, gint time)> signal_drop_performed()
{ return gi::signal_proxy<void(Gdk::DragContext, gint time)> (*this, "drop-performed"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/dragcontext_extra_def.hpp>)
#include <gdk/dragcontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/dragcontext_extra.hpp>)
#include <gdk/dragcontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class DragContext : public GI_GDK_DRAGCONTEXT_BASE
{ typedef GI_GDK_DRAGCONTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkDragContext>
{ typedef Gdk::DragContext type; }; 

} // namespace repository

} // namespace gi

#endif
