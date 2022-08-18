// AUTO-GENERATED

#ifndef _GI_ATK_IMAGE_HPP_
#define _GI_ATK_IMAGE_HPP_


namespace gi {

namespace repository {

namespace Atk {


class Image;

namespace base {


#define GI_ATK_IMAGE_BASE base::ImageBase
class ImageBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::AtkImage BaseObjectType;

ImageBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_image_get_type(); } 

// const gchar* atk_image_get_image_description (AtkImage* image);
// const char* atk_image_get_image_description (::AtkImage* image);
GI_INLINE_DECL std::string get_image_description () noexcept;

// const gchar* atk_image_get_image_locale (AtkImage* image);
// const char* atk_image_get_image_locale (::AtkImage* image);
GI_INLINE_DECL std::string get_image_locale () noexcept;

// void atk_image_get_image_position (AtkImage* image, gint* x, gint* y, AtkCoordType coord_type);
// void atk_image_get_image_position (::AtkImage* image, gint* x, gint* y, ::AtkCoordType coord_type);
GI_INLINE_DECL void get_image_position (gint * x, gint * y, Atk::CoordType coord_type) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_image_position (Atk::CoordType coord_type) noexcept;

// void atk_image_get_image_size (AtkImage* image, gint* width, gint* height);
// void atk_image_get_image_size (::AtkImage* image, gint* width, gint* height);
GI_INLINE_DECL void get_image_size (gint * width = nullptr, gint * height = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_image_size () noexcept;

// gboolean atk_image_set_image_description (AtkImage* image, const gchar* description);
// gboolean atk_image_set_image_description (::AtkImage* image, const char* description);
GI_INLINE_DECL bool set_image_description (const std::string & description) noexcept;

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/image_extra_def.hpp>)
#include <atk/image_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/image_extra.hpp>)
#include <atk/image_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class Image : public GI_ATK_IMAGE_BASE
{ typedef GI_ATK_IMAGE_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkImage>
{ typedef Atk::Image type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class ImageIfaceDef
{
typedef ImageIfaceDef self;
public:
typedef Atk::Image instance_type;
typedef ::AtkImageIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

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
virtual bool set_image_description_ (const std::string & description) noexcept = 0;


};

using ImageImpl = detail::InterfaceImpl<ImageIfaceDef>;

class ImageIfaceClassImpl: public detail::InterfaceClassImpl<ImageImpl>
{
typedef ImageIfaceClassImpl self;
typedef detail::InterfaceClassImpl<ImageImpl> super;

protected:
using super::super;

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
GI_INLINE_DECL bool set_image_description_ (const std::string & description) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
