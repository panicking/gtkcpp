// AUTO-GENERATED

#ifndef _GI_WEBKIT2_NAVIGATIONACTION_HPP_
#define _GI_WEBKIT2_NAVIGATIONACTION_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class URIRequest;

class NavigationAction;

namespace base {


#define GI_WEBKIT2_NAVIGATIONACTION_BASE base::NavigationActionBase
class NavigationActionBase : public gi::detail::GBoxedWrapper<NavigationActionBase, ::WebKitNavigationAction>
{
typedef gi::detail::GBoxedWrapper<NavigationActionBase, ::WebKitNavigationAction> super_type;
public:

NavigationActionBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return webkit_navigation_action_get_type(); } 

// WebKitNavigationAction* webkit_navigation_action_copy (WebKitNavigationAction* navigation);
// ::WebKitNavigationAction* webkit_navigation_action_copy (::WebKitNavigationAction* navigation);
GI_INLINE_DECL WebKit2::NavigationAction copy () noexcept;

// void webkit_navigation_action_free (WebKitNavigationAction* navigation);
// void webkit_navigation_action_free (::WebKitNavigationAction* navigation);
// IGNORE; marked ignore

// guint webkit_navigation_action_get_modifiers (WebKitNavigationAction* navigation);
// guint webkit_navigation_action_get_modifiers (::WebKitNavigationAction* navigation);
GI_INLINE_DECL guint get_modifiers () noexcept;

// guint webkit_navigation_action_get_mouse_button (WebKitNavigationAction* navigation);
// guint webkit_navigation_action_get_mouse_button (::WebKitNavigationAction* navigation);
GI_INLINE_DECL guint get_mouse_button () noexcept;

// WebKitNavigationType webkit_navigation_action_get_navigation_type (WebKitNavigationAction* navigation);
// ::WebKitNavigationType webkit_navigation_action_get_navigation_type (::WebKitNavigationAction* navigation);
GI_INLINE_DECL WebKit2::NavigationType get_navigation_type () noexcept;

// WebKitURIRequest* webkit_navigation_action_get_request (WebKitNavigationAction* navigation);
// ::WebKitURIRequest* webkit_navigation_action_get_request (::WebKitNavigationAction* navigation);
GI_INLINE_DECL WebKit2::URIRequest get_request () noexcept;

// gboolean webkit_navigation_action_is_redirect (WebKitNavigationAction* navigation);
// gboolean webkit_navigation_action_is_redirect (::WebKitNavigationAction* navigation);
GI_INLINE_DECL bool is_redirect () noexcept;

// gboolean webkit_navigation_action_is_user_gesture (WebKitNavigationAction* navigation);
// gboolean webkit_navigation_action_is_user_gesture (::WebKitNavigationAction* navigation);
GI_INLINE_DECL bool is_user_gesture () noexcept;

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/navigationaction_extra_def.hpp>)
#include <webkit2/navigationaction_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/navigationaction_extra.hpp>)
#include <webkit2/navigationaction_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class NavigationAction : public GI_WEBKIT2_NAVIGATIONACTION_BASE
{ typedef GI_WEBKIT2_NAVIGATIONACTION_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitNavigationAction>
{ typedef WebKit2::NavigationAction type; }; 

} // namespace repository

} // namespace gi

#endif
