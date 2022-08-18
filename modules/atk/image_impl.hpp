// AUTO-GENERATED

#ifndef _GI_ATK_IMAGE_IMPL_HPP_
#define _GI_ATK_IMAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

// const gchar* atk_image_get_image_description (AtkImage* image);
// const char* atk_image_get_image_description (::AtkImage* image);
std::string base::ImageBase::get_image_description () noexcept
{
  typedef const char* (*call_wrap_t) (::AtkImage* image);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_image_get_image_description;
  auto _temp_ret = call_wrap_v ((::AtkImage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* atk_image_get_image_locale (AtkImage* image);
// const char* atk_image_get_image_locale (::AtkImage* image);
std::string base::ImageBase::get_image_locale () noexcept
{
  typedef const char* (*call_wrap_t) (::AtkImage* image);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_image_get_image_locale;
  auto _temp_ret = call_wrap_v ((::AtkImage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void atk_image_get_image_position (AtkImage* image, gint* x, gint* y, AtkCoordType coord_type);
// void atk_image_get_image_position (::AtkImage* image, gint* x, gint* y, ::AtkCoordType coord_type);
void base::ImageBase::get_image_position (gint * x, gint * y, Atk::CoordType coord_type) noexcept
{
  typedef void (*call_wrap_t) (::AtkImage* image, gint* x, gint* y, ::AtkCoordType coord_type);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_image_get_image_position;
  auto coord_type_to_c = gi::unwrap (coord_type);
  gint y_o {};
  gint x_o {};
  call_wrap_v ((::AtkImage*) (gobj_()), (gint*) (x ? &x_o : nullptr), (gint*) (y ? &y_o : nullptr), (::AtkCoordType) (coord_type_to_c));
  if (y) *y = y_o;
  if (x) *x = x_o;
}
std::tuple<gint, gint> base::ImageBase::get_image_position (Atk::CoordType coord_type) noexcept
{
  typedef void (*call_wrap_t) (::AtkImage* image, gint* x, gint* y, ::AtkCoordType coord_type);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_image_get_image_position;
  auto coord_type_to_c = gi::unwrap (coord_type);
  gint y_o {};
  gint x_o {};
  call_wrap_v ((::AtkImage*) (gobj_()), (gint*) (&x_o), (gint*) (&y_o), (::AtkCoordType) (coord_type_to_c));
  return std::make_tuple (x_o, y_o);
}

// void atk_image_get_image_size (AtkImage* image, gint* width, gint* height);
// void atk_image_get_image_size (::AtkImage* image, gint* width, gint* height);
void base::ImageBase::get_image_size (gint * width, gint * height) noexcept
{
  typedef void (*call_wrap_t) (::AtkImage* image, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_image_get_image_size;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::AtkImage*) (gobj_()), (gint*) (width ? &width_o : nullptr), (gint*) (height ? &height_o : nullptr));
  if (height) *height = height_o;
  if (width) *width = width_o;
}
std::tuple<gint, gint> base::ImageBase::get_image_size () noexcept
{
  typedef void (*call_wrap_t) (::AtkImage* image, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_image_get_image_size;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::AtkImage*) (gobj_()), (gint*) (&width_o), (gint*) (&height_o));
  return std::make_tuple (width_o, height_o);
}

// gboolean atk_image_set_image_description (AtkImage* image, const gchar* description);
// gboolean atk_image_set_image_description (::AtkImage* image, const char* description);
bool base::ImageBase::set_image_description (const std::string & description) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkImage* image, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_image_set_image_description;
  auto description_to_c = gi::unwrap (description, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::AtkImage*) (gobj_()), (const char*) (description_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/image_extra_def_impl.hpp>)
#include <atk/image_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/image_extra_impl.hpp>)
#include <atk/image_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void ImageIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::AtkImageIface *methods = (::AtkImageIface *) interface_struct;
  (void) methods;

  methods->set_image_description = (decltype (methods->set_image_description)) detail::method_wrapper<self, bool (*) (const std::string & description), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::set_image_description_>;
}

// const gchar* Image::get_image_description (AtkImage* image);
// const char* Image::get_image_description (::AtkImage* image);
// SKIP; invalid callback return transfer none

// const gchar* Image::get_image_locale (AtkImage* image);
// const char* Image::get_image_locale (::AtkImage* image);
// SKIP; invalid callback return transfer none

// void Image::get_image_position (AtkImage* image, gint* x, gint* y, AtkCoordType coord_type);
// void Image::get_image_position (::AtkImage* image, gint* x, gint* y, ::AtkCoordType coord_type);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void Image::get_image_size (AtkImage* image, gint* width, gint* height);
// void Image::get_image_size (::AtkImage* image, gint* width, gint* height);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// gboolean Image::set_image_description (AtkImage* image, const gchar* description);
// gboolean Image::set_image_description (::AtkImage* image, const char* description);
bool ImageIfaceClassImpl::set_image_description_ (const std::string & description) noexcept
{
  if (!get_struct_()->set_image_description) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkImage* image, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_image_description;
  auto description_to_c = gi::unwrap (description, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::AtkImage*) (gobj_()), (const char*) (description_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
