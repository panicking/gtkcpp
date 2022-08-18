// AUTO-GENERATED

#ifndef _GI_GTK_IMAGE_IMPL_HPP_
#define _GI_GTK_IMAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_image_new ();
// ::GtkImage* gtk_image_new ();
Gtk::Image base::ImageBase::new_ () noexcept
{
  typedef ::GtkImage* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_image_new_from_animation (GdkPixbufAnimation* animation);
// ::GtkImage* gtk_image_new_from_animation (::GdkPixbufAnimation* animation);
Gtk::Image base::ImageBase::new_from_animation (GdkPixbuf::PixbufAnimation animation) noexcept
{
  typedef ::GtkImage* (*call_wrap_t) (::GdkPixbufAnimation* animation);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_new_from_animation;
  auto animation_to_c = gi::unwrap (animation, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimation*) (animation_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_image_new_from_file (const gchar* filename);
// ::GtkImage* gtk_image_new_from_file (const char* filename);
Gtk::Image base::ImageBase::new_from_file (const std::string & filename) noexcept
{
  typedef ::GtkImage* (*call_wrap_t) (const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_new_from_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_image_new_from_gicon (GIcon* icon, GtkIconSize size);
// ::GtkImage* gtk_image_new_from_gicon (::GIcon* icon, gint size);
Gtk::Image base::ImageBase::new_from_gicon (Gio::Icon icon, gint size) noexcept
{
  typedef ::GtkImage* (*call_wrap_t) (::GIcon* icon, gint size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_new_from_gicon;
  auto size_to_c = size;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GIcon*) (icon_to_c), (gint) (size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_image_new_from_icon_name (const gchar* icon_name, GtkIconSize size);
// ::GtkImage* gtk_image_new_from_icon_name (const char* icon_name, gint size);
Gtk::Image base::ImageBase::new_from_icon_name (const std::string & icon_name, gint size) noexcept
{
  typedef ::GtkImage* (*call_wrap_t) (const char* icon_name, gint size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_new_from_icon_name;
  auto size_to_c = size;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (icon_name_to_c), (gint) (size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::Image base::ImageBase::new_from_icon_name (gint size) noexcept
{
  typedef ::GtkImage* (*call_wrap_t) (const char* icon_name, gint size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_new_from_icon_name;
  auto size_to_c = size;
  auto icon_name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (icon_name_to_c), (gint) (size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_image_new_from_icon_set (GtkIconSet* icon_set, GtkIconSize size);
// ::GtkImage* gtk_image_new_from_icon_set (::GtkIconSet* icon_set, gint size);
// IGNORE; deprecated

// GtkWidget* gtk_image_new_from_pixbuf (GdkPixbuf* pixbuf);
// ::GtkImage* gtk_image_new_from_pixbuf (::GdkPixbuf* pixbuf);
Gtk::Image base::ImageBase::new_from_pixbuf (GdkPixbuf::Pixbuf pixbuf) noexcept
{
  typedef ::GtkImage* (*call_wrap_t) (::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_new_from_pixbuf;
  auto pixbuf_to_c = gi::unwrap (pixbuf, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (pixbuf_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::Image base::ImageBase::new_from_pixbuf () noexcept
{
  typedef ::GtkImage* (*call_wrap_t) (::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_new_from_pixbuf;
  auto pixbuf_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (pixbuf_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_image_new_from_resource (const gchar* resource_path);
// ::GtkImage* gtk_image_new_from_resource (const char* resource_path);
Gtk::Image base::ImageBase::new_from_resource (const std::string & resource_path) noexcept
{
  typedef ::GtkImage* (*call_wrap_t) (const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_new_from_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (resource_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_image_new_from_stock (const gchar* stock_id, GtkIconSize size);
// ::GtkImage* gtk_image_new_from_stock (const char* stock_id, gint size);
// IGNORE; deprecated

// GtkWidget* gtk_image_new_from_surface (cairo_surface_t* surface);
// ::GtkImage* gtk_image_new_from_surface (::cairo_surface_t* surface);
Gtk::Image base::ImageBase::new_from_surface (cairo::Surface surface) noexcept
{
  typedef ::GtkImage* (*call_wrap_t) (::cairo_surface_t* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_new_from_surface;
  auto surface_to_c = gi::unwrap (surface, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::cairo_surface_t*) (surface_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::Image base::ImageBase::new_from_surface () noexcept
{
  typedef ::GtkImage* (*call_wrap_t) (::cairo_surface_t* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_new_from_surface;
  auto surface_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::cairo_surface_t*) (surface_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_image_clear (GtkImage* image);
// void gtk_image_clear (::GtkImage* image);
void base::ImageBase::clear () noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_clear;
  call_wrap_v ((::GtkImage*) (gobj_()));
}

// GdkPixbufAnimation* gtk_image_get_animation (GtkImage* image);
// ::GdkPixbufAnimation* gtk_image_get_animation (::GtkImage* image);
GdkPixbuf::PixbufAnimation base::ImageBase::get_animation () noexcept
{
  typedef ::GdkPixbufAnimation* (*call_wrap_t) (::GtkImage* image);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_get_animation;
  auto _temp_ret = call_wrap_v ((::GtkImage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_image_get_gicon (GtkImage* image, GIcon** gicon, GtkIconSize* size);
// void gtk_image_get_gicon (::GtkImage* image, ::GIcon** gicon, gint* size);
void base::ImageBase::get_gicon (Gio::Icon * gicon, gint * size) noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, ::GIcon** gicon, gint* size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_get_gicon;
  gint size_o {};
  ::GIcon* gicon_o {};
  call_wrap_v ((::GtkImage*) (gobj_()), (::GIcon**) (gicon ? &gicon_o : nullptr), (gint*) (size ? &size_o : nullptr));
  if (size) *size = size_o;
  if (gicon) *gicon = gi::wrap (gicon_o, gi::transfer_none, gi::direction_out);
}
std::tuple<Gio::Icon, gint> base::ImageBase::get_gicon () noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, ::GIcon** gicon, gint* size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_get_gicon;
  gint size_o {};
  ::GIcon* gicon_o {};
  call_wrap_v ((::GtkImage*) (gobj_()), (::GIcon**) (&gicon_o), (gint*) (&size_o));
  return std::make_tuple (gi::wrap (gicon_o, gi::transfer_none, gi::direction_out), size_o);
}

// void gtk_image_get_icon_name (GtkImage* image, const gchar** icon_name, GtkIconSize* size);
// void gtk_image_get_icon_name (::GtkImage* image, const char** icon_name, gint* size);
void base::ImageBase::get_icon_name (std::string * icon_name, gint * size) noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, const char** icon_name, gint* size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_get_icon_name;
  gint size_o {};
  const char* icon_name_o {};
  call_wrap_v ((::GtkImage*) (gobj_()), (const char**) (icon_name ? &icon_name_o : nullptr), (gint*) (size ? &size_o : nullptr));
  if (size) *size = size_o;
  if (icon_name) *icon_name = gi::wrap (icon_name_o, gi::transfer_none, gi::direction_out);
}
std::tuple<std::string, gint> base::ImageBase::get_icon_name () noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, const char** icon_name, gint* size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_get_icon_name;
  gint size_o {};
  const char* icon_name_o {};
  call_wrap_v ((::GtkImage*) (gobj_()), (const char**) (&icon_name_o), (gint*) (&size_o));
  return std::make_tuple (gi::wrap (icon_name_o, gi::transfer_none, gi::direction_out), size_o);
}

// void gtk_image_get_icon_set (GtkImage* image, GtkIconSet** icon_set, GtkIconSize* size);
// void gtk_image_get_icon_set (::GtkImage* image, ::GtkIconSet** icon_set, gint* size);
// IGNORE; deprecated

// GdkPixbuf* gtk_image_get_pixbuf (GtkImage* image);
// ::GdkPixbuf* gtk_image_get_pixbuf (::GtkImage* image);
GdkPixbuf::Pixbuf base::ImageBase::get_pixbuf () noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkImage* image);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_get_pixbuf;
  auto _temp_ret = call_wrap_v ((::GtkImage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint gtk_image_get_pixel_size (GtkImage* image);
// gint gtk_image_get_pixel_size (::GtkImage* image);
gint base::ImageBase::get_pixel_size () noexcept
{
  typedef gint (*call_wrap_t) (::GtkImage* image);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_get_pixel_size;
  auto _temp_ret = call_wrap_v ((::GtkImage*) (gobj_()));
  return _temp_ret;
}

// void gtk_image_get_stock (GtkImage* image, gchar** stock_id, GtkIconSize* size);
// void gtk_image_get_stock (::GtkImage* image, char** stock_id, gint* size);
// IGNORE; deprecated

// GtkImageType gtk_image_get_storage_type (GtkImage* image);
// ::GtkImageType gtk_image_get_storage_type (::GtkImage* image);
Gtk::ImageType base::ImageBase::get_storage_type () noexcept
{
  typedef ::GtkImageType (*call_wrap_t) (::GtkImage* image);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_get_storage_type;
  auto _temp_ret = call_wrap_v ((::GtkImage*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_image_set_from_animation (GtkImage* image, GdkPixbufAnimation* animation);
// void gtk_image_set_from_animation (::GtkImage* image, ::GdkPixbufAnimation* animation);
void base::ImageBase::set_from_animation (GdkPixbuf::PixbufAnimation animation) noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, ::GdkPixbufAnimation* animation);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_set_from_animation;
  auto animation_to_c = gi::unwrap (animation, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkImage*) (gobj_()), (::GdkPixbufAnimation*) (animation_to_c));
}

// void gtk_image_set_from_file (GtkImage* image, const gchar* filename);
// void gtk_image_set_from_file (::GtkImage* image, const char* filename);
void base::ImageBase::set_from_file (const std::string & filename) noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_set_from_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkImage*) (gobj_()), (const char*) (filename_to_c));
}
void base::ImageBase::set_from_file () noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_set_from_file;
  auto filename_to_c = nullptr;
  call_wrap_v ((::GtkImage*) (gobj_()), (const char*) (filename_to_c));
}

// void gtk_image_set_from_gicon (GtkImage* image, GIcon* icon, GtkIconSize size);
// void gtk_image_set_from_gicon (::GtkImage* image, ::GIcon* icon, gint size);
void base::ImageBase::set_from_gicon (Gio::Icon icon, gint size) noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, ::GIcon* icon, gint size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_set_from_gicon;
  auto size_to_c = size;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkImage*) (gobj_()), (::GIcon*) (icon_to_c), (gint) (size_to_c));
}

// void gtk_image_set_from_icon_name (GtkImage* image, const gchar* icon_name, GtkIconSize size);
// void gtk_image_set_from_icon_name (::GtkImage* image, const char* icon_name, gint size);
void base::ImageBase::set_from_icon_name (const std::string & icon_name, gint size) noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, const char* icon_name, gint size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_set_from_icon_name;
  auto size_to_c = size;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkImage*) (gobj_()), (const char*) (icon_name_to_c), (gint) (size_to_c));
}
void base::ImageBase::set_from_icon_name (gint size) noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, const char* icon_name, gint size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_set_from_icon_name;
  auto size_to_c = size;
  auto icon_name_to_c = nullptr;
  call_wrap_v ((::GtkImage*) (gobj_()), (const char*) (icon_name_to_c), (gint) (size_to_c));
}

// void gtk_image_set_from_icon_set (GtkImage* image, GtkIconSet* icon_set, GtkIconSize size);
// void gtk_image_set_from_icon_set (::GtkImage* image, ::GtkIconSet* icon_set, gint size);
// IGNORE; deprecated

// void gtk_image_set_from_pixbuf (GtkImage* image, GdkPixbuf* pixbuf);
// void gtk_image_set_from_pixbuf (::GtkImage* image, ::GdkPixbuf* pixbuf);
void base::ImageBase::set_from_pixbuf (GdkPixbuf::Pixbuf pixbuf) noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_set_from_pixbuf;
  auto pixbuf_to_c = gi::unwrap (pixbuf, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkImage*) (gobj_()), (::GdkPixbuf*) (pixbuf_to_c));
}
void base::ImageBase::set_from_pixbuf () noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_set_from_pixbuf;
  auto pixbuf_to_c = nullptr;
  call_wrap_v ((::GtkImage*) (gobj_()), (::GdkPixbuf*) (pixbuf_to_c));
}

// void gtk_image_set_from_resource (GtkImage* image, const gchar* resource_path);
// void gtk_image_set_from_resource (::GtkImage* image, const char* resource_path);
void base::ImageBase::set_from_resource (const std::string & resource_path) noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_set_from_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkImage*) (gobj_()), (const char*) (resource_path_to_c));
}
void base::ImageBase::set_from_resource () noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_set_from_resource;
  auto resource_path_to_c = nullptr;
  call_wrap_v ((::GtkImage*) (gobj_()), (const char*) (resource_path_to_c));
}

// void gtk_image_set_from_stock (GtkImage* image, const gchar* stock_id, GtkIconSize size);
// void gtk_image_set_from_stock (::GtkImage* image, const char* stock_id, gint size);
// IGNORE; deprecated

// void gtk_image_set_from_surface (GtkImage* image, cairo_surface_t* surface);
// void gtk_image_set_from_surface (::GtkImage* image, ::cairo_surface_t* surface);
void base::ImageBase::set_from_surface (cairo::Surface surface) noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, ::cairo_surface_t* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_set_from_surface;
  auto surface_to_c = gi::unwrap (surface, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkImage*) (gobj_()), (::cairo_surface_t*) (surface_to_c));
}
void base::ImageBase::set_from_surface () noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, ::cairo_surface_t* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_set_from_surface;
  auto surface_to_c = nullptr;
  call_wrap_v ((::GtkImage*) (gobj_()), (::cairo_surface_t*) (surface_to_c));
}

// void gtk_image_set_pixel_size (GtkImage* image, gint pixel_size);
// void gtk_image_set_pixel_size (::GtkImage* image, gint pixel_size);
void base::ImageBase::set_pixel_size (gint pixel_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, gint pixel_size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_set_pixel_size;
  auto pixel_size_to_c = pixel_size;
  call_wrap_v ((::GtkImage*) (gobj_()), (gint) (pixel_size_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/image_extra_def_impl.hpp>)
#include <gtk/image_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/image_extra_impl.hpp>)
#include <gtk/image_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ImageClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkImageClass *methods = (::GtkImageClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
