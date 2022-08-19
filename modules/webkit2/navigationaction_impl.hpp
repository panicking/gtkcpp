// AUTO-GENERATED

#ifndef _GI_WEBKIT2_NAVIGATIONACTION_IMPL_HPP_
#define _GI_WEBKIT2_NAVIGATIONACTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitNavigationAction* webkit_navigation_action_copy (WebKitNavigationAction* navigation);
// ::WebKitNavigationAction* webkit_navigation_action_copy (::WebKitNavigationAction* navigation);
WebKit2::NavigationAction base::NavigationActionBase::copy () noexcept
{
  typedef ::WebKitNavigationAction* (*call_wrap_t) (::WebKitNavigationAction* navigation);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_navigation_action_copy;
  auto _temp_ret = call_wrap_v ((::WebKitNavigationAction*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void webkit_navigation_action_free (WebKitNavigationAction* navigation);
// void webkit_navigation_action_free (::WebKitNavigationAction* navigation);
// IGNORE; marked ignore

// guint webkit_navigation_action_get_modifiers (WebKitNavigationAction* navigation);
// guint webkit_navigation_action_get_modifiers (::WebKitNavigationAction* navigation);
guint base::NavigationActionBase::get_modifiers () noexcept
{
  typedef guint (*call_wrap_t) (::WebKitNavigationAction* navigation);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_navigation_action_get_modifiers;
  auto _temp_ret = call_wrap_v ((::WebKitNavigationAction*) (gobj_()));
  return _temp_ret;
}

// guint webkit_navigation_action_get_mouse_button (WebKitNavigationAction* navigation);
// guint webkit_navigation_action_get_mouse_button (::WebKitNavigationAction* navigation);
guint base::NavigationActionBase::get_mouse_button () noexcept
{
  typedef guint (*call_wrap_t) (::WebKitNavigationAction* navigation);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_navigation_action_get_mouse_button;
  auto _temp_ret = call_wrap_v ((::WebKitNavigationAction*) (gobj_()));
  return _temp_ret;
}

// WebKitNavigationType webkit_navigation_action_get_navigation_type (WebKitNavigationAction* navigation);
// ::WebKitNavigationType webkit_navigation_action_get_navigation_type (::WebKitNavigationAction* navigation);
WebKit2::NavigationType base::NavigationActionBase::get_navigation_type () noexcept
{
  typedef ::WebKitNavigationType (*call_wrap_t) (::WebKitNavigationAction* navigation);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_navigation_action_get_navigation_type;
  auto _temp_ret = call_wrap_v ((::WebKitNavigationAction*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// WebKitURIRequest* webkit_navigation_action_get_request (WebKitNavigationAction* navigation);
// ::WebKitURIRequest* webkit_navigation_action_get_request (::WebKitNavigationAction* navigation);
WebKit2::URIRequest base::NavigationActionBase::get_request () noexcept
{
  typedef ::WebKitURIRequest* (*call_wrap_t) (::WebKitNavigationAction* navigation);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_navigation_action_get_request;
  auto _temp_ret = call_wrap_v ((::WebKitNavigationAction*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean webkit_navigation_action_is_redirect (WebKitNavigationAction* navigation);
// gboolean webkit_navigation_action_is_redirect (::WebKitNavigationAction* navigation);
bool base::NavigationActionBase::is_redirect () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitNavigationAction* navigation);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_navigation_action_is_redirect;
  auto _temp_ret = call_wrap_v ((::WebKitNavigationAction*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_navigation_action_is_user_gesture (WebKitNavigationAction* navigation);
// gboolean webkit_navigation_action_is_user_gesture (::WebKitNavigationAction* navigation);
bool base::NavigationActionBase::is_user_gesture () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitNavigationAction* navigation);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_navigation_action_is_user_gesture;
  auto _temp_ret = call_wrap_v ((::WebKitNavigationAction*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/navigationaction_extra_def_impl.hpp>)
#include <webkit2/navigationaction_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/navigationaction_extra_impl.hpp>)
#include <webkit2/navigationaction_extra_impl.hpp>
#endif
#endif

#endif
