// AUTO-GENERATED

#ifndef _GI_GTK_HANDLEBOX_IMPL_HPP_
#define _GI_GTK_HANDLEBOX_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_handle_box_new ();
// ::GtkHandleBox* gtk_handle_box_new ();
// IGNORE; deprecated

// gboolean gtk_handle_box_get_child_detached (GtkHandleBox* handle_box);
// gboolean gtk_handle_box_get_child_detached (::GtkHandleBox* handle_box);
// IGNORE; deprecated

// GtkPositionType gtk_handle_box_get_handle_position (GtkHandleBox* handle_box);
// ::GtkPositionType gtk_handle_box_get_handle_position (::GtkHandleBox* handle_box);
// IGNORE; deprecated

// GtkShadowType gtk_handle_box_get_shadow_type (GtkHandleBox* handle_box);
// ::GtkShadowType gtk_handle_box_get_shadow_type (::GtkHandleBox* handle_box);
// IGNORE; deprecated

// GtkPositionType gtk_handle_box_get_snap_edge (GtkHandleBox* handle_box);
// ::GtkPositionType gtk_handle_box_get_snap_edge (::GtkHandleBox* handle_box);
// IGNORE; deprecated

// void gtk_handle_box_set_handle_position (GtkHandleBox* handle_box, GtkPositionType position);
// void gtk_handle_box_set_handle_position (::GtkHandleBox* handle_box, ::GtkPositionType position);
// IGNORE; deprecated

// void gtk_handle_box_set_shadow_type (GtkHandleBox* handle_box, GtkShadowType type);
// void gtk_handle_box_set_shadow_type (::GtkHandleBox* handle_box, ::GtkShadowType type);
// IGNORE; deprecated

// void gtk_handle_box_set_snap_edge (GtkHandleBox* handle_box, GtkPositionType edge);
// void gtk_handle_box_set_snap_edge (::GtkHandleBox* handle_box, ::GtkPositionType edge);
// IGNORE; deprecated

// IGNORE; deprecated

// IGNORE; deprecated


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/handlebox_extra_def_impl.hpp>)
#include <gtk/handlebox_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/handlebox_extra_impl.hpp>)
#include <gtk/handlebox_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void HandleBoxClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkHandleBoxClass *methods = (::GtkHandleBoxClass *) class_struct;
  (void) methods;

  methods->child_attached = (decltype (methods->child_attached)) detail::method_wrapper<self, void (*) (Gtk::Widget child), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::child_attached_>;
  methods->child_detached = (decltype (methods->child_detached)) detail::method_wrapper<self, void (*) (Gtk::Widget child), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::child_detached_>;
}

// void HandleBox::child_attached (GtkHandleBox* handle_box, GtkWidget* child);
// void HandleBox::child_attached (::GtkHandleBox* handle_box, ::GtkWidget* child);
void HandleBoxClass::child_attached_ (Gtk::Widget child) noexcept
{
  if (!get_struct_()->child_attached) return ;
  typedef void (*call_wrap_t) (::GtkHandleBox* handle_box, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->child_attached;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkHandleBox*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void HandleBox::child_detached (GtkHandleBox* handle_box, GtkWidget* child);
// void HandleBox::child_detached (::GtkHandleBox* handle_box, ::GtkWidget* child);
void HandleBoxClass::child_detached_ (Gtk::Widget child) noexcept
{
  if (!get_struct_()->child_detached) return ;
  typedef void (*call_wrap_t) (::GtkHandleBox* handle_box, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->child_detached;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkHandleBox*) (gobj_()), (::GtkWidget*) (child_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
