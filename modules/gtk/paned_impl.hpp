// AUTO-GENERATED

#ifndef _GI_GTK_PANED_IMPL_HPP_
#define _GI_GTK_PANED_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Orientable PanedBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

PanedBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* gtk_paned_new (GtkOrientation orientation);
// ::GtkPaned* gtk_paned_new (::GtkOrientation orientation);
Gtk::Paned base::PanedBase::new_ (Gtk::Orientation orientation) noexcept
{
  typedef ::GtkPaned* (*call_wrap_t) (::GtkOrientation orientation);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paned_new;
  auto orientation_to_c = gi::unwrap (orientation);
  auto _temp_ret = call_wrap_v ((::GtkOrientation) (orientation_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_paned_add1 (GtkPaned* paned, GtkWidget* child);
// void gtk_paned_add1 (::GtkPaned* paned, ::GtkWidget* child);
void base::PanedBase::add1 (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkPaned* paned, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paned_add1;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPaned*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_paned_add2 (GtkPaned* paned, GtkWidget* child);
// void gtk_paned_add2 (::GtkPaned* paned, ::GtkWidget* child);
void base::PanedBase::add2 (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkPaned* paned, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paned_add2;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPaned*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// GtkWidget* gtk_paned_get_child1 (GtkPaned* paned);
// ::GtkWidget* gtk_paned_get_child1 (::GtkPaned* paned);
Gtk::Widget base::PanedBase::get_child1 () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkPaned* paned);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paned_get_child1;
  auto _temp_ret = call_wrap_v ((::GtkPaned*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_paned_get_child2 (GtkPaned* paned);
// ::GtkWidget* gtk_paned_get_child2 (::GtkPaned* paned);
Gtk::Widget base::PanedBase::get_child2 () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkPaned* paned);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paned_get_child2;
  auto _temp_ret = call_wrap_v ((::GtkPaned*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkWindow* gtk_paned_get_handle_window (GtkPaned* paned);
// ::GdkWindow* gtk_paned_get_handle_window (::GtkPaned* paned);
Gdk::Window base::PanedBase::get_handle_window () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GtkPaned* paned);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paned_get_handle_window;
  auto _temp_ret = call_wrap_v ((::GtkPaned*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint gtk_paned_get_position (GtkPaned* paned);
// gint gtk_paned_get_position (::GtkPaned* paned);
gint base::PanedBase::get_position () noexcept
{
  typedef gint (*call_wrap_t) (::GtkPaned* paned);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paned_get_position;
  auto _temp_ret = call_wrap_v ((::GtkPaned*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_paned_get_wide_handle (GtkPaned* paned);
// gboolean gtk_paned_get_wide_handle (::GtkPaned* paned);
bool base::PanedBase::get_wide_handle () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPaned* paned);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paned_get_wide_handle;
  auto _temp_ret = call_wrap_v ((::GtkPaned*) (gobj_()));
  return _temp_ret;
}

// void gtk_paned_pack1 (GtkPaned* paned, GtkWidget* child, gboolean resize, gboolean shrink);
// void gtk_paned_pack1 (::GtkPaned* paned, ::GtkWidget* child, gboolean resize, gboolean shrink);
void base::PanedBase::pack1 (Gtk::Widget child, gboolean resize, gboolean shrink) noexcept
{
  typedef void (*call_wrap_t) (::GtkPaned* paned, ::GtkWidget* child, gboolean resize, gboolean shrink);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paned_pack1;
  auto shrink_to_c = shrink;
  auto resize_to_c = resize;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPaned*) (gobj_()), (::GtkWidget*) (child_to_c), (gboolean) (resize_to_c), (gboolean) (shrink_to_c));
}

// void gtk_paned_pack2 (GtkPaned* paned, GtkWidget* child, gboolean resize, gboolean shrink);
// void gtk_paned_pack2 (::GtkPaned* paned, ::GtkWidget* child, gboolean resize, gboolean shrink);
void base::PanedBase::pack2 (Gtk::Widget child, gboolean resize, gboolean shrink) noexcept
{
  typedef void (*call_wrap_t) (::GtkPaned* paned, ::GtkWidget* child, gboolean resize, gboolean shrink);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paned_pack2;
  auto shrink_to_c = shrink;
  auto resize_to_c = resize;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPaned*) (gobj_()), (::GtkWidget*) (child_to_c), (gboolean) (resize_to_c), (gboolean) (shrink_to_c));
}

// void gtk_paned_set_position (GtkPaned* paned, gint position);
// void gtk_paned_set_position (::GtkPaned* paned, gint position);
void base::PanedBase::set_position (gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkPaned* paned, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paned_set_position;
  auto position_to_c = position;
  call_wrap_v ((::GtkPaned*) (gobj_()), (gint) (position_to_c));
}

// void gtk_paned_set_wide_handle (GtkPaned* paned, gboolean wide);
// void gtk_paned_set_wide_handle (::GtkPaned* paned, gboolean wide);
void base::PanedBase::set_wide_handle (gboolean wide) noexcept
{
  typedef void (*call_wrap_t) (::GtkPaned* paned, gboolean wide);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paned_set_wide_handle;
  auto wide_to_c = wide;
  call_wrap_v ((::GtkPaned*) (gobj_()), (gboolean) (wide_to_c));
}








} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/paned_extra_def_impl.hpp>)
#include <gtk/paned_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/paned_extra_impl.hpp>)
#include <gtk/paned_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void PanedClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkPanedClass *methods = (::GtkPanedClass *) class_struct;
  (void) methods;

  methods->accept_position = (decltype (methods->accept_position)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::accept_position_>;
  methods->cancel_position = (decltype (methods->cancel_position)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::cancel_position_>;
  methods->cycle_child_focus = (decltype (methods->cycle_child_focus)) detail::method_wrapper<self, bool (*) (gboolean reverse), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::cycle_child_focus_>;
  methods->cycle_handle_focus = (decltype (methods->cycle_handle_focus)) detail::method_wrapper<self, bool (*) (gboolean reverse), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::cycle_handle_focus_>;
  methods->move_handle = (decltype (methods->move_handle)) detail::method_wrapper<self, bool (*) (Gtk::ScrollType scroll), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::move_handle_>;
  methods->toggle_handle_focus = (decltype (methods->toggle_handle_focus)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::toggle_handle_focus_>;
}

// gboolean Paned::accept_position (GtkPaned* paned);
// gboolean Paned::accept_position (::GtkPaned* paned);
bool PanedClass::accept_position_ () noexcept
{
  if (!get_struct_()->accept_position) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkPaned* paned);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->accept_position;
  auto _temp_ret = call_wrap_v ((::GtkPaned*) (gobj_()));
  return _temp_ret;
}

// gboolean Paned::cancel_position (GtkPaned* paned);
// gboolean Paned::cancel_position (::GtkPaned* paned);
bool PanedClass::cancel_position_ () noexcept
{
  if (!get_struct_()->cancel_position) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkPaned* paned);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->cancel_position;
  auto _temp_ret = call_wrap_v ((::GtkPaned*) (gobj_()));
  return _temp_ret;
}

// gboolean Paned::cycle_child_focus (GtkPaned* paned, gboolean reverse);
// gboolean Paned::cycle_child_focus (::GtkPaned* paned, gboolean reverse);
bool PanedClass::cycle_child_focus_ (gboolean reverse) noexcept
{
  if (!get_struct_()->cycle_child_focus) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkPaned* paned, gboolean reverse);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->cycle_child_focus;
  auto reverse_to_c = reverse;
  auto _temp_ret = call_wrap_v ((::GtkPaned*) (gobj_()), (gboolean) (reverse_to_c));
  return _temp_ret;
}

// gboolean Paned::cycle_handle_focus (GtkPaned* paned, gboolean reverse);
// gboolean Paned::cycle_handle_focus (::GtkPaned* paned, gboolean reverse);
bool PanedClass::cycle_handle_focus_ (gboolean reverse) noexcept
{
  if (!get_struct_()->cycle_handle_focus) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkPaned* paned, gboolean reverse);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->cycle_handle_focus;
  auto reverse_to_c = reverse;
  auto _temp_ret = call_wrap_v ((::GtkPaned*) (gobj_()), (gboolean) (reverse_to_c));
  return _temp_ret;
}

// gboolean Paned::move_handle (GtkPaned* paned, GtkScrollType scroll);
// gboolean Paned::move_handle (::GtkPaned* paned, ::GtkScrollType scroll);
bool PanedClass::move_handle_ (Gtk::ScrollType scroll) noexcept
{
  if (!get_struct_()->move_handle) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkPaned* paned, ::GtkScrollType scroll);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->move_handle;
  auto scroll_to_c = gi::unwrap (scroll);
  auto _temp_ret = call_wrap_v ((::GtkPaned*) (gobj_()), (::GtkScrollType) (scroll_to_c));
  return _temp_ret;
}

// gboolean Paned::toggle_handle_focus (GtkPaned* paned);
// gboolean Paned::toggle_handle_focus (::GtkPaned* paned);
bool PanedClass::toggle_handle_focus_ () noexcept
{
  if (!get_struct_()->toggle_handle_focus) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkPaned* paned);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->toggle_handle_focus;
  auto _temp_ret = call_wrap_v ((::GtkPaned*) (gobj_()));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
