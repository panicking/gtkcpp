// AUTO-GENERATED

#ifndef _GI_GTK_CELLRENDERERACCEL_IMPL_HPP_
#define _GI_GTK_CELLRENDERERACCEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkCellRenderer* gtk_cell_renderer_accel_new ();
// ::GtkCellRendererAccel* gtk_cell_renderer_accel_new ();
Gtk::CellRendererAccel base::CellRendererAccelBase::new_ () noexcept
{
  typedef ::GtkCellRendererAccel* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_accel_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellrendereraccel_extra_def_impl.hpp>)
#include <gtk/cellrendereraccel_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellrendereraccel_extra_impl.hpp>)
#include <gtk/cellrendereraccel_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CellRendererAccelClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkCellRendererAccelClass *methods = (::GtkCellRendererAccelClass *) class_struct;
  (void) methods;

  methods->accel_cleared = (decltype (methods->accel_cleared)) detail::method_wrapper<self, void (*) (const std::string & path_string), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::accel_cleared_>;
  methods->accel_edited = (decltype (methods->accel_edited)) detail::method_wrapper<self, void (*) (const std::string & path_string, guint accel_key, Gdk::ModifierType accel_mods, guint hardware_keycode), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::accel_edited_>;
}

// void CellRendererAccel::accel_cleared (GtkCellRendererAccel* accel, const gchar* path_string);
// void CellRendererAccel::accel_cleared (::GtkCellRendererAccel* accel, const char* path_string);
void CellRendererAccelClass::accel_cleared_ (const std::string & path_string) noexcept
{
  if (!get_struct_()->accel_cleared) return ;
  typedef void (*call_wrap_t) (::GtkCellRendererAccel* accel, const char* path_string);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->accel_cleared;
  auto path_string_to_c = gi::unwrap (path_string, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellRendererAccel*) (gobj_()), (const char*) (path_string_to_c));
}

// void CellRendererAccel::accel_edited (GtkCellRendererAccel* accel, const gchar* path_string, guint accel_key, GdkModifierType accel_mods, guint hardware_keycode);
// void CellRendererAccel::accel_edited (::GtkCellRendererAccel* accel, const char* path_string, guint accel_key, ::GdkModifierType accel_mods, guint hardware_keycode);
void CellRendererAccelClass::accel_edited_ (const std::string & path_string, guint accel_key, Gdk::ModifierType accel_mods, guint hardware_keycode) noexcept
{
  if (!get_struct_()->accel_edited) return ;
  typedef void (*call_wrap_t) (::GtkCellRendererAccel* accel, const char* path_string, guint accel_key, ::GdkModifierType accel_mods, guint hardware_keycode);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->accel_edited;
  auto hardware_keycode_to_c = hardware_keycode;
  auto accel_mods_to_c = gi::unwrap (accel_mods);
  auto accel_key_to_c = accel_key;
  auto path_string_to_c = gi::unwrap (path_string, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellRendererAccel*) (gobj_()), (const char*) (path_string_to_c), (guint) (accel_key_to_c), (::GdkModifierType) (accel_mods_to_c), (guint) (hardware_keycode_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
