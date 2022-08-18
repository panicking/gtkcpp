// AUTO-GENERATED

#ifndef _GI_GIO_NOTIFICATION_HPP_
#define _GI_GIO_NOTIFICATION_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Icon;

class Notification;

namespace base {


#define GI_GIO_NOTIFICATION_BASE base::NotificationBase
class NotificationBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GNotification BaseObjectType;

NotificationBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_notification_get_type(); } 

// GNotification* g_notification_new (const gchar* title);
// ::GNotification* g_notification_new (const char* title);
static GI_INLINE_DECL Gio::Notification new_ (const std::string & title) noexcept;

// void g_notification_add_button (GNotification* notification, const gchar* label, const gchar* detailed_action);
// void g_notification_add_button (::GNotification* notification, const char* label, const char* detailed_action);
GI_INLINE_DECL void add_button (const std::string & label, const std::string & detailed_action) noexcept;

// void g_notification_add_button_with_target (GNotification* notification, const gchar* label, const gchar* action, const gchar* target_format);
// void g_notification_add_button_with_target (::GNotification* notification, const char* label, const char* action, const char* target_format);
// IGNORE; not introspectable; shadowed-by add_button_with_target_value, varargs not supported

// void g_notification_add_button_with_target_value (GNotification* notification, const gchar* label, const gchar* action, GVariant* target);
// void g_notification_add_button_with_target_value (::GNotification* notification, const char* label, const char* action, ::GVariant* target);
GI_INLINE_DECL void add_button_with_target (const std::string & label, const std::string & action, GLib::Variant target) noexcept;
GI_INLINE_DECL void add_button_with_target (const std::string & label, const std::string & action) noexcept;

// void g_notification_set_body (GNotification* notification, const gchar* body);
// void g_notification_set_body (::GNotification* notification, const char* body);
GI_INLINE_DECL void set_body (const std::string & body) noexcept;
GI_INLINE_DECL void set_body () noexcept;

// void g_notification_set_category (GNotification* notification, const gchar* category);
// void g_notification_set_category (::GNotification* notification, const char* category);
GI_INLINE_DECL void set_category (const std::string & category) noexcept;
GI_INLINE_DECL void set_category () noexcept;

// void g_notification_set_default_action (GNotification* notification, const gchar* detailed_action);
// void g_notification_set_default_action (::GNotification* notification, const char* detailed_action);
GI_INLINE_DECL void set_default_action (const std::string & detailed_action) noexcept;

// void g_notification_set_default_action_and_target (GNotification* notification, const gchar* action, const gchar* target_format);
// void g_notification_set_default_action_and_target (::GNotification* notification, const char* action, const char* target_format);
// IGNORE; not introspectable; shadowed-by set_default_action_and_target_value, varargs not supported

// void g_notification_set_default_action_and_target_value (GNotification* notification, const gchar* action, GVariant* target);
// void g_notification_set_default_action_and_target_value (::GNotification* notification, const char* action, ::GVariant* target);
GI_INLINE_DECL void set_default_action_and_target (const std::string & action, GLib::Variant target) noexcept;
GI_INLINE_DECL void set_default_action_and_target (const std::string & action) noexcept;

// void g_notification_set_icon (GNotification* notification, GIcon* icon);
// void g_notification_set_icon (::GNotification* notification, ::GIcon* icon);
GI_INLINE_DECL void set_icon (Gio::Icon icon) noexcept;

// void g_notification_set_priority (GNotification* notification, GNotificationPriority priority);
// void g_notification_set_priority (::GNotification* notification, ::GNotificationPriority priority);
GI_INLINE_DECL void set_priority (Gio::NotificationPriority priority) noexcept;

// void g_notification_set_title (GNotification* notification, const gchar* title);
// void g_notification_set_title (::GNotification* notification, const char* title);
GI_INLINE_DECL void set_title (const std::string & title) noexcept;

// void g_notification_set_urgent (GNotification* notification, gboolean urgent);
// void g_notification_set_urgent (::GNotification* notification, gboolean urgent);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/notification_extra_def.hpp>)
#include <gio/notification_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/notification_extra.hpp>)
#include <gio/notification_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Notification : public GI_GIO_NOTIFICATION_BASE
{ typedef GI_GIO_NOTIFICATION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GNotification>
{ typedef Gio::Notification type; }; 

} // namespace repository

} // namespace gi

#endif
