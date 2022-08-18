// AUTO-GENERATED

#ifndef _GI_GTK_IMCONTEXTINFO_HPP_
#define _GI_GTK_IMCONTEXTINFO_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class IMContextInfo;

namespace base {


#define GI_GTK_IMCONTEXTINFO_BASE base::IMContextInfoBase
class IMContextInfoBase : public gi::detail::CBoxedWrapper<IMContextInfoBase, ::GtkIMContextInfo>
{
typedef gi::detail::CBoxedWrapper<IMContextInfoBase, ::GtkIMContextInfo> super_type;
public:

IMContextInfoBase (std::nullptr_t = nullptr) : super_type() {}

// const char* IMContextInfo::context_id (const ::GtkIMContextInfo* obj);
// const char* IMContextInfo::context_id (const ::GtkIMContextInfo* obj);
GI_INLINE_DECL std::string context_id_ () const noexcept;

// const char* IMContextInfo::context_name (const ::GtkIMContextInfo* obj);
// const char* IMContextInfo::context_name (const ::GtkIMContextInfo* obj);
GI_INLINE_DECL std::string context_name_ () const noexcept;

// const char* IMContextInfo::domain (const ::GtkIMContextInfo* obj);
// const char* IMContextInfo::domain (const ::GtkIMContextInfo* obj);
GI_INLINE_DECL std::string domain_ () const noexcept;

// const char* IMContextInfo::domain_dirname (const ::GtkIMContextInfo* obj);
// const char* IMContextInfo::domain_dirname (const ::GtkIMContextInfo* obj);
GI_INLINE_DECL std::string domain_dirname_ () const noexcept;

// const char* IMContextInfo::default_locales (const ::GtkIMContextInfo* obj);
// const char* IMContextInfo::default_locales (const ::GtkIMContextInfo* obj);
GI_INLINE_DECL std::string default_locales_ () const noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/imcontextinfo_extra_def.hpp>)
#include <gtk/imcontextinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/imcontextinfo_extra.hpp>)
#include <gtk/imcontextinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class IMContextInfo : public GI_GTK_IMCONTEXTINFO_BASE
{ typedef GI_GTK_IMCONTEXTINFO_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkIMContextInfo>
{ typedef Gtk::IMContextInfo type; }; 

} // namespace repository

} // namespace gi

#endif
