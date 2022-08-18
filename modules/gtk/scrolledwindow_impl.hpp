// AUTO-GENERATED

#ifndef _GI_GTK_SCROLLEDWINDOW_IMPL_HPP_
#define _GI_GTK_SCROLLEDWINDOW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_scrolled_window_new (GtkAdjustment* hadjustment, GtkAdjustment* vadjustment);
// ::GtkScrolledWindow* gtk_scrolled_window_new (::GtkAdjustment* hadjustment, ::GtkAdjustment* vadjustment);
Gtk::ScrolledWindow base::ScrolledWindowBase::new_ (Gtk::Adjustment hadjustment, Gtk::Adjustment vadjustment) noexcept
{
  typedef ::GtkScrolledWindow* (*call_wrap_t) (::GtkAdjustment* hadjustment, ::GtkAdjustment* vadjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_new;
  auto vadjustment_to_c = gi::unwrap (vadjustment, gi::transfer_none, gi::direction_in);
  auto hadjustment_to_c = gi::unwrap (hadjustment, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkAdjustment*) (hadjustment_to_c), (::GtkAdjustment*) (vadjustment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::ScrolledWindow base::ScrolledWindowBase::new_ () noexcept
{
  typedef ::GtkScrolledWindow* (*call_wrap_t) (::GtkAdjustment* hadjustment, ::GtkAdjustment* vadjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_new;
  auto vadjustment_to_c = nullptr;
  auto hadjustment_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkAdjustment*) (hadjustment_to_c), (::GtkAdjustment*) (vadjustment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_scrolled_window_add_with_viewport (GtkScrolledWindow* scrolled_window, GtkWidget* child);
// void gtk_scrolled_window_add_with_viewport (::GtkScrolledWindow* scrolled_window, ::GtkWidget* child);
// IGNORE; deprecated

// gboolean gtk_scrolled_window_get_capture_button_press (GtkScrolledWindow* scrolled_window);
// gboolean gtk_scrolled_window_get_capture_button_press (::GtkScrolledWindow* scrolled_window);
bool base::ScrolledWindowBase::get_capture_button_press () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_get_capture_button_press;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return _temp_ret;
}

// GtkAdjustment* gtk_scrolled_window_get_hadjustment (GtkScrolledWindow* scrolled_window);
// ::GtkAdjustment* gtk_scrolled_window_get_hadjustment (::GtkScrolledWindow* scrolled_window);
Gtk::Adjustment base::ScrolledWindowBase::get_hadjustment () noexcept
{
  typedef ::GtkAdjustment* (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_get_hadjustment;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_scrolled_window_get_hscrollbar (GtkScrolledWindow* scrolled_window);
// ::GtkWidget* gtk_scrolled_window_get_hscrollbar (::GtkScrolledWindow* scrolled_window);
Gtk::Widget base::ScrolledWindowBase::get_hscrollbar () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_get_hscrollbar;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_scrolled_window_get_kinetic_scrolling (GtkScrolledWindow* scrolled_window);
// gboolean gtk_scrolled_window_get_kinetic_scrolling (::GtkScrolledWindow* scrolled_window);
bool base::ScrolledWindowBase::get_kinetic_scrolling () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_get_kinetic_scrolling;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return _temp_ret;
}

// gint gtk_scrolled_window_get_max_content_height (GtkScrolledWindow* scrolled_window);
// gint gtk_scrolled_window_get_max_content_height (::GtkScrolledWindow* scrolled_window);
gint base::ScrolledWindowBase::get_max_content_height () noexcept
{
  typedef gint (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_get_max_content_height;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return _temp_ret;
}

// gint gtk_scrolled_window_get_max_content_width (GtkScrolledWindow* scrolled_window);
// gint gtk_scrolled_window_get_max_content_width (::GtkScrolledWindow* scrolled_window);
gint base::ScrolledWindowBase::get_max_content_width () noexcept
{
  typedef gint (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_get_max_content_width;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return _temp_ret;
}

// gint gtk_scrolled_window_get_min_content_height (GtkScrolledWindow* scrolled_window);
// gint gtk_scrolled_window_get_min_content_height (::GtkScrolledWindow* scrolled_window);
gint base::ScrolledWindowBase::get_min_content_height () noexcept
{
  typedef gint (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_get_min_content_height;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return _temp_ret;
}

// gint gtk_scrolled_window_get_min_content_width (GtkScrolledWindow* scrolled_window);
// gint gtk_scrolled_window_get_min_content_width (::GtkScrolledWindow* scrolled_window);
gint base::ScrolledWindowBase::get_min_content_width () noexcept
{
  typedef gint (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_get_min_content_width;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_scrolled_window_get_overlay_scrolling (GtkScrolledWindow* scrolled_window);
// gboolean gtk_scrolled_window_get_overlay_scrolling (::GtkScrolledWindow* scrolled_window);
bool base::ScrolledWindowBase::get_overlay_scrolling () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_get_overlay_scrolling;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return _temp_ret;
}

// GtkCornerType gtk_scrolled_window_get_placement (GtkScrolledWindow* scrolled_window);
// ::GtkCornerType gtk_scrolled_window_get_placement (::GtkScrolledWindow* scrolled_window);
Gtk::CornerType base::ScrolledWindowBase::get_placement () noexcept
{
  typedef ::GtkCornerType (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_get_placement;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_scrolled_window_get_policy (GtkScrolledWindow* scrolled_window, GtkPolicyType* hscrollbar_policy, GtkPolicyType* vscrollbar_policy);
// void gtk_scrolled_window_get_policy (::GtkScrolledWindow* scrolled_window, ::GtkPolicyType* hscrollbar_policy, ::GtkPolicyType* vscrollbar_policy);
void base::ScrolledWindowBase::get_policy (Gtk::PolicyType * hscrollbar_policy, Gtk::PolicyType * vscrollbar_policy) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, ::GtkPolicyType* hscrollbar_policy, ::GtkPolicyType* vscrollbar_policy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_get_policy;
  ::GtkPolicyType vscrollbar_policy_o {};
  ::GtkPolicyType hscrollbar_policy_o {};
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (::GtkPolicyType*) (hscrollbar_policy ? &hscrollbar_policy_o : nullptr), (::GtkPolicyType*) (vscrollbar_policy ? &vscrollbar_policy_o : nullptr));
  if (vscrollbar_policy) *vscrollbar_policy = gi::wrap (vscrollbar_policy_o);
  if (hscrollbar_policy) *hscrollbar_policy = gi::wrap (hscrollbar_policy_o);
}
std::tuple<Gtk::PolicyType, Gtk::PolicyType> base::ScrolledWindowBase::get_policy () noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, ::GtkPolicyType* hscrollbar_policy, ::GtkPolicyType* vscrollbar_policy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_get_policy;
  ::GtkPolicyType vscrollbar_policy_o {};
  ::GtkPolicyType hscrollbar_policy_o {};
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (::GtkPolicyType*) (&hscrollbar_policy_o), (::GtkPolicyType*) (&vscrollbar_policy_o));
  return std::make_tuple (gi::wrap (hscrollbar_policy_o), gi::wrap (vscrollbar_policy_o));
}

// gboolean gtk_scrolled_window_get_propagate_natural_height (GtkScrolledWindow* scrolled_window);
// gboolean gtk_scrolled_window_get_propagate_natural_height (::GtkScrolledWindow* scrolled_window);
bool base::ScrolledWindowBase::get_propagate_natural_height () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_get_propagate_natural_height;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_scrolled_window_get_propagate_natural_width (GtkScrolledWindow* scrolled_window);
// gboolean gtk_scrolled_window_get_propagate_natural_width (::GtkScrolledWindow* scrolled_window);
bool base::ScrolledWindowBase::get_propagate_natural_width () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_get_propagate_natural_width;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return _temp_ret;
}

// GtkShadowType gtk_scrolled_window_get_shadow_type (GtkScrolledWindow* scrolled_window);
// ::GtkShadowType gtk_scrolled_window_get_shadow_type (::GtkScrolledWindow* scrolled_window);
Gtk::ShadowType base::ScrolledWindowBase::get_shadow_type () noexcept
{
  typedef ::GtkShadowType (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_get_shadow_type;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkAdjustment* gtk_scrolled_window_get_vadjustment (GtkScrolledWindow* scrolled_window);
// ::GtkAdjustment* gtk_scrolled_window_get_vadjustment (::GtkScrolledWindow* scrolled_window);
Gtk::Adjustment base::ScrolledWindowBase::get_vadjustment () noexcept
{
  typedef ::GtkAdjustment* (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_get_vadjustment;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_scrolled_window_get_vscrollbar (GtkScrolledWindow* scrolled_window);
// ::GtkWidget* gtk_scrolled_window_get_vscrollbar (::GtkScrolledWindow* scrolled_window);
Gtk::Widget base::ScrolledWindowBase::get_vscrollbar () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_get_vscrollbar;
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_scrolled_window_set_capture_button_press (GtkScrolledWindow* scrolled_window, gboolean capture_button_press);
// void gtk_scrolled_window_set_capture_button_press (::GtkScrolledWindow* scrolled_window, gboolean capture_button_press);
void base::ScrolledWindowBase::set_capture_button_press (gboolean capture_button_press) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, gboolean capture_button_press);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_set_capture_button_press;
  auto capture_button_press_to_c = capture_button_press;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (gboolean) (capture_button_press_to_c));
}

// void gtk_scrolled_window_set_hadjustment (GtkScrolledWindow* scrolled_window, GtkAdjustment* hadjustment);
// void gtk_scrolled_window_set_hadjustment (::GtkScrolledWindow* scrolled_window, ::GtkAdjustment* hadjustment);
void base::ScrolledWindowBase::set_hadjustment (Gtk::Adjustment hadjustment) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, ::GtkAdjustment* hadjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_set_hadjustment;
  auto hadjustment_to_c = gi::unwrap (hadjustment, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (::GtkAdjustment*) (hadjustment_to_c));
}
void base::ScrolledWindowBase::set_hadjustment () noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, ::GtkAdjustment* hadjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_set_hadjustment;
  auto hadjustment_to_c = nullptr;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (::GtkAdjustment*) (hadjustment_to_c));
}

// void gtk_scrolled_window_set_kinetic_scrolling (GtkScrolledWindow* scrolled_window, gboolean kinetic_scrolling);
// void gtk_scrolled_window_set_kinetic_scrolling (::GtkScrolledWindow* scrolled_window, gboolean kinetic_scrolling);
void base::ScrolledWindowBase::set_kinetic_scrolling (gboolean kinetic_scrolling) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, gboolean kinetic_scrolling);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_set_kinetic_scrolling;
  auto kinetic_scrolling_to_c = kinetic_scrolling;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (gboolean) (kinetic_scrolling_to_c));
}

// void gtk_scrolled_window_set_max_content_height (GtkScrolledWindow* scrolled_window, gint height);
// void gtk_scrolled_window_set_max_content_height (::GtkScrolledWindow* scrolled_window, gint height);
void base::ScrolledWindowBase::set_max_content_height (gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_set_max_content_height;
  auto height_to_c = height;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (gint) (height_to_c));
}

