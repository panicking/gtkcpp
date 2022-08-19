// AUTO-GENERATED

#ifndef _GI_WEBKIT2_USERMEDIAPERMISSIONREQUEST_HPP_
#define _GI_WEBKIT2_USERMEDIAPERMISSIONREQUEST_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class PermissionRequest;

class UserMediaPermissionRequest;

namespace base {


#define GI_WEBKIT2_USERMEDIAPERMISSIONREQUEST_BASE base::UserMediaPermissionRequestBase
class UserMediaPermissionRequestBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitUserMediaPermissionRequest BaseObjectType;

UserMediaPermissionRequestBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_user_media_permission_request_get_type(); } 

GI_INLINE_DECL WebKit2::PermissionRequest interface_ (gi::interface_tag<WebKit2::PermissionRequest>);

GI_INLINE_DECL operator WebKit2::PermissionRequest ();

gi::property_proxy<bool, base::UserMediaPermissionRequestBase> property_is_for_audio_device()
{ return gi::property_proxy<bool, base::UserMediaPermissionRequestBase> (*this, "is-for-audio-device"); }
const gi::property_proxy<bool, base::UserMediaPermissionRequestBase> property_is_for_audio_device() const
{ return gi::property_proxy<bool, base::UserMediaPermissionRequestBase> (*this, "is-for-audio-device"); }

gi::property_proxy<bool, base::UserMediaPermissionRequestBase> property_is_for_video_device()
{ return gi::property_proxy<bool, base::UserMediaPermissionRequestBase> (*this, "is-for-video-device"); }
const gi::property_proxy<bool, base::UserMediaPermissionRequestBase> property_is_for_video_device() const
{ return gi::property_proxy<bool, base::UserMediaPermissionRequestBase> (*this, "is-for-video-device"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/usermediapermissionrequest_extra_def.hpp>)
#include <webkit2/usermediapermissionrequest_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/usermediapermissionrequest_extra.hpp>)
#include <webkit2/usermediapermissionrequest_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class UserMediaPermissionRequest : public GI_WEBKIT2_USERMEDIAPERMISSIONREQUEST_BASE
{ typedef GI_WEBKIT2_USERMEDIAPERMISSIONREQUEST_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitUserMediaPermissionRequest>
{ typedef WebKit2::UserMediaPermissionRequest type; }; 

} // namespace repository

} // namespace gi

#include "permissionrequest.hpp"

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class UserMediaPermissionRequestClassDef
{
typedef UserMediaPermissionRequestClassDef self;
public:
typedef WebKit2::UserMediaPermissionRequest instance_type;
typedef ::WebKitUserMediaPermissionRequestClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class UserMediaPermissionRequestClass: public detail::ClassTemplate<WebKit2::impl::internal::UserMediaPermissionRequestClassDef, GObject::impl::internal::ObjectClass, WebKit2::impl::internal::PermissionRequestIfaceClassImpl>
{
typedef UserMediaPermissionRequestClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::UserMediaPermissionRequestClassDef, GObject::impl::internal::ObjectClass, WebKit2::impl::internal::PermissionRequestIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef WebKit2::impl::internal::PermissionRequestIfaceClassImpl WebKitPermissionRequestIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using UserMediaPermissionRequestImpl = detail::ObjectImpl<UserMediaPermissionRequest, internal::UserMediaPermissionRequestClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
