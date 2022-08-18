// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF_PIXBUFMODULEPATTERN_HPP_
#define _GI_GDKPIXBUF_PIXBUFMODULEPATTERN_HPP_


namespace gi {

namespace repository {

namespace GdkPixbuf {


class PixbufModulePattern;

namespace base {


#define GI_GDKPIXBUF_PIXBUFMODULEPATTERN_BASE base::PixbufModulePatternBase
class PixbufModulePatternBase : public gi::detail::CBoxedWrapper<PixbufModulePatternBase, ::GdkPixbufModulePattern>
{
typedef gi::detail::CBoxedWrapper<PixbufModulePatternBase, ::GdkPixbufModulePattern> super_type;
public:

PixbufModulePatternBase (std::nullptr_t = nullptr) : super_type() {}

// char* PixbufModulePattern::prefix (const ::GdkPixbufModulePattern* obj);
// char* PixbufModulePattern::prefix (const ::GdkPixbufModulePattern* obj);
GI_INLINE_DECL std::string prefix_ () const noexcept;

// char* PixbufModulePattern::mask (const ::GdkPixbufModulePattern* obj);
// char* PixbufModulePattern::mask (const ::GdkPixbufModulePattern* obj);
GI_INLINE_DECL std::string mask_ () const noexcept;

// gint PixbufModulePattern::relevance (const ::GdkPixbufModulePattern* obj);
// gint PixbufModulePattern::relevance (const ::GdkPixbufModulePattern* obj);
GI_INLINE_DECL gint relevance_ () const noexcept;

//  PixbufModulePattern::relevance (::GdkPixbufModulePattern* obj, gint _value);
// void PixbufModulePattern::relevance (::GdkPixbufModulePattern* obj, gint _value);
GI_INLINE_DECL void relevance_ (gint _value) noexcept;

}; // class

} // namespace base

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufmodulepattern_extra_def.hpp>)
#include <gdkpixbuf/pixbufmodulepattern_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufmodulepattern_extra.hpp>)
#include <gdkpixbuf/pixbufmodulepattern_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GdkPixbuf {

class PixbufModulePattern : public GI_GDKPIXBUF_PIXBUFMODULEPATTERN_BASE
{ typedef GI_GDKPIXBUF_PIXBUFMODULEPATTERN_BASE super_type; using super_type::super_type; };

} // namespace GdkPixbuf

template<> struct declare_cpptype_of<::GdkPixbufModulePattern>
{ typedef GdkPixbuf::PixbufModulePattern type; }; 

} // namespace repository

} // namespace gi

#endif