// void gtk_scrolled_window_set_max_content_width (GtkScrolledWindow* scrolled_window, gint width);
// void gtk_scrolled_window_set_max_content_width (::GtkScrolledWindow* scrolled_window, gint width);
void base::ScrolledWindowBase::set_max_content_width (gint width) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, gint width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_set_max_content_width;
  auto width_to_c = width;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (gint) (width_to_c));
}

// void gtk_scrolled_window_set_min_content_height (GtkScrolledWindow* scrolled_window, gint height);
// void gtk_scrolled_window_set_min_content_height (::GtkScrolledWindow* scrolled_window, gint height);
void base::ScrolledWindowBase::set_min_content_height (gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_set_min_content_height;
  auto height_to_c = height;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (gint) (height_to_c));
}

// void gtk_scrolled_window_set_min_content_width (GtkScrolledWindow* scrolled_window, gint width);
// void gtk_scrolled_window_set_min_content_width (::GtkScrolledWindow* scrolled_window, gint width);
void base::ScrolledWindowBase::set_min_content_width (gint width) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, gint width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_set_min_content_width;
  auto width_to_c = width;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (gint) (width_to_c));
}

// void gtk_scrolled_window_set_overlay_scrolling (GtkScrolledWindow* scrolled_window, gboolean overlay_scrolling);
// void gtk_scrolled_window_set_overlay_scrolling (::GtkScrolledWindow* scrolled_window, gboolean overlay_scrolling);
void base::ScrolledWindowBase::set_overlay_scrolling (gboolean overlay_scrolling) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, gboolean overlay_scrolling);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_set_overlay_scrolling;
  auto overlay_scrolling_to_c = overlay_scrolling;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (gboolean) (overlay_scrolling_to_c));
}

