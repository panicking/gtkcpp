// AUTO-GENERATED

#ifndef _GI_WEBKIT2_FINDCONTROLLER_HPP_
#define _GI_WEBKIT2_FINDCONTROLLER_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class WebView;

class FindController;

namespace base {


#define GI_WEBKIT2_FINDCONTROLLER_BASE base::FindControllerBase
class FindControllerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitFindController BaseObjectType;

FindControllerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_find_controller_get_type(); } 

// void webkit_find_controller_count_matches (WebKitFindController* find_controller, const gchar* search_text, guint32 find_options, guint max_match_count);
// void webkit_find_controller_count_matches (::WebKitFindController* find_controller, const char* search_text, guint32 find_options, guint max_match_count);
GI_INLINE_DECL void count_matches (const std::string & search_text, guint32 find_options, guint max_match_count) noexcept;

// guint webkit_find_controller_get_max_match_count (WebKitFindController* find_controller);
// guint webkit_find_controller_get_max_match_count (::WebKitFindController* find_controller);
GI_INLINE_DECL guint get_max_match_count () noexcept;

// guint32 webkit_find_controller_get_options (WebKitFindController* find_controller);
// guint32 webkit_find_controller_get_options (::WebKitFindController* find_controller);
GI_INLINE_DECL guint32 get_options () noexcept;

// const gchar* webkit_find_controller_get_search_text (WebKitFindController* find_controller);
// const char* webkit_find_controller_get_search_text (::WebKitFindController* find_controller);
GI_INLINE_DECL std::string get_search_text () noexcept;

// WebKitWebView* webkit_find_controller_get_web_view (WebKitFindController* find_controller);
// ::WebKitWebView* webkit_find_controller_get_web_view (::WebKitFindController* find_controller);
GI_INLINE_DECL WebKit2::WebView get_web_view () noexcept;

// void webkit_find_controller_search (WebKitFindController* find_controller, const gchar* search_text, guint32 find_options, guint max_match_count);
// void webkit_find_controller_search (::WebKitFindController* find_controller, const char* search_text, guint32 find_options, guint max_match_count);
GI_INLINE_DECL void search (const std::string & search_text, guint32 find_options, guint max_match_count) noexcept;

// void webkit_find_controller_search_finish (WebKitFindController* find_controller);
// void webkit_find_controller_search_finish (::WebKitFindController* find_controller);
GI_INLINE_DECL void search_finish () noexcept;

// void webkit_find_controller_search_next (WebKitFindController* find_controller);
// void webkit_find_controller_search_next (::WebKitFindController* find_controller);
GI_INLINE_DECL void search_next () noexcept;

// void webkit_find_controller_search_previous (WebKitFindController* find_controller);
// void webkit_find_controller_search_previous (::WebKitFindController* find_controller);
GI_INLINE_DECL void search_previous () noexcept;

gi::property_proxy<guint, base::FindControllerBase> property_max_match_count()
{ return gi::property_proxy<guint, base::FindControllerBase> (*this, "max-match-count"); }
const gi::property_proxy<guint, base::FindControllerBase> property_max_match_count() const
{ return gi::property_proxy<guint, base::FindControllerBase> (*this, "max-match-count"); }

gi::property_proxy<WebKit2::FindOptions, base::FindControllerBase> property_options()
{ return gi::property_proxy<WebKit2::FindOptions, base::FindControllerBase> (*this, "options"); }
const gi::property_proxy<WebKit2::FindOptions, base::FindControllerBase> property_options() const
{ return gi::property_proxy<WebKit2::FindOptions, base::FindControllerBase> (*this, "options"); }

gi::property_proxy<std::string, base::FindControllerBase> property_text()
{ return gi::property_proxy<std::string, base::FindControllerBase> (*this, "text"); }
const gi::property_proxy<std::string, base::FindControllerBase> property_text() const
{ return gi::property_proxy<std::string, base::FindControllerBase> (*this, "text"); }

gi::property_proxy<WebKit2::WebView, base::FindControllerBase> property_web_view()
{ return gi::property_proxy<WebKit2::WebView, base::FindControllerBase> (*this, "web-view"); }
const gi::property_proxy<WebKit2::WebView, base::FindControllerBase> property_web_view() const
{ return gi::property_proxy<WebKit2::WebView, base::FindControllerBase> (*this, "web-view"); }

// signal counted-matches
gi::signal_proxy<void(WebKit2::FindController, guint match_count)> signal_counted_matches()
{ return gi::signal_proxy<void(WebKit2::FindController, guint match_count)> (*this, "counted-matches"); }

// signal failed-to-find-text
gi::signal_proxy<void(WebKit2::FindController)> signal_failed_to_find_text()
{ return gi::signal_proxy<void(WebKit2::FindController)> (*this, "failed-to-find-text"); }

// signal found-text
gi::signal_proxy<void(WebKit2::FindController, guint match_count)> signal_found_text()
{ return gi::signal_proxy<void(WebKit2::FindController, guint match_count)> (*this, "found-text"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/findcontroller_extra_def.hpp>)
#include <webkit2/findcontroller_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/findcontroller_extra.hpp>)
#include <webkit2/findcontroller_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class FindController : public GI_WEBKIT2_FINDCONTROLLER_BASE
{ typedef GI_WEBKIT2_FINDCONTROLLER_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitFindController>
{ typedef WebKit2::FindController type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class FindControllerClassDef
{
typedef FindControllerClassDef self;
public:
typedef WebKit2::FindController instance_type;
typedef ::WebKitFindControllerClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FindControllerClass: public detail::ClassTemplate<WebKit2::impl::internal::FindControllerClassDef, GObject::impl::internal::ObjectClass>
{
typedef FindControllerClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::FindControllerClassDef, GObject::impl::internal::ObjectClass> super;

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

using FindControllerImpl = detail::ObjectImpl<FindController, internal::FindControllerClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
