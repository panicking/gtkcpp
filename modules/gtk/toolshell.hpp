// AUTO-GENERATED

#ifndef _GI_GTK_TOOLSHELL_HPP_
#define _GI_GTK_TOOLSHELL_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class SizeGroup;

class ToolShell;

namespace base {


#define GI_GTK_TOOLSHELL_BASE base::ToolShellBase
class ToolShellBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkToolShell BaseObjectType;

ToolShellBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tool_shell_get_type(); } 

// PangoEllipsizeMode gtk_tool_shell_get_ellipsize_mode (GtkToolShell* shell);
// ::PangoEllipsizeMode gtk_tool_shell_get_ellipsize_mode (::GtkToolShell* shell);
GI_INLINE_DECL Pango::EllipsizeMode get_ellipsize_mode () noexcept;

// GtkIconSize gtk_tool_shell_get_icon_size (GtkToolShell* shell);
// gint gtk_tool_shell_get_icon_size (::GtkToolShell* shell);
GI_INLINE_DECL gint get_icon_size () noexcept;

// GtkOrientation gtk_tool_shell_get_orientation (GtkToolShell* shell);
// ::GtkOrientation gtk_tool_shell_get_orientation (::GtkToolShell* shell);
GI_INLINE_DECL Gtk::Orientation get_orientation () noexcept;

// GtkReliefStyle gtk_tool_shell_get_relief_style (GtkToolShell* shell);
// ::GtkReliefStyle gtk_tool_shell_get_relief_style (::GtkToolShell* shell);
GI_INLINE_DECL Gtk::ReliefStyle get_relief_style () noexcept;

// GtkToolbarStyle gtk_tool_shell_get_style (GtkToolShell* shell);
// ::GtkToolbarStyle gtk_tool_shell_get_style (::GtkToolShell* shell);
GI_INLINE_DECL Gtk::ToolbarStyle get_style () noexcept;

// gfloat gtk_tool_shell_get_text_alignment (GtkToolShell* shell);
// gfloat gtk_tool_shell_get_text_alignment (::GtkToolShell* shell);
GI_INLINE_DECL gfloat get_text_alignment () noexcept;

// GtkOrientation gtk_tool_shell_get_text_orientation (GtkToolShell* shell);
// ::GtkOrientation gtk_tool_shell_get_text_orientation (::GtkToolShell* shell);
GI_INLINE_DECL Gtk::Orientation get_text_orientation () noexcept;

// GtkSizeGroup* gtk_tool_shell_get_text_size_group (GtkToolShell* shell);
// ::GtkSizeGroup* gtk_tool_shell_get_text_size_group (::GtkToolShell* shell);
GI_INLINE_DECL Gtk::SizeGroup get_text_size_group () noexcept;

