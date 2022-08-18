// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_FEATURE_T_HPP_
#define _GI_HARFBUZZ_FEATURE_T_HPP_


namespace gi {

namespace repository {

namespace HarfBuzz {


class feature_t;

namespace base {


#define GI_HARFBUZZ_FEATURE_T_BASE base::feature_tBase
class feature_tBase : public gi::detail::GBoxedWrapper<feature_tBase, ::hb_feature_t>
{
typedef gi::detail::GBoxedWrapper<feature_tBase, ::hb_feature_t> super_type;
public:

feature_tBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return hb_gobject_feature_get_type(); } 

// ::hb_tag_t feature_t::tag (const ::hb_feature_t* obj);
// ::hb_tag_t feature_t::tag (const ::hb_feature_t* obj);
GI_INLINE_DECL HarfBuzz::tag_t tag_ () const noexcept;

//  feature_t::tag (::hb_feature_t* obj, ::hb_tag_t _value);
// void feature_t::tag (::hb_feature_t* obj, ::hb_tag_t _value);
GI_INLINE_DECL void tag_ (::hb_tag_t _value) noexcept;

// guint32 feature_t::value (const ::hb_feature_t* obj);
// guint32 feature_t::value (const ::hb_feature_t* obj);
GI_INLINE_DECL guint32 value_ () const noexcept;

//  feature_t::value (::hb_feature_t* obj, guint32 _value);
// void feature_t::value (::hb_feature_t* obj, guint32 _value);
GI_INLINE_DECL void value_ (guint32 _value) noexcept;

// guint feature_t::start (const ::hb_feature_t* obj);
// guint feature_t::start (const ::hb_feature_t* obj);
GI_INLINE_DECL guint start_ () const noexcept;

//  feature_t::start (::hb_feature_t* obj, guint _value);
// void feature_t::start (::hb_feature_t* obj, guint _value);
GI_INLINE_DECL void start_ (guint _value) noexcept;

// guint feature_t::end (const ::hb_feature_t* obj);
// guint feature_t::end (const ::hb_feature_t* obj);
GI_INLINE_DECL guint end_ () const noexcept;

//  feature_t::end (::hb_feature_t* obj, guint _value);
// void feature_t::end (::hb_feature_t* obj, guint _value);
GI_INLINE_DECL void end_ (guint _value) noexcept;

// void hb_feature_to_string (hb_feature_t* feature, char* buf, unsigned int size);
// void hb_feature_to_string (::hb_feature_t* feature, char*** buf, guint size);
// SKIP; inconsistent out buf pointer depth (1 vs 3)

}; // class

} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/feature_t_extra_def.hpp>)
#include <harfbuzz/feature_t_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/feature_t_extra.hpp>)
#include <harfbuzz/feature_t_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace HarfBuzz {

class feature_t : public GI_HARFBUZZ_FEATURE_T_BASE
{ typedef GI_HARFBUZZ_FEATURE_T_BASE super_type; using super_type::super_type; };

} // namespace HarfBuzz

template<> struct declare_cpptype_of<::hb_feature_t>
{ typedef HarfBuzz::feature_t type; }; 

} // namespace repository

} // namespace gi

#endif
