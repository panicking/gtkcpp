// AUTO-GENERATED

#ifndef _GI_GST_PARSECONTEXT_HPP_
#define _GI_GST_PARSECONTEXT_HPP_


namespace gi {

namespace repository {

namespace Gst {


class ParseContext;

namespace base {


#define GI_GST_PARSECONTEXT_BASE base::ParseContextBase
class ParseContextBase : public gi::detail::GBoxedWrapper<ParseContextBase, ::GstParseContext>
{
typedef gi::detail::GBoxedWrapper<ParseContextBase, ::GstParseContext> super_type;
public:

ParseContextBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gst_parse_context_get_type(); } 

// GstParseContext* gst_parse_context_new ();
// ::GstParseContext* gst_parse_context_new ();
static GI_INLINE_DECL Gst::ParseContext new_ () noexcept;

// GstParseContext* gst_parse_context_copy (const GstParseContext* context);
// ::GstParseContext* gst_parse_context_copy (const ::GstParseContext* context);
GI_INLINE_DECL Gst::ParseContext copy () const noexcept;

// void gst_parse_context_free (GstParseContext* context);
// void gst_parse_context_free (::GstParseContext* context);
// IGNORE; marked ignore

// gchar** gst_parse_context_get_missing_elements (GstParseContext* context);
// char** gst_parse_context_get_missing_elements (::GstParseContext* context);
GI_INLINE_DECL std::vector<std::string> get_missing_elements () noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/parsecontext_extra_def.hpp>)
#include <gst/parsecontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/parsecontext_extra.hpp>)
#include <gst/parsecontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class ParseContext : public GI_GST_PARSECONTEXT_BASE
{ typedef GI_GST_PARSECONTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstParseContext>
{ typedef Gst::ParseContext type; }; 

} // namespace repository

} // namespace gi

#endif
