// AUTO-GENERATED

#ifndef _GI_WEBKIT2_USERMESSAGE_HPP_
#define _GI_WEBKIT2_USERMESSAGE_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class UserMessage;

namespace base {


#define GI_WEBKIT2_USERMESSAGE_BASE base::UserMessageBase
class UserMessageBase : public GObject::InitiallyUnowned
{
typedef GObject::InitiallyUnowned super_type;
public:
typedef ::WebKitUserMessage BaseObjectType;

UserMessageBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_user_message_get_type(); } 

// WebKitUserMessage* webkit_user_message_new (const char* name, GVariant* parameters);
// ::WebKitUserMessage* webkit_user_message_new (const char* name, ::GVariant* parameters);
static GI_INLINE_DECL WebKit2::UserMessage new_ (const std::string & name, GLib::Variant parameters) noexcept;
static GI_INLINE_DECL WebKit2::UserMessage new_ (const std::string & name) noexcept;

// WebKitUserMessage* webkit_user_message_new_with_fd_list (const char* name, GVariant* parameters, GUnixFDList* fd_list);
// ::WebKitUserMessage* webkit_user_message_new_with_fd_list (const char* name, ::GVariant* parameters, ::GUnixFDList* fd_list);
static GI_INLINE_DECL WebKit2::UserMessage new_with_fd_list (const std::string & name, GLib::Variant parameters, Gio::UnixFDList fd_list) noexcept;
static GI_INLINE_DECL WebKit2::UserMessage new_with_fd_list (const std::string & name) noexcept;

// GUnixFDList* webkit_user_message_get_fd_list (WebKitUserMessage* message);
// ::GUnixFDList* webkit_user_message_get_fd_list (::WebKitUserMessage* message);
GI_INLINE_DECL Gio::UnixFDList get_fd_list () noexcept;

// const char* webkit_user_message_get_name (WebKitUserMessage* message);
// const char* webkit_user_message_get_name (::WebKitUserMessage* message);
GI_INLINE_DECL std::string get_name () noexcept;

// GVariant* webkit_user_message_get_parameters (WebKitUserMessage* message);
// ::GVariant* webkit_user_message_get_parameters (::WebKitUserMessage* message);
GI_INLINE_DECL GLib::Variant get_parameters () noexcept;

// void webkit_user_message_send_reply (WebKitUserMessage* message, WebKitUserMessage* reply);
// void webkit_user_message_send_reply (::WebKitUserMessage* message, ::WebKitUserMessage* reply);
GI_INLINE_DECL void send_reply (WebKit2::UserMessage reply) noexcept;

gi::property_proxy<Gio::UnixFDList, base::UserMessageBase> property_fd_list()
{ return gi::property_proxy<Gio::UnixFDList, base::UserMessageBase> (*this, "fd-list"); }
const gi::property_proxy<Gio::UnixFDList, base::UserMessageBase> property_fd_list() const
{ return gi::property_proxy<Gio::UnixFDList, base::UserMessageBase> (*this, "fd-list"); }

gi::property_proxy<std::string, base::UserMessageBase> property_name()
{ return gi::property_proxy<std::string, base::UserMessageBase> (*this, "name"); }
const gi::property_proxy<std::string, base::UserMessageBase> property_name() const
{ return gi::property_proxy<std::string, base::UserMessageBase> (*this, "name"); }

gi::property_proxy<GLib::Variant, base::UserMessageBase> property_parameters()
{ return gi::property_proxy<GLib::Variant, base::UserMessageBase> (*this, "parameters"); }
const gi::property_proxy<GLib::Variant, base::UserMessageBase> property_parameters() const
{ return gi::property_proxy<GLib::Variant, base::UserMessageBase> (*this, "parameters"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/usermessage_extra_def.hpp>)
#include <webkit2/usermessage_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/usermessage_extra.hpp>)
#include <webkit2/usermessage_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class UserMessage : public GI_WEBKIT2_USERMESSAGE_BASE
{ typedef GI_WEBKIT2_USERMESSAGE_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitUserMessage>
{ typedef WebKit2::UserMessage type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class UserMessageClassDef
{
typedef UserMessageClassDef self;
public:
typedef WebKit2::UserMessage instance_type;
typedef ::WebKitUserMessageClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class UserMessageClass: public detail::ClassTemplate<WebKit2::impl::internal::UserMessageClassDef, GObject::impl::internal::InitiallyUnownedClass>
{
typedef UserMessageClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::UserMessageClassDef, GObject::impl::internal::InitiallyUnownedClass> super;

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

using UserMessageImpl = detail::ObjectImpl<UserMessage, internal::UserMessageClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
