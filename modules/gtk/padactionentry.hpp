// AUTO-GENERATED

#ifndef _GI_GTK_PADACTIONENTRY_HPP_
#define _GI_GTK_PADACTIONENTRY_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class PadActionEntry;

namespace base {


#define GI_GTK_PADACTIONENTRY_BASE base::PadActionEntryBase
class PadActionEntryBase : public gi::detail::CBoxedWrapper<PadActionEntryBase, ::GtkPadActionEntry>
{
typedef gi::detail::CBoxedWrapper<PadActionEntryBase, ::GtkPadActionEntry> super_type;
public:

PadActionEntryBase (std::nullptr_t = nullptr) : super_type() {}

// ::GtkPadActionType PadActionEntry::type (const ::GtkPadActionEntry* obj);
// ::GtkPadActionType PadActionEntry::type (const ::GtkPadActionEntry* obj);
GI_INLINE_DECL Gtk::PadActionType type_ () const noexcept;

//  PadActionEntry::type (::GtkPadActionEntry* obj, ::GtkPadActionType _value);
// void PadActionEntry::type (::GtkPadActionEntry* obj, ::GtkPadActionType _value);
GI_INLINE_DECL void type_ (Gtk::PadActionType _value) noexcept;

// gint PadActionEntry::index (const ::GtkPadActionEntry* obj);
// gint PadActionEntry::index (const ::GtkPadActionEntry* obj);
GI_INLINE_DECL gint index_ () const noexcept;

//  PadActionEntry::index (::GtkPadActionEntry* obj, gint _value);
// void PadActionEntry::index (::GtkPadActionEntry* obj, gint _value);
GI_INLINE_DECL void index_ (gint _value) noexcept;

// gint PadActionEntry::mode (const ::GtkPadActionEntry* obj);
// gint PadActionEntry::mode (const ::GtkPadActionEntry* obj);
GI_INLINE_DECL gint mode_ () const noexcept;

//  PadActionEntry::mode (::GtkPadActionEntry* obj, gint _value);
// void PadActionEntry::mode (::GtkPadActionEntry* obj, gint _value);
GI_INLINE_DECL void mode_ (gint _value) noexcept;

// char* PadActionEntry::label (const ::GtkPadActionEntry* obj);
// char* PadActionEntry::label (const ::GtkPadActionEntry* obj);
GI_INLINE_DECL std::string label_ () const noexcept;

// char* PadActionEntry::action_name (const ::GtkPadActionEntry* obj);
// char* PadActionEntry::action_name (const ::GtkPadActionEntry* obj);
GI_INLINE_DECL std::string action_name_ () const noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/padactionentry_extra_def.hpp>)
#include <gtk/padactionentry_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/padactionentry_extra.hpp>)
#include <gtk/padactionentry_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PadActionEntry : public GI_GTK_PADACTIONENTRY_BASE
{ typedef GI_GTK_PADACTIONENTRY_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPadActionEntry>
{ typedef Gtk::PadActionEntry type; }; 

} // namespace repository

} // namespace gi

#endif
