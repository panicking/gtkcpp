// AUTO-GENERATED

#ifndef _GI_WEBKIT2_HITTESTRESULT_HPP_
#define _GI_WEBKIT2_HITTESTRESULT_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class HitTestResult;

namespace base {


#define GI_WEBKIT2_HITTESTRESULT_BASE base::HitTestResultBase
class HitTestResultBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitHitTestResult BaseObjectType;

HitTestResultBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_hit_test_result_get_type(); } 

// gboolean webkit_hit_test_result_context_is_editable (WebKitHitTestResult* hit_test_result);
// gboolean webkit_hit_test_result_context_is_editable (::WebKitHitTestResult* hit_test_result);
GI_INLINE_DECL bool context_is_editable () noexcept;

// gboolean webkit_hit_test_result_context_is_image (WebKitHitTestResult* hit_test_result);
// gboolean webkit_hit_test_result_context_is_image (::WebKitHitTestResult* hit_test_result);
GI_INLINE_DECL bool context_is_image () noexcept;

// gboolean webkit_hit_test_result_context_is_link (WebKitHitTestResult* hit_test_result);
// gboolean webkit_hit_test_result_context_is_link (::WebKitHitTestResult* hit_test_result);
GI_INLINE_DECL bool context_is_link () noexcept;

// gboolean webkit_hit_test_result_context_is_media (WebKitHitTestResult* hit_test_result);
// gboolean webkit_hit_test_result_context_is_media (::WebKitHitTestResult* hit_test_result);
GI_INLINE_DECL bool context_is_media () noexcept;

// gboolean webkit_hit_test_result_context_is_scrollbar (WebKitHitTestResult* hit_test_result);
// gboolean webkit_hit_test_result_context_is_scrollbar (::WebKitHitTestResult* hit_test_result);
GI_INLINE_DECL bool context_is_scrollbar () noexcept;

// gboolean webkit_hit_test_result_context_is_selection (WebKitHitTestResult* hit_test_result);
// gboolean webkit_hit_test_result_context_is_selection (::WebKitHitTestResult* hit_test_result);
GI_INLINE_DECL bool context_is_selection () noexcept;

// guint webkit_hit_test_result_get_context (WebKitHitTestResult* hit_test_result);
// guint webkit_hit_test_result_get_context (::WebKitHitTestResult* hit_test_result);
GI_INLINE_DECL guint get_context () noexcept;

// const gchar* webkit_hit_test_result_get_image_uri (WebKitHitTestResult* hit_test_result);
// const char* webkit_hit_test_result_get_image_uri (::WebKitHitTestResult* hit_test_result);
GI_INLINE_DECL std::string get_image_uri () noexcept;

// const gchar* webkit_hit_test_result_get_link_label (WebKitHitTestResult* hit_test_result);
// const char* webkit_hit_test_result_get_link_label (::WebKitHitTestResult* hit_test_result);
GI_INLINE_DECL std::string get_link_label () noexcept;

// const gchar* webkit_hit_test_result_get_link_title (WebKitHitTestResult* hit_test_result);
// const char* webkit_hit_test_result_get_link_title (::WebKitHitTestResult* hit_test_result);
GI_INLINE_DECL std::string get_link_title () noexcept;

// const gchar* webkit_hit_test_result_get_link_uri (WebKitHitTestResult* hit_test_result);
// const char* webkit_hit_test_result_get_link_uri (::WebKitHitTestResult* hit_test_result);
GI_INLINE_DECL std::string get_link_uri () noexcept;

// const gchar* webkit_hit_test_result_get_media_uri (WebKitHitTestResult* hit_test_result);
// const char* webkit_hit_test_result_get_media_uri (::WebKitHitTestResult* hit_test_result);
GI_INLINE_DECL std::string get_media_uri () noexcept;

gi::property_proxy<guint, base::HitTestResultBase> property_context()
{ return gi::property_proxy<guint, base::HitTestResultBase> (*this, "context"); }
const gi::property_proxy<guint, base::HitTestResultBase> property_context() const
{ return gi::property_proxy<guint, base::HitTestResultBase> (*this, "context"); }

gi::property_proxy<std::string, base::HitTestResultBase> property_image_uri()
{ return gi::property_proxy<std::string, base::HitTestResultBase> (*this, "image-uri"); }
const gi::property_proxy<std::string, base::HitTestResultBase> property_image_uri() const
{ return gi::property_proxy<std::string, base::HitTestResultBase> (*this, "image-uri"); }

gi::property_proxy<std::string, base::HitTestResultBase> property_link_label()
{ return gi::property_proxy<std::string, base::HitTestResultBase> (*this, "link-label"); }
const gi::property_proxy<std::string, base::HitTestResultBase> property_link_label() const
{ return gi::property_proxy<std::string, base::HitTestResultBase> (*this, "link-label"); }

gi::property_proxy<std::string, base::HitTestResultBase> property_link_title()
{ return gi::property_proxy<std::string, base::HitTestResultBase> (*this, "link-title"); }
const gi::property_proxy<std::string, base::HitTestResultBase> property_link_title() const
{ return gi::property_proxy<std::string, base::HitTestResultBase> (*this, "link-title"); }

gi::property_proxy<std::string, base::HitTestResultBase> property_link_uri()
{ return gi::property_proxy<std::string, base::HitTestResultBase> (*this, "link-uri"); }
const gi::property_proxy<std::string, base::HitTestResultBase> property_link_uri() const
{ return gi::property_proxy<std::string, base::HitTestResultBase> (*this, "link-uri"); }

gi::property_proxy<std::string, base::HitTestResultBase> property_media_uri()
{ return gi::property_proxy<std::string, base::HitTestResultBase> (*this, "media-uri"); }
const gi::property_proxy<std::string, base::HitTestResultBase> property_media_uri() const
{ return gi::property_proxy<std::string, base::HitTestResultBase> (*this, "media-uri"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/hittestresult_extra_def.hpp>)
#include <webkit2/hittestresult_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/hittestresult_extra.hpp>)
#include <webkit2/hittestresult_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class HitTestResult : public GI_WEBKIT2_HITTESTRESULT_BASE
{ typedef GI_WEBKIT2_HITTESTRESULT_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitHitTestResult>
{ typedef WebKit2::HitTestResult type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class HitTestResultClassDef
{
typedef HitTestResultClassDef self;
public:
typedef WebKit2::HitTestResult instance_type;
typedef ::WebKitHitTestResultClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class HitTestResultClass: public detail::ClassTemplate<WebKit2::impl::internal::HitTestResultClassDef, GObject::impl::internal::ObjectClass>
{
typedef HitTestResultClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::HitTestResultClassDef, GObject::impl::internal::ObjectClass> super;

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

using HitTestResultImpl = detail::ObjectImpl<HitTestResult, internal::HitTestResultClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
