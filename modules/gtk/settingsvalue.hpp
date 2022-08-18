// AUTO-GENERATED

#ifndef _GI_GTK_SETTINGSVALUE_HPP_
#define _GI_GTK_SETTINGSVALUE_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class SettingsValue;

namespace base {


#define GI_GTK_SETTINGSVALUE_BASE base::SettingsValueBase
class SettingsValueBase : public gi::detail::CBoxedWrapper<SettingsValueBase, ::GtkSettingsValue>
{
typedef gi::detail::CBoxedWrapper<SettingsValueBase, ::GtkSettingsValue> super_type;
public:

SettingsValueBase (std::nullptr_t = nullptr) : super_type() {}

// char* SettingsValue::origin (const ::GtkSettingsValue* obj);
// char* SettingsValue::origin (const ::GtkSettingsValue* obj);
GI_INLINE_DECL std::string origin_ () const noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/settingsvalue_extra_def.hpp>)
#include <gtk/settingsvalue_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/settingsvalue_extra.hpp>)
#include <gtk/settingsvalue_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SettingsValue : public GI_GTK_SETTINGSVALUE_BASE
{ typedef GI_GTK_SETTINGSVALUE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSettingsValue>
{ typedef Gtk::SettingsValue type; }; 

} // namespace repository

} // namespace gi

#endif
