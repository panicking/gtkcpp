// AUTO-GENERATED

#ifndef _GI_GTK_IMAGE_HPP_
#define _GI_GTK_IMAGE_HPP_

#include "misc.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class IconSet;

class Image;

namespace base {


#define GI_GTK_IMAGE_BASE base::ImageBase
class ImageBase : public Gtk::Misc
{
typedef Gtk::Misc super_type;
public:
typedef ::GtkImage BaseObjectType;

ImageBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_image_get_type(); } 

// GtkWidget* gtk_image_new ();
// ::GtkImage* gtk_image_new ();
static GI_INLINE_DECL Gtk::Image new_ () noexcept;

// GtkWidget* gtk_image_new_from_animation (GdkPixbufAnimation* animation);
// ::GtkImage* gtk_image_new_from_animation (::GdkPixbufAnimation* animation);
static GI_INLINE_DECL Gtk::Image new_from_animation (GdkPixbuf::PixbufAnimation animation) noexcept;

// GtkWidget* gtk_image_new_from_file (const gchar* filename);
// ::GtkImage* gtk_image_new_from_file (const char* filename);
static GI_INLINE_DECL Gtk::Image new_from_file (const std::string & filename) noexcept;

// GtkWidget* gtk_image_new_from_gicon (GIcon* icon, GtkIconSize size);
// ::GtkImage* gtk_image_new_from_gicon (::GIcon* icon, gint size);
static GI_INLINE_DECL Gtk::Image new_from_gicon (Gio::Icon icon, gint size) noexcept;

// GtkWidget* gtk_image_new_from_icon_name (const gchar* icon_name, GtkIconSize size);
// ::GtkImage* gtk_image_new_from_icon_name (const char* icon_name, gint size);
static GI_INLINE_DECL Gtk::Image new_from_icon_name (const std::string & icon_name, gint size) noexcept;
static GI_INLINE_DECL Gtk::Image new_from_icon_name (gint size) noexcept;

// GtkWidget* gtk_image_new_from_icon_set (GtkIconSet* icon_set, GtkIconSize size);
// ::GtkImage* gtk_image_new_from_icon_set (::GtkIconSet* icon_set, gint size);
// IGNORE; deprecated

// GtkWidget* gtk_image_new_from_pixbuf (GdkPixbuf* pixbuf);
// ::GtkImage* gtk_image_new_from_pixbuf (::GdkPixbuf* pixbuf);
static GI_INLINE_DECL Gtk::Image new_from_pixbuf (GdkPixbuf::Pixbuf pixbuf) noexcept;
static GI_INLINE_DECL Gtk::Image new_from_pixbuf () noexcept;

// GtkWidget* gtk_image_new_from_resource (const gchar* resource_path);
// ::GtkImage* gtk_image_new_from_resource (const char* resource_path);
static GI_INLINE_DECL Gtk::Image new_from_resource (const std::string & resource_path) noexcept;

// GtkWidget* gtk_image_new_from_stock (const gchar* stock_id, GtkIconSize size);
// ::GtkImage* gtk_image_new_from_stock (const char* stock_id, gint size);
// IGNORE; deprecated

// GtkWidget* gtk_image_new_from_surface (cairo_surface_t* surface);
// ::GtkImage* gtk_image_new_from_surface (::cairo_surface_t* surface);
static GI_INLINE_DECL Gtk::Image new_from_surface (cairo::Surface surface) noexcept;
static GI_INLINE_DECL Gtk::Image new_from_surface () noexcept;

// void gtk_image_clear (GtkImage* image);
// void gtk_image_clear (::GtkImage* image);
GI_INLINE_DECL void clear () noexcept;

// GdkPixbufAnimation* gtk_image_get_animation (GtkImage* image);
// ::GdkPixbufAnimation* gtk_image_get_animation (::GtkImage* image);
GI_INLINE_DECL GdkPixbuf::PixbufAnimation get_animation () noexcept;

// void gtk_image_get_gicon (GtkImage* image, GIcon** gicon, GtkIconSize* size);
// void gtk_image_get_gicon (::GtkImage* image, ::GIcon** gicon, gint* size);
GI_INLINE_DECL void get_gicon (Gio::Icon * gicon = nullptr, gint * size = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gio::Icon, gint> get_gicon () noexcept;

// void gtk_image_get_icon_name (GtkImage* image, const gchar** icon_name, GtkIconSize* size);
// void gtk_image_get_icon_name (::GtkImage* image, const char** icon_name, gint* size);
GI_INLINE_DECL void get_icon_name (std::string * icon_name = nullptr, gint * size = nullptr) noexcept;
GI_INLINE_DECL std::tuple<std::string, gint> get_icon_name () noexcept;

// void gtk_image_get_icon_set (GtkImage* image, GtkIconSet** icon_set, GtkIconSize* size);
// void gtk_image_get_icon_set (::GtkImage* image, ::GtkIconSet** icon_set, gint* size);
// IGNORE; deprecated

// GdkPixbuf* gtk_image_get_pixbuf (GtkImage* image);
// ::GdkPixbuf* gtk_image_get_pixbuf (::GtkImage* image);
GI_INLINE_DECL GdkPixbuf::Pixbuf get_pixbuf () noexcept;

// gint gtk_image_get_pixel_size (GtkImage* image);
// gint gtk_image_get_pixel_size (::GtkImage* image);
GI_INLINE_DECL gint get_pixel_size () noexcept;

// void gtk_image_get_stock (GtkImage* image, gchar** stock_id, GtkIconSize* size);
// void gtk_image_get_stock (::GtkImage* image, char** stock_id, gint* size);
// IGNORE; deprecated

// GtkImageType gtk_image_get_storage_type (GtkImage* image);
// ::GtkImageType gtk_image_get_storage_type (::GtkImage* image);
GI_INLINE_DECL Gtk::ImageType get_storage_type () noexcept;

// void gtk_image_set_from_animation (GtkImage* image, GdkPixbufAnimation* animation);
// void gtk_image_set_from_animation (::GtkImage* image, ::GdkPixbufAnimation* animation);
GI_INLINE_DECL void set_from_animation (GdkPixbuf::PixbufAnimation animation) noexcept;

// void gtk_image_set_from_file (GtkImage* image, const gchar* filename);
// void gtk_image_set_from_file (::GtkImage* image, const char* filename);
GI_INLINE_DECL void set_from_file (const std::string & filename) noexcept;
GI_INLINE_DECL void set_from_file () noexcept;

// void gtk_image_set_from_gicon (GtkImage* image, GIcon* icon, GtkIconSize size);
// void gtk_image_set_from_gicon (::GtkImage* image, ::GIcon* icon, gint size);
GI_INLINE_DECL void set_from_gicon (Gio::Icon icon, gint size) noexcept;

// void gtk_image_set_from_icon_name (GtkImage* image, const gchar* icon_name, GtkIconSize size);
// void gtk_image_set_from_icon_name (::GtkImage* image, const char* icon_name, gint size);
GI_INLINE_DECL void set_from_icon_name (const std::string & icon_name, gint size) noexcept;
GI_INLINE_DECL void set_from_icon_name (gint size) noexcept;

// void gtk_image_set_from_icon_set (GtkImage* image, GtkIconSet* icon_set, GtkIconSize size);
// void gtk_image_set_from_icon_set (::GtkImage* image, ::GtkIconSet* icon_set, gint size);
// IGNORE; deprecated

// void gtk_image_set_from_pixbuf (GtkImage* image, GdkPixbuf* pixbuf);
// void gtk_image_set_from_pixbuf (::GtkImage* image, ::GdkPixbuf* pixbuf);
GI_INLINE_DECL void set_from_pixbuf (GdkPixbuf::Pixbuf pixbuf) noexcept;
GI_INLINE_DECL void set_from_pixbuf () noexcept;

// void gtk_image_set_from_resource (GtkImage* image, const gchar* resource_path);
// void gtk_image_set_from_resource (::GtkImage* image, const char* resource_path);
GI_INLINE_DECL void set_from_resource (const std::string & resource_path) noexcept;
GI_INLINE_DECL void set_from_resource () noexcept;

// void gtk_image_set_from_stock (GtkImage* image, const gchar* stock_id, GtkIconSize size);
// void gtk_image_set_from_stock (::GtkImage* image, const char* stock_id, gint size);
// IGNORE; deprecated

// void gtk_image_set_from_surface (GtkImage* image, cairo_surface_t* surface);
// void gtk_image_set_from_surface (::GtkImage* image, ::cairo_surface_t* surface);
GI_INLINE_DECL void set_from_surface (cairo::Surface surface) noexcept;
GI_INLINE_DECL void set_from_surface () noexcept;

// void gtk_image_set_pixel_size (GtkImage* image, gint pixel_size);
// void gtk_image_set_pixel_size (::GtkImage* image, gint pixel_size);
GI_INLINE_DECL void set_pixel_size (gint pixel_size) noexcept;

gi::property_proxy<std::string, base::ImageBase> property_file()
{ return gi::property_proxy<std::string, base::ImageBase> (*this, "file"); }
const gi::property_proxy<std::string, base::ImageBase> property_file() const
{ return gi::property_proxy<std::string, base::ImageBase> (*this, "file"); }

gi::property_proxy<Gio::Icon, base::ImageBase> property_gicon()
{ return gi::property_proxy<Gio::Icon, base::ImageBase> (*this, "gicon"); }
const gi::property_proxy<Gio::Icon, base::ImageBase> property_gicon() const
{ return gi::property_proxy<Gio::Icon, base::ImageBase> (*this, "gicon"); }

gi::property_proxy<std::string, base::ImageBase> property_icon_name()
{ return gi::property_proxy<std::string, base::ImageBase> (*this, "icon-name"); }
const gi::property_proxy<std::string, base::ImageBase> property_icon_name() const
{ return gi::property_proxy<std::string, base::ImageBase> (*this, "icon-name"); }

gi::property_proxy<Gtk::IconSet, base::ImageBase> property_icon_set()
{ return gi::property_proxy<Gtk::IconSet, base::ImageBase> (*this, "icon-set"); }
const gi::property_proxy<Gtk::IconSet, base::ImageBase> property_icon_set() const
{ return gi::property_proxy<Gtk::IconSet, base::ImageBase> (*this, "icon-set"); }

gi::property_proxy<gint, base::ImageBase> property_icon_size()
{ return gi::property_proxy<gint, base::ImageBase> (*this, "icon-size"); }
const gi::property_proxy<gint, base::ImageBase> property_icon_size() const
{ return gi::property_proxy<gint, base::ImageBase> (*this, "icon-size"); }

gi::property_proxy<GdkPixbuf::Pixbuf, base::ImageBase> property_pixbuf()
{ return gi::property_proxy<GdkPixbuf::Pixbuf, base::ImageBase> (*this, "pixbuf"); }
const gi::property_proxy<GdkPixbuf::Pixbuf, base::ImageBase> property_pixbuf() const
{ return gi::property_proxy<GdkPixbuf::Pixbuf, base::ImageBase> (*this, "pixbuf"); }

gi::property_proxy<GdkPixbuf::PixbufAnimation, base::ImageBase> property_pixbuf_animation()
{ return gi::property_proxy<GdkPixbuf::PixbufAnimation, base::ImageBase> (*this, "pixbuf-animation"); }
const gi::property_proxy<GdkPixbuf::PixbufAnimation, base::ImageBase> property_pixbuf_animation() const
{ return gi::property_proxy<GdkPixbuf::PixbufAnimation, base::ImageBase> (*this, "pixbuf-animation"); }

gi::property_proxy<gint, base::ImageBase> property_pixel_size()
{ return gi::property_proxy<gint, base::ImageBase> (*this, "pixel-size"); }
const gi::property_proxy<gint, base::ImageBase> property_pixel_size() const
{ return gi::property_proxy<gint, base::ImageBase> (*this, "pixel-size"); }

gi::property_proxy<std::string, base::ImageBase> property_resource()
{ return gi::property_proxy<std::string, base::ImageBase> (*this, "resource"); }
const gi::property_proxy<std::string, base::ImageBase> property_resource() const
{ return gi::property_proxy<std::string, base::ImageBase> (*this, "resource"); }

gi::property_proxy<std::string, base::ImageBase> property_stock()
{ return gi::property_proxy<std::string, base::ImageBase> (*this, "stock"); }
const gi::property_proxy<std::string, base::ImageBase> property_stock() const
{ return gi::property_proxy<std::string, base::ImageBase> (*this, "stock"); }

gi::property_proxy<Gtk::ImageType, base::ImageBase> property_storage_type()
{ return gi::property_proxy<Gtk::ImageType, base::ImageBase> (*this, "storage-type"); }
const gi::property_proxy<Gtk::ImageType, base::ImageBase> property_storage_type() const
{ return gi::property_proxy<Gtk::ImageType, base::ImageBase> (*this, "storage-type"); }

gi::property_proxy<cairo::Surface, base::ImageBase> property_surface()
{ return gi::property_proxy<cairo::Surface, base::ImageBase> (*this, "surface"); }
const gi::property_proxy<cairo::Surface, base::ImageBase> property_surface() const
{ return gi::property_proxy<cairo::Surface, base::ImageBase> (*this, "surface"); }

gi::property_proxy<bool, base::ImageBase> property_use_fallback()
{ return gi::property_proxy<bool, base::ImageBase> (*this, "use-fallback"); }
const gi::property_proxy<bool, base::ImageBase> property_use_fallback() const
{ return gi::property_proxy<bool, base::ImageBase> (*this, "use-fallback"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/image_extra_def.hpp>)
#include <gtk/image_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/image_extra.hpp>)
#include <gtk/image_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Image : public GI_GTK_IMAGE_BASE
{ typedef GI_GTK_IMAGE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkImage>
{ typedef Gtk::Image type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ImageClassDef
{
typedef ImageClassDef self;
public:
typedef Gtk::Image instance_type;
typedef ::GtkImageClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ImageClass: public detail::ClassTemplate<Gtk::impl::internal::ImageClassDef, Gtk::impl::internal::MiscClass>
{
typedef ImageClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ImageClassDef, Gtk::impl::internal::MiscClass> super;

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

using ImageImpl = detail::ObjectImpl<Image, internal::ImageClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
