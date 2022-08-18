// AUTO-GENERATED

#ifndef _GI_ATK_RANGE_HPP_
#define _GI_ATK_RANGE_HPP_


namespace gi {

namespace repository {

namespace Atk {


class Range;

namespace base {


#define GI_ATK_RANGE_BASE base::RangeBase
class RangeBase : public gi::detail::GBoxedWrapper<RangeBase, ::AtkRange>
{
typedef gi::detail::GBoxedWrapper<RangeBase, ::AtkRange> super_type;
public:

RangeBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return atk_range_get_type(); } 

// AtkRange* atk_range_new (gdouble lower_limit, gdouble upper_limit, const gchar* description);
// ::AtkRange* atk_range_new (gdouble lower_limit, gdouble upper_limit, const char* description);
static GI_INLINE_DECL Atk::Range new_ (gdouble lower_limit, gdouble upper_limit, const std::string & description) noexcept;

// AtkRange* atk_range_copy (AtkRange* src);
// ::AtkRange* atk_range_copy (::AtkRange* src);
GI_INLINE_DECL Atk::Range copy () noexcept;

// void atk_range_free (AtkRange* range);
// void atk_range_free (::AtkRange* range);
// IGNORE; marked ignore

// const gchar* atk_range_get_description (AtkRange* range);
// const char* atk_range_get_description (::AtkRange* range);
GI_INLINE_DECL std::string get_description () noexcept;

// gdouble atk_range_get_lower_limit (AtkRange* range);
// gdouble atk_range_get_lower_limit (::AtkRange* range);
GI_INLINE_DECL gdouble get_lower_limit () noexcept;

// gdouble atk_range_get_upper_limit (AtkRange* range);
// gdouble atk_range_get_upper_limit (::AtkRange* range);
GI_INLINE_DECL gdouble get_upper_limit () noexcept;

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/range_extra_def.hpp>)
#include <atk/range_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/range_extra.hpp>)
#include <atk/range_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class Range : public GI_ATK_RANGE_BASE
{ typedef GI_ATK_RANGE_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkRange>
{ typedef Atk::Range type; }; 

} // namespace repository

} // namespace gi

#endif
