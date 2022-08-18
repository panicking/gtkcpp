// AUTO-GENERATED

#ifndef _GI_GTK_ACCELGROUPENTRY_HPP_
#define _GI_GTK_ACCELGROUPENTRY_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class AccelGroupEntry;

namespace base {


#define GI_GTK_ACCELGROUPENTRY_BASE base::AccelGroupEntryBase
class AccelGroupEntryBase : public gi::detail::CBoxedWrapper<AccelGroupEntryBase, ::GtkAccelGroupEntry>
{
typedef gi::detail::CBoxedWrapper<AccelGroupEntryBase, ::GtkAccelGroupEntry> super_type;
public:

AccelGroupEntryBase (std::nullptr_t = nullptr) : super_type() {}

// ::GClosure* AccelGroupEntry::closure (const ::GtkAccelGroupEntry* obj);
// ::GClosure* AccelGroupEntry::closure (const ::GtkAccelGroupEntry* obj);
GI_INLINE_DECL GObject::Closure closure_ () const noexcept;

// ::GQuark AccelGroupEntry::accel_path_quark (const ::GtkAccelGroupEntry* obj);
// ::GQuark AccelGroupEntry::accel_path_quark (const ::GtkAccelGroupEntry* obj);
GI_INLINE_DECL GLib::Quark accel_path_quark_ () const noexcept;

//  AccelGroupEntry::accel_path_quark (::GtkAccelGroupEntry* obj, ::GQuark _value);
// void AccelGroupEntry::accel_path_quark (::GtkAccelGroupEntry* obj, ::GQuark _value);
GI_INLINE_DECL void accel_path_quark_ (::GQuark _value) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accelgroupentry_extra_def.hpp>)
#include <gtk/accelgroupentry_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accelgroupentry_extra.hpp>)
#include <gtk/accelgroupentry_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AccelGroupEntry : public GI_GTK_ACCELGROUPENTRY_BASE
{ typedef GI_GTK_ACCELGROUPENTRY_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAccelGroupEntry>
{ typedef Gtk::AccelGroupEntry type; }; 

} // namespace repository

} // namespace gi

#endif