// void gtk_scrolled_window_set_placement (GtkScrolledWindow* scrolled_window, GtkCornerType window_placement);
// void gtk_scrolled_window_set_placement (::GtkScrolledWindow* scrolled_window, ::GtkCornerType window_placement);
void base::ScrolledWindowBase::set_placement (Gtk::CornerType window_placement) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, ::GtkCornerType window_placement);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_set_placement;
  auto window_placement_to_c = gi::unwrap (window_placement);
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (::GtkCornerType) (window_placement_to_c));
}

// void gtk_scrolled_window_set_policy (GtkScrolledWindow* scrolled_window, GtkPolicyType hscrollbar_policy, GtkPolicyType vscrollbar_policy);
// void gtk_scrolled_window_set_policy (::GtkScrolledWindow* scrolled_window, ::GtkPolicyType hscrollbar_policy, ::GtkPolicyType vscrollbar_policy);
void base::ScrolledWindowBase::set_policy (Gtk::PolicyType hscrollbar_policy, Gtk::PolicyType vscrollbar_policy) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, ::GtkPolicyType hscrollbar_policy, ::GtkPolicyType vscrollbar_policy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_set_policy;
  auto vscrollbar_policy_to_c = gi::unwrap (vscrollbar_policy);
  auto hscrollbar_policy_to_c = gi::unwrap (hscrollbar_policy);
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (::GtkPolicyType) (hscrollbar_policy_to_c), (::GtkPolicyType) (vscrollbar_policy_to_c));
}

