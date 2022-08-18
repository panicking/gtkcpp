// AUTO-GENERATED

#ifndef _GI_GLIB_MARKUPPARSER_HPP_
#define _GI_GLIB_MARKUPPARSER_HPP_


namespace gi {

namespace repository {

namespace GLib {


class MarkupParser;

namespace base {


#define GI_GLIB_MARKUPPARSER_BASE base::MarkupParserBase
class MarkupParserBase : public gi::detail::CBoxedWrapper<MarkupParserBase, ::GMarkupParser>
{
typedef gi::detail::CBoxedWrapper<MarkupParserBase, ::GMarkupParser> super_type;
public:

MarkupParserBase (std::nullptr_t = nullptr) : super_type() {}

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/markupparser_extra_def.hpp>)
#include <glib/markupparser_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/markupparser_extra.hpp>)
#include <glib/markupparser_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class MarkupParser : public GI_GLIB_MARKUPPARSER_BASE
{ typedef GI_GLIB_MARKUPPARSER_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GMarkupParser>
{ typedef GLib::MarkupParser type; }; 

} // namespace repository

} // namespace gi

#endif
