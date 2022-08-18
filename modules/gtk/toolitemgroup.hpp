// AUTO-GENERATED

#ifndef _GI_GTK_TOOLITEMGROUP_HPP_
#define _GI_GTK_TOOLITEMGROUP_HPP_

#include "container.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class ToolItem;
class ToolShell;
class Widget;

class ToolItemGroup;

namespace base {


#define GI_GTK_TOOLITEMGROUP_BASE base::ToolItemGroupBase
class ToolItemGroupBase : public Gtk::Container
{
typedef Gtk::Container super_type;
public:
typedef ::GtkToolItemGroup BaseObjectType;

ToolItemGroupBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tool_item_group_get_type(); } 

GI_INLINE_DECL Gtk::ToolShell interface_ (gi::interface_tag<Gtk::ToolShell>);

GI_INLINE_DECL operator Gtk::ToolShell ();

// GtkWidget* gtk_tool_item_group_new (const gchar* label);
// ::GtkToolItemGroup* gtk_tool_item_group_new (const char* label);
static GI_INLINE_DECL Gtk::ToolItemGroup new_ (const std::string & label) noexcept;

// gboolean gtk_tool_item_group_get_collapsed (GtkToolItemGroup* group);
// gboolean gtk_tool_item_group_get_collapsed (::GtkToolItemGroup* group);
GI_INLINE_DECL bool get_collapsed () noexcept;

// GtkToolItem* gtk_tool_item_group_get_drop_item (GtkToolItemGroup* group, gint x, gint y);
// ::GtkToolItem* gtk_tool_item_group_get_drop_item (::GtkToolItemGroup* group, gint x, gint y);
GI_INLINE_DECL Gtk::ToolItem get_drop_item (gint x, gint y) noexcept;

// PangoEllipsizeMode gtk_tool_item_group_get_ellipsize (GtkToolItemGroup* group);
// ::PangoEllipsizeMode gtk_tool_item_group_get_ellipsize (::GtkToolItemGroup* group);
GI_INLINE_DECL Pango::EllipsizeMode get_ellipsize () noexcept;

// GtkReliefStyle gtk_tool_item_group_get_header_relief (GtkToolItemGroup* group);
// ::GtkReliefStyle gtk_tool_item_group_get_header_relief (::GtkToolItemGroup* group);
GI_INLINE_DECL Gtk::ReliefStyle get_header_relief () noexcept;

// gint gtk_tool_item_group_get_item_position (GtkToolItemGroup* group, GtkToolItem* item);
// gint gtk_tool_item_group_get_item_position (::GtkToolItemGroup* group, ::GtkToolItem* item);
GI_INLINE_DECL gint get_item_position (Gtk::ToolItem item) noexcept;

// const gchar* gtk_tool_item_group_get_label (GtkToolItemGroup* group);
// const char* gtk_tool_item_group_get_label (::GtkToolItemGroup* group);
GI_INLINE_DECL std::string get_label () noexcept;

// GtkWidget* gtk_tool_item_group_get_label_widget (GtkToolItemGroup* group);
// ::GtkWidget* gtk_tool_item_group_get_label_widget (::GtkToolItemGroup* group);
GI_INLINE_DECL Gtk::Widget get_label_widget () noexcept;

// guint gtk_tool_item_group_get_n_items (GtkToolItemGroup* group);
// guint gtk_tool_item_group_get_n_items (::GtkToolItemGroup* group);
GI_INLINE_DECL guint get_n_items () noexcept;

// GtkToolItem* gtk_tool_item_group_get_nth_item (GtkToolItemGroup* group, guint index);
// ::GtkToolItem* gtk_tool_item_group_get_nth_item (::GtkToolItemGroup* group, guint index);
GI_INLINE_DECL Gtk::ToolItem get_nth_item (guint index) noexcept;

// void gtk_tool_item_group_insert (GtkToolItemGroup* group, GtkToolItem* item, gint position);
// void gtk_tool_item_group_insert (::GtkToolItemGroup* group, ::GtkToolItem* item, gint position);
GI_INLINE_DECL void insert (Gtk::ToolItem item, gint position) noexcept;

// void gtk_tool_item_group_set_collapsed (GtkToolItemGroup* group, gboolean collapsed);
// void gtk_tool_item_group_set_collapsed (::GtkToolItemGroup* group, gboolean collapsed);
GI_INLINE_DECL void set_collapsed (gboolean collapsed) noexcept;

// void gtk_tool_item_group_set_ellipsize (GtkToolItemGroup* group, PangoEllipsizeMode ellipsize);
// void gtk_tool_item_group_set_ellipsize (::GtkToolItemGroup* group, ::PangoEllipsizeMode ellipsize);
GI_INLINE_DECL void set_ellipsize (Pango::EllipsizeMode ellipsize) noexcept;

// void gtk_tool_item_group_set_header_relief (GtkToolItemGroup* group, GtkReliefStyle style);
// void gtk_tool_item_group_set_header_relief (::GtkToolItemGroup* group, ::GtkReliefStyle style);
GI_INLINE_DECL void set_header_relief (Gtk::ReliefStyle style) noexcept;

// void gtk_tool_item_group_set_item_position (GtkToolItemGroup* group, GtkToolItem* item, gint position);
// void gtk_tool_item_group_set_item_position (::GtkToolItemGroup* group, ::GtkToolItem* item, gint position);
GI_INLINE_DECL void set_item_position (Gtk::ToolItem item, gint position) noexcept;

// void gtk_tool_item_group_set_label (GtkToolItemGroup* group, const gchar* label);
// void gtk_tool_item_group_set_label (::GtkToolItemGroup* group, const char* label);
GI_INLINE_DECL void set_label (const std::string & label) noexcept;

// void gtk_tool_item_group_set_label_widget (GtkToolItemGroup* group, GtkWidget* label_widget);
// void gtk_tool_item_group_set_label_widget (::GtkToolItemGroup* group, ::GtkWidget* label_widget);
GI_INLINE_DECL void set_label_widget (Gtk::Widget label_widget) noexcept;

gi::property_proxy<bool, base::ToolItemGroupBase> property_collapsed()
{ return gi::property_proxy<bool, base::ToolItemGroupBase> (*this, "collapsed"); }
const gi::property_proxy<bool, base::ToolItemGroupBase> property_collapsed() const
{ return gi::property_proxy<bool, base::ToolItemGroupBase> (*this, "collapsed"); }

gi::property_proxy<Pango::EllipsizeMode, base::ToolItemGroupBase> property_ellipsize()
{ return gi::property_proxy<Pango::EllipsizeMode, base::ToolItemGroupBase> (*this, "ellipsize"); }
const gi::property_proxy<Pango::EllipsizeMode, base::ToolItemGroupBase> property_ellipsize() const
{ return gi::property_proxy<Pango::EllipsizeMode, base::ToolItemGroupBase> (*this, "ellipsize"); }

gi::property_proxy<Gtk::ReliefStyle, base::ToolItemGroupBase> property_header_relief()
{ return gi::property_proxy<Gtk::ReliefStyle, base::ToolItemGroupBase> (*this, "header-relief"); }
const gi::property_proxy<Gtk::ReliefStyle, base::ToolItemGroupBase> property_header_relief() const
{ return gi::property_proxy<Gtk::ReliefStyle, base::ToolItemGroupBase> (*this, "header-relief"); }

gi::property_proxy<std::string, base::ToolItemGroupBase> property_label()
{ return gi::property_proxy<std::string, base::ToolItemGroupBase> (*this, "label"); }
const gi::property_proxy<std::string, base::ToolItemGroupBase> property_label() const
{ return gi::property_proxy<std::string, base::ToolItemGroupBase> (*this, "label"); }

gi::property_proxy<Gtk::Widget, base::ToolItemGroupBase> property_label_widget()
{ return gi::property_proxy<Gtk::Widget, base::ToolItemGroupBase> (*this, "label-widget"); }
const gi::property_proxy<Gtk::Widget, base::ToolItemGroupBase> property_label_widget() const
{ return gi::property_proxy<Gtk::Widget, base::ToolItemGroupBase> (*this, "label-widget"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/toolitemgroup_extra_def.hpp>)
#include <gtk/toolitemgroup_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/toolitemgroup_extra.hpp>)
#include <gtk/toolitemgroup_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ToolItemGroup : public GI_GTK_TOOLITEMGROUP_BASE
{ typedef GI_GTK_TOOLITEMGROUP_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkToolItemGroup>
{ typedef Gtk::ToolItemGroup type; }; 

} // namespace repository

} // namespace gi

#include "toolshell.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ToolItemGroupClassDef
{
typedef ToolItemGroupClassDef self;
public:
typedef Gtk::ToolItemGroup instance_type;
typedef ::GtkToolItemGroupClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ToolItemGroupClass: public detail::ClassTemplate<Gtk::impl::internal::ToolItemGroupClassDef, Gtk::impl::internal::ContainerClass, Gtk::impl::internal::ToolShellIfaceClassImpl>
{
typedef ToolItemGroupClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ToolItemGroupClassDef, Gtk::impl::internal::ContainerClass, Gtk::impl::internal::ToolShellIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::ToolShellIfaceClassImpl GtkToolShellIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using ToolItemGroupImpl = detail::ObjectImpl<ToolItemGroup, internal::ToolItemGroupClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
