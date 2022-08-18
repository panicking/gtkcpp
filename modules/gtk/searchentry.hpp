// AUTO-GENERATED

#ifndef _GI_GTK_SEARCHENTRY_HPP_
#define _GI_GTK_SEARCHENTRY_HPP_

#include "entry.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class SearchEntry;

namespace base {


#define GI_GTK_SEARCHENTRY_BASE base::SearchEntryBase
class SearchEntryBase : public Gtk::Entry
{
typedef Gtk::Entry super_type;
public:
typedef ::GtkSearchEntry BaseObjectType;

SearchEntryBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_search_entry_get_type(); } 

// GtkWidget* gtk_search_entry_new ();
// ::GtkSearchEntry* gtk_search_entry_new ();
static GI_INLINE_DECL Gtk::SearchEntry new_ () noexcept;

// gboolean gtk_search_entry_handle_event (GtkSearchEntry* entry, GdkEvent* event);
// gboolean gtk_search_entry_handle_event (::GtkSearchEntry* entry,  event);
// SKIP; event type  not supported

// signal next-match
gi::signal_proxy<void(Gtk::SearchEntry)> signal_next_match()
{ return gi::signal_proxy<void(Gtk::SearchEntry)> (*this, "next-match"); }

// signal previous-match
gi::signal_proxy<void(Gtk::SearchEntry)> signal_previous_match()
{ return gi::signal_proxy<void(Gtk::SearchEntry)> (*this, "previous-match"); }

// signal search-changed
gi::signal_proxy<void(Gtk::SearchEntry)> signal_search_changed()
{ return gi::signal_proxy<void(Gtk::SearchEntry)> (*this, "search-changed"); }

// signal stop-search
gi::signal_proxy<void(Gtk::SearchEntry)> signal_stop_search()
{ return gi::signal_proxy<void(Gtk::SearchEntry)> (*this, "stop-search"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/searchentry_extra_def.hpp>)
#include <gtk/searchentry_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/searchentry_extra.hpp>)
#include <gtk/searchentry_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SearchEntry : public GI_GTK_SEARCHENTRY_BASE
{ typedef GI_GTK_SEARCHENTRY_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSearchEntry>
{ typedef Gtk::SearchEntry type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class SearchEntryClassDef
{
typedef SearchEntryClassDef self;
public:
typedef Gtk::SearchEntry instance_type;
typedef ::GtkSearchEntryClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void SearchEntry::next_match (GtkSearchEntry* entry);
// void SearchEntry::next_match (::GtkSearchEntry* entry);
virtual void next_match_ () noexcept = 0;

// void SearchEntry::previous_match (GtkSearchEntry* entry);
// void SearchEntry::previous_match (::GtkSearchEntry* entry);
virtual void previous_match_ () noexcept = 0;

// void SearchEntry::search_changed (GtkSearchEntry* entry);
// void SearchEntry::search_changed (::GtkSearchEntry* entry);
virtual void search_changed_ () noexcept = 0;

// void SearchEntry::stop_search (GtkSearchEntry* entry);
// void SearchEntry::stop_search (::GtkSearchEntry* entry);
virtual void stop_search_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class SearchEntryClass: public detail::ClassTemplate<Gtk::impl::internal::SearchEntryClassDef, Gtk::impl::internal::EntryClass>
{
typedef SearchEntryClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::SearchEntryClassDef, Gtk::impl::internal::EntryClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void SearchEntry::next_match (GtkSearchEntry* entry);
// void SearchEntry::next_match (::GtkSearchEntry* entry);
GI_INLINE_DECL void next_match_ () noexcept override;

// void SearchEntry::previous_match (GtkSearchEntry* entry);
// void SearchEntry::previous_match (::GtkSearchEntry* entry);
GI_INLINE_DECL void previous_match_ () noexcept override;

// void SearchEntry::search_changed (GtkSearchEntry* entry);
// void SearchEntry::search_changed (::GtkSearchEntry* entry);
GI_INLINE_DECL void search_changed_ () noexcept override;

// void SearchEntry::stop_search (GtkSearchEntry* entry);
// void SearchEntry::stop_search (::GtkSearchEntry* entry);
GI_INLINE_DECL void stop_search_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using SearchEntryImpl = detail::ObjectImpl<SearchEntry, internal::SearchEntryClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
