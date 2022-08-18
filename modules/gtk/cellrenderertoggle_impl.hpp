// AUTO-GENERATED

#ifndef _GI_GTK_CELLRENDERERTOGGLE_IMPL_HPP_
#define _GI_GTK_CELLRENDERERTOGGLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkCellRenderer* gtk_cell_renderer_toggle_new ();
// ::GtkCellRendererToggle* gtk_cell_renderer_toggle_new ();
Gtk::CellRendererToggle base::CellRendererToggleBase::new_ () noexcept
{
  typedef ::GtkCellRendererToggle* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_toggle_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_cell_renderer_toggle_get_activatable (GtkCellRendererToggle* toggle);
// gboolean gtk_cell_renderer_toggle_get_activatable (::GtkCellRendererToggle* toggle);
bool base::CellRendererToggleBase::get_activatable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellRendererToggle* toggle);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_toggle_get_activatable;
  auto _temp_ret = call_wrap_v ((::GtkCellRendererToggle*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_cell_renderer_toggle_get_active (GtkCellRendererToggle* toggle);
// gboolean gtk_cell_renderer_toggle_get_active (::GtkCellRendererToggle* toggle);
bool base::CellRendererToggleBase::get_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellRendererToggle* toggle);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_toggle_get_active;
  auto _temp_ret = call_wrap_v ((::GtkCellRendererToggle*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_cell_renderer_toggle_get_radio (GtkCellRendererToggle* toggle);
// gboolean gtk_cell_renderer_toggle_get_radio (::GtkCellRendererToggle* toggle);
bool base::CellRendererToggleBase::get_radio () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellRendererToggle* toggle);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_toggle_get_radio;
  auto _temp_ret = call_wrap_v ((::GtkCellRendererToggle*) (gobj_()));
  return _temp_ret;
}

// void gtk_cell_renderer_toggle_set_activatable (GtkCellRendererToggle* toggle, gboolean setting);
// void gtk_cell_renderer_toggle_set_activatable (::GtkCellRendererToggle* toggle, gboolean setting);
void base::CellRendererToggleBase::set_activatable (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRendererToggle* toggle, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_toggle_set_activatable;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkCellRendererToggle*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_cell_renderer_toggle_set_active (GtkCellRendererToggle* toggle, gboolean setting);
// void gtk_cell_renderer_toggle_set_active (::GtkCellRendererToggle* toggle, gboolean setting);
void base::CellRendererToggleBase::set_active (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRendererToggle* toggle, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_toggle_set_active;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkCellRendererToggle*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_cell_renderer_toggle_set_radio (GtkCellRendererToggle* toggle, gboolean radio);
// void gtk_cell_renderer_toggle_set_radio (::GtkCellRendererToggle* toggle, gboolean radio);
void base::CellRendererToggleBase::set_radio (gboolean radio) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRendererToggle* toggle, gboolean radio);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_toggle_set_radio;
  auto radio_to_c = radio;
  call_wrap_v ((::GtkCellRendererToggle*) (gobj_()), (gboolean) (radio_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellrenderertoggle_extra_def_impl.hpp>)
#include <gtk/cellrenderertoggle_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellrenderertoggle_extra_impl.hpp>)
#include <gtk/cellrenderertoggle_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CellRendererToggleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkCellRendererToggleClass *methods = (::GtkCellRendererToggleClass *) class_struct;
  (void) methods;

  methods->toggled = (decltype (methods->toggled)) detail::method_wrapper<self, void (*) (const std::string & path), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::toggled_>;
}

// void CellRendererToggle::toggled (GtkCellRendererToggle* cell_renderer_toggle, const gchar* path);
// void CellRendererToggle::toggled (::GtkCellRendererToggle* cell_renderer_toggle, const char* path);
void CellRendererToggleClass::toggled_ (const std::string & path) noexcept
{
  if (!get_struct_()->toggled) return ;
  typedef void (*call_wrap_t) (::GtkCellRendererToggle* cell_renderer_toggle, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->toggled;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellRendererToggle*) (gobj_()), (const char*) (path_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
