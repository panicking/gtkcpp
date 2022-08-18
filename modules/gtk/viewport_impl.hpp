// AUTO-GENERATED

#ifndef _GI_GTK_VIEWPORT_IMPL_HPP_
#define _GI_GTK_VIEWPORT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Scrollable ViewportBase::interface_ (gi::interface_tag<Gtk::Scrollable>)
{ return gi::wrap ((Gtk::Scrollable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ViewportBase::operator Gtk::Scrollable ()
{ return interface_ (gi::interface_tag<Gtk::Scrollable>()); }

// GtkWidget* gtk_viewport_new (GtkAdjustment* hadjustment, GtkAdjustment* vadjustment);
// ::GtkViewport* gtk_viewport_new (::GtkAdjustment* hadjustment, ::GtkAdjustment* vadjustment);
Gtk::Viewport base::ViewportBase::new_ (Gtk::Adjustment hadjustment, Gtk::Adjustment vadjustment) noexcept
{
  typedef ::GtkViewport* (*call_wrap_t) (::GtkAdjustment* hadjustment, ::GtkAdjustment* vadjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_viewport_new;
  auto vadjustment_to_c = gi::unwrap (vadjustment, gi::transfer_none, gi::direction_in);
  auto hadjustment_to_c = gi::unwrap (hadjustment, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkAdjustment*) (hadjustment_to_c), (::GtkAdjustment*) (vadjustment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::Viewport base::ViewportBase::new_ () noexcept
{
  typedef ::GtkViewport* (*call_wrap_t) (::GtkAdjustment* hadjustment, ::GtkAdjustment* vadjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_viewport_new;
  auto vadjustment_to_c = nullptr;
  auto hadjustment_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkAdjustment*) (hadjustment_to_c), (::GtkAdjustment*) (vadjustment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkWindow* gtk_viewport_get_bin_window (GtkViewport* viewport);
// ::GdkWindow* gtk_viewport_get_bin_window (::GtkViewport* viewport);
Gdk::Window base::ViewportBase::get_bin_window () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GtkViewport* viewport);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_viewport_get_bin_window;
  auto _temp_ret = call_wrap_v ((::GtkViewport*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkAdjustment* gtk_viewport_get_hadjustment (GtkViewport* viewport);
// ::GtkAdjustment* gtk_viewport_get_hadjustment (::GtkViewport* viewport);
// IGNORE; deprecated

// GtkShadowType gtk_viewport_get_shadow_type (GtkViewport* viewport);
// ::GtkShadowType gtk_viewport_get_shadow_type (::GtkViewport* viewport);
Gtk::ShadowType base::ViewportBase::get_shadow_type () noexcept
{
  typedef ::GtkShadowType (*call_wrap_t) (::GtkViewport* viewport);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_viewport_get_shadow_type;
  auto _temp_ret = call_wrap_v ((::GtkViewport*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkAdjustment* gtk_viewport_get_vadjustment (GtkViewport* viewport);
// ::GtkAdjustment* gtk_viewport_get_vadjustment (::GtkViewport* viewport);
// IGNORE; deprecated

// GdkWindow* gtk_viewport_get_view_window (GtkViewport* viewport);
// ::GdkWindow* gtk_viewport_get_view_window (::GtkViewport* viewport);
Gdk::Window base::ViewportBase::get_view_window () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GtkViewport* viewport);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_viewport_get_view_window;
  auto _temp_ret = call_wrap_v ((::GtkViewport*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_viewport_set_hadjustment (GtkViewport* viewport, GtkAdjustment* adjustment);
// void gtk_viewport_set_hadjustment (::GtkViewport* viewport, ::GtkAdjustment* adjustment);
// IGNORE; deprecated

// void gtk_viewport_set_shadow_type (GtkViewport* viewport, GtkShadowType type);
// void gtk_viewport_set_shadow_type (::GtkViewport* viewport, ::GtkShadowType type);
void base::ViewportBase::set_shadow_type (Gtk::ShadowType type) noexcept
{
  typedef void (*call_wrap_t) (::GtkViewport* viewport, ::GtkShadowType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_viewport_set_shadow_type;
  auto type_to_c = gi::unwrap (type);
  call_wrap_v ((::GtkViewport*) (gobj_()), (::GtkShadowType) (type_to_c));
}

// void gtk_viewport_set_vadjustment (GtkViewport* viewport, GtkAdjustment* adjustment);
// void gtk_viewport_set_vadjustment (::GtkViewport* viewport, ::GtkAdjustment* adjustment);
// IGNORE; deprecated


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/viewport_extra_def_impl.hpp>)
#include <gtk/viewport_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/viewport_extra_impl.hpp>)
#include <gtk/viewport_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ViewportClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkViewportClass *methods = (::GtkViewportClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
