// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_GLYPH_INFO_T_HPP_
#define _GI_HARFBUZZ_GLYPH_INFO_T_HPP_


namespace gi {

namespace repository {

namespace HarfBuzz {


class glyph_info_t;

namespace base {


#define GI_HARFBUZZ_GLYPH_INFO_T_BASE base::glyph_info_tBase
class glyph_info_tBase : public gi::detail::GBoxedWrapper<glyph_info_tBase, ::hb_glyph_info_t>
{
typedef gi::detail::GBoxedWrapper<glyph_info_tBase, ::hb_glyph_info_t> super_type;
public:

glyph_info_tBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return hb_gobject_glyph_info_get_type(); } 

// ::hb_codepoint_t glyph_info_t::codepoint (const ::hb_glyph_info_t* obj);
// ::hb_codepoint_t glyph_info_t::codepoint (const ::hb_glyph_info_t* obj);
GI_INLINE_DECL HarfBuzz::codepoint_t codepoint_ () const noexcept;

//  glyph_info_t::codepoint (::hb_glyph_info_t* obj, ::hb_codepoint_t _value);
// void glyph_info_t::codepoint (::hb_glyph_info_t* obj, ::hb_codepoint_t _value);
GI_INLINE_DECL void codepoint_ (::hb_codepoint_t _value) noexcept;

// guint32 glyph_info_t::cluster (const ::hb_glyph_info_t* obj);
// guint32 glyph_info_t::cluster (const ::hb_glyph_info_t* obj);
GI_INLINE_DECL guint32 cluster_ () const noexcept;

//  glyph_info_t::cluster (::hb_glyph_info_t* obj, guint32 _value);
// void glyph_info_t::cluster (::hb_glyph_info_t* obj, guint32 _value);
GI_INLINE_DECL void cluster_ (guint32 _value) noexcept;

}; // class

} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/glyph_info_t_extra_def.hpp>)
#include <harfbuzz/glyph_info_t_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/glyph_info_t_extra.hpp>)
#include <harfbuzz/glyph_info_t_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace HarfBuzz {

class glyph_info_t : public GI_HARFBUZZ_GLYPH_INFO_T_BASE
{ typedef GI_HARFBUZZ_GLYPH_INFO_T_BASE super_type; using super_type::super_type; };

} // namespace HarfBuzz

template<> struct declare_cpptype_of<::hb_glyph_info_t>
{ typedef HarfBuzz::glyph_info_t type; }; 

} // namespace repository

} // namespace gi

#endif
