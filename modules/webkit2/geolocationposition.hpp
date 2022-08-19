// AUTO-GENERATED

#ifndef _GI_WEBKIT2_GEOLOCATIONPOSITION_HPP_
#define _GI_WEBKIT2_GEOLOCATIONPOSITION_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class GeolocationPosition;

namespace base {


#define GI_WEBKIT2_GEOLOCATIONPOSITION_BASE base::GeolocationPositionBase
class GeolocationPositionBase : public gi::detail::GBoxedWrapper<GeolocationPositionBase, ::WebKitGeolocationPosition>
{
typedef gi::detail::GBoxedWrapper<GeolocationPositionBase, ::WebKitGeolocationPosition> super_type;
public:

GeolocationPositionBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return webkit_geolocation_position_get_type(); } 

// WebKitGeolocationPosition* webkit_geolocation_position_new (double latitude, double longitude, double accuracy);
// ::WebKitGeolocationPosition* webkit_geolocation_position_new (gdouble latitude, gdouble longitude, gdouble accuracy);
static GI_INLINE_DECL WebKit2::GeolocationPosition new_ (gdouble latitude, gdouble longitude, gdouble accuracy) noexcept;

// WebKitGeolocationPosition* webkit_geolocation_position_copy (WebKitGeolocationPosition* position);
// ::WebKitGeolocationPosition* webkit_geolocation_position_copy (::WebKitGeolocationPosition* position);
GI_INLINE_DECL WebKit2::GeolocationPosition copy () noexcept;

// void webkit_geolocation_position_free (WebKitGeolocationPosition* position);
// void webkit_geolocation_position_free (::WebKitGeolocationPosition* position);
// IGNORE; marked ignore

// void webkit_geolocation_position_set_altitude (WebKitGeolocationPosition* position, double altitude);
// void webkit_geolocation_position_set_altitude (::WebKitGeolocationPosition* position, gdouble altitude);
GI_INLINE_DECL void set_altitude (gdouble altitude) noexcept;

// void webkit_geolocation_position_set_altitude_accuracy (WebKitGeolocationPosition* position, double altitude_accuracy);
// void webkit_geolocation_position_set_altitude_accuracy (::WebKitGeolocationPosition* position, gdouble altitude_accuracy);
GI_INLINE_DECL void set_altitude_accuracy (gdouble altitude_accuracy) noexcept;

// void webkit_geolocation_position_set_heading (WebKitGeolocationPosition* position, double heading);
// void webkit_geolocation_position_set_heading (::WebKitGeolocationPosition* position, gdouble heading);
GI_INLINE_DECL void set_heading (gdouble heading) noexcept;

// void webkit_geolocation_position_set_speed (WebKitGeolocationPosition* position, double speed);
// void webkit_geolocation_position_set_speed (::WebKitGeolocationPosition* position, gdouble speed);
GI_INLINE_DECL void set_speed (gdouble speed) noexcept;

// void webkit_geolocation_position_set_timestamp (WebKitGeolocationPosition* position, guint64 timestamp);
// void webkit_geolocation_position_set_timestamp (::WebKitGeolocationPosition* position, guint64 timestamp);
GI_INLINE_DECL void set_timestamp (guint64 timestamp) noexcept;

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/geolocationposition_extra_def.hpp>)
#include <webkit2/geolocationposition_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/geolocationposition_extra.hpp>)
#include <webkit2/geolocationposition_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class GeolocationPosition : public GI_WEBKIT2_GEOLOCATIONPOSITION_BASE
{ typedef GI_WEBKIT2_GEOLOCATIONPOSITION_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitGeolocationPosition>
{ typedef WebKit2::GeolocationPosition type; }; 

} // namespace repository

} // namespace gi

#endif
