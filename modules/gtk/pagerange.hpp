// AUTO-GENERATED

#ifndef _GI_GTK_PAGERANGE_HPP_
#define _GI_GTK_PAGERANGE_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class PageRange;

namespace base {


#define GI_GTK_PAGERANGE_BASE base::PageRangeBase
class PageRangeBase : public gi::detail::CBoxedWrapper<PageRangeBase, ::GtkPageRange>
{
typedef gi::detail::CBoxedWrapper<PageRangeBase, ::GtkPageRange> super_type;
public:

PageRangeBase (std::nullptr_t = nullptr) : super_type() {}

// gint PageRange::start (const ::GtkPageRange* obj);
// gint PageRange::start (const ::GtkPageRange* obj);
GI_INLINE_DECL gint start_ () const noexcept;

//  PageRange::start (::GtkPageRange* obj, gint _value);
// void PageRange::start (::GtkPageRange* obj, gint _value);
GI_INLINE_DECL void start_ (gint _value) noexcept;

// gint PageRange::end (const ::GtkPageRange* obj);
// gint PageRange::end (const ::GtkPageRange* obj);
GI_INLINE_DECL gint end_ () const noexcept;

//  PageRange::end (::GtkPageRange* obj, gint _value);
// void PageRange::end (::GtkPageRange* obj, gint _value);
GI_INLINE_DECL void end_ (gint _value) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/pagerange_extra_def.hpp>)
#include <gtk/pagerange_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/pagerange_extra.hpp>)
#include <gtk/pagerange_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PageRange : public GI_GTK_PAGERANGE_BASE
{ typedef GI_GTK_PAGERANGE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPageRange>
{ typedef Gtk::PageRange type; }; 

} // namespace repository

} // namespace gi

#endif
