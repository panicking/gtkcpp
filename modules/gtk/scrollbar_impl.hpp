// AUTO-GENERATED

#ifndef _GI_GTK_SCROLLBAR_IMPL_HPP_
#define _GI_GTK_SCROLLBAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_scrollbar_new (GtkOrientation orientation, GtkAdjustment* adjustment);
// ::GtkScrollbar* gtk_scrollbar_new (::GtkOrientation orientation, ::GtkAdjustment* adjustment);
Gtk::Scrollbar base::ScrollbarBase::new_ (Gtk::Orientation orientation, Gtk::Adjustment adjustment) noexcept
{
  typedef ::GtkScrollbar* (*call_wrap_t) (::GtkOrientation orientation, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrollbar_new;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none, gi::direction_in);
  auto orientation_to_c = gi::unwrap (orientation);
  auto _temp_ret = call_wrap_v ((::GtkOrientation) (orientation_to_c), (::GtkAdjustment*) (adjustment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::Scrollbar base::ScrollbarBase::new_ (Gtk::Orientation orientation) noexcept
{
  typedef ::GtkScrollbar* (*call_wrap_t) (::GtkOrientation orientation, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrollbar_new;
  auto adjustment_to_c = nullptr;
  auto orientation_to_c = gi::unwrap (orientation);
  auto _temp_ret = call_wrap_v ((::GtkOrientation) (orientation_to_c), (::GtkAdjustment*) (adjustment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/scrollbar_extra_def_impl.hpp>)
#include <gtk/scrollbar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/scrollbar_extra_impl.hpp>)
#include <gtk/scrollbar_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ScrollbarClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkScrollbarClass *methods = (::GtkScrollbarClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
