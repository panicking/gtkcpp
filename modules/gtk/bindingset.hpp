// AUTO-GENERATED

#ifndef _GI_GTK_BINDINGSET_HPP_
#define _GI_GTK_BINDINGSET_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class BindingEntry;

class BindingSet;

namespace base {


#define GI_GTK_BINDINGSET_BASE base::BindingSetBase
class BindingSetBase : public gi::detail::CBoxedWrapper<BindingSetBase, ::GtkBindingSet>
{
typedef gi::detail::CBoxedWrapper<BindingSetBase, ::GtkBindingSet> super_type;
public:

BindingSetBase (std::nullptr_t = nullptr) : super_type() {}

// char* BindingSet::set_name (const ::GtkBindingSet* obj);
// char* BindingSet::set_name (const ::GtkBindingSet* obj);
GI_INLINE_DECL std::string set_name_ () const noexcept;

// gint BindingSet::priority (const ::GtkBindingSet* obj);
// gint BindingSet::priority (const ::GtkBindingSet* obj);
GI_INLINE_DECL gint priority_ () const noexcept;

//  BindingSet::priority (::GtkBindingSet* obj, gint _value);
// void BindingSet::priority (::GtkBindingSet* obj, gint _value);
GI_INLINE_DECL void priority_ (gint _value) noexcept;

// ::GtkBindingEntry* BindingSet::entries (const ::GtkBindingSet* obj);
// ::GtkBindingEntry* BindingSet::entries (const ::GtkBindingSet* obj);
GI_INLINE_DECL Gtk::BindingEntry entries_ () const noexcept;

// ::GtkBindingEntry* BindingSet::current (const ::GtkBindingSet* obj);
// ::GtkBindingEntry* BindingSet::current (const ::GtkBindingSet* obj);
GI_INLINE_DECL Gtk::BindingEntry current_ () const noexcept;

// guint BindingSet::parsed (const ::GtkBindingSet* obj);
// guint BindingSet::parsed (const ::GtkBindingSet* obj);
GI_INLINE_DECL guint parsed_ () const noexcept;

//  BindingSet::parsed (::GtkBindingSet* obj, guint _value);
// void BindingSet::parsed (::GtkBindingSet* obj, guint _value);
GI_INLINE_DECL void parsed_ (guint _value) noexcept;

// gboolean gtk_binding_set_activate (GtkBindingSet* binding_set, guint keyval, GdkModifierType modifiers, GObject* object);
// gboolean gtk_binding_set_activate (::GtkBindingSet* binding_set, guint keyval, ::GdkModifierType modifiers, ::GObject* object);
GI_INLINE_DECL bool activate (guint keyval, Gdk::ModifierType modifiers, GObject::Object object) noexcept;

// void gtk_binding_set_add_path (GtkBindingSet* binding_set, GtkPathType path_type, const gchar* path_pattern, GtkPathPriorityType priority);
// void gtk_binding_set_add_path (::GtkBindingSet* binding_set,  path_type, const char* path_pattern,  priority);
// IGNORE; deprecated

// GtkBindingSet* gtk_binding_set_by_class (gpointer object_class);
// ::GtkBindingSet* gtk_binding_set_by_class (void* object_class);
static GI_INLINE_DECL Gtk::BindingSet by_class (void* object_class) noexcept;

// GtkBindingSet* gtk_binding_set_find (const gchar* set_name);
// ::GtkBindingSet* gtk_binding_set_find (const char* set_name);
static GI_INLINE_DECL Gtk::BindingSet find (const std::string & set_name) noexcept;

// GtkBindingSet* gtk_binding_set_new (const gchar* set_name);
// ::GtkBindingSet* gtk_binding_set_new (const char* set_name);
static GI_INLINE_DECL Gtk::BindingSet new_ (const std::string & set_name) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/bindingset_extra_def.hpp>)
#include <gtk/bindingset_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/bindingset_extra.hpp>)
#include <gtk/bindingset_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class BindingSet : public GI_GTK_BINDINGSET_BASE
{ typedef GI_GTK_BINDINGSET_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkBindingSet>
{ typedef Gtk::BindingSet type; }; 

} // namespace repository

} // namespace gi

#endif
