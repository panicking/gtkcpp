// AUTO-GENERATED

#ifndef _GI_GIO_NOTIFICATION_IMPL_HPP_
#define _GI_GIO_NOTIFICATION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GNotification* g_notification_new (const gchar* title);
// ::GNotification* g_notification_new (const char* title);
Gio::Notification base::NotificationBase::new_ (const std::string & title) noexcept
{
  typedef ::GNotification* (*call_wrap_t) (const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) g_notification_new;
  auto title_to_c = gi::unwrap (title, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_notification_add_button (GNotification* notification, const gchar* label, const gchar* detailed_action);
// void g_notification_add_button (::GNotification* notification, const char* label, const char* detailed_action);
void base::NotificationBase::add_button (const std::string & label, const std::string & detailed_action) noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, const char* label, const char* detailed_action);
  call_wrap_t call_wrap_v = (call_wrap_t) g_notification_add_button;
  auto detailed_action_to_c = gi::unwrap (detailed_action, gi::transfer_none, gi::direction_in);
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GNotification*) (gobj_()), (const char*) (label_to_c), (const char*) (detailed_action_to_c));
}

// void g_notification_add_button_with_target (GNotification* notification, const gchar* label, const gchar* action, const gchar* target_format);
// void g_notification_add_button_with_target (::GNotification* notification, const char* label, const char* action, const char* target_format);
// IGNORE; not introspectable; shadowed-by add_button_with_target_value, varargs not supported

// void g_notification_add_button_with_target_value (GNotification* notification, const gchar* label, const gchar* action, GVariant* target);
// void g_notification_add_button_with_target_value (::GNotification* notification, const char* label, const char* action, ::GVariant* target);
void base::NotificationBase::add_button_with_target (const std::string & label, const std::string & action, GLib::Variant target) noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, const char* label, const char* action, ::GVariant* target);
  call_wrap_t call_wrap_v = (call_wrap_t) g_notification_add_button_with_target_value;
  auto target_to_c = gi::unwrap (target, gi::transfer_none, gi::direction_in);
  auto action_to_c = gi::unwrap (action, gi::transfer_none, gi::direction_in);
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GNotification*) (gobj_()), (const char*) (label_to_c), (const char*) (action_to_c), (::GVariant*) (target_to_c));
}
void base::NotificationBase::add_button_with_target (const std::string & label, const std::string & action) noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, const char* label, const char* action, ::GVariant* target);
  call_wrap_t call_wrap_v = (call_wrap_t) g_notification_add_button_with_target_value;
  auto target_to_c = nullptr;
  auto action_to_c = gi::unwrap (action, gi::transfer_none, gi::direction_in);
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GNotification*) (gobj_()), (const char*) (label_to_c), (const char*) (action_to_c), (::GVariant*) (target_to_c));
}

// void g_notification_set_body (GNotification* notification, const gchar* body);
// void g_notification_set_body (::GNotification* notification, const char* body);
void base::NotificationBase::set_body (const std::string & body) noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, const char* body);
  call_wrap_t call_wrap_v = (call_wrap_t) g_notification_set_body;
  auto body_to_c = gi::unwrap (body, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GNotification*) (gobj_()), (const char*) (body_to_c));
}
void base::NotificationBase::set_body () noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, const char* body);
  call_wrap_t call_wrap_v = (call_wrap_t) g_notification_set_body;
  auto body_to_c = nullptr;
  call_wrap_v ((::GNotification*) (gobj_()), (const char*) (body_to_c));
}

// void g_notification_set_category (GNotification* notification, const gchar* category);
// void g_notification_set_category (::GNotification* notification, const char* category);
void base::NotificationBase::set_category (const std::string & category) noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, const char* category);
  call_wrap_t call_wrap_v = (call_wrap_t) g_notification_set_category;
  auto category_to_c = gi::unwrap (category, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GNotification*) (gobj_()), (const char*) (category_to_c));
}
void base::NotificationBase::set_category () noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, const char* category);
  call_wrap_t call_wrap_v = (call_wrap_t) g_notification_set_category;
  auto category_to_c = nullptr;
  call_wrap_v ((::GNotification*) (gobj_()), (const char*) (category_to_c));
}

// void g_notification_set_default_action (GNotification* notification, const gchar* detailed_action);
// void g_notification_set_default_action (::GNotification* notification, const char* detailed_action);
void base::NotificationBase::set_default_action (const std::string & detailed_action) noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, const char* detailed_action);
  call_wrap_t call_wrap_v = (call_wrap_t) g_notification_set_default_action;
  auto detailed_action_to_c = gi::unwrap (detailed_action, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GNotification*) (gobj_()), (const char*) (detailed_action_to_c));
}

// void g_notification_set_default_action_and_target (GNotification* notification, const gchar* action, const gchar* target_format);
// void g_notification_set_default_action_and_target (::GNotification* notification, const char* action, const char* target_format);
// IGNORE; not introspectable; shadowed-by set_default_action_and_target_value, varargs not supported

// void g_notification_set_default_action_and_target_value (GNotification* notification, const gchar* action, GVariant* target);
// void g_notification_set_default_action_and_target_value (::GNotification* notification, const char* action, ::GVariant* target);
void base::NotificationBase::set_default_action_and_target (const std::string & action, GLib::Variant target) noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, const char* action, ::GVariant* target);
  call_wrap_t call_wrap_v = (call_wrap_t) g_notification_set_default_action_and_target_value;
  auto target_to_c = gi::unwrap (target, gi::transfer_none, gi::direction_in);
  auto action_to_c = gi::unwrap (action, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GNotification*) (gobj_()), (const char*) (action_to_c), (::GVariant*) (target_to_c));
}
void base::NotificationBase::set_default_action_and_target (const std::string & action) noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, const char* action, ::GVariant* target);
  call_wrap_t call_wrap_v = (call_wrap_t) g_notification_set_default_action_and_target_value;
  auto target_to_c = nullptr;
  auto action_to_c = gi::unwrap (action, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GNotification*) (gobj_()), (const char*) (action_to_c), (::GVariant*) (target_to_c));
}

// void g_notification_set_icon (GNotification* notification, GIcon* icon);
// void g_notification_set_icon (::GNotification* notification, ::GIcon* icon);
void base::NotificationBase::set_icon (Gio::Icon icon) noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, ::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) g_notification_set_icon;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GNotification*) (gobj_()), (::GIcon*) (icon_to_c));
}

// void g_notification_set_priority (GNotification* notification, GNotificationPriority priority);
// void g_notification_set_priority (::GNotification* notification, ::GNotificationPriority priority);
void base::NotificationBase::set_priority (Gio::NotificationPriority priority) noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, ::GNotificationPriority priority);
  call_wrap_t call_wrap_v = (call_wrap_t) g_notification_set_priority;
  auto priority_to_c = gi::unwrap (priority);
  call_wrap_v ((::GNotification*) (gobj_()), (::GNotificationPriority) (priority_to_c));
}

// void g_notification_set_title (GNotification* notification, const gchar* title);
// void g_notification_set_title (::GNotification* notification, const char* title);
void base::NotificationBase::set_title (const std::string & title) noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) g_notification_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GNotification*) (gobj_()), (const char*) (title_to_c));
}

// void g_notification_set_urgent (GNotification* notification, gboolean urgent);
// void g_notification_set_urgent (::GNotification* notification, gboolean urgent);
// IGNORE; marked ignore


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/notification_extra_def_impl.hpp>)
#include <gio/notification_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/notification_extra_impl.hpp>)
#include <gio/notification_extra_impl.hpp>
#endif
#endif

#endif
