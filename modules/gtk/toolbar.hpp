// AUTO-GENERATED

#ifndef _GI_GTK_TOOLBAR_HPP_
#define _GI_GTK_TOOLBAR_HPP_

#include "container.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Orientable;
class ToolItem;
class ToolShell;

class Toolbar;

namespace base {


#define GI_GTK_TOOLBAR_BASE base::ToolbarBase
class ToolbarBase : public Gtk::Container
{
typedef Gtk::Container super_type;
public:
typedef ::GtkToolbar BaseObjectType;

ToolbarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_toolbar_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

GI_INLINE_DECL Gtk::ToolShell interface_ (gi::interface_tag<Gtk::ToolShell>);

GI_INLINE_DECL operator Gtk::ToolShell ();

// GtkWidget* gtk_toolbar_new ();
// ::GtkToolbar* gtk_toolbar_new ();
static GI_INLINE_DECL Gtk::Toolbar new_ () noexcept;

// gint gtk_toolbar_get_drop_index (GtkToolbar* toolbar, gint x, gint y);
// gint gtk_toolbar_get_drop_index (::GtkToolbar* toolbar, gint x, gint y);
GI_INLINE_DECL gint get_drop_index (gint x, gint y) noexcept;

// GtkIconSize gtk_toolbar_get_icon_size (GtkToolbar* toolbar);
// ::GtkIconSize gtk_toolbar_get_icon_size (::GtkToolbar* toolbar);
GI_INLINE_DECL Gtk::IconSize get_icon_size () noexcept;

// gint gtk_toolbar_get_item_index (GtkToolbar* toolbar, GtkToolItem* item);
// gint gtk_toolbar_get_item_index (::GtkToolbar* toolbar, ::GtkToolItem* item);
GI_INLINE_DECL gint get_item_index (Gtk::ToolItem item) noexcept;

// gint gtk_toolbar_get_n_items (GtkToolbar* toolbar);
// gint gtk_toolbar_get_n_items (::GtkToolbar* toolbar);
GI_INLINE_DECL gint get_n_items () noexcept;

// GtkToolItem* gtk_toolbar_get_nth_item (GtkToolbar* toolbar, gint n);
// ::GtkToolItem* gtk_toolbar_get_nth_item (::GtkToolbar* toolbar, gint n);
GI_INLINE_DECL Gtk::ToolItem get_nth_item (gint n) noexcept;

// GtkReliefStyle gtk_toolbar_get_relief_style (GtkToolbar* toolbar);
// ::GtkReliefStyle gtk_toolbar_get_relief_style (::GtkToolbar* toolbar);
GI_INLINE_DECL Gtk::ReliefStyle get_relief_style () noexcept;

// gboolean gtk_toolbar_get_show_arrow (GtkToolbar* toolbar);
// gboolean gtk_toolbar_get_show_arrow (::GtkToolbar* toolbar);
GI_INLINE_DECL bool get_show_arrow () noexcept;

// GtkToolbarStyle gtk_toolbar_get_style (GtkToolbar* toolbar);
// ::GtkToolbarStyle gtk_toolbar_get_style (::GtkToolbar* toolbar);
GI_INLINE_DECL Gtk::ToolbarStyle get_style () noexcept;

// void gtk_toolbar_insert (GtkToolbar* toolbar, GtkToolItem* item, gint pos);
// void gtk_toolbar_insert (::GtkToolbar* toolbar, ::GtkToolItem* item, gint pos);
GI_INLINE_DECL void insert (Gtk::ToolItem item, gint pos) noexcept;

// void gtk_toolbar_set_drop_highlight_item (GtkToolbar* toolbar, GtkToolItem* tool_item, gint index_);
// void gtk_toolbar_set_drop_highlight_item (::GtkToolbar* toolbar, ::GtkToolItem* tool_item, gint index_);
GI_INLINE_DECL void set_drop_highlight_item (Gtk::ToolItem tool_item, gint index_) noexcept;
GI_INLINE_DECL void set_drop_highlight_item (gint index_) noexcept;

// void gtk_toolbar_set_icon_size (GtkToolbar* toolbar, GtkIconSize icon_size);
// void gtk_toolbar_set_icon_size (::GtkToolbar* toolbar, ::GtkIconSize icon_size);
GI_INLINE_DECL void set_icon_size (Gtk::IconSize icon_size) noexcept;

// void gtk_toolbar_set_show_arrow (GtkToolbar* toolbar, gboolean show_arrow);
// void gtk_toolbar_set_show_arrow (::GtkToolbar* toolbar, gboolean show_arrow);
GI_INLINE_DECL void set_show_arrow (gboolean show_arrow) noexcept;

// void gtk_toolbar_set_style (GtkToolbar* toolbar, GtkToolbarStyle style);
// void gtk_toolbar_set_style (::GtkToolbar* toolbar, ::GtkToolbarStyle style);
GI_INLINE_DECL void set_style (Gtk::ToolbarStyle style) noexcept;

// void gtk_toolbar_unset_icon_size (GtkToolbar* toolbar);
// void gtk_toolbar_unset_icon_size (::GtkToolbar* toolbar);
GI_INLINE_DECL void unset_icon_size () noexcept;

// void gtk_toolbar_unset_style (GtkToolbar* toolbar);
// void gtk_toolbar_unset_style (::GtkToolbar* toolbar);
GI_INLINE_DECL void unset_style () noexcept;

gi::property_proxy<Gtk::IconSize, base::ToolbarBase> property_icon_size()
{ return gi::property_proxy<Gtk::IconSize, base::ToolbarBase> (*this, "icon-size"); }
const gi::property_proxy<Gtk::IconSize, base::ToolbarBase> property_icon_size() const
{ return gi::property_proxy<Gtk::IconSize, base::ToolbarBase> (*this, "icon-size"); }

gi::property_proxy<bool, base::ToolbarBase> property_icon_size_set()
{ return gi::property_proxy<bool, base::ToolbarBase> (*this, "icon-size-set"); }
const gi::property_proxy<bool, base::ToolbarBase> property_icon_size_set() const
{ return gi::property_proxy<bool, base::ToolbarBase> (*this, "icon-size-set"); }

gi::property_proxy<bool, base::ToolbarBase> property_show_arrow()
{ return gi::property_proxy<bool, base::ToolbarBase> (*this, "show-arrow"); }
const gi::property_proxy<bool, base::ToolbarBase> property_show_arrow() const
{ return gi::property_proxy<bool, base::ToolbarBase> (*this, "show-arrow"); }

gi::property_proxy<Gtk::ToolbarStyle, base::ToolbarBase> property_toolbar_style()
{ return gi::property_proxy<Gtk::ToolbarStyle, base::ToolbarBase> (*this, "toolbar-style"); }
const gi::property_proxy<Gtk::ToolbarStyle, base::ToolbarBase> property_toolbar_style() const
{ return gi::property_proxy<Gtk::ToolbarStyle, base::ToolbarBase> (*this, "toolbar-style"); }

// signal focus-home-or-end
gi::signal_proxy<bool(Gtk::Toolbar, gboolean focus_home)> signal_focus_home_or_end()
{ return gi::signal_proxy<bool(Gtk::Toolbar, gboolean focus_home)> (*this, "focus-home-or-end"); }

// signal orientation-changed
gi::signal_proxy<void(Gtk::Toolbar, Gtk::Orientation orientation)> signal_orientation_changed()
{ return gi::signal_proxy<void(Gtk::Toolbar, Gtk::Orientation orientation)> (*this, "orientation-changed"); }

// signal popup-context-menu
gi::signal_proxy<bool(Gtk::Toolbar, gint x, gint y, gint button)> signal_popup_context_menu()
{ return gi::signal_proxy<bool(Gtk::Toolbar, gint x, gint y, gint button)> (*this, "popup-context-menu"); }

// signal style-changed
gi::signal_proxy<void(Gtk::Toolbar, Gtk::ToolbarStyle style)> signal_style_changed()
{ return gi::signal_proxy<void(Gtk::Toolbar, Gtk::ToolbarStyle style)> (*this, "style-changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/toolbar_extra_def.hpp>)
#include <gtk/toolbar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/toolbar_extra.hpp>)
#include <gtk/toolbar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Toolbar : public GI_GTK_TOOLBAR_BASE
{ typedef GI_GTK_TOOLBAR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkToolbar>
{ typedef Gtk::Toolbar type; }; 

} // namespace repository

} // namespace gi

#include "orientable.hpp"
#include "toolshell.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ToolbarClassDef
{
typedef ToolbarClassDef self;
public:
typedef Gtk::Toolbar instance_type;
typedef ::GtkToolbarClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Toolbar::orientation_changed (GtkToolbar* toolbar, GtkOrientation orientation);
// void Toolbar::orientation_changed (::GtkToolbar* toolbar, ::GtkOrientation orientation);
virtual void orientation_changed_ (Gtk::Orientation orientation) noexcept = 0;

// gboolean Toolbar::popup_context_menu (GtkToolbar* toolbar, gint x, gint y, gint button_number);
// gboolean Toolbar::popup_context_menu (::GtkToolbar* toolbar, gint x, gint y, gint button_number);
virtual bool popup_context_menu_ (gint x, gint y, gint button_number) noexcept = 0;

// void Toolbar::style_changed (GtkToolbar* toolbar, GtkToolbarStyle style);
// void Toolbar::style_changed (::GtkToolbar* toolbar, ::GtkToolbarStyle style);
virtual void style_changed_ (Gtk::ToolbarStyle style) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ToolbarClass: public detail::ClassTemplate<Gtk::impl::internal::ToolbarClassDef, Gtk::impl::internal::ContainerClass, Gtk::impl::internal::OrientableIfaceClassImpl, Gtk::impl::internal::ToolShellIfaceClassImpl>
{
typedef ToolbarClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ToolbarClassDef, Gtk::impl::internal::ContainerClass, Gtk::impl::internal::OrientableIfaceClassImpl, Gtk::impl::internal::ToolShellIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::OrientableIfaceClassImpl GtkOrientableIface_type;
typedef Gtk::impl::internal::ToolShellIfaceClassImpl GtkToolShellIface_type;


// void Toolbar::orientation_changed (GtkToolbar* toolbar, GtkOrientation orientation);
// void Toolbar::orientation_changed (::GtkToolbar* toolbar, ::GtkOrientation orientation);
GI_INLINE_DECL void orientation_changed_ (Gtk::Orientation orientation) noexcept override;

// gboolean Toolbar::popup_context_menu (GtkToolbar* toolbar, gint x, gint y, gint button_number);
// gboolean Toolbar::popup_context_menu (::GtkToolbar* toolbar, gint x, gint y, gint button_number);
GI_INLINE_DECL bool popup_context_menu_ (gint x, gint y, gint button_number) noexcept override;

// void Toolbar::style_changed (GtkToolbar* toolbar, GtkToolbarStyle style);
// void Toolbar::style_changed (::GtkToolbar* toolbar, ::GtkToolbarStyle style);
GI_INLINE_DECL void style_changed_ (Gtk::ToolbarStyle style) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ToolbarImpl = detail::ObjectImpl<Toolbar, internal::ToolbarClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
