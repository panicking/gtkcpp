// AUTO-GENERATED

#ifndef _GI_SOUP_SESSIONFEATURE_IMPL_HPP_
#define _GI_SOUP_SESSIONFEATURE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

// gboolean soup_session_feature_add_feature (SoupSessionFeature* feature, GType type);
// gboolean soup_session_feature_add_feature (::SoupSessionFeature* feature, GType type);
bool base::SessionFeatureBase::add_feature (GType type) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupSessionFeature* feature, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_feature_add_feature;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((::SoupSessionFeature*) (gobj_()), (GType) (type_to_c));
  return _temp_ret;
}

// void soup_session_feature_attach (SoupSessionFeature* feature, SoupSession* session);
// void soup_session_feature_attach (::SoupSessionFeature* feature, ::SoupSession* session);
void base::SessionFeatureBase::attach (Soup::Session session) noexcept
{
  typedef void (*call_wrap_t) (::SoupSessionFeature* feature, ::SoupSession* session);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_feature_attach;
  auto session_to_c = gi::unwrap (session, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSessionFeature*) (gobj_()), (::SoupSession*) (session_to_c));
}

// void soup_session_feature_detach (SoupSessionFeature* feature, SoupSession* session);
// void soup_session_feature_detach (::SoupSessionFeature* feature, ::SoupSession* session);
void base::SessionFeatureBase::detach (Soup::Session session) noexcept
{
  typedef void (*call_wrap_t) (::SoupSessionFeature* feature, ::SoupSession* session);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_feature_detach;
  auto session_to_c = gi::unwrap (session, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSessionFeature*) (gobj_()), (::SoupSession*) (session_to_c));
}

// gboolean soup_session_feature_has_feature (SoupSessionFeature* feature, GType type);
// gboolean soup_session_feature_has_feature (::SoupSessionFeature* feature, GType type);
bool base::SessionFeatureBase::has_feature (GType type) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupSessionFeature* feature, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_feature_has_feature;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((::SoupSessionFeature*) (gobj_()), (GType) (type_to_c));
  return _temp_ret;
}

// gboolean soup_session_feature_remove_feature (SoupSessionFeature* feature, GType type);
// gboolean soup_session_feature_remove_feature (::SoupSessionFeature* feature, GType type);
bool base::SessionFeatureBase::remove_feature (GType type) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupSessionFeature* feature, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_feature_remove_feature;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((::SoupSessionFeature*) (gobj_()), (GType) (type_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/sessionfeature_extra_def_impl.hpp>)
#include <soup/sessionfeature_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/sessionfeature_extra_impl.hpp>)
#include <soup/sessionfeature_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void SessionFeatureInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::SoupSessionFeatureInterface *methods = (::SoupSessionFeatureInterface *) interface_struct;
  (void) methods;

  methods->add_feature = (decltype (methods->add_feature)) detail::method_wrapper<self, bool (*) (GType type), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::add_feature_>;
  methods->attach = (decltype (methods->attach)) detail::method_wrapper<self, void (*) (Soup::Session session), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::attach_>;
  methods->detach = (decltype (methods->detach)) detail::method_wrapper<self, void (*) (Soup::Session session), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::detach_>;
  methods->has_feature = (decltype (methods->has_feature)) detail::method_wrapper<self, bool (*) (GType type), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::has_feature_>;
  methods->remove_feature = (decltype (methods->remove_feature)) detail::method_wrapper<self, bool (*) (GType type), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::remove_feature_>;
  methods->request_queued = (decltype (methods->request_queued)) detail::method_wrapper<self, void (*) (Soup::Session session, Soup::Message msg), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::request_queued_>;
  methods->request_started = (decltype (methods->request_started)) detail::method_wrapper<self, void (*) (Soup::Session session, Soup::Message msg, Soup::Socket socket), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::request_started_>;
  methods->request_unqueued = (decltype (methods->request_unqueued)) detail::method_wrapper<self, void (*) (Soup::Session session, Soup::Message msg), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::request_unqueued_>;
}

// gboolean SessionFeature::add_feature (SoupSessionFeature* feature, GType type);
// gboolean SessionFeature::add_feature (::SoupSessionFeature* feature, GType type);
bool SessionFeatureInterfaceClassImpl::add_feature_ (GType type) noexcept
{
  if (!get_struct_()->add_feature) return bool{};
  typedef gboolean (*call_wrap_t) (::SoupSessionFeature* feature, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->add_feature;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((::SoupSessionFeature*) (gobj_()), (GType) (type_to_c));
  return _temp_ret;
}

// void SessionFeature::attach (SoupSessionFeature* feature, SoupSession* session);
// void SessionFeature::attach (::SoupSessionFeature* feature, ::SoupSession* session);
void SessionFeatureInterfaceClassImpl::attach_ (Soup::Session session) noexcept
{
  if (!get_struct_()->attach) return ;
  typedef void (*call_wrap_t) (::SoupSessionFeature* feature, ::SoupSession* session);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->attach;
  auto session_to_c = gi::unwrap (session, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSessionFeature*) (gobj_()), (::SoupSession*) (session_to_c));
}

