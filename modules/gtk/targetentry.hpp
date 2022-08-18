// AUTO-GENERATED

#ifndef _GI_GTK_TARGETENTRY_HPP_
#define _GI_GTK_TARGETENTRY_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class TargetEntry;

namespace base {


#define GI_GTK_TARGETENTRY_BASE base::TargetEntryBase
class TargetEntryBase : public gi::detail::GBoxedWrapper<TargetEntryBase, ::GtkTargetEntry>
{
typedef gi::detail::GBoxedWrapper<TargetEntryBase, ::GtkTargetEntry> super_type;
public:

TargetEntryBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_target_entry_get_type(); } 

// char* TargetEntry::target (const ::GtkTargetEntry* obj);
// char* TargetEntry::target (const ::GtkTargetEntry* obj);
GI_INLINE_DECL std::string target_ () const noexcept;

// guint TargetEntry::flags (const ::GtkTargetEntry* obj);
// guint TargetEntry::flags (const ::GtkTargetEntry* obj);
GI_INLINE_DECL guint flags_ () const noexcept;

//  TargetEntry::flags (::GtkTargetEntry* obj, guint _value);
// void TargetEntry::flags (::GtkTargetEntry* obj, guint _value);
GI_INLINE_DECL void flags_ (guint _value) noexcept;

// guint TargetEntry::info (const ::GtkTargetEntry* obj);
// guint TargetEntry::info (const ::GtkTargetEntry* obj);
GI_INLINE_DECL guint info_ () const noexcept;

//  TargetEntry::info (::GtkTargetEntry* obj, guint _value);
// void TargetEntry::info (::GtkTargetEntry* obj, guint _value);
GI_INLINE_DECL void info_ (guint _value) noexcept;

// GtkTargetEntry* gtk_target_entry_new (const gchar* target, guint flags, guint info);
// ::GtkTargetEntry* gtk_target_entry_new (const char* target, guint flags, guint info);
static GI_INLINE_DECL Gtk::TargetEntry new_ (const std::string & target, guint flags, guint info) noexcept;

// GtkTargetEntry* gtk_target_entry_copy (GtkTargetEntry* data);
// ::GtkTargetEntry* gtk_target_entry_copy (::GtkTargetEntry* data);
GI_INLINE_DECL Gtk::TargetEntry copy () noexcept;

// void gtk_target_entry_free (GtkTargetEntry* data);
// void gtk_target_entry_free (::GtkTargetEntry* data);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/targetentry_extra_def.hpp>)
#include <gtk/targetentry_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/targetentry_extra.hpp>)
#include <gtk/targetentry_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TargetEntry : public GI_GTK_TARGETENTRY_BASE
{ typedef GI_GTK_TARGETENTRY_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTargetEntry>
{ typedef Gtk::TargetEntry type; }; 

} // namespace repository

} // namespace gi

#endif
