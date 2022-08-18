// AUTO-GENERATED

#ifndef _GI_GTK_SCROLLABLE_IMPL_HPP_
#define _GI_GTK_SCROLLABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// gboolean gtk_scrollable_get_border (GtkScrollable* scrollable, GtkBorder* border);
// gboolean gtk_scrollable_get_border (::GtkScrollable* scrollable, ::GtkBorder* border);
bool base::ScrollableBase::get_border (Gtk::Border & border) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkScrollable* scrollable, ::GtkBorder* border);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrollable_get_border;
  traits::unset_wrapper<::GtkBorder>::type border_c;
  auto _temp_ret = call_wrap_v ((::GtkScrollable*) (gobj_()), (::GtkBorder*) ((::GtkBorder*) &border_c));
  border = gi::wrap ((::GtkBorder*) &border_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::Border> base::ScrollableBase::get_border () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkScrollable* scrollable, ::GtkBorder* border);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrollable_get_border;
  traits::unset_wrapper<::GtkBorder>::type border_c;
  auto _temp_ret = call_wrap_v ((::GtkScrollable*) (gobj_()), (::GtkBorder*) ((::GtkBorder*) &border_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GtkBorder*) &border_c, gi::transfer_none, gi::direction_out));
}

// GtkAdjustment* gtk_scrollable_get_hadjustment (GtkScrollable* scrollable);
// ::GtkAdjustment* gtk_scrollable_get_hadjustment (::GtkScrollable* scrollable);
Gtk::Adjustment base::ScrollableBase::get_hadjustment () noexcept
{
  typedef ::GtkAdjustment* (*call_wrap_t) (::GtkScrollable* scrollable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrollable_get_hadjustment;
  auto _temp_ret = call_wrap_v ((::GtkScrollable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkScrollablePolicy gtk_scrollable_get_hscroll_policy (GtkScrollable* scrollable);
// ::GtkScrollablePolicy gtk_scrollable_get_hscroll_policy (::GtkScrollable* scrollable);
Gtk::ScrollablePolicy base::ScrollableBase::get_hscroll_policy () noexcept
{
  typedef ::GtkScrollablePolicy (*call_wrap_t) (::GtkScrollable* scrollable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrollable_get_hscroll_policy;
  auto _temp_ret = call_wrap_v ((::GtkScrollable*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkAdjustment* gtk_scrollable_get_vadjustment (GtkScrollable* scrollable);
// ::GtkAdjustment* gtk_scrollable_get_vadjustment (::GtkScrollable* scrollable);
Gtk::Adjustment base::ScrollableBase::get_vadjustment () noexcept
{
  typedef ::GtkAdjustment* (*call_wrap_t) (::GtkScrollable* scrollable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrollable_get_vadjustment;
  auto _temp_ret = call_wrap_v ((::GtkScrollable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkScrollablePolicy gtk_scrollable_get_vscroll_policy (GtkScrollable* scrollable);
// ::GtkScrollablePolicy gtk_scrollable_get_vscroll_policy (::GtkScrollable* scrollable);
Gtk::ScrollablePolicy base::ScrollableBase::get_vscroll_policy () noexcept
{
  typedef ::GtkScrollablePolicy (*call_wrap_t) (::GtkScrollable* scrollable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrollable_get_vscroll_policy;
  auto _temp_ret = call_wrap_v ((::GtkScrollable*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_scrollable_set_hadjustment (GtkScrollable* scrollable, GtkAdjustment* hadjustment);
// void gtk_scrollable_set_hadjustment (::GtkScrollable* scrollable, ::GtkAdjustment* hadjustment);
void base::ScrollableBase::set_hadjustment (Gtk::Adjustment hadjustment) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrollable* scrollable, ::GtkAdjustment* hadjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrollable_set_hadjustment;
  auto hadjustment_to_c = gi::unwrap (hadjustment, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkScrollable*) (gobj_()), (::GtkAdjustment*) (hadjustment_to_c));
}
void base::ScrollableBase::set_hadjustment () noexcept
{
  typedef void (*call_wrap_t) (::GtkScrollable* scrollable, ::GtkAdjustment* hadjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrollable_set_hadjustment;
  auto hadjustment_to_c = nullptr;
  call_wrap_v ((::GtkScrollable*) (gobj_()), (::GtkAdjustment*) (hadjustment_to_c));
}

// void gtk_scrollable_set_hscroll_policy (GtkScrollable* scrollable, GtkScrollablePolicy policy);
// void gtk_scrollable_set_hscroll_policy (::GtkScrollable* scrollable, ::GtkScrollablePolicy policy);
void base::ScrollableBase::set_hscroll_policy (Gtk::ScrollablePolicy policy) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrollable* scrollable, ::GtkScrollablePolicy policy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrollable_set_hscroll_policy;
  auto policy_to_c = gi::unwrap (policy);
  call_wrap_v ((::GtkScrollable*) (gobj_()), (::GtkScrollablePolicy) (policy_to_c));
}

// void gtk_scrollable_set_vadjustment (GtkScrollable* scrollable, GtkAdjustment* vadjustment);
// void gtk_scrollable_set_vadjustment (::GtkScrollable* scrollable, ::GtkAdjustment* vadjustment);
void base::ScrollableBase::set_vadjustment (Gtk::Adjustment vadjustment) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrollable* scrollable, ::GtkAdjustment* vadjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrollable_set_vadjustment;
  auto vadjustment_to_c = gi::unwrap (vadjustment, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkScrollable*) (gobj_()), (::GtkAdjustment*) (vadjustment_to_c));
}
void base::ScrollableBase::set_vadjustment () noexcept
{
  typedef void (*call_wrap_t) (::GtkScrollable* scrollable, ::GtkAdjustment* vadjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrollable_set_vadjustment;
  auto vadjustment_to_c = nullptr;
  call_wrap_v ((::GtkScrollable*) (gobj_()), (::GtkAdjustment*) (vadjustment_to_c));
}

// void gtk_scrollable_set_vscroll_policy (GtkScrollable* scrollable, GtkScrollablePolicy policy);
// void gtk_scrollable_set_vscroll_policy (::GtkScrollable* scrollable, ::GtkScrollablePolicy policy);
void base::ScrollableBase::set_vscroll_policy (Gtk::ScrollablePolicy policy) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrollable* scrollable, ::GtkScrollablePolicy policy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrollable_set_vscroll_policy;
  auto policy_to_c = gi::unwrap (policy);
  call_wrap_v ((::GtkScrollable*) (gobj_()), (::GtkScrollablePolicy) (policy_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/scrollable_extra_def_impl.hpp>)
#include <gtk/scrollable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/scrollable_extra_impl.hpp>)
#include <gtk/scrollable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ScrollableInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GtkScrollableInterface *methods = (::GtkScrollableInterface *) interface_struct;
  (void) methods;

}

// gboolean Scrollable::get_border (GtkScrollable* scrollable, GtkBorder* border);
// gboolean Scrollable::get_border (::GtkScrollable* scrollable, ::GtkBorder* border);
// SKIP; virtual-method out parameter not supported

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
