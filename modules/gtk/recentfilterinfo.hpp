// AUTO-GENERATED

#ifndef _GI_GTK_RECENTFILTERINFO_HPP_
#define _GI_GTK_RECENTFILTERINFO_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class RecentFilterInfo;

namespace base {


#define GI_GTK_RECENTFILTERINFO_BASE base::RecentFilterInfoBase
class RecentFilterInfoBase : public gi::detail::CBoxedWrapper<RecentFilterInfoBase, ::GtkRecentFilterInfo>
{
typedef gi::detail::CBoxedWrapper<RecentFilterInfoBase, ::GtkRecentFilterInfo> super_type;
public:

RecentFilterInfoBase (std::nullptr_t = nullptr) : super_type() {}

// ::GtkRecentFilterFlags RecentFilterInfo::contains (const ::GtkRecentFilterInfo* obj);
// ::GtkRecentFilterFlags RecentFilterInfo::contains (const ::GtkRecentFilterInfo* obj);
GI_INLINE_DECL Gtk::RecentFilterFlags contains_ () const noexcept;

//  RecentFilterInfo::contains (::GtkRecentFilterInfo* obj, ::GtkRecentFilterFlags _value);
// void RecentFilterInfo::contains (::GtkRecentFilterInfo* obj, ::GtkRecentFilterFlags _value);
GI_INLINE_DECL void contains_ (Gtk::RecentFilterFlags _value) noexcept;

// const char* RecentFilterInfo::uri (const ::GtkRecentFilterInfo* obj);
// const char* RecentFilterInfo::uri (const ::GtkRecentFilterInfo* obj);
GI_INLINE_DECL std::string uri_ () const noexcept;

// const char* RecentFilterInfo::display_name (const ::GtkRecentFilterInfo* obj);
// const char* RecentFilterInfo::display_name (const ::GtkRecentFilterInfo* obj);
GI_INLINE_DECL std::string display_name_ () const noexcept;

// const char* RecentFilterInfo::mime_type (const ::GtkRecentFilterInfo* obj);
// const char* RecentFilterInfo::mime_type (const ::GtkRecentFilterInfo* obj);
GI_INLINE_DECL std::string mime_type_ () const noexcept;

// gint RecentFilterInfo::age (const ::GtkRecentFilterInfo* obj);
// gint RecentFilterInfo::age (const ::GtkRecentFilterInfo* obj);
GI_INLINE_DECL gint age_ () const noexcept;

//  RecentFilterInfo::age (::GtkRecentFilterInfo* obj, gint _value);
// void RecentFilterInfo::age (::GtkRecentFilterInfo* obj, gint _value);
GI_INLINE_DECL void age_ (gint _value) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/recentfilterinfo_extra_def.hpp>)
#include <gtk/recentfilterinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/recentfilterinfo_extra.hpp>)
#include <gtk/recentfilterinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class RecentFilterInfo : public GI_GTK_RECENTFILTERINFO_BASE
{ typedef GI_GTK_RECENTFILTERINFO_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRecentFilterInfo>
{ typedef Gtk::RecentFilterInfo type; }; 

} // namespace repository

} // namespace gi

#endif
