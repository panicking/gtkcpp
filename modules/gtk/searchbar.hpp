// AUTO-GENERATED

#ifndef _GI_GTK_SEARCHBAR_HPP_
#define _GI_GTK_SEARCHBAR_HPP_

#include "bin.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Entry;

class SearchBar;

namespace base {


#define GI_GTK_SEARCHBAR_BASE base::SearchBarBase
class SearchBarBase : public Gtk::Bin
{
typedef Gtk::Bin super_type;
public:
typedef ::GtkSearchBar BaseObjectType;

SearchBarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_search_bar_get_type(); } 

// GtkWidget* gtk_search_bar_new ();
// ::GtkSearchBar* gtk_search_bar_new ();
static GI_INLINE_DECL Gtk::SearchBar new_ () noexcept;

// void gtk_search_bar_connect_entry (GtkSearchBar* bar, GtkEntry* entry);
// void gtk_search_bar_connect_entry (::GtkSearchBar* bar, ::GtkEntry* entry);
GI_INLINE_DECL void connect_entry (Gtk::Entry entry) noexcept;

// gboolean gtk_search_bar_get_search_mode (GtkSearchBar* bar);
// gboolean gtk_search_bar_get_search_mode (::GtkSearchBar* bar);
GI_INLINE_DECL bool get_search_mode () noexcept;

// gboolean gtk_search_bar_get_show_close_button (GtkSearchBar* bar);
// gboolean gtk_search_bar_get_show_close_button (::GtkSearchBar* bar);
GI_INLINE_DECL bool get_show_close_button () noexcept;

// gboolean gtk_search_bar_handle_event (GtkSearchBar* bar, GdkEvent* event);
// gboolean gtk_search_bar_handle_event (::GtkSearchBar* bar,  event);
// SKIP; event type  not supported

// void gtk_search_bar_set_search_mode (GtkSearchBar* bar, gboolean search_mode);
// void gtk_search_bar_set_search_mode (::GtkSearchBar* bar, gboolean search_mode);
GI_INLINE_DECL void set_search_mode (gboolean search_mode) noexcept;

// void gtk_search_bar_set_show_close_button (GtkSearchBar* bar, gboolean visible);
// void gtk_search_bar_set_show_close_button (::GtkSearchBar* bar, gboolean visible);
GI_INLINE_DECL void set_show_close_button (gboolean visible) noexcept;

gi::property_proxy<bool, base::SearchBarBase> property_search_mode_enabled()
{ return gi::property_proxy<bool, base::SearchBarBase> (*this, "search-mode-enabled"); }
const gi::property_proxy<bool, base::SearchBarBase> property_search_mode_enabled() const
{ return gi::property_proxy<bool, base::SearchBarBase> (*this, "search-mode-enabled"); }

gi::property_proxy<bool, base::SearchBarBase> property_show_close_button()
{ return gi::property_proxy<bool, base::SearchBarBase> (*this, "show-close-button"); }
const gi::property_proxy<bool, base::SearchBarBase> property_show_close_button() const
{ return gi::property_proxy<bool, base::SearchBarBase> (*this, "show-close-button"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/searchbar_extra_def.hpp>)
#include <gtk/searchbar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/searchbar_extra.hpp>)
#include <gtk/searchbar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SearchBar : public GI_GTK_SEARCHBAR_BASE
{ typedef GI_GTK_SEARCHBAR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSearchBar>
{ typedef Gtk::SearchBar type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class SearchBarClassDef
{
typedef SearchBarClassDef self;
public:
typedef Gtk::SearchBar instance_type;
typedef ::GtkSearchBarClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SearchBarClass: public detail::ClassTemplate<Gtk::impl::internal::SearchBarClassDef, Gtk::impl::internal::BinClass>
{
typedef SearchBarClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::SearchBarClassDef, Gtk::impl::internal::BinClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using SearchBarImpl = detail::ObjectImpl<SearchBar, internal::SearchBarClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
