// AUTO-GENERATED

#ifndef _GI_SOUP_SESSIONFEATURE_HPP_
#define _GI_SOUP_SESSIONFEATURE_HPP_


namespace gi {

namespace repository {

namespace Soup {

class Message;
class Session;
class Socket;

class SessionFeature;

namespace base {


#define GI_SOUP_SESSIONFEATURE_BASE base::SessionFeatureBase
class SessionFeatureBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::SoupSessionFeature BaseObjectType;

SessionFeatureBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_session_feature_get_type(); } 

// gboolean soup_session_feature_add_feature (SoupSessionFeature* feature, GType type);
// gboolean soup_session_feature_add_feature (::SoupSessionFeature* feature, GType type);
GI_INLINE_DECL bool add_feature (GType type) noexcept;

// void soup_session_feature_attach (SoupSessionFeature* feature, SoupSession* session);
// void soup_session_feature_attach (::SoupSessionFeature* feature, ::SoupSession* session);
GI_INLINE_DECL void attach (Soup::Session session) noexcept;

// void soup_session_feature_detach (SoupSessionFeature* feature, SoupSession* session);
// void soup_session_feature_detach (::SoupSessionFeature* feature, ::SoupSession* session);
GI_INLINE_DECL void detach (Soup::Session session) noexcept;

// gboolean soup_session_feature_has_feature (SoupSessionFeature* feature, GType type);
// gboolean soup_session_feature_has_feature (::SoupSessionFeature* feature, GType type);
GI_INLINE_DECL bool has_feature (GType type) noexcept;

// gboolean soup_session_feature_remove_feature (SoupSessionFeature* feature, GType type);
// gboolean soup_session_feature_remove_feature (::SoupSessionFeature* feature, GType type);
GI_INLINE_DECL bool remove_feature (GType type) noexcept;

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/sessionfeature_extra_def.hpp>)
#include <soup/sessionfeature_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/sessionfeature_extra.hpp>)
#include <soup/sessionfeature_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class SessionFeature : public GI_SOUP_SESSIONFEATURE_BASE
{ typedef GI_SOUP_SESSIONFEATURE_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupSessionFeature>
{ typedef Soup::SessionFeature type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class SessionFeatureInterfaceDef
{
typedef SessionFeatureInterfaceDef self;
public:
typedef Soup::SessionFeature instance_type;
typedef ::SoupSessionFeatureInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean SessionFeature::add_feature (SoupSessionFeature* feature, GType type);
// gboolean SessionFeature::add_feature (::SoupSessionFeature* feature, GType type);
virtual bool add_feature_ (GType type) noexcept = 0;

// void SessionFeature::attach (SoupSessionFeature* feature, SoupSession* session);
// void SessionFeature::attach (::SoupSessionFeature* feature, ::SoupSession* session);
virtual void attach_ (Soup::Session session) noexcept = 0;

// void SessionFeature::detach (SoupSessionFeature* feature, SoupSession* session);
// void SessionFeature::detach (::SoupSessionFeature* feature, ::SoupSession* session);
virtual void detach_ (Soup::Session session) noexcept = 0;

// gboolean SessionFeature::has_feature (SoupSessionFeature* feature, GType type);
// gboolean SessionFeature::has_feature (::SoupSessionFeature* feature, GType type);
virtual bool has_feature_ (GType type) noexcept = 0;

// gboolean SessionFeature::remove_feature (SoupSessionFeature* feature, GType type);
// gboolean SessionFeature::remove_feature (::SoupSessionFeature* feature, GType type);
virtual bool remove_feature_ (GType type) noexcept = 0;

// void SessionFeature::request_queued (SoupSessionFeature* feature, SoupSession* session, SoupMessage* msg);
// void SessionFeature::request_queued (::SoupSessionFeature* feature, ::SoupSession* session, ::SoupMessage* msg);
virtual void request_queued_ (Soup::Session session, Soup::Message msg) noexcept = 0;

// void SessionFeature::request_started (SoupSessionFeature* feature, SoupSession* session, SoupMessage* msg, SoupSocket* socket);
// void SessionFeature::request_started (::SoupSessionFeature* feature, ::SoupSession* session, ::SoupMessage* msg, ::SoupSocket* socket);
virtual void request_started_ (Soup::Session session, Soup::Message msg, Soup::Socket socket) noexcept = 0;

// void SessionFeature::request_unqueued (SoupSessionFeature* feature, SoupSession* session, SoupMessage* msg);
// void SessionFeature::request_unqueued (::SoupSessionFeature* feature, ::SoupSession* session, ::SoupMessage* msg);
virtual void request_unqueued_ (Soup::Session session, Soup::Message msg) noexcept = 0;


};

using SessionFeatureImpl = detail::InterfaceImpl<SessionFeatureInterfaceDef>;

class SessionFeatureInterfaceClassImpl: public detail::InterfaceClassImpl<SessionFeatureImpl>
{
typedef SessionFeatureInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<SessionFeatureImpl> super;

protected:
using super::super;

// gboolean SessionFeature::add_feature (SoupSessionFeature* feature, GType type);
// gboolean SessionFeature::add_feature (::SoupSessionFeature* feature, GType type);
GI_INLINE_DECL bool add_feature_ (GType type) noexcept override;

// void SessionFeature::attach (SoupSessionFeature* feature, SoupSession* session);
// void SessionFeature::attach (::SoupSessionFeature* feature, ::SoupSession* session);
GI_INLINE_DECL void attach_ (Soup::Session session) noexcept override;

// void SessionFeature::detach (SoupSessionFeature* feature, SoupSession* session);
// void SessionFeature::detach (::SoupSessionFeature* feature, ::SoupSession* session);
GI_INLINE_DECL void detach_ (Soup::Session session) noexcept override;

// gboolean SessionFeature::has_feature (SoupSessionFeature* feature, GType type);
// gboolean SessionFeature::has_feature (::SoupSessionFeature* feature, GType type);
GI_INLINE_DECL bool has_feature_ (GType type) noexcept override;

// gboolean SessionFeature::remove_feature (SoupSessionFeature* feature, GType type);
// gboolean SessionFeature::remove_feature (::SoupSessionFeature* feature, GType type);
GI_INLINE_DECL bool remove_feature_ (GType type) noexcept override;

// void SessionFeature::request_queued (SoupSessionFeature* feature, SoupSession* session, SoupMessage* msg);
// void SessionFeature::request_queued (::SoupSessionFeature* feature, ::SoupSession* session, ::SoupMessage* msg);
GI_INLINE_DECL void request_queued_ (Soup::Session session, Soup::Message msg) noexcept override;

// void SessionFeature::request_started (SoupSessionFeature* feature, SoupSession* session, SoupMessage* msg, SoupSocket* socket);
// void SessionFeature::request_started (::SoupSessionFeature* feature, ::SoupSession* session, ::SoupMessage* msg, ::SoupSocket* socket);
GI_INLINE_DECL void request_started_ (Soup::Session session, Soup::Message msg, Soup::Socket socket) noexcept override;

// void SessionFeature::request_unqueued (SoupSessionFeature* feature, SoupSession* session, SoupMessage* msg);
// void SessionFeature::request_unqueued (::SoupSessionFeature* feature, ::SoupSession* session, ::SoupMessage* msg);
GI_INLINE_DECL void request_unqueued_ (Soup::Session session, Soup::Message msg) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
