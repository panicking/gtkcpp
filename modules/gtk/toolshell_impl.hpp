// AUTO-GENERATED

#ifndef _GI_GTK_TOOLSHELL_IMPL_HPP_
#define _GI_GTK_TOOLSHELL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// PangoEllipsizeMode gtk_tool_shell_get_ellipsize_mode (GtkToolShell* shell);
// ::PangoEllipsizeMode gtk_tool_shell_get_ellipsize_mode (::GtkToolShell* shell);
Pango::EllipsizeMode base::ToolShellBase::get_ellipsize_mode () noexcept
{
  typedef ::PangoEllipsizeMode (*call_wrap_t) (::GtkToolShell* shell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_shell_get_ellipsize_mode;
  auto _temp_ret = call_wrap_v ((::GtkToolShell*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkIconSize gtk_tool_shell_get_icon_size (GtkToolShell* shell);
// gint gtk_tool_shell_get_icon_size (::GtkToolShell* shell);
gint base::ToolShellBase::get_icon_size () noexcept
{
  typedef gint (*call_wrap_t) (::GtkToolShell* shell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_shell_get_icon_size;
  auto _temp_ret = call_wrap_v ((::GtkToolShell*) (gobj_()));
  return _temp_ret;
}

// GtkOrientation gtk_tool_shell_get_orientation (GtkToolShell* shell);
// ::GtkOrientation gtk_tool_shell_get_orientation (::GtkToolShell* shell);
Gtk::Orientation base::ToolShellBase::get_orientation () noexcept
{
  typedef ::GtkOrientation (*call_wrap_t) (::GtkToolShell* shell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_shell_get_orientation;
  auto _temp_ret = call_wrap_v ((::GtkToolShell*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkReliefStyle gtk_tool_shell_get_relief_style (GtkToolShell* shell);
// ::GtkReliefStyle gtk_tool_shell_get_relief_style (::GtkToolShell* shell);
Gtk::ReliefStyle base::ToolShellBase::get_relief_style () noexcept
{
  typedef ::GtkReliefStyle (*call_wrap_t) (::GtkToolShell* shell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_shell_get_relief_style;
  auto _temp_ret = call_wrap_v ((::GtkToolShell*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkToolbarStyle gtk_tool_shell_get_style (GtkToolShell* shell);
// ::GtkToolbarStyle gtk_tool_shell_get_style (::GtkToolShell* shell);
Gtk::ToolbarStyle base::ToolShellBase::get_style () noexcept
{
  typedef ::GtkToolbarStyle (*call_wrap_t) (::GtkToolShell* shell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_shell_get_style;
  auto _temp_ret = call_wrap_v ((::GtkToolShell*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gfloat gtk_tool_shell_get_text_alignment (GtkToolShell* shell);
// gfloat gtk_tool_shell_get_text_alignment (::GtkToolShell* shell);
gfloat base::ToolShellBase::get_text_alignment () noexcept
{
  typedef gfloat (*call_wrap_t) (::GtkToolShell* shell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_shell_get_text_alignment;
  auto _temp_ret = call_wrap_v ((::GtkToolShell*) (gobj_()));
  return _temp_ret;
}

// GtkOrientation gtk_tool_shell_get_text_orientation (GtkToolShell* shell);
// ::GtkOrientation gtk_tool_shell_get_text_orientation (::GtkToolShell* shell);
Gtk::Orientation base::ToolShellBase::get_text_orientation () noexcept
{
  typedef ::GtkOrientation (*call_wrap_t) (::GtkToolShell* shell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_shell_get_text_orientation;
  auto _temp_ret = call_wrap_v ((::GtkToolShell*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkSizeGroup* gtk_tool_shell_get_text_size_group (GtkToolShell* shell);
// ::GtkSizeGroup* gtk_tool_shell_get_text_size_group (::GtkToolShell* shell);
Gtk::SizeGroup base::ToolShellBase::get_text_size_group () noexcept
{
  typedef ::GtkSizeGroup* (*call_wrap_t) (::GtkToolShell* shell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_shell_get_text_size_group;
  auto _temp_ret = call_wrap_v ((::GtkToolShell*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_tool_shell_rebuild_menu (GtkToolShell* shell);
// void gtk_tool_shell_rebuild_menu (::GtkToolShell* shell);
void base::ToolShellBase::rebuild_menu () noexcept
{
  typedef void (*call_wrap_t) (::GtkToolShell* shell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_shell_rebuild_menu;
  call_wrap_v ((::GtkToolShell*) (gobj_()));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/toolshell_extra_def_impl.hpp>)
#include <gtk/toolshell_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/toolshell_extra_impl.hpp>)
#include <gtk/toolshell_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ToolShellIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GtkToolShellIface *methods = (::GtkToolShellIface *) interface_struct;
  (void) methods;

  methods->get_ellipsize_mode = (decltype (methods->get_ellipsize_mode)) detail::method_wrapper<self, Pango::EllipsizeMode (*) (), gi::transfer_none_t>::wrapper<&self::get_ellipsize_mode_>;
  methods->get_icon_size = (decltype (methods->get_icon_size)) detail::method_wrapper<self, Gtk::IconSize (*) (), gi::transfer_none_t>::wrapper<&self::get_icon_size_>;
  methods->get_orientation = (decltype (methods->get_orientation)) detail::method_wrapper<self, Gtk::Orientation (*) (), gi::transfer_none_t>::wrapper<&self::get_orientation_>;
  methods->get_relief_style = (decltype (methods->get_relief_style)) detail::method_wrapper<self, Gtk::ReliefStyle (*) (), gi::transfer_none_t>::wrapper<&self::get_relief_style_>;
  methods->get_style = (decltype (methods->get_style)) detail::method_wrapper<self, Gtk::ToolbarStyle (*) (), gi::transfer_none_t>::wrapper<&self::get_style_>;
  methods->get_text_alignment = (decltype (methods->get_text_alignment)) detail::method_wrapper<self, gfloat (*) (), gi::transfer_none_t>::wrapper<&self::get_text_alignment_>;
  methods->get_text_orientation = (decltype (methods->get_text_orientation)) detail::method_wrapper<self, Gtk::Orientation (*) (), gi::transfer_none_t>::wrapper<&self::get_text_orientation_>;
  methods->get_text_size_group = (decltype (methods->get_text_size_group)) detail::method_wrapper<self, Gtk::SizeGroup (*) (), gi::transfer_none_t>::wrapper<&self::get_text_size_group_>;
  methods->rebuild_menu = (decltype (methods->rebuild_menu)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::rebuild_menu_>;
}

// PangoEllipsizeMode ToolShell::get_ellipsize_mode (GtkToolShell* shell);
// ::PangoEllipsizeMode ToolShell::get_ellipsize_mode (::GtkToolShell* shell);
Pango::EllipsizeMode ToolShellIfaceClassImpl::get_ellipsize_mode_ () noexcept
{
  if (!get_struct_()->get_ellipsize_mode) return Pango::EllipsizeMode{};
  typedef ::PangoEllipsizeMode (*call_wrap_t) (::GtkToolShell* shell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_ellipsize_mode;
  auto _temp_ret = call_wrap_v ((::GtkToolShell*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkIconSize ToolShell::get_icon_size (GtkToolShell* shell);
// ::GtkIconSize ToolShell::get_icon_size (::GtkToolShell* shell);
Gtk::IconSize ToolShellIfaceClassImpl::get_icon_size_ () noexcept
{
  if (!get_struct_()->get_icon_size) return Gtk::IconSize{};
  typedef ::GtkIconSize (*call_wrap_t) (::GtkToolShell* shell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_icon_size;
  auto _temp_ret = call_wrap_v ((::GtkToolShell*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkOrientation ToolShell::get_orientation (GtkToolShell* shell);
// ::GtkOrientation ToolShell::get_orientation (::GtkToolShell* shell);
Gtk::Orientation ToolShellIfaceClassImpl::get_orientation_ () noexcept
{
  if (!get_struct_()->get_orientation) return Gtk::Orientation{};
  typedef ::GtkOrientation (*call_wrap_t) (::GtkToolShell* shell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_orientation;
  auto _temp_ret = call_wrap_v ((::GtkToolShell*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkReliefStyle ToolShell::get_relief_style (GtkToolShell* shell);
// ::GtkReliefStyle ToolShell::get_relief_style (::GtkToolShell* shell);
Gtk::ReliefStyle ToolShellIfaceClassImpl::get_relief_style_ () noexcept
{
  if (!get_struct_()->get_relief_style) return Gtk::ReliefStyle{};
  typedef ::GtkReliefStyle (*call_wrap_t) (::GtkToolShell* shell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_relief_style;
  auto _temp_ret = call_wrap_v ((::GtkToolShell*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkToolbarStyle ToolShell::get_style (GtkToolShell* shell);
// ::GtkToolbarStyle ToolShell::get_style (::GtkToolShell* shell);
Gtk::ToolbarStyle ToolShellIfaceClassImpl::get_style_ () noexcept
{
  if (!get_struct_()->get_style) return Gtk::ToolbarStyle{};
  typedef ::GtkToolbarStyle (*call_wrap_t) (::GtkToolShell* shell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_style;
  auto _temp_ret = call_wrap_v ((::GtkToolShell*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gfloat ToolShell::get_text_alignment (GtkToolShell* shell);
// gfloat ToolShell::get_text_alignment (::GtkToolShell* shell);
gfloat ToolShellIfaceClassImpl::get_text_alignment_ () noexcept
{
  if (!get_struct_()->get_text_alignment) return gfloat{};
  typedef gfloat (*call_wrap_t) (::GtkToolShell* shell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_text_alignment;
  auto _temp_ret = call_wrap_v ((::GtkToolShell*) (gobj_()));
  return _temp_ret;
}

// GtkOrientation ToolShell::get_text_orientation (GtkToolShell* shell);
// ::GtkOrientation ToolShell::get_text_orientation (::GtkToolShell* shell);
Gtk::Orientation ToolShellIfaceClassImpl::get_text_orientation_ () noexcept
{
  if (!get_struct_()->get_text_orientation) return Gtk::Orientation{};
  typedef ::GtkOrientation (*call_wrap_t) (::GtkToolShell* shell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_text_orientation;
  auto _temp_ret = call_wrap_v ((::GtkToolShell*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkSizeGroup* ToolShell::get_text_size_group (GtkToolShell* shell);
// ::GtkSizeGroup* ToolShell::get_text_size_group (::GtkToolShell* shell);
Gtk::SizeGroup ToolShellIfaceClassImpl::get_text_size_group_ () noexcept
{
  if (!get_struct_()->get_text_size_group) return Gtk::SizeGroup{};
  typedef ::GtkSizeGroup* (*call_wrap_t) (::GtkToolShell* shell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_text_size_group;
  auto _temp_ret = call_wrap_v ((::GtkToolShell*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void ToolShell::rebuild_menu (GtkToolShell* shell);
// void ToolShell::rebuild_menu (::GtkToolShell* shell);
void ToolShellIfaceClassImpl::rebuild_menu_ () noexcept
{
  if (!get_struct_()->rebuild_menu) return ;
  typedef void (*call_wrap_t) (::GtkToolShell* shell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->rebuild_menu;
  call_wrap_v ((::GtkToolShell*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
