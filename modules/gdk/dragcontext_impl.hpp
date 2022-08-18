// AUTO-GENERATED

#ifndef _GI_GDK_DRAGCONTEXT_IMPL_HPP_
#define _GI_GDK_DRAGCONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkDragAction gdk_drag_context_get_actions (GdkDragContext* context);
// ::GdkDragAction gdk_drag_context_get_actions (::GdkDragContext* context);
Gdk::DragAction base::DragContextBase::get_actions () noexcept
{
  typedef ::GdkDragAction (*call_wrap_t) (::GdkDragContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drag_context_get_actions;
  auto _temp_ret = call_wrap_v ((::GdkDragContext*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GdkWindow* gdk_drag_context_get_dest_window (GdkDragContext* context);
// ::GdkWindow* gdk_drag_context_get_dest_window (::GdkDragContext* context);
Gdk::Window base::DragContextBase::get_dest_window () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GdkDragContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drag_context_get_dest_window;
  auto _temp_ret = call_wrap_v ((::GdkDragContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkDevice* gdk_drag_context_get_device (GdkDragContext* context);
// ::GdkDevice* gdk_drag_context_get_device (::GdkDragContext* context);
Gdk::Device base::DragContextBase::get_device () noexcept
{
  typedef ::GdkDevice* (*call_wrap_t) (::GdkDragContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drag_context_get_device;
  auto _temp_ret = call_wrap_v ((::GdkDragContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkWindow* gdk_drag_context_get_drag_window (GdkDragContext* context);
// ::GdkWindow* gdk_drag_context_get_drag_window (::GdkDragContext* context);
Gdk::Window base::DragContextBase::get_drag_window () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GdkDragContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drag_context_get_drag_window;
  auto _temp_ret = call_wrap_v ((::GdkDragContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkDragProtocol gdk_drag_context_get_protocol (GdkDragContext* context);
// ::GdkDragProtocol gdk_drag_context_get_protocol (::GdkDragContext* context);
Gdk::DragProtocol base::DragContextBase::get_protocol () noexcept
{
  typedef ::GdkDragProtocol (*call_wrap_t) (::GdkDragContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drag_context_get_protocol;
  auto _temp_ret = call_wrap_v ((::GdkDragContext*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GdkDragAction gdk_drag_context_get_selected_action (GdkDragContext* context);
// ::GdkDragAction gdk_drag_context_get_selected_action (::GdkDragContext* context);
Gdk::DragAction base::DragContextBase::get_selected_action () noexcept
{
  typedef ::GdkDragAction (*call_wrap_t) (::GdkDragContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drag_context_get_selected_action;
  auto _temp_ret = call_wrap_v ((::GdkDragContext*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GdkWindow* gdk_drag_context_get_source_window (GdkDragContext* context);
// ::GdkWindow* gdk_drag_context_get_source_window (::GdkDragContext* context);
Gdk::Window base::DragContextBase::get_source_window () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GdkDragContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drag_context_get_source_window;
  auto _temp_ret = call_wrap_v ((::GdkDragContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkDragAction gdk_drag_context_get_suggested_action (GdkDragContext* context);
// ::GdkDragAction gdk_drag_context_get_suggested_action (::GdkDragContext* context);
Gdk::DragAction base::DragContextBase::get_suggested_action () noexcept
{
  typedef ::GdkDragAction (*call_wrap_t) (::GdkDragContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drag_context_get_suggested_action;
  auto _temp_ret = call_wrap_v ((::GdkDragContext*) (gobj_()));
  return gi::wrap (_temp_ret);
}

//  gdk_drag_context_list_targets (GdkDragContext* context);
//  gdk_drag_context_list_targets (::GdkDragContext* context);
// SKIP; container element not supported

// gboolean gdk_drag_context_manage_dnd (GdkDragContext* context, GdkWindow* ipc_window, GdkDragAction actions);
// gboolean gdk_drag_context_manage_dnd (::GdkDragContext* context, ::GdkWindow* ipc_window, ::GdkDragAction actions);
bool base::DragContextBase::manage_dnd (Gdk::Window ipc_window, Gdk::DragAction actions) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDragContext* context, ::GdkWindow* ipc_window, ::GdkDragAction actions);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drag_context_manage_dnd;
  auto actions_to_c = gi::unwrap (actions);
  auto ipc_window_to_c = gi::unwrap (ipc_window, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkDragContext*) (gobj_()), (::GdkWindow*) (ipc_window_to_c), (::GdkDragAction) (actions_to_c));
  return _temp_ret;
}

// void gdk_drag_context_set_device (GdkDragContext* context, GdkDevice* device);
// void gdk_drag_context_set_device (::GdkDragContext* context, ::GdkDevice* device);
void base::DragContextBase::set_device (Gdk::Device device) noexcept
{
  typedef void (*call_wrap_t) (::GdkDragContext* context, ::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drag_context_set_device;
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkDragContext*) (gobj_()), (::GdkDevice*) (device_to_c));
}

// void gdk_drag_context_set_hotspot (GdkDragContext* context, gint hot_x, gint hot_y);
// void gdk_drag_context_set_hotspot (::GdkDragContext* context, gint hot_x, gint hot_y);
void base::DragContextBase::set_hotspot (gint hot_x, gint hot_y) noexcept
{
  typedef void (*call_wrap_t) (::GdkDragContext* context, gint hot_x, gint hot_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drag_context_set_hotspot;
  auto hot_y_to_c = hot_y;
  auto hot_x_to_c = hot_x;
  call_wrap_v ((::GdkDragContext*) (gobj_()), (gint) (hot_x_to_c), (gint) (hot_y_to_c));
}






} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/dragcontext_extra_def_impl.hpp>)
#include <gdk/dragcontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/dragcontext_extra_impl.hpp>)
#include <gdk/dragcontext_extra_impl.hpp>
#endif
#endif

#endif
