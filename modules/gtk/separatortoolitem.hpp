// AUTO-GENERATED

#ifndef _GI_GTK_SEPARATORTOOLITEM_HPP_
#define _GI_GTK_SEPARATORTOOLITEM_HPP_

#include "toolitem.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class SeparatorToolItem;

namespace base {


#define GI_GTK_SEPARATORTOOLITEM_BASE base::SeparatorToolItemBase
class SeparatorToolItemBase : public Gtk::ToolItem
{
typedef Gtk::ToolItem super_type;
public:
typedef ::GtkSeparatorToolItem BaseObjectType;

SeparatorToolItemBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_separator_tool_item_get_type(); } 

// GtkToolItem* gtk_separator_tool_item_new ();
// ::GtkSeparatorToolItem* gtk_separator_tool_item_new ();
static GI_INLINE_DECL Gtk::SeparatorToolItem new_ () noexcept;

// gboolean gtk_separator_tool_item_get_draw (GtkSeparatorToolItem* item);
// gboolean gtk_separator_tool_item_get_draw (::GtkSeparatorToolItem* item);
GI_INLINE_DECL bool get_draw () noexcept;

// void gtk_separator_tool_item_set_draw (GtkSeparatorToolItem* item, gboolean draw);
// void gtk_separator_tool_item_set_draw (::GtkSeparatorToolItem* item, gboolean draw);
GI_INLINE_DECL void set_draw (gboolean draw) noexcept;

gi::property_proxy<bool, base::SeparatorToolItemBase> property_draw()
{ return gi::property_proxy<bool, base::SeparatorToolItemBase> (*this, "draw"); }
const gi::property_proxy<bool, base::SeparatorToolItemBase> property_draw() const
{ return gi::property_proxy<bool, base::SeparatorToolItemBase> (*this, "draw"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/separatortoolitem_extra_def.hpp>)
#include <gtk/separatortoolitem_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/separatortoolitem_extra.hpp>)
#include <gtk/separatortoolitem_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SeparatorToolItem : public GI_GTK_SEPARATORTOOLITEM_BASE
{ typedef GI_GTK_SEPARATORTOOLITEM_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSeparatorToolItem>
{ typedef Gtk::SeparatorToolItem type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class SeparatorToolItemClassDef
{
typedef SeparatorToolItemClassDef self;
public:
typedef Gtk::SeparatorToolItem instance_type;
typedef ::GtkSeparatorToolItemClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SeparatorToolItemClass: public detail::ClassTemplate<Gtk::impl::internal::SeparatorToolItemClassDef, Gtk::impl::internal::ToolItemClass>
{
typedef SeparatorToolItemClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::SeparatorToolItemClassDef, Gtk::impl::internal::ToolItemClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using SeparatorToolItemImpl = detail::ObjectImpl<SeparatorToolItem, internal::SeparatorToolItemClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
