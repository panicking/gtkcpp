// AUTO-GENERATED

#ifndef _GI_GTK_EVENTBOX_IMPL_HPP_
#define _GI_GTK_EVENTBOX_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_event_box_new ();
// ::GtkEventBox* gtk_event_box_new ();
Gtk::EventBox base::EventBoxBase::new_ () noexcept
{
  typedef ::GtkEventBox* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_event_box_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_event_box_get_above_child (GtkEventBox* event_box);
// gboolean gtk_event_box_get_above_child (::GtkEventBox* event_box);
bool base::EventBoxBase::get_above_child () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEventBox* event_box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_event_box_get_above_child;
  auto _temp_ret = call_wrap_v ((::GtkEventBox*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_event_box_get_visible_window (GtkEventBox* event_box);
// gboolean gtk_event_box_get_visible_window (::GtkEventBox* event_box);
bool base::EventBoxBase::get_visible_window () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEventBox* event_box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_event_box_get_visible_window;
  auto _temp_ret = call_wrap_v ((::GtkEventBox*) (gobj_()));
  return _temp_ret;
}

// void gtk_event_box_set_above_child (GtkEventBox* event_box, gboolean above_child);
// void gtk_event_box_set_above_child (::GtkEventBox* event_box, gboolean above_child);
void base::EventBoxBase::set_above_child (gboolean above_child) noexcept
{
  typedef void (*call_wrap_t) (::GtkEventBox* event_box, gboolean above_child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_event_box_set_above_child;
  auto above_child_to_c = above_child;
  call_wrap_v ((::GtkEventBox*) (gobj_()), (gboolean) (above_child_to_c));
}

// void gtk_event_box_set_visible_window (GtkEventBox* event_box, gboolean visible_window);
// void gtk_event_box_set_visible_window (::GtkEventBox* event_box, gboolean visible_window);
void base::EventBoxBase::set_visible_window (gboolean visible_window) noexcept
{
  typedef void (*call_wrap_t) (::GtkEventBox* event_box, gboolean visible_window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_event_box_set_visible_window;
  auto visible_window_to_c = visible_window;
  call_wrap_v ((::GtkEventBox*) (gobj_()), (gboolean) (visible_window_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/eventbox_extra_def_impl.hpp>)
#include <gtk/eventbox_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/eventbox_extra_impl.hpp>)
#include <gtk/eventbox_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void EventBoxClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkEventBoxClass *methods = (::GtkEventBoxClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
