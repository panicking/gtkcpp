// AUTO-GENERATED

#ifndef _GI_GTK_ACCELKEY_HPP_
#define _GI_GTK_ACCELKEY_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class AccelKey;

namespace base {


#define GI_GTK_ACCELKEY_BASE base::AccelKeyBase
class AccelKeyBase : public gi::detail::CBoxedWrapper<AccelKeyBase, ::GtkAccelKey>
{
typedef gi::detail::CBoxedWrapper<AccelKeyBase, ::GtkAccelKey> super_type;
public:

AccelKeyBase (std::nullptr_t = nullptr) : super_type() {}

// guint AccelKey::accel_key (const ::GtkAccelKey* obj);
// guint AccelKey::accel_key (const ::GtkAccelKey* obj);
GI_INLINE_DECL guint accel_key_ () const noexcept;

//  AccelKey::accel_key (::GtkAccelKey* obj, guint _value);
// void AccelKey::accel_key (::GtkAccelKey* obj, guint _value);
GI_INLINE_DECL void accel_key_ (guint _value) noexcept;

// ::GdkModifierType AccelKey::accel_mods (const ::GtkAccelKey* obj);
// ::GdkModifierType AccelKey::accel_mods (const ::GtkAccelKey* obj);
GI_INLINE_DECL Gdk::ModifierType accel_mods_ () const noexcept;

//  AccelKey::accel_mods (::GtkAccelKey* obj, ::GdkModifierType _value);
// void AccelKey::accel_mods (::GtkAccelKey* obj, ::GdkModifierType _value);
GI_INLINE_DECL void accel_mods_ (Gdk::ModifierType _value) noexcept;

// guint AccelKey::accel_flags (const ::GtkAccelKey* obj);
// guint AccelKey::accel_flags (const ::GtkAccelKey* obj);
GI_INLINE_DECL guint accel_flags_ () const noexcept;

//  AccelKey::accel_flags (::GtkAccelKey* obj, guint _value);
// void AccelKey::accel_flags (::GtkAccelKey* obj, guint _value);
GI_INLINE_DECL void accel_flags_ (guint _value) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accelkey_extra_def.hpp>)
#include <gtk/accelkey_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accelkey_extra.hpp>)
#include <gtk/accelkey_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AccelKey : public GI_GTK_ACCELKEY_BASE
{ typedef GI_GTK_ACCELKEY_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAccelKey>
{ typedef Gtk::AccelKey type; }; 

} // namespace repository

} // namespace gi

#endif
