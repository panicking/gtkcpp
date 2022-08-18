// AUTO-GENERATED

#ifndef _GI_PANGO_SCRIPTITER_HPP_
#define _GI_PANGO_SCRIPTITER_HPP_


namespace gi {

namespace repository {

namespace Pango {


class ScriptIter;

namespace base {


#define GI_PANGO_SCRIPTITER_BASE base::ScriptIterBase
class ScriptIterBase : public gi::detail::GBoxedWrapper<ScriptIterBase, ::PangoScriptIter>
{
typedef gi::detail::GBoxedWrapper<ScriptIterBase, ::PangoScriptIter> super_type;
public:

ScriptIterBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_script_iter_get_type(); } 

// PangoScriptIter* pango_script_iter_new (const char* text, int length);
// ::PangoScriptIter* pango_script_iter_new (const char* text, gint length);
static GI_INLINE_DECL Pango::ScriptIter new_ (const std::string & text, gint length) noexcept;

// void pango_script_iter_free (PangoScriptIter* iter);
// void pango_script_iter_free (::PangoScriptIter* iter);
// IGNORE; marked ignore

// void pango_script_iter_get_range (PangoScriptIter* iter, const char** start, const char** end, PangoScript* script);
// void pango_script_iter_get_range (::PangoScriptIter* iter, const char** start, const char** end, ::PangoScript* script);
GI_INLINE_DECL void get_range (std::string * start = nullptr, std::string * end = nullptr, Pango::Script * script = nullptr) noexcept;
GI_INLINE_DECL std::tuple<std::string, std::string, Pango::Script> get_range () noexcept;

// gboolean pango_script_iter_next (PangoScriptIter* iter);
// gboolean pango_script_iter_next (::PangoScriptIter* iter);
GI_INLINE_DECL bool next () noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/scriptiter_extra_def.hpp>)
#include <pango/scriptiter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/scriptiter_extra.hpp>)
#include <pango/scriptiter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class ScriptIter : public GI_PANGO_SCRIPTITER_BASE
{ typedef GI_PANGO_SCRIPTITER_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoScriptIter>
{ typedef Pango::ScriptIter type; }; 

} // namespace repository

} // namespace gi

#endif