// void gtk_scrolled_window_set_propagate_natural_height (GtkScrolledWindow* scrolled_window, gboolean propagate);
// void gtk_scrolled_window_set_propagate_natural_height (::GtkScrolledWindow* scrolled_window, gboolean propagate);
void base::ScrolledWindowBase::set_propagate_natural_height (gboolean propagate) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, gboolean propagate);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_set_propagate_natural_height;
  auto propagate_to_c = propagate;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (gboolean) (propagate_to_c));
}

// void gtk_scrolled_window_set_propagate_natural_width (GtkScrolledWindow* scrolled_window, gboolean propagate);
// void gtk_scrolled_window_set_propagate_natural_width (::GtkScrolledWindow* scrolled_window, gboolean propagate);
void base::ScrolledWindowBase::set_propagate_natural_width (gboolean propagate) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, gboolean propagate);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_set_propagate_natural_width;
  auto propagate_to_c = propagate;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (gboolean) (propagate_to_c));
}

// void gtk_scrolled_window_set_shadow_type (GtkScrolledWindow* scrolled_window, GtkShadowType type);
// void gtk_scrolled_window_set_shadow_type (::GtkScrolledWindow* scrolled_window, ::GtkShadowType type);
void base::ScrolledWindowBase::set_shadow_type (Gtk::ShadowType type) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, ::GtkShadowType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_set_shadow_type;
  auto type_to_c = gi::unwrap (type);
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (::GtkShadowType) (type_to_c));
}

