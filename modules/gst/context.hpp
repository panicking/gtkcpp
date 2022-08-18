// AUTO-GENERATED

#ifndef _GI_GST_CONTEXT_HPP_
#define _GI_GST_CONTEXT_HPP_


namespace gi {

namespace repository {

namespace Gst {

class Structure;

class Context;

namespace base {


#define GI_GST_CONTEXT_BASE base::ContextBase
class ContextBase : public gi::detail::GBoxedWrapper<ContextBase, ::GstContext>
{
typedef gi::detail::GBoxedWrapper<ContextBase, ::GstContext> super_type;
public:

ContextBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gst_context_get_type(); } 

// GstContext* gst_context_new (const gchar* context_type, gboolean persistent);
// ::GstContext* gst_context_new (const char* context_type, gboolean persistent);
static GI_INLINE_DECL Gst::Context new_ (const std::string & context_type, gboolean persistent) noexcept;

// const gchar* gst_context_get_context_type (const GstContext* context);
// const char* gst_context_get_context_type (const ::GstContext* context);
GI_INLINE_DECL std::string get_context_type () const noexcept;

// const GstStructure* gst_context_get_structure (const GstContext* context);
// const ::GstStructure* gst_context_get_structure (const ::GstContext* context);
GI_INLINE_DECL Gst::Structure get_structure () const noexcept;

// gboolean gst_context_has_context_type (const GstContext* context, const gchar* context_type);
// gboolean gst_context_has_context_type (const ::GstContext* context, const char* context_type);
GI_INLINE_DECL bool has_context_type (const std::string & context_type) const noexcept;

// gboolean gst_context_is_persistent (const GstContext* context);
// gboolean gst_context_is_persistent (const ::GstContext* context);
GI_INLINE_DECL bool is_persistent () const noexcept;

// GstStructure* gst_context_writable_structure (GstContext* context);
// ::GstStructure* gst_context_writable_structure (::GstContext* context);
GI_INLINE_DECL Gst::Structure writable_structure () noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/context_extra_def.hpp>)
#include <gst/context_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/context_extra.hpp>)
#include <gst/context_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Context : public GI_GST_CONTEXT_BASE
{ typedef GI_GST_CONTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstContext>
{ typedef Gst::Context type; }; 

} // namespace repository

} // namespace gi

#endif
