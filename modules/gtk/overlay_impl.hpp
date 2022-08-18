// AUTO-GENERATED

#ifndef _GI_GTK_OVERLAY_IMPL_HPP_
#define _GI_GTK_OVERLAY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_overlay_new ();
// ::GtkOverlay* gtk_overlay_new ();
Gtk::Overlay base::OverlayBase::new_ () noexcept
{
  typedef ::GtkOverlay* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_overlay_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_overlay_add_overlay (GtkOverlay* overlay, GtkWidget* widget);
// void gtk_overlay_add_overlay (::GtkOverlay* overlay, ::GtkWidget* widget);
void base::OverlayBase::add_overlay (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkOverlay* overlay, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_overlay_add_overlay;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkOverlay*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// gboolean gtk_overlay_get_overlay_pass_through (GtkOverlay* overlay, GtkWidget* widget);
// gboolean gtk_overlay_get_overlay_pass_through (::GtkOverlay* overlay, ::GtkWidget* widget);
bool base::OverlayBase::get_overlay_pass_through (Gtk::Widget widget) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkOverlay* overlay, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_overlay_get_overlay_pass_through;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkOverlay*) (gobj_()), (::GtkWidget*) (widget_to_c));
  return _temp_ret;
}

// void gtk_overlay_reorder_overlay (GtkOverlay* overlay, GtkWidget* child, int index_);
// void gtk_overlay_reorder_overlay (::GtkOverlay* overlay, ::GtkWidget* child, gint index_);
void base::OverlayBase::reorder_overlay (Gtk::Widget child, gint index_) noexcept
{
  typedef void (*call_wrap_t) (::GtkOverlay* overlay, ::GtkWidget* child, gint index_);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_overlay_reorder_overlay;
  auto index__to_c = index_;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkOverlay*) (gobj_()), (::GtkWidget*) (child_to_c), (gint) (index__to_c));
}

// void gtk_overlay_set_overlay_pass_through (GtkOverlay* overlay, GtkWidget* widget, gboolean pass_through);
// void gtk_overlay_set_overlay_pass_through (::GtkOverlay* overlay, ::GtkWidget* widget, gboolean pass_through);
void base::OverlayBase::set_overlay_pass_through (Gtk::Widget widget, gboolean pass_through) noexcept
{
  typedef void (*call_wrap_t) (::GtkOverlay* overlay, ::GtkWidget* widget, gboolean pass_through);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_overlay_set_overlay_pass_through;
  auto pass_through_to_c = pass_through;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkOverlay*) (gobj_()), (::GtkWidget*) (widget_to_c), (gboolean) (pass_through_to_c));
}

// SKIP; glib:signal out parameter not supported


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/overlay_extra_def_impl.hpp>)
#include <gtk/overlay_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/overlay_extra_impl.hpp>)
#include <gtk/overlay_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void OverlayClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkOverlayClass *methods = (::GtkOverlayClass *) class_struct;
  (void) methods;

  methods->get_child_position = (decltype (methods->get_child_position)) detail::method_wrapper<self, bool (*) (Gtk::Widget widget, Gtk::Allocation allocation), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_child_position_>;
}

// gboolean Overlay::get_child_position (GtkOverlay* overlay, GtkWidget* widget, GtkAllocation* allocation);
// gboolean Overlay::get_child_position (::GtkOverlay* overlay, ::GtkWidget* widget, ::GtkAllocation* allocation);
bool OverlayClass::get_child_position_ (Gtk::Widget widget, Gtk::Allocation allocation) noexcept
{
  if (!get_struct_()->get_child_position) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkOverlay* overlay, ::GtkWidget* widget, ::GtkAllocation* allocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_child_position;
  auto allocation_to_c = gi::unwrap (allocation, gi::transfer_none, gi::direction_in);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkOverlay*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GtkAllocation*) (allocation_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
