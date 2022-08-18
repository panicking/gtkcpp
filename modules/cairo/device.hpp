// AUTO-GENERATED

#ifndef _GI_CAIRO_DEVICE_HPP_
#define _GI_CAIRO_DEVICE_HPP_


namespace gi {

namespace repository {

namespace cairo {


class Device;

namespace base {


#define GI_CAIRO_DEVICE_BASE base::DeviceBase
class DeviceBase : public gi::detail::GBoxedWrapper<DeviceBase, ::cairo_device_t>
{
typedef gi::detail::GBoxedWrapper<DeviceBase, ::cairo_device_t> super_type;
public:

DeviceBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return cairo_gobject_device_get_type(); } 

}; // class

} // namespace base

} // namespace cairo

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<cairo/device_extra_def.hpp>)
#include <cairo/device_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<cairo/device_extra.hpp>)
#include <cairo/device_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace cairo {

class Device : public GI_CAIRO_DEVICE_BASE
{ typedef GI_CAIRO_DEVICE_BASE super_type; using super_type::super_type; };

} // namespace cairo

template<> struct declare_cpptype_of<::cairo_device_t>
{ typedef cairo::Device type; }; 

} // namespace repository

} // namespace gi

#endif
