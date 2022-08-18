// AUTO-GENERATED

#ifndef _GI_GTK_RECENTDATA_HPP_
#define _GI_GTK_RECENTDATA_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class RecentData;

namespace base {


#define GI_GTK_RECENTDATA_BASE base::RecentDataBase
class RecentDataBase : public gi::detail::CBoxedWrapper<RecentDataBase, ::GtkRecentData>
{
typedef gi::detail::CBoxedWrapper<RecentDataBase, ::GtkRecentData> super_type;
public:

RecentDataBase (std::nullptr_t = nullptr) : super_type() {}

// char* RecentData::display_name (const ::GtkRecentData* obj);
// char* RecentData::display_name (const ::GtkRecentData* obj);
GI_INLINE_DECL std::string display_name_ () const noexcept;

// char* RecentData::description (const ::GtkRecentData* obj);
// char* RecentData::description (const ::GtkRecentData* obj);
GI_INLINE_DECL std::string description_ () const noexcept;

// char* RecentData::mime_type (const ::GtkRecentData* obj);
// char* RecentData::mime_type (const ::GtkRecentData* obj);
GI_INLINE_DECL std::string mime_type_ () const noexcept;

// char* RecentData::app_name (const ::GtkRecentData* obj);
// char* RecentData::app_name (const ::GtkRecentData* obj);
GI_INLINE_DECL std::string app_name_ () const noexcept;

// char* RecentData::app_exec (const ::GtkRecentData* obj);
// char* RecentData::app_exec (const ::GtkRecentData* obj);
GI_INLINE_DECL std::string app_exec_ () const noexcept;

// gboolean RecentData::is_private (const ::GtkRecentData* obj);
// gboolean RecentData::is_private (const ::GtkRecentData* obj);
GI_INLINE_DECL bool is_private_ () const noexcept;

//  RecentData::is_private (::GtkRecentData* obj, gboolean _value);
// void RecentData::is_private (::GtkRecentData* obj, gboolean _value);
GI_INLINE_DECL void is_private_ (gboolean _value) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/recentdata_extra_def.hpp>)
#include <gtk/recentdata_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/recentdata_extra.hpp>)
#include <gtk/recentdata_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class RecentData : public GI_GTK_RECENTDATA_BASE
{ typedef GI_GTK_RECENTDATA_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRecentData>
{ typedef Gtk::RecentData type; }; 

} // namespace repository

} // namespace gi

#endif
