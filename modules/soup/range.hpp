// AUTO-GENERATED

#ifndef _GI_SOUP_RANGE_HPP_
#define _GI_SOUP_RANGE_HPP_


namespace gi {

namespace repository {

namespace Soup {


class Range;

namespace base {


#define GI_SOUP_RANGE_BASE base::RangeBase
class RangeBase : public gi::detail::CBoxedWrapper<RangeBase, ::SoupRange>
{
typedef gi::detail::CBoxedWrapper<RangeBase, ::SoupRange> super_type;
public:

RangeBase (std::nullptr_t = nullptr) : super_type() {}

// gint64 Range::start (const ::SoupRange* obj);
// gint64 Range::start (const ::SoupRange* obj);
GI_INLINE_DECL gint64 start_ () const noexcept;

//  Range::start (::SoupRange* obj, gint64 _value);
// void Range::start (::SoupRange* obj, gint64 _value);
GI_INLINE_DECL void start_ (gint64 _value) noexcept;

// gint64 Range::end (const ::SoupRange* obj);
// gint64 Range::end (const ::SoupRange* obj);
GI_INLINE_DECL gint64 end_ () const noexcept;

//  Range::end (::SoupRange* obj, gint64 _value);
// void Range::end (::SoupRange* obj, gint64 _value);
GI_INLINE_DECL void end_ (gint64 _value) noexcept;

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/range_extra_def.hpp>)
#include <soup/range_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/range_extra.hpp>)
#include <soup/range_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class Range : public GI_SOUP_RANGE_BASE
{ typedef GI_SOUP_RANGE_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupRange>
{ typedef Soup::Range type; }; 

} // namespace repository

} // namespace gi

#endif