// void SessionFeature::detach (SoupSessionFeature* feature, SoupSession* session);
// void SessionFeature::detach (::SoupSessionFeature* feature, ::SoupSession* session);
void SessionFeatureInterfaceClassImpl::detach_ (Soup::Session session) noexcept
{
  if (!get_struct_()->detach) return ;
  typedef void (*call_wrap_t) (::SoupSessionFeature* feature, ::SoupSession* session);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->detach;
  auto session_to_c = gi::unwrap (session, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSessionFeature*) (gobj_()), (::SoupSession*) (session_to_c));
}

// gboolean SessionFeature::has_feature (SoupSessionFeature* feature, GType type);
// gboolean SessionFeature::has_feature (::SoupSessionFeature* feature, GType type);
bool SessionFeatureInterfaceClassImpl::has_feature_ (GType type) noexcept
{
  if (!get_struct_()->has_feature) return bool{};
  typedef gboolean (*call_wrap_t) (::SoupSessionFeature* feature, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->has_feature;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((::SoupSessionFeature*) (gobj_()), (GType) (type_to_c));
  return _temp_ret;
}

// gboolean SessionFeature::remove_feature (SoupSessionFeature* feature, GType type);
// gboolean SessionFeature::remove_feature (::SoupSessionFeature* feature, GType type);
bool SessionFeatureInterfaceClassImpl::remove_feature_ (GType type) noexcept
{
  if (!get_struct_()->remove_feature) return bool{};
  typedef gboolean (*call_wrap_t) (::SoupSessionFeature* feature, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->remove_feature;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((::SoupSessionFeature*) (gobj_()), (GType) (type_to_c));
  return _temp_ret;
}

// void SessionFeature::request_queued (SoupSessionFeature* feature, SoupSession* session, SoupMessage* msg);
// void SessionFeature::request_queued (::SoupSessionFeature* feature, ::SoupSession* session, ::SoupMessage* msg);
void SessionFeatureInterfaceClassImpl::request_queued_ (Soup::Session session, Soup::Message msg) noexcept
{
  if (!get_struct_()->request_queued) return ;
  typedef void (*call_wrap_t) (::SoupSessionFeature* feature, ::SoupSession* session, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->request_queued;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto session_to_c = gi::unwrap (session, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSessionFeature*) (gobj_()), (::SoupSession*) (session_to_c), (::SoupMessage*) (msg_to_c));
}

// void SessionFeature::request_started (SoupSessionFeature* feature, SoupSession* session, SoupMessage* msg, SoupSocket* socket);
// void SessionFeature::request_started (::SoupSessionFeature* feature, ::SoupSession* session, ::SoupMessage* msg, ::SoupSocket* socket);
void SessionFeatureInterfaceClassImpl::request_started_ (Soup::Session session, Soup::Message msg, Soup::Socket socket) noexcept
{
  if (!get_struct_()->request_started) return ;
  typedef void (*call_wrap_t) (::SoupSessionFeature* feature, ::SoupSession* session, ::SoupMessage* msg, ::SoupSocket* socket);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->request_started;
  auto socket_to_c = gi::unwrap (socket, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto session_to_c = gi::unwrap (session, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSessionFeature*) (gobj_()), (::SoupSession*) (session_to_c), (::SoupMessage*) (msg_to_c), (::SoupSocket*) (socket_to_c));
}

// void SessionFeature::request_unqueued (SoupSessionFeature* feature, SoupSession* session, SoupMessage* msg);
// void SessionFeature::request_unqueued (::SoupSessionFeature* feature, ::SoupSession* session, ::SoupMessage* msg);
void SessionFeatureInterfaceClassImpl::request_unqueued_ (Soup::Session session, Soup::Message msg) noexcept
{
  if (!get_struct_()->request_unqueued) return ;
  typedef void (*call_wrap_t) (::SoupSessionFeature* feature, ::SoupSession* session, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->request_unqueued;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto session_to_c = gi::unwrap (session, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSessionFeature*) (gobj_()), (::SoupSession*) (session_to_c), (::SoupMessage*) (msg_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
