// AUTO-GENERATED

#ifndef _GI_GTK_FLOWBOX_HPP_
#define _GI_GTK_FLOWBOX_HPP_

#include "container.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;
class FlowBoxChild;
class Orientable;
class Widget;

class FlowBox;

namespace base {


#define GI_GTK_FLOWBOX_BASE base::FlowBoxBase
class FlowBoxBase : public Gtk::Container
{
typedef Gtk::Container super_type;
public:
typedef ::GtkFlowBox BaseObjectType;

FlowBoxBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_flow_box_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* gtk_flow_box_new ();
// ::GtkFlowBox* gtk_flow_box_new ();
static GI_INLINE_DECL Gtk::FlowBox new_ () noexcept;

// void gtk_flow_box_bind_model (GtkFlowBox* box, GListModel* model, GtkFlowBoxCreateWidgetFunc create_widget_func, gpointer user_data, GDestroyNotify user_data_free_func);
// void gtk_flow_box_bind_model (::GtkFlowBox* box, ::GListModel* model, Gtk::FlowBoxCreateWidgetFunc::cfunction_type create_widget_func, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
GI_INLINE_DECL void bind_model (Gio::ListModel model, Gtk::FlowBoxCreateWidgetFunc create_widget_func) noexcept;
GI_INLINE_DECL void bind_model (Gtk::FlowBoxCreateWidgetFunc create_widget_func) noexcept;

// gboolean gtk_flow_box_get_activate_on_single_click (GtkFlowBox* box);
// gboolean gtk_flow_box_get_activate_on_single_click (::GtkFlowBox* box);
GI_INLINE_DECL bool get_activate_on_single_click () noexcept;

// GtkFlowBoxChild* gtk_flow_box_get_child_at_index (GtkFlowBox* box, gint idx);
// ::GtkFlowBoxChild* gtk_flow_box_get_child_at_index (::GtkFlowBox* box, gint idx);
GI_INLINE_DECL Gtk::FlowBoxChild get_child_at_index (gint idx) noexcept;

// GtkFlowBoxChild* gtk_flow_box_get_child_at_pos (GtkFlowBox* box, gint x, gint y);
// ::GtkFlowBoxChild* gtk_flow_box_get_child_at_pos (::GtkFlowBox* box, gint x, gint y);
GI_INLINE_DECL Gtk::FlowBoxChild get_child_at_pos (gint x, gint y) noexcept;

// guint gtk_flow_box_get_column_spacing (GtkFlowBox* box);
// guint gtk_flow_box_get_column_spacing (::GtkFlowBox* box);
GI_INLINE_DECL guint get_column_spacing () noexcept;

// gboolean gtk_flow_box_get_homogeneous (GtkFlowBox* box);
// gboolean gtk_flow_box_get_homogeneous (::GtkFlowBox* box);
GI_INLINE_DECL bool get_homogeneous () noexcept;

// guint gtk_flow_box_get_max_children_per_line (GtkFlowBox* box);
// guint gtk_flow_box_get_max_children_per_line (::GtkFlowBox* box);
GI_INLINE_DECL guint get_max_children_per_line () noexcept;

// guint gtk_flow_box_get_min_children_per_line (GtkFlowBox* box);
// guint gtk_flow_box_get_min_children_per_line (::GtkFlowBox* box);
GI_INLINE_DECL guint get_min_children_per_line () noexcept;

// guint gtk_flow_box_get_row_spacing (GtkFlowBox* box);
// guint gtk_flow_box_get_row_spacing (::GtkFlowBox* box);
GI_INLINE_DECL guint get_row_spacing () noexcept;

// GList* gtk_flow_box_get_selected_children (GtkFlowBox* box);
// ::GList* gtk_flow_box_get_selected_children (::GtkFlowBox* box);
GI_INLINE_DECL std::vector<Gtk::FlowBoxChild> get_selected_children () noexcept;

// GtkSelectionMode gtk_flow_box_get_selection_mode (GtkFlowBox* box);
// ::GtkSelectionMode gtk_flow_box_get_selection_mode (::GtkFlowBox* box);
GI_INLINE_DECL Gtk::SelectionMode get_selection_mode () noexcept;

// void gtk_flow_box_insert (GtkFlowBox* box, GtkWidget* widget, gint position);
// void gtk_flow_box_insert (::GtkFlowBox* box, ::GtkWidget* widget, gint position);
GI_INLINE_DECL void insert (Gtk::Widget widget, gint position) noexcept;

// void gtk_flow_box_invalidate_filter (GtkFlowBox* box);
// void gtk_flow_box_invalidate_filter (::GtkFlowBox* box);
GI_INLINE_DECL void invalidate_filter () noexcept;

// void gtk_flow_box_invalidate_sort (GtkFlowBox* box);
// void gtk_flow_box_invalidate_sort (::GtkFlowBox* box);
GI_INLINE_DECL void invalidate_sort () noexcept;

// void gtk_flow_box_select_all (GtkFlowBox* box);
// void gtk_flow_box_select_all (::GtkFlowBox* box);
GI_INLINE_DECL void select_all () noexcept;

// void gtk_flow_box_select_child (GtkFlowBox* box, GtkFlowBoxChild* child);
// void gtk_flow_box_select_child (::GtkFlowBox* box, ::GtkFlowBoxChild* child);
GI_INLINE_DECL void select_child (Gtk::FlowBoxChild child) noexcept;

// void gtk_flow_box_selected_foreach (GtkFlowBox* box, GtkFlowBoxForeachFunc func, gpointer data);
// void gtk_flow_box_selected_foreach (::GtkFlowBox* box, Gtk::FlowBoxForeachFunc::cfunction_type func, void* data);
GI_INLINE_DECL void selected_foreach (Gtk::FlowBoxForeachFunc func) noexcept;

// void gtk_flow_box_set_activate_on_single_click (GtkFlowBox* box, gboolean single);
// void gtk_flow_box_set_activate_on_single_click (::GtkFlowBox* box, gboolean single);
GI_INLINE_DECL void set_activate_on_single_click (gboolean single) noexcept;

// void gtk_flow_box_set_column_spacing (GtkFlowBox* box, guint spacing);
// void gtk_flow_box_set_column_spacing (::GtkFlowBox* box, guint spacing);
GI_INLINE_DECL void set_column_spacing (guint spacing) noexcept;

// void gtk_flow_box_set_filter_func (GtkFlowBox* box, GtkFlowBoxFilterFunc filter_func, gpointer user_data, GDestroyNotify destroy);
// void gtk_flow_box_set_filter_func (::GtkFlowBox* box, Gtk::FlowBoxFilterFunc::cfunction_type filter_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
GI_INLINE_DECL void set_filter_func (Gtk::FlowBoxFilterFunc filter_func) noexcept;

// void gtk_flow_box_set_hadjustment (GtkFlowBox* box, GtkAdjustment* adjustment);
// void gtk_flow_box_set_hadjustment (::GtkFlowBox* box, ::GtkAdjustment* adjustment);
GI_INLINE_DECL void set_hadjustment (Gtk::Adjustment adjustment) noexcept;

// void gtk_flow_box_set_homogeneous (GtkFlowBox* box, gboolean homogeneous);
// void gtk_flow_box_set_homogeneous (::GtkFlowBox* box, gboolean homogeneous);
GI_INLINE_DECL void set_homogeneous (gboolean homogeneous) noexcept;

// void gtk_flow_box_set_max_children_per_line (GtkFlowBox* box, guint n_children);
// void gtk_flow_box_set_max_children_per_line (::GtkFlowBox* box, guint n_children);
GI_INLINE_DECL void set_max_children_per_line (guint n_children) noexcept;

// void gtk_flow_box_set_min_children_per_line (GtkFlowBox* box, guint n_children);
// void gtk_flow_box_set_min_children_per_line (::GtkFlowBox* box, guint n_children);
GI_INLINE_DECL void set_min_children_per_line (guint n_children) noexcept;

// void gtk_flow_box_set_row_spacing (GtkFlowBox* box, guint spacing);
// void gtk_flow_box_set_row_spacing (::GtkFlowBox* box, guint spacing);
GI_INLINE_DECL void set_row_spacing (guint spacing) noexcept;

// void gtk_flow_box_set_selection_mode (GtkFlowBox* box, GtkSelectionMode mode);
// void gtk_flow_box_set_selection_mode (::GtkFlowBox* box, ::GtkSelectionMode mode);
GI_INLINE_DECL void set_selection_mode (Gtk::SelectionMode mode) noexcept;

// void gtk_flow_box_set_sort_func (GtkFlowBox* box, GtkFlowBoxSortFunc sort_func, gpointer user_data, GDestroyNotify destroy);
// void gtk_flow_box_set_sort_func (::GtkFlowBox* box, Gtk::FlowBoxSortFunc::cfunction_type sort_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
GI_INLINE_DECL void set_sort_func (Gtk::FlowBoxSortFunc sort_func) noexcept;

// void gtk_flow_box_set_vadjustment (GtkFlowBox* box, GtkAdjustment* adjustment);
// void gtk_flow_box_set_vadjustment (::GtkFlowBox* box, ::GtkAdjustment* adjustment);
GI_INLINE_DECL void set_vadjustment (Gtk::Adjustment adjustment) noexcept;

// void gtk_flow_box_unselect_all (GtkFlowBox* box);
// void gtk_flow_box_unselect_all (::GtkFlowBox* box);
GI_INLINE_DECL void unselect_all () noexcept;

// void gtk_flow_box_unselect_child (GtkFlowBox* box, GtkFlowBoxChild* child);
// void gtk_flow_box_unselect_child (::GtkFlowBox* box, ::GtkFlowBoxChild* child);
GI_INLINE_DECL void unselect_child (Gtk::FlowBoxChild child) noexcept;

gi::property_proxy<bool, base::FlowBoxBase> property_activate_on_single_click()
{ return gi::property_proxy<bool, base::FlowBoxBase> (*this, "activate-on-single-click"); }
const gi::property_proxy<bool, base::FlowBoxBase> property_activate_on_single_click() const
{ return gi::property_proxy<bool, base::FlowBoxBase> (*this, "activate-on-single-click"); }

gi::property_proxy<guint, base::FlowBoxBase> property_column_spacing()
{ return gi::property_proxy<guint, base::FlowBoxBase> (*this, "column-spacing"); }
const gi::property_proxy<guint, base::FlowBoxBase> property_column_spacing() const
{ return gi::property_proxy<guint, base::FlowBoxBase> (*this, "column-spacing"); }

gi::property_proxy<bool, base::FlowBoxBase> property_homogeneous()
{ return gi::property_proxy<bool, base::FlowBoxBase> (*this, "homogeneous"); }
const gi::property_proxy<bool, base::FlowBoxBase> property_homogeneous() const
{ return gi::property_proxy<bool, base::FlowBoxBase> (*this, "homogeneous"); }

gi::property_proxy<guint, base::FlowBoxBase> property_max_children_per_line()
{ return gi::property_proxy<guint, base::FlowBoxBase> (*this, "max-children-per-line"); }
const gi::property_proxy<guint, base::FlowBoxBase> property_max_children_per_line() const
{ return gi::property_proxy<guint, base::FlowBoxBase> (*this, "max-children-per-line"); }

gi::property_proxy<guint, base::FlowBoxBase> property_min_children_per_line()
{ return gi::property_proxy<guint, base::FlowBoxBase> (*this, "min-children-per-line"); }
const gi::property_proxy<guint, base::FlowBoxBase> property_min_children_per_line() const
{ return gi::property_proxy<guint, base::FlowBoxBase> (*this, "min-children-per-line"); }

gi::property_proxy<guint, base::FlowBoxBase> property_row_spacing()
{ return gi::property_proxy<guint, base::FlowBoxBase> (*this, "row-spacing"); }
const gi::property_proxy<guint, base::FlowBoxBase> property_row_spacing() const
{ return gi::property_proxy<guint, base::FlowBoxBase> (*this, "row-spacing"); }

gi::property_proxy<Gtk::SelectionMode, base::FlowBoxBase> property_selection_mode()
{ return gi::property_proxy<Gtk::SelectionMode, base::FlowBoxBase> (*this, "selection-mode"); }
const gi::property_proxy<Gtk::SelectionMode, base::FlowBoxBase> property_selection_mode() const
{ return gi::property_proxy<Gtk::SelectionMode, base::FlowBoxBase> (*this, "selection-mode"); }

// signal activate-cursor-child
gi::signal_proxy<void(Gtk::FlowBox)> signal_activate_cursor_child()
{ return gi::signal_proxy<void(Gtk::FlowBox)> (*this, "activate-cursor-child"); }

// signal child-activated
gi::signal_proxy<void(Gtk::FlowBox, Gtk::FlowBoxChild child)> signal_child_activated()
{ return gi::signal_proxy<void(Gtk::FlowBox, Gtk::FlowBoxChild child)> (*this, "child-activated"); }

// signal move-cursor
gi::signal_proxy<bool(Gtk::FlowBox, Gtk::MovementStep step, gint count)> signal_move_cursor()
{ return gi::signal_proxy<bool(Gtk::FlowBox, Gtk::MovementStep step, gint count)> (*this, "move-cursor"); }

// signal select-all
gi::signal_proxy<void(Gtk::FlowBox)> signal_select_all()
{ return gi::signal_proxy<void(Gtk::FlowBox)> (*this, "select-all"); }

// signal selected-children-changed
gi::signal_proxy<void(Gtk::FlowBox)> signal_selected_children_changed()
{ return gi::signal_proxy<void(Gtk::FlowBox)> (*this, "selected-children-changed"); }

// signal toggle-cursor-child
gi::signal_proxy<void(Gtk::FlowBox)> signal_toggle_cursor_child()
{ return gi::signal_proxy<void(Gtk::FlowBox)> (*this, "toggle-cursor-child"); }

// signal unselect-all
gi::signal_proxy<void(Gtk::FlowBox)> signal_unselect_all()
{ return gi::signal_proxy<void(Gtk::FlowBox)> (*this, "unselect-all"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/flowbox_extra_def.hpp>)
#include <gtk/flowbox_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/flowbox_extra.hpp>)
#include <gtk/flowbox_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FlowBox : public GI_GTK_FLOWBOX_BASE
{ typedef GI_GTK_FLOWBOX_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFlowBox>
{ typedef Gtk::FlowBox type; }; 

} // namespace repository

} // namespace gi

#include "orientable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FlowBoxClassDef
{
typedef FlowBoxClassDef self;
public:
typedef Gtk::FlowBox instance_type;
typedef ::GtkFlowBoxClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void FlowBox::activate_cursor_child (GtkFlowBox* box);
// void FlowBox::activate_cursor_child (::GtkFlowBox* box);
virtual void activate_cursor_child_ () noexcept = 0;

// void FlowBox::child_activated (GtkFlowBox* box, GtkFlowBoxChild* child);
// void FlowBox::child_activated (::GtkFlowBox* box, ::GtkFlowBoxChild* child);
virtual void child_activated_ (Gtk::FlowBoxChild child) noexcept = 0;

// gboolean FlowBox::move_cursor (GtkFlowBox* box, GtkMovementStep step, gint count);
// gboolean FlowBox::move_cursor (::GtkFlowBox* box, ::GtkMovementStep step, gint count);
virtual bool move_cursor_ (Gtk::MovementStep step, gint count) noexcept = 0;

// void FlowBox::select_all (GtkFlowBox* box);
// void FlowBox::select_all (::GtkFlowBox* box);
virtual void select_all_ () noexcept = 0;

// void FlowBox::selected_children_changed (GtkFlowBox* box);
// void FlowBox::selected_children_changed (::GtkFlowBox* box);
virtual void selected_children_changed_ () noexcept = 0;

// void FlowBox::toggle_cursor_child (GtkFlowBox* box);
// void FlowBox::toggle_cursor_child (::GtkFlowBox* box);
virtual void toggle_cursor_child_ () noexcept = 0;

// void FlowBox::unselect_all (GtkFlowBox* box);
// void FlowBox::unselect_all (::GtkFlowBox* box);
virtual void unselect_all_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class FlowBoxClass: public detail::ClassTemplate<Gtk::impl::internal::FlowBoxClassDef, Gtk::impl::internal::ContainerClass, Gtk::impl::internal::OrientableIfaceClassImpl>
{
typedef FlowBoxClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::FlowBoxClassDef, Gtk::impl::internal::ContainerClass, Gtk::impl::internal::OrientableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::OrientableIfaceClassImpl GtkOrientableIface_type;


// void FlowBox::activate_cursor_child (GtkFlowBox* box);
// void FlowBox::activate_cursor_child (::GtkFlowBox* box);
GI_INLINE_DECL void activate_cursor_child_ () noexcept override;

// void FlowBox::child_activated (GtkFlowBox* box, GtkFlowBoxChild* child);
// void FlowBox::child_activated (::GtkFlowBox* box, ::GtkFlowBoxChild* child);
GI_INLINE_DECL void child_activated_ (Gtk::FlowBoxChild child) noexcept override;

// gboolean FlowBox::move_cursor (GtkFlowBox* box, GtkMovementStep step, gint count);
// gboolean FlowBox::move_cursor (::GtkFlowBox* box, ::GtkMovementStep step, gint count);
GI_INLINE_DECL bool move_cursor_ (Gtk::MovementStep step, gint count) noexcept override;

// void FlowBox::select_all (GtkFlowBox* box);
// void FlowBox::select_all (::GtkFlowBox* box);
GI_INLINE_DECL void select_all_ () noexcept override;

// void FlowBox::selected_children_changed (GtkFlowBox* box);
// void FlowBox::selected_children_changed (::GtkFlowBox* box);
GI_INLINE_DECL void selected_children_changed_ () noexcept override;

// void FlowBox::toggle_cursor_child (GtkFlowBox* box);
// void FlowBox::toggle_cursor_child (::GtkFlowBox* box);
GI_INLINE_DECL void toggle_cursor_child_ () noexcept override;

// void FlowBox::unselect_all (GtkFlowBox* box);
// void FlowBox::unselect_all (::GtkFlowBox* box);
GI_INLINE_DECL void unselect_all_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using FlowBoxImpl = detail::ObjectImpl<FlowBox, internal::FlowBoxClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
