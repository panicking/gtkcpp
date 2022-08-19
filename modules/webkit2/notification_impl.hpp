// AUTO-GENERATED

#ifndef _GI_WEBKIT2_NOTIFICATION_IMPL_HPP_
#define _GI_WEBKIT2_NOTIFICATION_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// void webkit_notification_clicked (WebKitNotification* notification);
// void webkit_notification_clicked (::WebKitNotification* notification);
void base::NotificationBase::clicked () noexcept
{
  typedef void (*call_wrap_t) (::WebKitNotification* notification);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_notification_clicked;
  call_wrap_v ((::WebKitNotification*) (gobj_()));
}

// void webkit_notification_close (WebKitNotification* notification);
// void webkit_notification_close (::WebKitNotification* notification);
void base::NotificationBase::close () noexcept
{
  typedef void (*call_wrap_t) (::WebKitNotification* notification);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_notification_close;
  call_wrap_v ((::WebKitNotification*) (gobj_()));
}

// const gchar* webkit_notification_get_body (WebKitNotification* notification);
// const char* webkit_notification_get_body (::WebKitNotification* notification);
std::string base::NotificationBase::get_body () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitNotification* notification);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_notification_get_body;
  auto _temp_ret = call_wrap_v ((::WebKitNotification*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint64 webkit_notification_get_id (WebKitNotification* notification);
// guint64 webkit_notification_get_id (::WebKitNotification* notification);
guint64 base::NotificationBase::get_id () noexcept
{
  typedef guint64 (*call_wrap_t) (::WebKitNotification* notification);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_notification_get_id;
  auto _temp_ret = call_wrap_v ((::WebKitNotification*) (gobj_()));
  return _temp_ret;
}

// const gchar* webkit_notification_get_tag (WebKitNotification* notification);
// const char* webkit_notification_get_tag (::WebKitNotification* notification);
std::string base::NotificationBase::get_tag () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitNotification* notification);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_notification_get_tag;
  auto _temp_ret = call_wrap_v ((::WebKitNotification*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_notification_get_title (WebKitNotification* notification);
// const char* webkit_notification_get_title (::WebKitNotification* notification);
std::string base::NotificationBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitNotification* notification);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_notification_get_title;
  auto _temp_ret = call_wrap_v ((::WebKitNotification*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}




} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/notification_extra_def_impl.hpp>)
#include <webkit2/notification_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/notification_extra_impl.hpp>)
#include <webkit2/notification_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void NotificationClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitNotificationClass *methods = (::WebKitNotificationClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
