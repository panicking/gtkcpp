// AUTO-GENERATED

#ifndef _GI_GDK_DEVICEPAD_HPP_
#define _GI_GDK_DEVICEPAD_HPP_


namespace gi {

namespace repository {

namespace Gdk {


class DevicePad;

namespace base {


#define GI_GDK_DEVICEPAD_BASE base::DevicePadBase
class DevicePadBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GdkDevicePad BaseObjectType;

DevicePadBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_device_pad_get_type(); } 

// gint gdk_device_pad_get_feature_group (GdkDevicePad* pad, GdkDevicePadFeature feature, gint feature_idx);
// gint gdk_device_pad_get_feature_group (::GdkDevicePad* pad, ::GdkDevicePadFeature feature, gint feature_idx);
GI_INLINE_DECL gint get_feature_group (Gdk::DevicePadFeature feature, gint feature_idx) noexcept;

// gint gdk_device_pad_get_group_n_modes (GdkDevicePad* pad, gint group_idx);
// gint gdk_device_pad_get_group_n_modes (::GdkDevicePad* pad, gint group_idx);
GI_INLINE_DECL gint get_group_n_modes (gint group_idx) noexcept;

// gint gdk_device_pad_get_n_features (GdkDevicePad* pad, GdkDevicePadFeature feature);
// gint gdk_device_pad_get_n_features (::GdkDevicePad* pad, ::GdkDevicePadFeature feature);
GI_INLINE_DECL gint get_n_features (Gdk::DevicePadFeature feature) noexcept;

// gint gdk_device_pad_get_n_groups (GdkDevicePad* pad);
// gint gdk_device_pad_get_n_groups (::GdkDevicePad* pad);
GI_INLINE_DECL gint get_n_groups () noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/devicepad_extra_def.hpp>)
#include <gdk/devicepad_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/devicepad_extra.hpp>)
#include <gdk/devicepad_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class DevicePad : public GI_GDK_DEVICEPAD_BASE
{ typedef GI_GDK_DEVICEPAD_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkDevicePad>
{ typedef Gdk::DevicePad type; }; 

} // namespace repository

} // namespace gi

#endif
