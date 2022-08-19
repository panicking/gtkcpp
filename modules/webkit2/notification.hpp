// AUTO-GENERATED

#ifndef _GI_WEBKIT2_NOTIFICATION_HPP_
#define _GI_WEBKIT2_NOTIFICATION_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class Notification;

namespace base {


#define GI_WEBKIT2_NOTIFICATION_BASE base::NotificationBase
class NotificationBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitNotification BaseObjectType;

NotificationBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_notification_get_type(); } 

// void webkit_notification_clicked (WebKitNotification* notification);
// void webkit_notification_clicked (::WebKitNotification* notification);
GI_INLINE_DECL void clicked () noexcept;

// void webkit_notification_close (WebKitNotification* notification);
// void webkit_notification_close (::WebKitNotification* notification);
GI_INLINE_DECL void close () noexcept;

// const gchar* webkit_notification_get_body (WebKitNotification* notification);
// const char* webkit_notification_get_body (::WebKitNotification* notification);
GI_INLINE_DECL std::string get_body () noexcept;

// guint64 webkit_notification_get_id (WebKitNotification* notification);
// guint64 webkit_notification_get_id (::WebKitNotification* notification);
GI_INLINE_DECL guint64 get_id () noexcept;

// const gchar* webkit_notification_get_tag (WebKitNotification* notification);
// const char* webkit_notification_get_tag (::WebKitNotification* notification);
GI_INLINE_DECL std::string get_tag () noexcept;

// const gchar* webkit_notification_get_title (WebKitNotification* notification);
// const char* webkit_notification_get_title (::WebKitNotification* notification);
GI_INLINE_DECL std::string get_title () noexcept;

gi::property_proxy<std::string, base::NotificationBase> property_body()
{ return gi::property_proxy<std::string, base::NotificationBase> (*this, "body"); }
const gi::property_proxy<std::string, base::NotificationBase> property_body() const
{ return gi::property_proxy<std::string, base::NotificationBase> (*this, "body"); }

gi::property_proxy<guint64, base::NotificationBase> property_id()
{ return gi::property_proxy<guint64, base::NotificationBase> (*this, "id"); }
const gi::property_proxy<guint64, base::NotificationBase> property_id() const
{ return gi::property_proxy<guint64, base::NotificationBase> (*this, "id"); }

gi::property_proxy<std::string, base::NotificationBase> property_tag()
{ return gi::property_proxy<std::string, base::NotificationBase> (*this, "tag"); }
const gi::property_proxy<std::string, base::NotificationBase> property_tag() const
{ return gi::property_proxy<std::string, base::NotificationBase> (*this, "tag"); }

gi::property_proxy<std::string, base::NotificationBase> property_title()
{ return gi::property_proxy<std::string, base::NotificationBase> (*this, "title"); }
const gi::property_proxy<std::string, base::NotificationBase> property_title() const
{ return gi::property_proxy<std::string, base::NotificationBase> (*this, "title"); }

// signal clicked
gi::signal_proxy<void(WebKit2::Notification)> signal_clicked()
{ return gi::signal_proxy<void(WebKit2::Notification)> (*this, "clicked"); }

// signal closed
gi::signal_proxy<void(WebKit2::Notification)> signal_closed()
{ return gi::signal_proxy<void(WebKit2::Notification)> (*this, "closed"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/notification_extra_def.hpp>)
#include <webkit2/notification_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/notification_extra.hpp>)
#include <webkit2/notification_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class Notification : public GI_WEBKIT2_NOTIFICATION_BASE
{ typedef GI_WEBKIT2_NOTIFICATION_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitNotification>
{ typedef WebKit2::Notification type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class NotificationClassDef
{
typedef NotificationClassDef self;
public:
typedef WebKit2::Notification instance_type;
typedef ::WebKitNotificationClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class NotificationClass: public detail::ClassTemplate<WebKit2::impl::internal::NotificationClassDef, GObject::impl::internal::ObjectClass>
{
typedef NotificationClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::NotificationClassDef, GObject::impl::internal::ObjectClass> super;

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

using NotificationImpl = detail::ObjectImpl<Notification, internal::NotificationClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
