// AUTO-GENERATED

#ifndef _GI_GTK_IMAGEMENUITEM_HPP_
#define _GI_GTK_IMAGEMENUITEM_HPP_

#include "menuitem.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class AccelGroup;
class Widget;

class ImageMenuItem;

namespace base {


#define GI_GTK_IMAGEMENUITEM_BASE base::ImageMenuItemBase
class ImageMenuItemBase : public Gtk::MenuItem
{
typedef Gtk::MenuItem super_type;
public:
typedef ::GtkImageMenuItem BaseObjectType;

ImageMenuItemBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_image_menu_item_get_type(); } 

// GtkWidget* gtk_image_menu_item_new ();
// ::GtkImageMenuItem* gtk_image_menu_item_new ();
// IGNORE; deprecated

// GtkWidget* gtk_image_menu_item_new_from_stock (const gchar* stock_id, GtkAccelGroup* accel_group);
// ::GtkImageMenuItem* gtk_image_menu_item_new_from_stock (const char* stock_id, ::GtkAccelGroup* accel_group);
// IGNORE; deprecated

// GtkWidget* gtk_image_menu_item_new_with_label (const gchar* label);
// ::GtkImageMenuItem* gtk_image_menu_item_new_with_label (const char* label);
// IGNORE; deprecated

// GtkWidget* gtk_image_menu_item_new_with_mnemonic (const gchar* label);
// ::GtkImageMenuItem* gtk_image_menu_item_new_with_mnemonic (const char* label);
// IGNORE; deprecated

// gboolean gtk_image_menu_item_get_always_show_image (GtkImageMenuItem* image_menu_item);
// gboolean gtk_image_menu_item_get_always_show_image (::GtkImageMenuItem* image_menu_item);
// IGNORE; deprecated

// GtkWidget* gtk_image_menu_item_get_image (GtkImageMenuItem* image_menu_item);
// ::GtkWidget* gtk_image_menu_item_get_image (::GtkImageMenuItem* image_menu_item);
// IGNORE; deprecated

// gboolean gtk_image_menu_item_get_use_stock (GtkImageMenuItem* image_menu_item);
// gboolean gtk_image_menu_item_get_use_stock (::GtkImageMenuItem* image_menu_item);
// IGNORE; deprecated

// void gtk_image_menu_item_set_accel_group (GtkImageMenuItem* image_menu_item, GtkAccelGroup* accel_group);
// void gtk_image_menu_item_set_accel_group (::GtkImageMenuItem* image_menu_item, ::GtkAccelGroup* accel_group);
// IGNORE; deprecated

// void gtk_image_menu_item_set_always_show_image (GtkImageMenuItem* image_menu_item, gboolean always_show);
// void gtk_image_menu_item_set_always_show_image (::GtkImageMenuItem* image_menu_item, gboolean always_show);
// IGNORE; deprecated

// void gtk_image_menu_item_set_image (GtkImageMenuItem* image_menu_item, GtkWidget* image);
// void gtk_image_menu_item_set_image (::GtkImageMenuItem* image_menu_item, ::GtkWidget* image);
// IGNORE; deprecated

// void gtk_image_menu_item_set_use_stock (GtkImageMenuItem* image_menu_item, gboolean use_stock);
// void gtk_image_menu_item_set_use_stock (::GtkImageMenuItem* image_menu_item, gboolean use_stock);
// IGNORE; deprecated

gi::property_proxy_write<Gtk::AccelGroup, base::ImageMenuItemBase> property_accel_group()
{ return gi::property_proxy_write<Gtk::AccelGroup, base::ImageMenuItemBase> (*this, "accel-group"); }

gi::property_proxy<bool, base::ImageMenuItemBase> property_always_show_image()
{ return gi::property_proxy<bool, base::ImageMenuItemBase> (*this, "always-show-image"); }
const gi::property_proxy<bool, base::ImageMenuItemBase> property_always_show_image() const
{ return gi::property_proxy<bool, base::ImageMenuItemBase> (*this, "always-show-image"); }

gi::property_proxy<Gtk::Widget, base::ImageMenuItemBase> property_image()
{ return gi::property_proxy<Gtk::Widget, base::ImageMenuItemBase> (*this, "image"); }
const gi::property_proxy<Gtk::Widget, base::ImageMenuItemBase> property_image() const
{ return gi::property_proxy<Gtk::Widget, base::ImageMenuItemBase> (*this, "image"); }

gi::property_proxy<bool, base::ImageMenuItemBase> property_use_stock()
{ return gi::property_proxy<bool, base::ImageMenuItemBase> (*this, "use-stock"); }
const gi::property_proxy<bool, base::ImageMenuItemBase> property_use_stock() const
{ return gi::property_proxy<bool, base::ImageMenuItemBase> (*this, "use-stock"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/imagemenuitem_extra_def.hpp>)
#include <gtk/imagemenuitem_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/imagemenuitem_extra.hpp>)
#include <gtk/imagemenuitem_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ImageMenuItem : public GI_GTK_IMAGEMENUITEM_BASE
{ typedef GI_GTK_IMAGEMENUITEM_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkImageMenuItem>
{ typedef Gtk::ImageMenuItem type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ImageMenuItemClassDef
{
typedef ImageMenuItemClassDef self;
public:
typedef Gtk::ImageMenuItem instance_type;
typedef ::GtkImageMenuItemClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ImageMenuItemClass: public detail::ClassTemplate<Gtk::impl::internal::ImageMenuItemClassDef, Gtk::impl::internal::MenuItemClass>
{
typedef ImageMenuItemClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ImageMenuItemClassDef, Gtk::impl::internal::MenuItemClass> super;

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

using ImageMenuItemImpl = detail::ObjectImpl<ImageMenuItem, internal::ImageMenuItemClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
