// AUTO-GENERATED

#ifndef _GI_GTK_CELLAREA_HPP_
#define _GI_GTK_CELLAREA_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Buildable;
class CellAreaContext;
class CellEditable;
class CellLayout;
class CellRenderer;
class TreeIter;
class TreeModel;
class Widget;

class CellArea;

namespace base {


#define GI_GTK_CELLAREA_BASE base::CellAreaBase
class CellAreaBase : public GObject::InitiallyUnowned
{
typedef GObject::InitiallyUnowned super_type;
public:
typedef ::GtkCellArea BaseObjectType;

CellAreaBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_cell_area_get_type(); } 

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

GI_INLINE_DECL Gtk::CellLayout interface_ (gi::interface_tag<Gtk::CellLayout>);

GI_INLINE_DECL operator Gtk::CellLayout ();

// gboolean gtk_cell_area_activate (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, const GdkRectangle* cell_area, GtkCellRendererState flags, gboolean edit_only);
// gboolean gtk_cell_area_activate (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags, gboolean edit_only);
GI_INLINE_DECL bool activate (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle & cell_area, Gtk::CellRendererState flags, gboolean edit_only) noexcept;

// gboolean gtk_cell_area_activate_cell (GtkCellArea* area, GtkWidget* widget, GtkCellRenderer* renderer, GdkEvent* event, const GdkRectangle* cell_area, GtkCellRendererState flags);
// gboolean gtk_cell_area_activate_cell (::GtkCellArea* area, ::GtkWidget* widget, ::GtkCellRenderer* renderer,  event, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// void gtk_cell_area_add (GtkCellArea* area, GtkCellRenderer* renderer);
// void gtk_cell_area_add (::GtkCellArea* area, ::GtkCellRenderer* renderer);
GI_INLINE_DECL void add (Gtk::CellRenderer renderer) noexcept;

// void gtk_cell_area_add_focus_sibling (GtkCellArea* area, GtkCellRenderer* renderer, GtkCellRenderer* sibling);
// void gtk_cell_area_add_focus_sibling (::GtkCellArea* area, ::GtkCellRenderer* renderer, ::GtkCellRenderer* sibling);
GI_INLINE_DECL void add_focus_sibling (Gtk::CellRenderer renderer, Gtk::CellRenderer sibling) noexcept;

// void gtk_cell_area_add_with_properties (GtkCellArea* area, GtkCellRenderer* renderer, const gchar* first_prop_name);
// void gtk_cell_area_add_with_properties (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* first_prop_name);
// IGNORE; not introspectable, varargs not supported

// void gtk_cell_area_apply_attributes (GtkCellArea* area, GtkTreeModel* tree_model, GtkTreeIter* iter, gboolean is_expander, gboolean is_expanded);
// void gtk_cell_area_apply_attributes (::GtkCellArea* area, ::GtkTreeModel* tree_model, ::GtkTreeIter* iter, gboolean is_expander, gboolean is_expanded);
GI_INLINE_DECL void apply_attributes (Gtk::TreeModel tree_model, Gtk::TreeIter iter, gboolean is_expander, gboolean is_expanded) noexcept;

// void gtk_cell_area_attribute_connect (GtkCellArea* area, GtkCellRenderer* renderer, const gchar* attribute, gint column);
// void gtk_cell_area_attribute_connect (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* attribute, gint column);
GI_INLINE_DECL void attribute_connect (Gtk::CellRenderer renderer, const std::string & attribute, gint column) noexcept;

// void gtk_cell_area_attribute_disconnect (GtkCellArea* area, GtkCellRenderer* renderer, const gchar* attribute);
// void gtk_cell_area_attribute_disconnect (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* attribute);
GI_INLINE_DECL void attribute_disconnect (Gtk::CellRenderer renderer, const std::string & attribute) noexcept;

// gint gtk_cell_area_attribute_get_column (GtkCellArea* area, GtkCellRenderer* renderer, const gchar* attribute);
// gint gtk_cell_area_attribute_get_column (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* attribute);
GI_INLINE_DECL gint attribute_get_column (Gtk::CellRenderer renderer, const std::string & attribute) noexcept;

// void gtk_cell_area_cell_get (GtkCellArea* area, GtkCellRenderer* renderer, const gchar* first_prop_name);
// void gtk_cell_area_cell_get (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* first_prop_name);
// IGNORE; not introspectable, varargs not supported

// void gtk_cell_area_cell_get_property (GtkCellArea* area, GtkCellRenderer* renderer, const gchar* property_name, GValue* value);
// void gtk_cell_area_cell_get_property (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* property_name, ::GValue* value);
GI_INLINE_DECL void cell_get_property (Gtk::CellRenderer renderer, const std::string & property_name, GObject::Value value) noexcept;

// void gtk_cell_area_cell_get_valist (GtkCellArea* area, GtkCellRenderer* renderer, const gchar* first_property_name, va_list var_args);
// void gtk_cell_area_cell_get_valist (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* first_property_name,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// void gtk_cell_area_cell_set (GtkCellArea* area, GtkCellRenderer* renderer, const gchar* first_prop_name);
// void gtk_cell_area_cell_set (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* first_prop_name);
// IGNORE; not introspectable, varargs not supported

// void gtk_cell_area_cell_set_property (GtkCellArea* area, GtkCellRenderer* renderer, const gchar* property_name, const GValue* value);
// void gtk_cell_area_cell_set_property (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* property_name, const ::GValue* value);
GI_INLINE_DECL void cell_set_property (Gtk::CellRenderer renderer, const std::string & property_name, const GObject::Value & value) noexcept;

// void gtk_cell_area_cell_set_valist (GtkCellArea* area, GtkCellRenderer* renderer, const gchar* first_property_name, va_list var_args);
// void gtk_cell_area_cell_set_valist (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* first_property_name,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// GtkCellAreaContext* gtk_cell_area_copy_context (GtkCellArea* area, GtkCellAreaContext* context);
// ::GtkCellAreaContext* gtk_cell_area_copy_context (::GtkCellArea* area, ::GtkCellAreaContext* context);
GI_INLINE_DECL Gtk::CellAreaContext copy_context (Gtk::CellAreaContext context) noexcept;

// GtkCellAreaContext* gtk_cell_area_create_context (GtkCellArea* area);
// ::GtkCellAreaContext* gtk_cell_area_create_context (::GtkCellArea* area);
GI_INLINE_DECL Gtk::CellAreaContext create_context () noexcept;

// gint gtk_cell_area_event (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, GdkEvent* event, const GdkRectangle* cell_area, GtkCellRendererState flags);
// gint gtk_cell_area_event (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget,  event, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// gboolean gtk_cell_area_focus (GtkCellArea* area, GtkDirectionType direction);
// gboolean gtk_cell_area_focus (::GtkCellArea* area, ::GtkDirectionType direction);
GI_INLINE_DECL bool focus (Gtk::DirectionType direction) noexcept;

// void gtk_cell_area_foreach (GtkCellArea* area, GtkCellCallback callback, gpointer callback_data);
// void gtk_cell_area_foreach (::GtkCellArea* area, Gtk::CellCallback::cfunction_type callback, void* callback_data);
GI_INLINE_DECL void foreach (Gtk::CellCallback callback) noexcept;

// void gtk_cell_area_foreach_alloc (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, const GdkRectangle* cell_area, const GdkRectangle* background_area, GtkCellAllocCallback callback, gpointer callback_data);
// void gtk_cell_area_foreach_alloc (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, const ::GdkRectangle* cell_area, const ::GdkRectangle* background_area, Gtk::CellAllocCallback::cfunction_type callback, void* callback_data);
GI_INLINE_DECL void foreach_alloc (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle & cell_area, const Gdk::Rectangle & background_area, Gtk::CellAllocCallback callback) noexcept;

// void gtk_cell_area_get_cell_allocation (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, GtkCellRenderer* renderer, const GdkRectangle* cell_area, GdkRectangle* allocation);
// void gtk_cell_area_get_cell_allocation (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, ::GtkCellRenderer* renderer, const ::GdkRectangle* cell_area, ::GdkRectangle* allocation);
GI_INLINE_DECL void get_cell_allocation (Gtk::CellAreaContext context, Gtk::Widget widget, Gtk::CellRenderer renderer, const Gdk::Rectangle & cell_area, Gdk::Rectangle & allocation) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_cell_allocation (Gtk::CellAreaContext context, Gtk::Widget widget, Gtk::CellRenderer renderer, const Gdk::Rectangle & cell_area) noexcept;

// GtkCellRenderer* gtk_cell_area_get_cell_at_position (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, const GdkRectangle* cell_area, gint x, gint y, GdkRectangle* alloc_area);
// ::GtkCellRenderer* gtk_cell_area_get_cell_at_position (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, const ::GdkRectangle* cell_area, gint x, gint y, ::GdkRectangle* alloc_area);
GI_INLINE_DECL Gtk::CellRenderer get_cell_at_position (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle & cell_area, gint x, gint y, Gdk::Rectangle * alloc_area = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gtk::CellRenderer, Gdk::Rectangle> get_cell_at_position (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle & cell_area, gint x, gint y) noexcept;

// const gchar* gtk_cell_area_get_current_path_string (GtkCellArea* area);
// const char* gtk_cell_area_get_current_path_string (::GtkCellArea* area);
GI_INLINE_DECL std::string get_current_path_string () noexcept;

// GtkCellEditable* gtk_cell_area_get_edit_widget (GtkCellArea* area);
// ::GtkCellEditable* gtk_cell_area_get_edit_widget (::GtkCellArea* area);
GI_INLINE_DECL Gtk::CellEditable get_edit_widget () noexcept;

// GtkCellRenderer* gtk_cell_area_get_edited_cell (GtkCellArea* area);
// ::GtkCellRenderer* gtk_cell_area_get_edited_cell (::GtkCellArea* area);
GI_INLINE_DECL Gtk::CellRenderer get_edited_cell () noexcept;

// GtkCellRenderer* gtk_cell_area_get_focus_cell (GtkCellArea* area);
// ::GtkCellRenderer* gtk_cell_area_get_focus_cell (::GtkCellArea* area);
GI_INLINE_DECL Gtk::CellRenderer get_focus_cell () noexcept;

// GtkCellRenderer* gtk_cell_area_get_focus_from_sibling (GtkCellArea* area, GtkCellRenderer* renderer);
// ::GtkCellRenderer* gtk_cell_area_get_focus_from_sibling (::GtkCellArea* area, ::GtkCellRenderer* renderer);
GI_INLINE_DECL Gtk::CellRenderer get_focus_from_sibling (Gtk::CellRenderer renderer) noexcept;

// const GList* gtk_cell_area_get_focus_siblings (GtkCellArea* area, GtkCellRenderer* renderer);
// const ::GList* gtk_cell_area_get_focus_siblings (::GtkCellArea* area, ::GtkCellRenderer* renderer);
GI_INLINE_DECL std::vector<Gtk::CellRenderer> get_focus_siblings (Gtk::CellRenderer renderer) noexcept;

// void gtk_cell_area_get_preferred_height (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, gint* minimum_height, gint* natural_height);
// void gtk_cell_area_get_preferred_height (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint* minimum_height, gint* natural_height);
GI_INLINE_DECL void get_preferred_height (Gtk::CellAreaContext context, Gtk::Widget widget, gint * minimum_height = nullptr, gint * natural_height = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_preferred_height (Gtk::CellAreaContext context, Gtk::Widget widget) noexcept;

// void gtk_cell_area_get_preferred_height_for_width (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
// void gtk_cell_area_get_preferred_height_for_width (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
GI_INLINE_DECL void get_preferred_height_for_width (Gtk::CellAreaContext context, Gtk::Widget widget, gint width, gint * minimum_height = nullptr, gint * natural_height = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_preferred_height_for_width (Gtk::CellAreaContext context, Gtk::Widget widget, gint width) noexcept;

// void gtk_cell_area_get_preferred_width (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, gint* minimum_width, gint* natural_width);
// void gtk_cell_area_get_preferred_width (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint* minimum_width, gint* natural_width);
GI_INLINE_DECL void get_preferred_width (Gtk::CellAreaContext context, Gtk::Widget widget, gint * minimum_width = nullptr, gint * natural_width = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_preferred_width (Gtk::CellAreaContext context, Gtk::Widget widget) noexcept;

// void gtk_cell_area_get_preferred_width_for_height (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
// void gtk_cell_area_get_preferred_width_for_height (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
GI_INLINE_DECL void get_preferred_width_for_height (Gtk::CellAreaContext context, Gtk::Widget widget, gint height, gint * minimum_width = nullptr, gint * natural_width = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_preferred_width_for_height (Gtk::CellAreaContext context, Gtk::Widget widget, gint height) noexcept;

// GtkSizeRequestMode gtk_cell_area_get_request_mode (GtkCellArea* area);
// ::GtkSizeRequestMode gtk_cell_area_get_request_mode (::GtkCellArea* area);
GI_INLINE_DECL Gtk::SizeRequestMode get_request_mode () noexcept;

// gboolean gtk_cell_area_has_renderer (GtkCellArea* area, GtkCellRenderer* renderer);
// gboolean gtk_cell_area_has_renderer (::GtkCellArea* area, ::GtkCellRenderer* renderer);
GI_INLINE_DECL bool has_renderer (Gtk::CellRenderer renderer) noexcept;

// void gtk_cell_area_inner_cell_area (GtkCellArea* area, GtkWidget* widget, const GdkRectangle* cell_area, GdkRectangle* inner_area);
// void gtk_cell_area_inner_cell_area (::GtkCellArea* area, ::GtkWidget* widget, const ::GdkRectangle* cell_area, ::GdkRectangle* inner_area);
GI_INLINE_DECL void inner_cell_area (Gtk::Widget widget, const Gdk::Rectangle & cell_area, Gdk::Rectangle & inner_area) noexcept;
GI_INLINE_DECL Gdk::Rectangle inner_cell_area (Gtk::Widget widget, const Gdk::Rectangle & cell_area) noexcept;

// gboolean gtk_cell_area_is_activatable (GtkCellArea* area);
// gboolean gtk_cell_area_is_activatable (::GtkCellArea* area);
GI_INLINE_DECL bool is_activatable () noexcept;

// gboolean gtk_cell_area_is_focus_sibling (GtkCellArea* area, GtkCellRenderer* renderer, GtkCellRenderer* sibling);
// gboolean gtk_cell_area_is_focus_sibling (::GtkCellArea* area, ::GtkCellRenderer* renderer, ::GtkCellRenderer* sibling);
GI_INLINE_DECL bool is_focus_sibling (Gtk::CellRenderer renderer, Gtk::CellRenderer sibling) noexcept;

// void gtk_cell_area_remove (GtkCellArea* area, GtkCellRenderer* renderer);
// void gtk_cell_area_remove (::GtkCellArea* area, ::GtkCellRenderer* renderer);
GI_INLINE_DECL void remove (Gtk::CellRenderer renderer) noexcept;

// void gtk_cell_area_remove_focus_sibling (GtkCellArea* area, GtkCellRenderer* renderer, GtkCellRenderer* sibling);
// void gtk_cell_area_remove_focus_sibling (::GtkCellArea* area, ::GtkCellRenderer* renderer, ::GtkCellRenderer* sibling);
GI_INLINE_DECL void remove_focus_sibling (Gtk::CellRenderer renderer, Gtk::CellRenderer sibling) noexcept;

// void gtk_cell_area_render (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, cairo_t* cr, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags, gboolean paint_focus);
// void gtk_cell_area_render (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, ::cairo_t* cr, const ::GdkRectangle* background_area, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags, gboolean paint_focus);
GI_INLINE_DECL void render (Gtk::CellAreaContext context, Gtk::Widget widget, cairo::Context cr, const Gdk::Rectangle & background_area, const Gdk::Rectangle & cell_area, Gtk::CellRendererState flags, gboolean paint_focus) noexcept;

// void gtk_cell_area_request_renderer (GtkCellArea* area, GtkCellRenderer* renderer, GtkOrientation orientation, GtkWidget* widget, gint for_size, gint* minimum_size, gint* natural_size);
// void gtk_cell_area_request_renderer (::GtkCellArea* area, ::GtkCellRenderer* renderer, ::GtkOrientation orientation, ::GtkWidget* widget, gint for_size, gint* minimum_size, gint* natural_size);
GI_INLINE_DECL void request_renderer (Gtk::CellRenderer renderer, Gtk::Orientation orientation, Gtk::Widget widget, gint for_size, gint * minimum_size = nullptr, gint * natural_size = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> request_renderer (Gtk::CellRenderer renderer, Gtk::Orientation orientation, Gtk::Widget widget, gint for_size) noexcept;

// void gtk_cell_area_set_focus_cell (GtkCellArea* area, GtkCellRenderer* renderer);
// void gtk_cell_area_set_focus_cell (::GtkCellArea* area, ::GtkCellRenderer* renderer);
GI_INLINE_DECL void set_focus_cell (Gtk::CellRenderer renderer) noexcept;

// void gtk_cell_area_stop_editing (GtkCellArea* area, gboolean canceled);
// void gtk_cell_area_stop_editing (::GtkCellArea* area, gboolean canceled);
GI_INLINE_DECL void stop_editing (gboolean canceled) noexcept;

gi::property_proxy<Gtk::CellEditable, base::CellAreaBase> property_edit_widget()
{ return gi::property_proxy<Gtk::CellEditable, base::CellAreaBase> (*this, "edit-widget"); }
const gi::property_proxy<Gtk::CellEditable, base::CellAreaBase> property_edit_widget() const
{ return gi::property_proxy<Gtk::CellEditable, base::CellAreaBase> (*this, "edit-widget"); }

gi::property_proxy<Gtk::CellRenderer, base::CellAreaBase> property_edited_cell()
{ return gi::property_proxy<Gtk::CellRenderer, base::CellAreaBase> (*this, "edited-cell"); }
const gi::property_proxy<Gtk::CellRenderer, base::CellAreaBase> property_edited_cell() const
{ return gi::property_proxy<Gtk::CellRenderer, base::CellAreaBase> (*this, "edited-cell"); }

gi::property_proxy<Gtk::CellRenderer, base::CellAreaBase> property_focus_cell()
{ return gi::property_proxy<Gtk::CellRenderer, base::CellAreaBase> (*this, "focus-cell"); }
const gi::property_proxy<Gtk::CellRenderer, base::CellAreaBase> property_focus_cell() const
{ return gi::property_proxy<Gtk::CellRenderer, base::CellAreaBase> (*this, "focus-cell"); }

// signal add-editable
gi::signal_proxy<void(Gtk::CellArea, Gtk::CellRenderer renderer, Gtk::CellEditable editable, Gdk::Rectangle cell_area, const std::string & path)> signal_add_editable()
{ return gi::signal_proxy<void(Gtk::CellArea, Gtk::CellRenderer renderer, Gtk::CellEditable editable, Gdk::Rectangle cell_area, const std::string & path)> (*this, "add-editable"); }

// signal apply-attributes
gi::signal_proxy<void(Gtk::CellArea, Gtk::TreeModel model, Gtk::TreeIter iter, gboolean is_expander, gboolean is_expanded)> signal_apply_attributes()
{ return gi::signal_proxy<void(Gtk::CellArea, Gtk::TreeModel model, Gtk::TreeIter iter, gboolean is_expander, gboolean is_expanded)> (*this, "apply-attributes"); }

// signal focus-changed
gi::signal_proxy<void(Gtk::CellArea, Gtk::CellRenderer renderer, const std::string & path)> signal_focus_changed()
{ return gi::signal_proxy<void(Gtk::CellArea, Gtk::CellRenderer renderer, const std::string & path)> (*this, "focus-changed"); }

// signal remove-editable
gi::signal_proxy<void(Gtk::CellArea, Gtk::CellRenderer renderer, Gtk::CellEditable editable)> signal_remove_editable()
{ return gi::signal_proxy<void(Gtk::CellArea, Gtk::CellRenderer renderer, Gtk::CellEditable editable)> (*this, "remove-editable"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellarea_extra_def.hpp>)
#include <gtk/cellarea_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellarea_extra.hpp>)
#include <gtk/cellarea_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CellArea : public GI_GTK_CELLAREA_BASE
{ typedef GI_GTK_CELLAREA_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCellArea>
{ typedef Gtk::CellArea type; }; 

} // namespace repository

} // namespace gi

#include "buildable.hpp"
#include "celllayout.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CellAreaClassDef
{
typedef CellAreaClassDef self;
public:
typedef Gtk::CellArea instance_type;
typedef ::GtkCellAreaClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean CellArea::activate (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, const GdkRectangle* cell_area, GtkCellRendererState flags, gboolean edit_only);
// gboolean CellArea::activate (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags, gboolean edit_only);
virtual bool activate_ (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle & cell_area, Gtk::CellRendererState flags, gboolean edit_only) noexcept = 0;

// void CellArea::add (GtkCellArea* area, GtkCellRenderer* renderer);
// void CellArea::add (::GtkCellArea* area, ::GtkCellRenderer* renderer);
virtual void add_ (Gtk::CellRenderer renderer) noexcept = 0;

// void CellArea::apply_attributes (GtkCellArea* area, GtkTreeModel* tree_model, GtkTreeIter* iter, gboolean is_expander, gboolean is_expanded);
// void CellArea::apply_attributes (::GtkCellArea* area, ::GtkTreeModel* tree_model, ::GtkTreeIter* iter, gboolean is_expander, gboolean is_expanded);
virtual void apply_attributes_ (Gtk::TreeModel tree_model, Gtk::TreeIter iter, gboolean is_expander, gboolean is_expanded) noexcept = 0;

// GtkCellAreaContext* CellArea::copy_context (GtkCellArea* area, GtkCellAreaContext* context);
// ::GtkCellAreaContext* CellArea::copy_context (::GtkCellArea* area, ::GtkCellAreaContext* context);
virtual Gtk::CellAreaContext copy_context_ (Gtk::CellAreaContext context) noexcept = 0;

// GtkCellAreaContext* CellArea::create_context (GtkCellArea* area);
// ::GtkCellAreaContext* CellArea::create_context (::GtkCellArea* area);
virtual Gtk::CellAreaContext create_context_ () noexcept = 0;

// gint CellArea::event (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, GdkEvent* event, const GdkRectangle* cell_area, GtkCellRendererState flags);
// gint CellArea::event (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget,  event, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// gboolean CellArea::focus (GtkCellArea* area, GtkDirectionType direction);
// gboolean CellArea::focus (::GtkCellArea* area, ::GtkDirectionType direction);
virtual bool focus_ (Gtk::DirectionType direction) noexcept = 0;

// void CellArea::foreach (GtkCellArea* area, GtkCellCallback callback, gpointer callback_data);
// void CellArea::foreach (::GtkCellArea* area, Gtk::CellCallback::cfunction_type callback, void* callback_data);
// SKIP; virtual-method callback parameter not supported

// void CellArea::foreach_alloc (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, const GdkRectangle* cell_area, const GdkRectangle* background_area, GtkCellAllocCallback callback, gpointer callback_data);
// void CellArea::foreach_alloc (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, const ::GdkRectangle* cell_area, const ::GdkRectangle* background_area, Gtk::CellAllocCallback::cfunction_type callback, void* callback_data);
// SKIP; virtual-method callback parameter not supported

// void CellArea::get_cell_property (GtkCellArea* area, GtkCellRenderer* renderer, guint property_id, GValue* value, GParamSpec* pspec);
// void CellArea::get_cell_property (::GtkCellArea* area, ::GtkCellRenderer* renderer, guint property_id, ::GValue* value, ::GParamSpec* pspec);
virtual void get_cell_property_ (Gtk::CellRenderer renderer, guint property_id, GObject::Value value, GObject::ParamSpec pspec) noexcept = 0;

// void CellArea::get_preferred_height (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, gint* minimum_height, gint* natural_height);
// void CellArea::get_preferred_height (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint* minimum_height, gint* natural_height);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void CellArea::get_preferred_height_for_width (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
// void CellArea::get_preferred_height_for_width (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void CellArea::get_preferred_width (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, gint* minimum_width, gint* natural_width);
// void CellArea::get_preferred_width (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint* minimum_width, gint* natural_width);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void CellArea::get_preferred_width_for_height (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
// void CellArea::get_preferred_width_for_height (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// GtkSizeRequestMode CellArea::get_request_mode (GtkCellArea* area);
// ::GtkSizeRequestMode CellArea::get_request_mode (::GtkCellArea* area);
virtual Gtk::SizeRequestMode get_request_mode_ () noexcept = 0;

// gboolean CellArea::is_activatable (GtkCellArea* area);
// gboolean CellArea::is_activatable (::GtkCellArea* area);
virtual bool is_activatable_ () noexcept = 0;

// void CellArea::remove (GtkCellArea* area, GtkCellRenderer* renderer);
// void CellArea::remove (::GtkCellArea* area, ::GtkCellRenderer* renderer);
virtual void remove_ (Gtk::CellRenderer renderer) noexcept = 0;

// void CellArea::render (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, cairo_t* cr, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags, gboolean paint_focus);
// void CellArea::render (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, ::cairo_t* cr, const ::GdkRectangle* background_area, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags, gboolean paint_focus);
virtual void render_ (Gtk::CellAreaContext context, Gtk::Widget widget, cairo::Context cr, const Gdk::Rectangle & background_area, const Gdk::Rectangle & cell_area, Gtk::CellRendererState flags, gboolean paint_focus) noexcept = 0;

// void CellArea::set_cell_property (GtkCellArea* area, GtkCellRenderer* renderer, guint property_id, const GValue* value, GParamSpec* pspec);
// void CellArea::set_cell_property (::GtkCellArea* area, ::GtkCellRenderer* renderer, guint property_id, const ::GValue* value, ::GParamSpec* pspec);
virtual void set_cell_property_ (Gtk::CellRenderer renderer, guint property_id, const GObject::Value & value, GObject::ParamSpec pspec) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class CellAreaClass: public detail::ClassTemplate<Gtk::impl::internal::CellAreaClassDef, GObject::impl::internal::InitiallyUnownedClass, Gtk::impl::internal::BuildableIfaceClassImpl, Gtk::impl::internal::CellLayoutIfaceClassImpl>
{
typedef CellAreaClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::CellAreaClassDef, GObject::impl::internal::InitiallyUnownedClass, Gtk::impl::internal::BuildableIfaceClassImpl, Gtk::impl::internal::CellLayoutIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::BuildableIfaceClassImpl GtkBuildableIface_type;
typedef Gtk::impl::internal::CellLayoutIfaceClassImpl GtkCellLayoutIface_type;


// gboolean CellArea::activate (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, const GdkRectangle* cell_area, GtkCellRendererState flags, gboolean edit_only);
// gboolean CellArea::activate (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags, gboolean edit_only);
GI_INLINE_DECL bool activate_ (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle & cell_area, Gtk::CellRendererState flags, gboolean edit_only) noexcept override;

// void CellArea::add (GtkCellArea* area, GtkCellRenderer* renderer);
// void CellArea::add (::GtkCellArea* area, ::GtkCellRenderer* renderer);
GI_INLINE_DECL void add_ (Gtk::CellRenderer renderer) noexcept override;

// void CellArea::apply_attributes (GtkCellArea* area, GtkTreeModel* tree_model, GtkTreeIter* iter, gboolean is_expander, gboolean is_expanded);
// void CellArea::apply_attributes (::GtkCellArea* area, ::GtkTreeModel* tree_model, ::GtkTreeIter* iter, gboolean is_expander, gboolean is_expanded);
GI_INLINE_DECL void apply_attributes_ (Gtk::TreeModel tree_model, Gtk::TreeIter iter, gboolean is_expander, gboolean is_expanded) noexcept override;

// GtkCellAreaContext* CellArea::copy_context (GtkCellArea* area, GtkCellAreaContext* context);
// ::GtkCellAreaContext* CellArea::copy_context (::GtkCellArea* area, ::GtkCellAreaContext* context);
GI_INLINE_DECL Gtk::CellAreaContext copy_context_ (Gtk::CellAreaContext context) noexcept override;

// GtkCellAreaContext* CellArea::create_context (GtkCellArea* area);
// ::GtkCellAreaContext* CellArea::create_context (::GtkCellArea* area);
GI_INLINE_DECL Gtk::CellAreaContext create_context_ () noexcept override;

// gint CellArea::event (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, GdkEvent* event, const GdkRectangle* cell_area, GtkCellRendererState flags);
// gint CellArea::event (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget,  event, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// gboolean CellArea::focus (GtkCellArea* area, GtkDirectionType direction);
// gboolean CellArea::focus (::GtkCellArea* area, ::GtkDirectionType direction);
GI_INLINE_DECL bool focus_ (Gtk::DirectionType direction) noexcept override;

// void CellArea::foreach (GtkCellArea* area, GtkCellCallback callback, gpointer callback_data);
// void CellArea::foreach (::GtkCellArea* area, Gtk::CellCallback::cfunction_type callback, void* callback_data);
// SKIP; virtual-method callback parameter not supported

// void CellArea::foreach_alloc (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, const GdkRectangle* cell_area, const GdkRectangle* background_area, GtkCellAllocCallback callback, gpointer callback_data);
// void CellArea::foreach_alloc (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, const ::GdkRectangle* cell_area, const ::GdkRectangle* background_area, Gtk::CellAllocCallback::cfunction_type callback, void* callback_data);
// SKIP; virtual-method callback parameter not supported

// void CellArea::get_cell_property (GtkCellArea* area, GtkCellRenderer* renderer, guint property_id, GValue* value, GParamSpec* pspec);
// void CellArea::get_cell_property (::GtkCellArea* area, ::GtkCellRenderer* renderer, guint property_id, ::GValue* value, ::GParamSpec* pspec);
GI_INLINE_DECL void get_cell_property_ (Gtk::CellRenderer renderer, guint property_id, GObject::Value value, GObject::ParamSpec pspec) noexcept override;

// void CellArea::get_preferred_height (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, gint* minimum_height, gint* natural_height);
// void CellArea::get_preferred_height (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint* minimum_height, gint* natural_height);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void CellArea::get_preferred_height_for_width (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
// void CellArea::get_preferred_height_for_width (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void CellArea::get_preferred_width (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, gint* minimum_width, gint* natural_width);
// void CellArea::get_preferred_width (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint* minimum_width, gint* natural_width);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void CellArea::get_preferred_width_for_height (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
// void CellArea::get_preferred_width_for_height (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// GtkSizeRequestMode CellArea::get_request_mode (GtkCellArea* area);
// ::GtkSizeRequestMode CellArea::get_request_mode (::GtkCellArea* area);
GI_INLINE_DECL Gtk::SizeRequestMode get_request_mode_ () noexcept override;

// gboolean CellArea::is_activatable (GtkCellArea* area);
// gboolean CellArea::is_activatable (::GtkCellArea* area);
GI_INLINE_DECL bool is_activatable_ () noexcept override;

// void CellArea::remove (GtkCellArea* area, GtkCellRenderer* renderer);
// void CellArea::remove (::GtkCellArea* area, ::GtkCellRenderer* renderer);
GI_INLINE_DECL void remove_ (Gtk::CellRenderer renderer) noexcept override;

// void CellArea::render (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, cairo_t* cr, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags, gboolean paint_focus);
// void CellArea::render (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, ::cairo_t* cr, const ::GdkRectangle* background_area, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags, gboolean paint_focus);
GI_INLINE_DECL void render_ (Gtk::CellAreaContext context, Gtk::Widget widget, cairo::Context cr, const Gdk::Rectangle & background_area, const Gdk::Rectangle & cell_area, Gtk::CellRendererState flags, gboolean paint_focus) noexcept override;

// void CellArea::set_cell_property (GtkCellArea* area, GtkCellRenderer* renderer, guint property_id, const GValue* value, GParamSpec* pspec);
// void CellArea::set_cell_property (::GtkCellArea* area, ::GtkCellRenderer* renderer, guint property_id, const ::GValue* value, ::GParamSpec* pspec);
GI_INLINE_DECL void set_cell_property_ (Gtk::CellRenderer renderer, guint property_id, const GObject::Value & value, GObject::ParamSpec pspec) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using CellAreaImpl = detail::ObjectImpl<CellArea, internal::CellAreaClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
