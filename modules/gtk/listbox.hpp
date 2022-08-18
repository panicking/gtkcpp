// AUTO-GENERATED

#ifndef _GI_GTK_LISTBOX_HPP_
#define _GI_GTK_LISTBOX_HPP_

#include "container.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;
class ListBoxRow;
class Widget;

class ListBox;

namespace base {


#define GI_GTK_LISTBOX_BASE base::ListBoxBase
class ListBoxBase : public Gtk::Container
{
typedef Gtk::Container super_type;
public:
typedef ::GtkListBox BaseObjectType;

ListBoxBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_list_box_get_type(); } 

// GtkWidget* gtk_list_box_new ();
// ::GtkListBox* gtk_list_box_new ();
static GI_INLINE_DECL Gtk::ListBox new_ () noexcept;

// void gtk_list_box_bind_model (GtkListBox* box, GListModel* model, GtkListBoxCreateWidgetFunc create_widget_func, gpointer user_data, GDestroyNotify user_data_free_func);
// void gtk_list_box_bind_model (::GtkListBox* box, ::GListModel* model, Gtk::ListBoxCreateWidgetFunc::cfunction_type create_widget_func, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
GI_INLINE_DECL void bind_model (Gio::ListModel model, Gtk::ListBoxCreateWidgetFunc create_widget_func) noexcept;
GI_INLINE_DECL void bind_model (Gtk::ListBoxCreateWidgetFunc create_widget_func) noexcept;

// void gtk_list_box_drag_highlight_row (GtkListBox* box, GtkListBoxRow* row);
// void gtk_list_box_drag_highlight_row (::GtkListBox* box, ::GtkListBoxRow* row);
GI_INLINE_DECL void drag_highlight_row (Gtk::ListBoxRow row) noexcept;

// void gtk_list_box_drag_unhighlight_row (GtkListBox* box);
// void gtk_list_box_drag_unhighlight_row (::GtkListBox* box);
GI_INLINE_DECL void drag_unhighlight_row () noexcept;

// gboolean gtk_list_box_get_activate_on_single_click (GtkListBox* box);
// gboolean gtk_list_box_get_activate_on_single_click (::GtkListBox* box);
GI_INLINE_DECL bool get_activate_on_single_click () noexcept;

// GtkAdjustment* gtk_list_box_get_adjustment (GtkListBox* box);
// ::GtkAdjustment* gtk_list_box_get_adjustment (::GtkListBox* box);
GI_INLINE_DECL Gtk::Adjustment get_adjustment () noexcept;

// GtkListBoxRow* gtk_list_box_get_row_at_index (GtkListBox* box, gint index_);
// ::GtkListBoxRow* gtk_list_box_get_row_at_index (::GtkListBox* box, gint index_);
GI_INLINE_DECL Gtk::ListBoxRow get_row_at_index (gint index_) noexcept;

// GtkListBoxRow* gtk_list_box_get_row_at_y (GtkListBox* box, gint y);
// ::GtkListBoxRow* gtk_list_box_get_row_at_y (::GtkListBox* box, gint y);
GI_INLINE_DECL Gtk::ListBoxRow get_row_at_y (gint y) noexcept;

// GtkListBoxRow* gtk_list_box_get_selected_row (GtkListBox* box);
// ::GtkListBoxRow* gtk_list_box_get_selected_row (::GtkListBox* box);
GI_INLINE_DECL Gtk::ListBoxRow get_selected_row () noexcept;

// GList* gtk_list_box_get_selected_rows (GtkListBox* box);
// ::GList* gtk_list_box_get_selected_rows (::GtkListBox* box);
GI_INLINE_DECL std::vector<Gtk::ListBoxRow> get_selected_rows () noexcept;

// GtkSelectionMode gtk_list_box_get_selection_mode (GtkListBox* box);
// ::GtkSelectionMode gtk_list_box_get_selection_mode (::GtkListBox* box);
GI_INLINE_DECL Gtk::SelectionMode get_selection_mode () noexcept;

// void gtk_list_box_insert (GtkListBox* box, GtkWidget* child, gint position);
// void gtk_list_box_insert (::GtkListBox* box, ::GtkWidget* child, gint position);
GI_INLINE_DECL void insert (Gtk::Widget child, gint position) noexcept;

// void gtk_list_box_invalidate_filter (GtkListBox* box);
// void gtk_list_box_invalidate_filter (::GtkListBox* box);
GI_INLINE_DECL void invalidate_filter () noexcept;

// void gtk_list_box_invalidate_headers (GtkListBox* box);
// void gtk_list_box_invalidate_headers (::GtkListBox* box);
GI_INLINE_DECL void invalidate_headers () noexcept;

// void gtk_list_box_invalidate_sort (GtkListBox* box);
// void gtk_list_box_invalidate_sort (::GtkListBox* box);
GI_INLINE_DECL void invalidate_sort () noexcept;

// void gtk_list_box_prepend (GtkListBox* box, GtkWidget* child);
// void gtk_list_box_prepend (::GtkListBox* box, ::GtkWidget* child);
GI_INLINE_DECL void prepend (Gtk::Widget child) noexcept;

// void gtk_list_box_select_all (GtkListBox* box);
// void gtk_list_box_select_all (::GtkListBox* box);
GI_INLINE_DECL void select_all () noexcept;

// void gtk_list_box_select_row (GtkListBox* box, GtkListBoxRow* row);
// void gtk_list_box_select_row (::GtkListBox* box, ::GtkListBoxRow* row);
GI_INLINE_DECL void select_row (Gtk::ListBoxRow row) noexcept;
GI_INLINE_DECL void select_row () noexcept;

// void gtk_list_box_selected_foreach (GtkListBox* box, GtkListBoxForeachFunc func, gpointer data);
// void gtk_list_box_selected_foreach (::GtkListBox* box, Gtk::ListBoxForeachFunc::cfunction_type func, void* data);
GI_INLINE_DECL void selected_foreach (Gtk::ListBoxForeachFunc func) noexcept;

// void gtk_list_box_set_activate_on_single_click (GtkListBox* box, gboolean single);
// void gtk_list_box_set_activate_on_single_click (::GtkListBox* box, gboolean single);
GI_INLINE_DECL void set_activate_on_single_click (gboolean single) noexcept;

// void gtk_list_box_set_adjustment (GtkListBox* box, GtkAdjustment* adjustment);
// void gtk_list_box_set_adjustment (::GtkListBox* box, ::GtkAdjustment* adjustment);
GI_INLINE_DECL void set_adjustment (Gtk::Adjustment adjustment) noexcept;
GI_INLINE_DECL void set_adjustment () noexcept;

// void gtk_list_box_set_filter_func (GtkListBox* box, GtkListBoxFilterFunc filter_func, gpointer user_data, GDestroyNotify destroy);
// void gtk_list_box_set_filter_func (::GtkListBox* box, Gtk::ListBoxFilterFunc::cfunction_type filter_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
GI_INLINE_DECL void set_filter_func (Gtk::ListBoxFilterFunc filter_func) noexcept;

// void gtk_list_box_set_header_func (GtkListBox* box, GtkListBoxUpdateHeaderFunc update_header, gpointer user_data, GDestroyNotify destroy);
// void gtk_list_box_set_header_func (::GtkListBox* box, Gtk::ListBoxUpdateHeaderFunc::cfunction_type update_header, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
GI_INLINE_DECL void set_header_func (Gtk::ListBoxUpdateHeaderFunc update_header) noexcept;

// void gtk_list_box_set_placeholder (GtkListBox* box, GtkWidget* placeholder);
// void gtk_list_box_set_placeholder (::GtkListBox* box, ::GtkWidget* placeholder);
GI_INLINE_DECL void set_placeholder (Gtk::Widget placeholder) noexcept;
GI_INLINE_DECL void set_placeholder () noexcept;

// void gtk_list_box_set_selection_mode (GtkListBox* box, GtkSelectionMode mode);
// void gtk_list_box_set_selection_mode (::GtkListBox* box, ::GtkSelectionMode mode);
GI_INLINE_DECL void set_selection_mode (Gtk::SelectionMode mode) noexcept;

// void gtk_list_box_set_sort_func (GtkListBox* box, GtkListBoxSortFunc sort_func, gpointer user_data, GDestroyNotify destroy);
// void gtk_list_box_set_sort_func (::GtkListBox* box, Gtk::ListBoxSortFunc::cfunction_type sort_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
GI_INLINE_DECL void set_sort_func (Gtk::ListBoxSortFunc sort_func) noexcept;

// void gtk_list_box_unselect_all (GtkListBox* box);
// void gtk_list_box_unselect_all (::GtkListBox* box);
GI_INLINE_DECL void unselect_all () noexcept;

// void gtk_list_box_unselect_row (GtkListBox* box, GtkListBoxRow* row);
// void gtk_list_box_unselect_row (::GtkListBox* box, ::GtkListBoxRow* row);
GI_INLINE_DECL void unselect_row (Gtk::ListBoxRow row) noexcept;

gi::property_proxy<bool, base::ListBoxBase> property_activate_on_single_click()
{ return gi::property_proxy<bool, base::ListBoxBase> (*this, "activate-on-single-click"); }
const gi::property_proxy<bool, base::ListBoxBase> property_activate_on_single_click() const
{ return gi::property_proxy<bool, base::ListBoxBase> (*this, "activate-on-single-click"); }

gi::property_proxy<Gtk::SelectionMode, base::ListBoxBase> property_selection_mode()
{ return gi::property_proxy<Gtk::SelectionMode, base::ListBoxBase> (*this, "selection-mode"); }
const gi::property_proxy<Gtk::SelectionMode, base::ListBoxBase> property_selection_mode() const
{ return gi::property_proxy<Gtk::SelectionMode, base::ListBoxBase> (*this, "selection-mode"); }

// signal activate-cursor-row
gi::signal_proxy<void(Gtk::ListBox)> signal_activate_cursor_row()
{ return gi::signal_proxy<void(Gtk::ListBox)> (*this, "activate-cursor-row"); }

// signal move-cursor
gi::signal_proxy<void(Gtk::ListBox, Gtk::MovementStep object, gint p0)> signal_move_cursor()
{ return gi::signal_proxy<void(Gtk::ListBox, Gtk::MovementStep object, gint p0)> (*this, "move-cursor"); }

// signal row-activated
gi::signal_proxy<void(Gtk::ListBox, Gtk::ListBoxRow row)> signal_row_activated()
{ return gi::signal_proxy<void(Gtk::ListBox, Gtk::ListBoxRow row)> (*this, "row-activated"); }

// signal row-selected
gi::signal_proxy<void(Gtk::ListBox, Gtk::ListBoxRow row)> signal_row_selected()
{ return gi::signal_proxy<void(Gtk::ListBox, Gtk::ListBoxRow row)> (*this, "row-selected"); }

// signal select-all
gi::signal_proxy<void(Gtk::ListBox)> signal_select_all()
{ return gi::signal_proxy<void(Gtk::ListBox)> (*this, "select-all"); }

// signal selected-rows-changed
gi::signal_proxy<void(Gtk::ListBox)> signal_selected_rows_changed()
{ return gi::signal_proxy<void(Gtk::ListBox)> (*this, "selected-rows-changed"); }

// signal toggle-cursor-row
gi::signal_proxy<void(Gtk::ListBox)> signal_toggle_cursor_row()
{ return gi::signal_proxy<void(Gtk::ListBox)> (*this, "toggle-cursor-row"); }

// signal unselect-all
gi::signal_proxy<void(Gtk::ListBox)> signal_unselect_all()
{ return gi::signal_proxy<void(Gtk::ListBox)> (*this, "unselect-all"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/listbox_extra_def.hpp>)
#include <gtk/listbox_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/listbox_extra.hpp>)
#include <gtk/listbox_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ListBox : public GI_GTK_LISTBOX_BASE
{ typedef GI_GTK_LISTBOX_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkListBox>
{ typedef Gtk::ListBox type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ListBoxClassDef
{
typedef ListBoxClassDef self;
public:
typedef Gtk::ListBox instance_type;
typedef ::GtkListBoxClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void ListBox::activate_cursor_row (GtkListBox* box);
// void ListBox::activate_cursor_row (::GtkListBox* box);
virtual void activate_cursor_row_ () noexcept = 0;

// void ListBox::move_cursor (GtkListBox* box, GtkMovementStep step, gint count);
// void ListBox::move_cursor (::GtkListBox* box, ::GtkMovementStep step, gint count);
virtual void move_cursor_ (Gtk::MovementStep step, gint count) noexcept = 0;

// void ListBox::row_activated (GtkListBox* box, GtkListBoxRow* row);
// void ListBox::row_activated (::GtkListBox* box, ::GtkListBoxRow* row);
virtual void row_activated_ (Gtk::ListBoxRow row) noexcept = 0;

// void ListBox::row_selected (GtkListBox* box, GtkListBoxRow* row);
// void ListBox::row_selected (::GtkListBox* box, ::GtkListBoxRow* row);
virtual void row_selected_ (Gtk::ListBoxRow row) noexcept = 0;

// void ListBox::select_all (GtkListBox* box);
// void ListBox::select_all (::GtkListBox* box);
virtual void select_all_ () noexcept = 0;

// void ListBox::selected_rows_changed (GtkListBox* box);
// void ListBox::selected_rows_changed (::GtkListBox* box);
virtual void selected_rows_changed_ () noexcept = 0;

// void ListBox::toggle_cursor_row (GtkListBox* box);
// void ListBox::toggle_cursor_row (::GtkListBox* box);
virtual void toggle_cursor_row_ () noexcept = 0;

// void ListBox::unselect_all (GtkListBox* box);
// void ListBox::unselect_all (::GtkListBox* box);
virtual void unselect_all_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ListBoxClass: public detail::ClassTemplate<Gtk::impl::internal::ListBoxClassDef, Gtk::impl::internal::ContainerClass>
{
typedef ListBoxClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ListBoxClassDef, Gtk::impl::internal::ContainerClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void ListBox::activate_cursor_row (GtkListBox* box);
// void ListBox::activate_cursor_row (::GtkListBox* box);
GI_INLINE_DECL void activate_cursor_row_ () noexcept override;

// void ListBox::move_cursor (GtkListBox* box, GtkMovementStep step, gint count);
// void ListBox::move_cursor (::GtkListBox* box, ::GtkMovementStep step, gint count);
GI_INLINE_DECL void move_cursor_ (Gtk::MovementStep step, gint count) noexcept override;

// void ListBox::row_activated (GtkListBox* box, GtkListBoxRow* row);
// void ListBox::row_activated (::GtkListBox* box, ::GtkListBoxRow* row);
GI_INLINE_DECL void row_activated_ (Gtk::ListBoxRow row) noexcept override;

// void ListBox::row_selected (GtkListBox* box, GtkListBoxRow* row);
// void ListBox::row_selected (::GtkListBox* box, ::GtkListBoxRow* row);
GI_INLINE_DECL void row_selected_ (Gtk::ListBoxRow row) noexcept override;

// void ListBox::select_all (GtkListBox* box);
// void ListBox::select_all (::GtkListBox* box);
GI_INLINE_DECL void select_all_ () noexcept override;

// void ListBox::selected_rows_changed (GtkListBox* box);
// void ListBox::selected_rows_changed (::GtkListBox* box);
GI_INLINE_DECL void selected_rows_changed_ () noexcept override;

// void ListBox::toggle_cursor_row (GtkListBox* box);
// void ListBox::toggle_cursor_row (::GtkListBox* box);
GI_INLINE_DECL void toggle_cursor_row_ () noexcept override;

// void ListBox::unselect_all (GtkListBox* box);
// void ListBox::unselect_all (::GtkListBox* box);
GI_INLINE_DECL void unselect_all_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ListBoxImpl = detail::ObjectImpl<ListBox, internal::ListBoxClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
