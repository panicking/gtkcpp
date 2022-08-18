// AUTO-GENERATED

#ifndef _GI_GTK_BINDINGENTRY_HPP_
#define _GI_GTK_BINDINGENTRY_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class BindingArg;
class BindingSet;
class BindingSignal;

class BindingEntry;

namespace base {


#define GI_GTK_BINDINGENTRY_BASE base::BindingEntryBase
class BindingEntryBase : public gi::detail::CBoxedWrapper<BindingEntryBase, ::GtkBindingEntry>
{
typedef gi::detail::CBoxedWrapper<BindingEntryBase, ::GtkBindingEntry> super_type;
public:

BindingEntryBase (std::nullptr_t = nullptr) : super_type() {}

// guint BindingEntry::keyval (const ::GtkBindingEntry* obj);
// guint BindingEntry::keyval (const ::GtkBindingEntry* obj);
GI_INLINE_DECL guint keyval_ () const noexcept;

//  BindingEntry::keyval (::GtkBindingEntry* obj, guint _value);
// void BindingEntry::keyval (::GtkBindingEntry* obj, guint _value);
GI_INLINE_DECL void keyval_ (guint _value) noexcept;

// ::GdkModifierType BindingEntry::modifiers (const ::GtkBindingEntry* obj);
// ::GdkModifierType BindingEntry::modifiers (const ::GtkBindingEntry* obj);
GI_INLINE_DECL Gdk::ModifierType modifiers_ () const noexcept;

//  BindingEntry::modifiers (::GtkBindingEntry* obj, ::GdkModifierType _value);
// void BindingEntry::modifiers (::GtkBindingEntry* obj, ::GdkModifierType _value);
GI_INLINE_DECL void modifiers_ (Gdk::ModifierType _value) noexcept;

// ::GtkBindingSet* BindingEntry::binding_set (const ::GtkBindingEntry* obj);
// ::GtkBindingSet* BindingEntry::binding_set (const ::GtkBindingEntry* obj);
GI_INLINE_DECL Gtk::BindingSet binding_set_ () const noexcept;

// guint BindingEntry::destroyed (const ::GtkBindingEntry* obj);
// guint BindingEntry::destroyed (const ::GtkBindingEntry* obj);
GI_INLINE_DECL guint destroyed_ () const noexcept;

//  BindingEntry::destroyed (::GtkBindingEntry* obj, guint _value);
// void BindingEntry::destroyed (::GtkBindingEntry* obj, guint _value);
GI_INLINE_DECL void destroyed_ (guint _value) noexcept;

// guint BindingEntry::in_emission (const ::GtkBindingEntry* obj);
// guint BindingEntry::in_emission (const ::GtkBindingEntry* obj);
GI_INLINE_DECL guint in_emission_ () const noexcept;

//  BindingEntry::in_emission (::GtkBindingEntry* obj, guint _value);
// void BindingEntry::in_emission (::GtkBindingEntry* obj, guint _value);
GI_INLINE_DECL void in_emission_ (guint _value) noexcept;

// guint BindingEntry::marks_unbound (const ::GtkBindingEntry* obj);
// guint BindingEntry::marks_unbound (const ::GtkBindingEntry* obj);
GI_INLINE_DECL guint marks_unbound_ () const noexcept;

//  BindingEntry::marks_unbound (::GtkBindingEntry* obj, guint _value);
// void BindingEntry::marks_unbound (::GtkBindingEntry* obj, guint _value);
GI_INLINE_DECL void marks_unbound_ (guint _value) noexcept;

// ::GtkBindingEntry* BindingEntry::set_next (const ::GtkBindingEntry* obj);
// ::GtkBindingEntry* BindingEntry::set_next (const ::GtkBindingEntry* obj);
GI_INLINE_DECL Gtk::BindingEntry set_next_ () const noexcept;

// ::GtkBindingEntry* BindingEntry::hash_next (const ::GtkBindingEntry* obj);
// ::GtkBindingEntry* BindingEntry::hash_next (const ::GtkBindingEntry* obj);
GI_INLINE_DECL Gtk::BindingEntry hash_next_ () const noexcept;

// ::GtkBindingSignal* BindingEntry::signals (const ::GtkBindingEntry* obj);
// ::GtkBindingSignal* BindingEntry::signals (const ::GtkBindingEntry* obj);
GI_INLINE_DECL Gtk::BindingSignal signals_ () const noexcept;

// void gtk_binding_entry_add_signal (GtkBindingSet* binding_set, guint keyval, GdkModifierType modifiers, const gchar* signal_name, guint n_args);
// void gtk_binding_entry_add_signal (::GtkBindingSet* binding_set, guint keyval, ::GdkModifierType modifiers, const char* signal_name, guint n_args);
// IGNORE; not introspectable, varargs not supported

// GTokenType gtk_binding_entry_add_signal_from_string (GtkBindingSet* binding_set, const gchar* signal_desc);
// ::GTokenType gtk_binding_entry_add_signal_from_string (::GtkBindingSet* binding_set, const char* signal_desc);
static GI_INLINE_DECL GLib::TokenType add_signal_from_string (Gtk::BindingSet binding_set, const std::string & signal_desc) noexcept;

// void gtk_binding_entry_add_signall (GtkBindingSet* binding_set, guint keyval, GdkModifierType modifiers, const gchar* signal_name, GSList* binding_args);
// void gtk_binding_entry_add_signall (::GtkBindingSet* binding_set, guint keyval, ::GdkModifierType modifiers, const char* signal_name, ::GSList* binding_args);
static GI_INLINE_DECL void add_signall (Gtk::BindingSet binding_set, guint keyval, Gdk::ModifierType modifiers, const std::string & signal_name, const std::vector<Gtk::BindingArg> & binding_args) noexcept;

// void gtk_binding_entry_remove (GtkBindingSet* binding_set, guint keyval, GdkModifierType modifiers);
// void gtk_binding_entry_remove (::GtkBindingSet* binding_set, guint keyval, ::GdkModifierType modifiers);
static GI_INLINE_DECL void remove (Gtk::BindingSet binding_set, guint keyval, Gdk::ModifierType modifiers) noexcept;

// void gtk_binding_entry_skip (GtkBindingSet* binding_set, guint keyval, GdkModifierType modifiers);
// void gtk_binding_entry_skip (::GtkBindingSet* binding_set, guint keyval, ::GdkModifierType modifiers);
static GI_INLINE_DECL void skip (Gtk::BindingSet binding_set, guint keyval, Gdk::ModifierType modifiers) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/bindingentry_extra_def.hpp>)
#include <gtk/bindingentry_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/bindingentry_extra.hpp>)
#include <gtk/bindingentry_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class BindingEntry : public GI_GTK_BINDINGENTRY_BASE
{ typedef GI_GTK_BINDINGENTRY_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkBindingEntry>
{ typedef Gtk::BindingEntry type; }; 

} // namespace repository

} // namespace gi

#endif