// void gtk_tool_shell_rebuild_menu (GtkToolShell* shell);
// void gtk_tool_shell_rebuild_menu (::GtkToolShell* shell);
GI_INLINE_DECL void rebuild_menu () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/toolshell_extra_def.hpp>)
#include <gtk/toolshell_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/toolshell_extra.hpp>)
#include <gtk/toolshell_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ToolShell : public GI_GTK_TOOLSHELL_BASE
{ typedef GI_GTK_TOOLSHELL_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkToolShell>
{ typedef Gtk::ToolShell type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ToolShellIfaceDef
{
typedef ToolShellIfaceDef self;
public:
typedef Gtk::ToolShell instance_type;
typedef ::GtkToolShellIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// PangoEllipsizeMode ToolShell::get_ellipsize_mode (GtkToolShell* shell);
// ::PangoEllipsizeMode ToolShell::get_ellipsize_mode (::GtkToolShell* shell);
virtual Pango::EllipsizeMode get_ellipsize_mode_ () noexcept = 0;

// GtkIconSize ToolShell::get_icon_size (GtkToolShell* shell);
// ::GtkIconSize ToolShell::get_icon_size (::GtkToolShell* shell);
virtual Gtk::IconSize get_icon_size_ () noexcept = 0;

// GtkOrientation ToolShell::get_orientation (GtkToolShell* shell);
// ::GtkOrientation ToolShell::get_orientation (::GtkToolShell* shell);
virtual Gtk::Orientation get_orientation_ () noexcept = 0;

// GtkReliefStyle ToolShell::get_relief_style (GtkToolShell* shell);
// ::GtkReliefStyle ToolShell::get_relief_style (::GtkToolShell* shell);
virtual Gtk::ReliefStyle get_relief_style_ () noexcept = 0;

// GtkToolbarStyle ToolShell::get_style (GtkToolShell* shell);
// ::GtkToolbarStyle ToolShell::get_style (::GtkToolShell* shell);
virtual Gtk::ToolbarStyle get_style_ () noexcept = 0;

// gfloat ToolShell::get_text_alignment (GtkToolShell* shell);
// gfloat ToolShell::get_text_alignment (::GtkToolShell* shell);
virtual gfloat get_text_alignment_ () noexcept = 0;

// GtkOrientation ToolShell::get_text_orientation (GtkToolShell* shell);
// ::GtkOrientation ToolShell::get_text_orientation (::GtkToolShell* shell);
virtual Gtk::Orientation get_text_orientation_ () noexcept = 0;

// GtkSizeGroup* ToolShell::get_text_size_group (GtkToolShell* shell);
// ::GtkSizeGroup* ToolShell::get_text_size_group (::GtkToolShell* shell);
virtual Gtk::SizeGroup get_text_size_group_ () noexcept = 0;

// void ToolShell::rebuild_menu (GtkToolShell* shell);
// void ToolShell::rebuild_menu (::GtkToolShell* shell);
virtual void rebuild_menu_ () noexcept = 0;


};

using ToolShellImpl = detail::InterfaceImpl<ToolShellIfaceDef>;

class ToolShellIfaceClassImpl: public detail::InterfaceClassImpl<ToolShellImpl>
{
typedef ToolShellIfaceClassImpl self;
typedef detail::InterfaceClassImpl<ToolShellImpl> super;

protected:
using super::super;

// PangoEllipsizeMode ToolShell::get_ellipsize_mode (GtkToolShell* shell);
// ::PangoEllipsizeMode ToolShell::get_ellipsize_mode (::GtkToolShell* shell);
GI_INLINE_DECL Pango::EllipsizeMode get_ellipsize_mode_ () noexcept override;

// GtkIconSize ToolShell::get_icon_size (GtkToolShell* shell);
// ::GtkIconSize ToolShell::get_icon_size (::GtkToolShell* shell);
GI_INLINE_DECL Gtk::IconSize get_icon_size_ () noexcept override;

// GtkOrientation ToolShell::get_orientation (GtkToolShell* shell);
// ::GtkOrientation ToolShell::get_orientation (::GtkToolShell* shell);
GI_INLINE_DECL Gtk::Orientation get_orientation_ () noexcept override;

// GtkReliefStyle ToolShell::get_relief_style (GtkToolShell* shell);
// ::GtkReliefStyle ToolShell::get_relief_style (::GtkToolShell* shell);
GI_INLINE_DECL Gtk::ReliefStyle get_relief_style_ () noexcept override;

// GtkToolbarStyle ToolShell::get_style (GtkToolShell* shell);
// ::GtkToolbarStyle ToolShell::get_style (::GtkToolShell* shell);
GI_INLINE_DECL Gtk::ToolbarStyle get_style_ () noexcept override;

// gfloat ToolShell::get_text_alignment (GtkToolShell* shell);
// gfloat ToolShell::get_text_alignment (::GtkToolShell* shell);
GI_INLINE_DECL gfloat get_text_alignment_ () noexcept override;

// GtkOrientation ToolShell::get_text_orientation (GtkToolShell* shell);
// ::GtkOrientation ToolShell::get_text_orientation (::GtkToolShell* shell);
GI_INLINE_DECL Gtk::Orientation get_text_orientation_ () noexcept override;

// GtkSizeGroup* ToolShell::get_text_size_group (GtkToolShell* shell);
// ::GtkSizeGroup* ToolShell::get_text_size_group (::GtkToolShell* shell);
GI_INLINE_DECL Gtk::SizeGroup get_text_size_group_ () noexcept override;

// void ToolShell::rebuild_menu (GtkToolShell* shell);
// void ToolShell::rebuild_menu (::GtkToolShell* shell);
GI_INLINE_DECL void rebuild_menu_ () noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
