// AUTO-GENERATED

#ifndef _GI_GTK_LISTBOXROW_HPP_
#define _GI_GTK_LISTBOXROW_HPP_

#include "bin.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Actionable;
class Widget;

class ListBoxRow;

namespace base {


#define GI_GTK_LISTBOXROW_BASE base::ListBoxRowBase
class ListBoxRowBase : public Gtk::Bin
{
typedef Gtk::Bin super_type;
public:
typedef ::GtkListBoxRow BaseObjectType;

ListBoxRowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_list_box_row_get_type(); } 

GI_INLINE_DECL Gtk::Actionable interface_ (gi::interface_tag<Gtk::Actionable>);

GI_INLINE_DECL operator Gtk::Actionable ();

// GtkWidget* gtk_list_box_row_new ();
// ::GtkListBoxRow* gtk_list_box_row_new ();
static GI_INLINE_DECL Gtk::ListBoxRow new_ () noexcept;

// void gtk_list_box_row_changed (GtkListBoxRow* row);
// void gtk_list_box_row_changed (::GtkListBoxRow* row);
GI_INLINE_DECL void changed () noexcept;

// gboolean gtk_list_box_row_get_activatable (GtkListBoxRow* row);
// gboolean gtk_list_box_row_get_activatable (::GtkListBoxRow* row);
GI_INLINE_DECL bool get_activatable () noexcept;

// GtkWidget* gtk_list_box_row_get_header (GtkListBoxRow* row);
// ::GtkWidget* gtk_list_box_row_get_header (::GtkListBoxRow* row);
GI_INLINE_DECL Gtk::Widget get_header () noexcept;

// gint gtk_list_box_row_get_index (GtkListBoxRow* row);
// gint gtk_list_box_row_get_index (::GtkListBoxRow* row);
GI_INLINE_DECL gint get_index () noexcept;

// gboolean gtk_list_box_row_get_selectable (GtkListBoxRow* row);
// gboolean gtk_list_box_row_get_selectable (::GtkListBoxRow* row);
GI_INLINE_DECL bool get_selectable () noexcept;

// gboolean gtk_list_box_row_is_selected (GtkListBoxRow* row);
// gboolean gtk_list_box_row_is_selected (::GtkListBoxRow* row);
GI_INLINE_DECL bool is_selected () noexcept;

// void gtk_list_box_row_set_activatable (GtkListBoxRow* row, gboolean activatable);
// void gtk_list_box_row_set_activatable (::GtkListBoxRow* row, gboolean activatable);
GI_INLINE_DECL void set_activatable (gboolean activatable) noexcept;

// void gtk_list_box_row_set_header (GtkListBoxRow* row, GtkWidget* header);
// void gtk_list_box_row_set_header (::GtkListBoxRow* row, ::GtkWidget* header);
GI_INLINE_DECL void set_header (Gtk::Widget header) noexcept;
GI_INLINE_DECL void set_header () noexcept;

// void gtk_list_box_row_set_selectable (GtkListBoxRow* row, gboolean selectable);
// void gtk_list_box_row_set_selectable (::GtkListBoxRow* row, gboolean selectable);
GI_INLINE_DECL void set_selectable (gboolean selectable) noexcept;

gi::property_proxy<bool, base::ListBoxRowBase> property_activatable()
{ return gi::property_proxy<bool, base::ListBoxRowBase> (*this, "activatable"); }
const gi::property_proxy<bool, base::ListBoxRowBase> property_activatable() const
{ return gi::property_proxy<bool, base::ListBoxRowBase> (*this, "activatable"); }

gi::property_proxy<bool, base::ListBoxRowBase> property_selectable()
{ return gi::property_proxy<bool, base::ListBoxRowBase> (*this, "selectable"); }
const gi::property_proxy<bool, base::ListBoxRowBase> property_selectable() const
{ return gi::property_proxy<bool, base::ListBoxRowBase> (*this, "selectable"); }

// signal activate
gi::signal_proxy<void(Gtk::ListBoxRow)> signal_activate()
{ return gi::signal_proxy<void(Gtk::ListBoxRow)> (*this, "activate"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/listboxrow_extra_def.hpp>)
#include <gtk/listboxrow_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/listboxrow_extra.hpp>)
#include <gtk/listboxrow_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ListBoxRow : public GI_GTK_LISTBOXROW_BASE
{ typedef GI_GTK_LISTBOXROW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkListBoxRow>
{ typedef Gtk::ListBoxRow type; }; 

} // namespace repository

} // namespace gi

#include "actionable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ListBoxRowClassDef
{
typedef ListBoxRowClassDef self;
public:
typedef Gtk::ListBoxRow instance_type;
typedef ::GtkListBoxRowClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void ListBoxRow::activate (GtkListBoxRow* row);
// void ListBoxRow::activate (::GtkListBoxRow* row);
virtual void activate_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ListBoxRowClass: public detail::ClassTemplate<Gtk::impl::internal::ListBoxRowClassDef, Gtk::impl::internal::BinClass, Gtk::impl::internal::ActionableInterfaceClassImpl>
{
typedef ListBoxRowClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ListBoxRowClassDef, Gtk::impl::internal::BinClass, Gtk::impl::internal::ActionableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::ActionableInterfaceClassImpl GtkActionableInterface_type;


// void ListBoxRow::activate (GtkListBoxRow* row);
// void ListBoxRow::activate (::GtkListBoxRow* row);
GI_INLINE_DECL void activate_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ListBoxRowImpl = detail::ObjectImpl<ListBoxRow, internal::ListBoxRowClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