// void gtk_scrolled_window_set_vadjustment (GtkScrolledWindow* scrolled_window, GtkAdjustment* vadjustment);
// void gtk_scrolled_window_set_vadjustment (::GtkScrolledWindow* scrolled_window, ::GtkAdjustment* vadjustment);
void base::ScrolledWindowBase::set_vadjustment (Gtk::Adjustment vadjustment) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, ::GtkAdjustment* vadjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_set_vadjustment;
  auto vadjustment_to_c = gi::unwrap (vadjustment, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (::GtkAdjustment*) (vadjustment_to_c));
}
void base::ScrolledWindowBase::set_vadjustment () noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, ::GtkAdjustment* vadjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_set_vadjustment;
  auto vadjustment_to_c = nullptr;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (::GtkAdjustment*) (vadjustment_to_c));
}

// void gtk_scrolled_window_unset_placement (GtkScrolledWindow* scrolled_window);
// void gtk_scrolled_window_unset_placement (::GtkScrolledWindow* scrolled_window);
void base::ScrolledWindowBase::unset_placement () noexcept
{
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrolled_window_unset_placement;
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()));
}






} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/scrolledwindow_extra_def_impl.hpp>)
#include <gtk/scrolledwindow_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/scrolledwindow_extra_impl.hpp>)
#include <gtk/scrolledwindow_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ScrolledWindowClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkScrolledWindowClass *methods = (::GtkScrolledWindowClass *) class_struct;
  (void) methods;

  methods->move_focus_out = (decltype (methods->move_focus_out)) detail::method_wrapper<self, void (*) (Gtk::DirectionType direction), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::move_focus_out_>;
  methods->scroll_child = (decltype (methods->scroll_child)) detail::method_wrapper<self, bool (*) (Gtk::ScrollType scroll, gboolean horizontal), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::scroll_child_>;
}

// void ScrolledWindow::move_focus_out (GtkScrolledWindow* scrolled_window, GtkDirectionType direction);
// void ScrolledWindow::move_focus_out (::GtkScrolledWindow* scrolled_window, ::GtkDirectionType direction);
void ScrolledWindowClass::move_focus_out_ (Gtk::DirectionType direction) noexcept
{
  if (!get_struct_()->move_focus_out) return ;
  typedef void (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, ::GtkDirectionType direction);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->move_focus_out;
  auto direction_to_c = gi::unwrap (direction);
  call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (::GtkDirectionType) (direction_to_c));
}

// gboolean ScrolledWindow::scroll_child (GtkScrolledWindow* scrolled_window, GtkScrollType scroll, gboolean horizontal);
// gboolean ScrolledWindow::scroll_child (::GtkScrolledWindow* scrolled_window, ::GtkScrollType scroll, gboolean horizontal);
bool ScrolledWindowClass::scroll_child_ (Gtk::ScrollType scroll, gboolean horizontal) noexcept
{
  if (!get_struct_()->scroll_child) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkScrolledWindow* scrolled_window, ::GtkScrollType scroll, gboolean horizontal);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->scroll_child;
  auto horizontal_to_c = horizontal;
  auto scroll_to_c = gi::unwrap (scroll);
  auto _temp_ret = call_wrap_v ((::GtkScrolledWindow*) (gobj_()), (::GtkScrollType) (scroll_to_c), (gboolean) (horizontal_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
