// AUTO-GENERATED

#ifndef _GI_GST_DEBUGCATEGORY_HPP_
#define _GI_GST_DEBUGCATEGORY_HPP_


namespace gi {

namespace repository {

namespace Gst {


class DebugCategory;

namespace base {


#define GI_GST_DEBUGCATEGORY_BASE base::DebugCategoryBase
class DebugCategoryBase : public gi::detail::CBoxedWrapper<DebugCategoryBase, ::GstDebugCategory>
{
typedef gi::detail::CBoxedWrapper<DebugCategoryBase, ::GstDebugCategory> super_type;
public:

DebugCategoryBase (std::nullptr_t = nullptr) : super_type() {}

// void gst_debug_category_free (GstDebugCategory* category);
// void gst_debug_category_free (::GstDebugCategory* category);
// IGNORE; marked ignore

// guint gst_debug_category_get_color (GstDebugCategory* category);
// guint gst_debug_category_get_color (::GstDebugCategory* category);
GI_INLINE_DECL guint get_color () noexcept;

// const gchar* gst_debug_category_get_description (GstDebugCategory* category);
// const char* gst_debug_category_get_description (::GstDebugCategory* category);
GI_INLINE_DECL std::string get_description () noexcept;

// const gchar* gst_debug_category_get_name (GstDebugCategory* category);
// const char* gst_debug_category_get_name (::GstDebugCategory* category);
GI_INLINE_DECL std::string get_name () noexcept;

// GstDebugLevel gst_debug_category_get_threshold (GstDebugCategory* category);
// ::GstDebugLevel gst_debug_category_get_threshold (::GstDebugCategory* category);
GI_INLINE_DECL Gst::DebugLevel get_threshold () noexcept;

// void gst_debug_category_reset_threshold (GstDebugCategory* category);
// void gst_debug_category_reset_threshold (::GstDebugCategory* category);
GI_INLINE_DECL void reset_threshold () noexcept;

// void gst_debug_category_set_threshold (GstDebugCategory* category, GstDebugLevel level);
// void gst_debug_category_set_threshold (::GstDebugCategory* category, ::GstDebugLevel level);
GI_INLINE_DECL void set_threshold (Gst::DebugLevel level) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/debugcategory_extra_def.hpp>)
#include <gst/debugcategory_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/debugcategory_extra.hpp>)
#include <gst/debugcategory_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class DebugCategory : public GI_GST_DEBUGCATEGORY_BASE
{ typedef GI_GST_DEBUGCATEGORY_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstDebugCategory>
{ typedef Gst::DebugCategory type; }; 

} // namespace repository

} // namespace gi

#endif
