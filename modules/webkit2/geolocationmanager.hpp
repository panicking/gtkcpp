// AUTO-GENERATED

#ifndef _GI_WEBKIT2_GEOLOCATIONMANAGER_HPP_
#define _GI_WEBKIT2_GEOLOCATIONMANAGER_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class GeolocationPosition;

class GeolocationManager;

namespace base {


#define GI_WEBKIT2_GEOLOCATIONMANAGER_BASE base::GeolocationManagerBase
class GeolocationManagerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitGeolocationManager BaseObjectType;

GeolocationManagerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_geolocation_manager_get_type(); } 

// void webkit_geolocation_manager_failed (WebKitGeolocationManager* manager, const char* error_message);
// void webkit_geolocation_manager_failed (::WebKitGeolocationManager* manager, const char* error_message);
GI_INLINE_DECL void failed (const std::string & error_message) noexcept;

// gboolean webkit_geolocation_manager_get_enable_high_accuracy (WebKitGeolocationManager* manager);
// gboolean webkit_geolocation_manager_get_enable_high_accuracy (::WebKitGeolocationManager* manager);
GI_INLINE_DECL bool get_enable_high_accuracy () noexcept;

// void webkit_geolocation_manager_update_position (WebKitGeolocationManager* manager, WebKitGeolocationPosition* position);
// void webkit_geolocation_manager_update_position (::WebKitGeolocationManager* manager, ::WebKitGeolocationPosition* position);
GI_INLINE_DECL void update_position (WebKit2::GeolocationPosition position) noexcept;

gi::property_proxy<bool, base::GeolocationManagerBase> property_enable_high_accuracy()
{ return gi::property_proxy<bool, base::GeolocationManagerBase> (*this, "enable-high-accuracy"); }
const gi::property_proxy<bool, base::GeolocationManagerBase> property_enable_high_accuracy() const
{ return gi::property_proxy<bool, base::GeolocationManagerBase> (*this, "enable-high-accuracy"); }

// signal start
gi::signal_proxy<bool(WebKit2::GeolocationManager)> signal_start()
{ return gi::signal_proxy<bool(WebKit2::GeolocationManager)> (*this, "start"); }

// signal stop
gi::signal_proxy<void(WebKit2::GeolocationManager)> signal_stop()
{ return gi::signal_proxy<void(WebKit2::GeolocationManager)> (*this, "stop"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/geolocationmanager_extra_def.hpp>)
#include <webkit2/geolocationmanager_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/geolocationmanager_extra.hpp>)
#include <webkit2/geolocationmanager_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class GeolocationManager : public GI_WEBKIT2_GEOLOCATIONMANAGER_BASE
{ typedef GI_WEBKIT2_GEOLOCATIONMANAGER_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitGeolocationManager>
{ typedef WebKit2::GeolocationManager type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class GeolocationManagerClassDef
{
typedef GeolocationManagerClassDef self;
public:
typedef WebKit2::GeolocationManager instance_type;
typedef ::WebKitGeolocationManagerClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class GeolocationManagerClass: public detail::ClassTemplate<WebKit2::impl::internal::GeolocationManagerClassDef, GObject::impl::internal::ObjectClass>
{
typedef GeolocationManagerClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::GeolocationManagerClassDef, GObject::impl::internal::ObjectClass> super;

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

using GeolocationManagerImpl = detail::ObjectImpl<GeolocationManager, internal::GeolocationManagerClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
