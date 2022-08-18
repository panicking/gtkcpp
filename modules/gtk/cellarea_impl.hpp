// AUTO-GENERATED

#ifndef _GI_GTK_CELLAREA_IMPL_HPP_
#define _GI_GTK_CELLAREA_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Buildable CellAreaBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

CellAreaBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

Gtk::CellLayout CellAreaBase::interface_ (gi::interface_tag<Gtk::CellLayout>)
{ return gi::wrap ((Gtk::CellLayout::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

CellAreaBase::operator Gtk::CellLayout ()
{ return interface_ (gi::interface_tag<Gtk::CellLayout>()); }

// gboolean gtk_cell_area_activate (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, const GdkRectangle* cell_area, GtkCellRendererState flags, gboolean edit_only);
// gboolean gtk_cell_area_activate (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags, gboolean edit_only);
bool base::CellAreaBase::activate (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle & cell_area, Gtk::CellRendererState flags, gboolean edit_only) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags, gboolean edit_only);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_activate;
  auto edit_only_to_c = edit_only;
  auto flags_to_c = gi::unwrap (flags);
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none, gi::direction_in);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (const ::GdkRectangle*) (cell_area_to_c), (::GtkCellRendererState) (flags_to_c), (gboolean) (edit_only_to_c));
  return _temp_ret;
}

// gboolean gtk_cell_area_activate_cell (GtkCellArea* area, GtkWidget* widget, GtkCellRenderer* renderer, GdkEvent* event, const GdkRectangle* cell_area, GtkCellRendererState flags);
// gboolean gtk_cell_area_activate_cell (::GtkCellArea* area, ::GtkWidget* widget, ::GtkCellRenderer* renderer,  event, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// void gtk_cell_area_add (GtkCellArea* area, GtkCellRenderer* renderer);
// void gtk_cell_area_add (::GtkCellArea* area, ::GtkCellRenderer* renderer);
void base::CellAreaBase::add (Gtk::CellRenderer renderer) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_add;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c));
}

// void gtk_cell_area_add_focus_sibling (GtkCellArea* area, GtkCellRenderer* renderer, GtkCellRenderer* sibling);
// void gtk_cell_area_add_focus_sibling (::GtkCellArea* area, ::GtkCellRenderer* renderer, ::GtkCellRenderer* sibling);
void base::CellAreaBase::add_focus_sibling (Gtk::CellRenderer renderer, Gtk::CellRenderer sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer, ::GtkCellRenderer* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_add_focus_sibling;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none, gi::direction_in);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (::GtkCellRenderer*) (sibling_to_c));
}

// void gtk_cell_area_add_with_properties (GtkCellArea* area, GtkCellRenderer* renderer, const gchar* first_prop_name);
// void gtk_cell_area_add_with_properties (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* first_prop_name);
// IGNORE; not introspectable, varargs not supported

// void gtk_cell_area_apply_attributes (GtkCellArea* area, GtkTreeModel* tree_model, GtkTreeIter* iter, gboolean is_expander, gboolean is_expanded);
// void gtk_cell_area_apply_attributes (::GtkCellArea* area, ::GtkTreeModel* tree_model, ::GtkTreeIter* iter, gboolean is_expander, gboolean is_expanded);
void base::CellAreaBase::apply_attributes (Gtk::TreeModel tree_model, Gtk::TreeIter iter, gboolean is_expander, gboolean is_expanded) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkTreeModel* tree_model, ::GtkTreeIter* iter, gboolean is_expander, gboolean is_expanded);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_apply_attributes;
  auto is_expanded_to_c = is_expanded;
  auto is_expander_to_c = is_expander;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto tree_model_to_c = gi::unwrap (tree_model, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkTreeModel*) (tree_model_to_c), (::GtkTreeIter*) (iter_to_c), (gboolean) (is_expander_to_c), (gboolean) (is_expanded_to_c));
}

// void gtk_cell_area_attribute_connect (GtkCellArea* area, GtkCellRenderer* renderer, const gchar* attribute, gint column);
// void gtk_cell_area_attribute_connect (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* attribute, gint column);
void base::CellAreaBase::attribute_connect (Gtk::CellRenderer renderer, const std::string & attribute, gint column) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* attribute, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_attribute_connect;
  auto column_to_c = column;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (const char*) (attribute_to_c), (gint) (column_to_c));
}

// void gtk_cell_area_attribute_disconnect (GtkCellArea* area, GtkCellRenderer* renderer, const gchar* attribute);
// void gtk_cell_area_attribute_disconnect (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* attribute);
void base::CellAreaBase::attribute_disconnect (Gtk::CellRenderer renderer, const std::string & attribute) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* attribute);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_attribute_disconnect;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (const char*) (attribute_to_c));
}

// gint gtk_cell_area_attribute_get_column (GtkCellArea* area, GtkCellRenderer* renderer, const gchar* attribute);
// gint gtk_cell_area_attribute_get_column (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* attribute);
gint base::CellAreaBase::attribute_get_column (Gtk::CellRenderer renderer, const std::string & attribute) noexcept
{
  typedef gint (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* attribute);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_attribute_get_column;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (const char*) (attribute_to_c));
  return _temp_ret;
}

// void gtk_cell_area_cell_get (GtkCellArea* area, GtkCellRenderer* renderer, const gchar* first_prop_name);
// void gtk_cell_area_cell_get (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* first_prop_name);
// IGNORE; not introspectable, varargs not supported

// void gtk_cell_area_cell_get_property (GtkCellArea* area, GtkCellRenderer* renderer, const gchar* property_name, GValue* value);
// void gtk_cell_area_cell_get_property (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* property_name, ::GValue* value);
void base::CellAreaBase::cell_get_property (Gtk::CellRenderer renderer, const std::string & property_name, GObject::Value value) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* property_name, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_cell_get_property;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none, gi::direction_in);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (const char*) (property_name_to_c), (::GValue*) (value_to_c));
}

// void gtk_cell_area_cell_get_valist (GtkCellArea* area, GtkCellRenderer* renderer, const gchar* first_property_name, va_list var_args);
// void gtk_cell_area_cell_get_valist (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* first_property_name,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// void gtk_cell_area_cell_set (GtkCellArea* area, GtkCellRenderer* renderer, const gchar* first_prop_name);
// void gtk_cell_area_cell_set (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* first_prop_name);
// IGNORE; not introspectable, varargs not supported

// void gtk_cell_area_cell_set_property (GtkCellArea* area, GtkCellRenderer* renderer, const gchar* property_name, const GValue* value);
// void gtk_cell_area_cell_set_property (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* property_name, const ::GValue* value);
void base::CellAreaBase::cell_set_property (Gtk::CellRenderer renderer, const std::string & property_name, const GObject::Value & value) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* property_name, const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_cell_set_property;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none, gi::direction_in);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (const char*) (property_name_to_c), (const ::GValue*) (value_to_c));
}

// void gtk_cell_area_cell_set_valist (GtkCellArea* area, GtkCellRenderer* renderer, const gchar* first_property_name, va_list var_args);
// void gtk_cell_area_cell_set_valist (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* first_property_name,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// GtkCellAreaContext* gtk_cell_area_copy_context (GtkCellArea* area, GtkCellAreaContext* context);
// ::GtkCellAreaContext* gtk_cell_area_copy_context (::GtkCellArea* area, ::GtkCellAreaContext* context);
Gtk::CellAreaContext base::CellAreaBase::copy_context (Gtk::CellAreaContext context) noexcept
{
  typedef ::GtkCellAreaContext* (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_copy_context;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkCellAreaContext* gtk_cell_area_create_context (GtkCellArea* area);
// ::GtkCellAreaContext* gtk_cell_area_create_context (::GtkCellArea* area);
Gtk::CellAreaContext base::CellAreaBase::create_context () noexcept
{
  typedef ::GtkCellAreaContext* (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_create_context;
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gint gtk_cell_area_event (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, GdkEvent* event, const GdkRectangle* cell_area, GtkCellRendererState flags);
// gint gtk_cell_area_event (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget,  event, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// gboolean gtk_cell_area_focus (GtkCellArea* area, GtkDirectionType direction);
// gboolean gtk_cell_area_focus (::GtkCellArea* area, ::GtkDirectionType direction);
bool base::CellAreaBase::focus (Gtk::DirectionType direction) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellArea* area, ::GtkDirectionType direction);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_focus;
  auto direction_to_c = gi::unwrap (direction);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkDirectionType) (direction_to_c));
  return _temp_ret;
}

// void gtk_cell_area_foreach (GtkCellArea* area, GtkCellCallback callback, gpointer callback_data);
// void gtk_cell_area_foreach (::GtkCellArea* area, Gtk::CellCallback::cfunction_type callback, void* callback_data);
void base::CellAreaBase::foreach (Gtk::CellCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, Gtk::CellCallback::cfunction_type callback, void* callback_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_foreach;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(callback_wrap_)>::type> callback_wrap__sp (callback_wrap_);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (Gtk::CellCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void gtk_cell_area_foreach_alloc (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, const GdkRectangle* cell_area, const GdkRectangle* background_area, GtkCellAllocCallback callback, gpointer callback_data);
// void gtk_cell_area_foreach_alloc (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, const ::GdkRectangle* cell_area, const ::GdkRectangle* background_area, Gtk::CellAllocCallback::cfunction_type callback, void* callback_data);
void base::CellAreaBase::foreach_alloc (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle & cell_area, const Gdk::Rectangle & background_area, Gtk::CellAllocCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, const ::GdkRectangle* cell_area, const ::GdkRectangle* background_area, Gtk::CellAllocCallback::cfunction_type callback, void* callback_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_foreach_alloc;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(callback_wrap_)>::type> callback_wrap__sp (callback_wrap_);
  auto background_area_to_c = gi::unwrap (background_area, gi::transfer_none, gi::direction_in);
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none, gi::direction_in);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (const ::GdkRectangle*) (cell_area_to_c), (const ::GdkRectangle*) (background_area_to_c), (Gtk::CellAllocCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void gtk_cell_area_get_cell_allocation (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, GtkCellRenderer* renderer, const GdkRectangle* cell_area, GdkRectangle* allocation);
// void gtk_cell_area_get_cell_allocation (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, ::GtkCellRenderer* renderer, const ::GdkRectangle* cell_area, ::GdkRectangle* allocation);
void base::CellAreaBase::get_cell_allocation (Gtk::CellAreaContext context, Gtk::Widget widget, Gtk::CellRenderer renderer, const Gdk::Rectangle & cell_area, Gdk::Rectangle & allocation) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, ::GtkCellRenderer* renderer, const ::GdkRectangle* cell_area, ::GdkRectangle* allocation);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_get_cell_allocation;
  traits::unset_wrapper<::GdkRectangle>::type allocation_c;
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none, gi::direction_in);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none, gi::direction_in);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (::GtkCellRenderer*) (renderer_to_c), (const ::GdkRectangle*) (cell_area_to_c), (::GdkRectangle*) ((::GdkRectangle*) &allocation_c));
  allocation = gi::wrap ((::GdkRectangle*) &allocation_c, gi::transfer_none, gi::direction_out);
}
Gdk::Rectangle base::CellAreaBase::get_cell_allocation (Gtk::CellAreaContext context, Gtk::Widget widget, Gtk::CellRenderer renderer, const Gdk::Rectangle & cell_area) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, ::GtkCellRenderer* renderer, const ::GdkRectangle* cell_area, ::GdkRectangle* allocation);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_get_cell_allocation;
  traits::unset_wrapper<::GdkRectangle>::type allocation_c;
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none, gi::direction_in);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none, gi::direction_in);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (::GtkCellRenderer*) (renderer_to_c), (const ::GdkRectangle*) (cell_area_to_c), (::GdkRectangle*) ((::GdkRectangle*) &allocation_c));
  return gi::wrap ((::GdkRectangle*) &allocation_c, gi::transfer_none, gi::direction_out);
}

// GtkCellRenderer* gtk_cell_area_get_cell_at_position (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, const GdkRectangle* cell_area, gint x, gint y, GdkRectangle* alloc_area);
// ::GtkCellRenderer* gtk_cell_area_get_cell_at_position (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, const ::GdkRectangle* cell_area, gint x, gint y, ::GdkRectangle* alloc_area);
Gtk::CellRenderer base::CellAreaBase::get_cell_at_position (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle & cell_area, gint x, gint y, Gdk::Rectangle * alloc_area) noexcept
{
  typedef ::GtkCellRenderer* (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, const ::GdkRectangle* cell_area, gint x, gint y, ::GdkRectangle* alloc_area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_get_cell_at_position;
  traits::unset_wrapper<::GdkRectangle>::type alloc_area_c;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none, gi::direction_in);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (const ::GdkRectangle*) (cell_area_to_c), (gint) (x_to_c), (gint) (y_to_c), (::GdkRectangle*) (alloc_area ? (::GdkRectangle*) &alloc_area_c : nullptr));
  if (alloc_area) *alloc_area = gi::wrap ((::GdkRectangle*) &alloc_area_c, gi::transfer_none, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
std::tuple<Gtk::CellRenderer, Gdk::Rectangle> base::CellAreaBase::get_cell_at_position (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle & cell_area, gint x, gint y) noexcept
{
  typedef ::GtkCellRenderer* (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, const ::GdkRectangle* cell_area, gint x, gint y, ::GdkRectangle* alloc_area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_get_cell_at_position;
  traits::unset_wrapper<::GdkRectangle>::type alloc_area_c;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none, gi::direction_in);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (const ::GdkRectangle*) (cell_area_to_c), (gint) (x_to_c), (gint) (y_to_c), (::GdkRectangle*) ((::GdkRectangle*) &alloc_area_c));
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out), gi::wrap ((::GdkRectangle*) &alloc_area_c, gi::transfer_none, gi::direction_out));
}

// const gchar* gtk_cell_area_get_current_path_string (GtkCellArea* area);
// const char* gtk_cell_area_get_current_path_string (::GtkCellArea* area);
std::string base::CellAreaBase::get_current_path_string () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_get_current_path_string;
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkCellEditable* gtk_cell_area_get_edit_widget (GtkCellArea* area);
// ::GtkCellEditable* gtk_cell_area_get_edit_widget (::GtkCellArea* area);
Gtk::CellEditable base::CellAreaBase::get_edit_widget () noexcept
{
  typedef ::GtkCellEditable* (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_get_edit_widget;
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkCellRenderer* gtk_cell_area_get_edited_cell (GtkCellArea* area);
// ::GtkCellRenderer* gtk_cell_area_get_edited_cell (::GtkCellArea* area);
Gtk::CellRenderer base::CellAreaBase::get_edited_cell () noexcept
{
  typedef ::GtkCellRenderer* (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_get_edited_cell;
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkCellRenderer* gtk_cell_area_get_focus_cell (GtkCellArea* area);
// ::GtkCellRenderer* gtk_cell_area_get_focus_cell (::GtkCellArea* area);
Gtk::CellRenderer base::CellAreaBase::get_focus_cell () noexcept
{
  typedef ::GtkCellRenderer* (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_get_focus_cell;
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkCellRenderer* gtk_cell_area_get_focus_from_sibling (GtkCellArea* area, GtkCellRenderer* renderer);
// ::GtkCellRenderer* gtk_cell_area_get_focus_from_sibling (::GtkCellArea* area, ::GtkCellRenderer* renderer);
Gtk::CellRenderer base::CellAreaBase::get_focus_from_sibling (Gtk::CellRenderer renderer) noexcept
{
  typedef ::GtkCellRenderer* (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_get_focus_from_sibling;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const GList* gtk_cell_area_get_focus_siblings (GtkCellArea* area, GtkCellRenderer* renderer);
// const ::GList* gtk_cell_area_get_focus_siblings (::GtkCellArea* area, ::GtkCellRenderer* renderer);
std::vector<Gtk::CellRenderer> base::CellAreaBase::get_focus_siblings (Gtk::CellRenderer renderer) noexcept
{
  typedef const ::GList* (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_get_focus_siblings;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c));
  return gi::detail::wrap_list<Gtk::CellRenderer> (_temp_ret, gi::transfer_none);
}

// void gtk_cell_area_get_preferred_height (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, gint* minimum_height, gint* natural_height);
// void gtk_cell_area_get_preferred_height (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint* minimum_height, gint* natural_height);
void base::CellAreaBase::get_preferred_height (Gtk::CellAreaContext context, Gtk::Widget widget, gint * minimum_height, gint * natural_height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_get_preferred_height;
  gint natural_height_o {};
  gint minimum_height_o {};
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (gint*) (minimum_height ? &minimum_height_o : nullptr), (gint*) (natural_height ? &natural_height_o : nullptr));
  if (natural_height) *natural_height = natural_height_o;
  if (minimum_height) *minimum_height = minimum_height_o;
}
std::tuple<gint, gint> base::CellAreaBase::get_preferred_height (Gtk::CellAreaContext context, Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_get_preferred_height;
  gint natural_height_o {};
  gint minimum_height_o {};
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (gint*) (&minimum_height_o), (gint*) (&natural_height_o));
  return std::make_tuple (minimum_height_o, natural_height_o);
}

// void gtk_cell_area_get_preferred_height_for_width (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
// void gtk_cell_area_get_preferred_height_for_width (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
void base::CellAreaBase::get_preferred_height_for_width (Gtk::CellAreaContext context, Gtk::Widget widget, gint width, gint * minimum_height, gint * natural_height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_get_preferred_height_for_width;
  gint natural_height_o {};
  gint minimum_height_o {};
  auto width_to_c = width;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (gint) (width_to_c), (gint*) (minimum_height ? &minimum_height_o : nullptr), (gint*) (natural_height ? &natural_height_o : nullptr));
  if (natural_height) *natural_height = natural_height_o;
  if (minimum_height) *minimum_height = minimum_height_o;
}
std::tuple<gint, gint> base::CellAreaBase::get_preferred_height_for_width (Gtk::CellAreaContext context, Gtk::Widget widget, gint width) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_get_preferred_height_for_width;
  gint natural_height_o {};
  gint minimum_height_o {};
  auto width_to_c = width;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (gint) (width_to_c), (gint*) (&minimum_height_o), (gint*) (&natural_height_o));
  return std::make_tuple (minimum_height_o, natural_height_o);
}

// void gtk_cell_area_get_preferred_width (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, gint* minimum_width, gint* natural_width);
// void gtk_cell_area_get_preferred_width (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint* minimum_width, gint* natural_width);
void base::CellAreaBase::get_preferred_width (Gtk::CellAreaContext context, Gtk::Widget widget, gint * minimum_width, gint * natural_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_get_preferred_width;
  gint natural_width_o {};
  gint minimum_width_o {};
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (gint*) (minimum_width ? &minimum_width_o : nullptr), (gint*) (natural_width ? &natural_width_o : nullptr));
  if (natural_width) *natural_width = natural_width_o;
  if (minimum_width) *minimum_width = minimum_width_o;
}
std::tuple<gint, gint> base::CellAreaBase::get_preferred_width (Gtk::CellAreaContext context, Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_get_preferred_width;
  gint natural_width_o {};
  gint minimum_width_o {};
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (gint*) (&minimum_width_o), (gint*) (&natural_width_o));
  return std::make_tuple (minimum_width_o, natural_width_o);
}

// void gtk_cell_area_get_preferred_width_for_height (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
// void gtk_cell_area_get_preferred_width_for_height (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
void base::CellAreaBase::get_preferred_width_for_height (Gtk::CellAreaContext context, Gtk::Widget widget, gint height, gint * minimum_width, gint * natural_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_get_preferred_width_for_height;
  gint natural_width_o {};
  gint minimum_width_o {};
  auto height_to_c = height;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (gint) (height_to_c), (gint*) (minimum_width ? &minimum_width_o : nullptr), (gint*) (natural_width ? &natural_width_o : nullptr));
  if (natural_width) *natural_width = natural_width_o;
  if (minimum_width) *minimum_width = minimum_width_o;
}
std::tuple<gint, gint> base::CellAreaBase::get_preferred_width_for_height (Gtk::CellAreaContext context, Gtk::Widget widget, gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_get_preferred_width_for_height;
  gint natural_width_o {};
  gint minimum_width_o {};
  auto height_to_c = height;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (gint) (height_to_c), (gint*) (&minimum_width_o), (gint*) (&natural_width_o));
  return std::make_tuple (minimum_width_o, natural_width_o);
}

// GtkSizeRequestMode gtk_cell_area_get_request_mode (GtkCellArea* area);
// ::GtkSizeRequestMode gtk_cell_area_get_request_mode (::GtkCellArea* area);
Gtk::SizeRequestMode base::CellAreaBase::get_request_mode () noexcept
{
  typedef ::GtkSizeRequestMode (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_get_request_mode;
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_cell_area_has_renderer (GtkCellArea* area, GtkCellRenderer* renderer);
// gboolean gtk_cell_area_has_renderer (::GtkCellArea* area, ::GtkCellRenderer* renderer);
bool base::CellAreaBase::has_renderer (Gtk::CellRenderer renderer) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_has_renderer;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c));
  return _temp_ret;
}

// void gtk_cell_area_inner_cell_area (GtkCellArea* area, GtkWidget* widget, const GdkRectangle* cell_area, GdkRectangle* inner_area);
// void gtk_cell_area_inner_cell_area (::GtkCellArea* area, ::GtkWidget* widget, const ::GdkRectangle* cell_area, ::GdkRectangle* inner_area);
void base::CellAreaBase::inner_cell_area (Gtk::Widget widget, const Gdk::Rectangle & cell_area, Gdk::Rectangle & inner_area) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkWidget* widget, const ::GdkRectangle* cell_area, ::GdkRectangle* inner_area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_inner_cell_area;
  traits::unset_wrapper<::GdkRectangle>::type inner_area_c;
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none, gi::direction_in);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkWidget*) (widget_to_c), (const ::GdkRectangle*) (cell_area_to_c), (::GdkRectangle*) ((::GdkRectangle*) &inner_area_c));
  inner_area = gi::wrap ((::GdkRectangle*) &inner_area_c, gi::transfer_none, gi::direction_out);
}
Gdk::Rectangle base::CellAreaBase::inner_cell_area (Gtk::Widget widget, const Gdk::Rectangle & cell_area) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkWidget* widget, const ::GdkRectangle* cell_area, ::GdkRectangle* inner_area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_inner_cell_area;
  traits::unset_wrapper<::GdkRectangle>::type inner_area_c;
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none, gi::direction_in);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkWidget*) (widget_to_c), (const ::GdkRectangle*) (cell_area_to_c), (::GdkRectangle*) ((::GdkRectangle*) &inner_area_c));
  return gi::wrap ((::GdkRectangle*) &inner_area_c, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_cell_area_is_activatable (GtkCellArea* area);
// gboolean gtk_cell_area_is_activatable (::GtkCellArea* area);
bool base::CellAreaBase::is_activatable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_is_activatable;
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_cell_area_is_focus_sibling (GtkCellArea* area, GtkCellRenderer* renderer, GtkCellRenderer* sibling);
// gboolean gtk_cell_area_is_focus_sibling (::GtkCellArea* area, ::GtkCellRenderer* renderer, ::GtkCellRenderer* sibling);
bool base::CellAreaBase::is_focus_sibling (Gtk::CellRenderer renderer, Gtk::CellRenderer sibling) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer, ::GtkCellRenderer* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_is_focus_sibling;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none, gi::direction_in);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (::GtkCellRenderer*) (sibling_to_c));
  return _temp_ret;
}

// void gtk_cell_area_remove (GtkCellArea* area, GtkCellRenderer* renderer);
// void gtk_cell_area_remove (::GtkCellArea* area, ::GtkCellRenderer* renderer);
void base::CellAreaBase::remove (Gtk::CellRenderer renderer) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_remove;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c));
}

// void gtk_cell_area_remove_focus_sibling (GtkCellArea* area, GtkCellRenderer* renderer, GtkCellRenderer* sibling);
// void gtk_cell_area_remove_focus_sibling (::GtkCellArea* area, ::GtkCellRenderer* renderer, ::GtkCellRenderer* sibling);
void base::CellAreaBase::remove_focus_sibling (Gtk::CellRenderer renderer, Gtk::CellRenderer sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer, ::GtkCellRenderer* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_remove_focus_sibling;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none, gi::direction_in);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (::GtkCellRenderer*) (sibling_to_c));
}

// void gtk_cell_area_render (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, cairo_t* cr, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags, gboolean paint_focus);
// void gtk_cell_area_render (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, ::cairo_t* cr, const ::GdkRectangle* background_area, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags, gboolean paint_focus);
void base::CellAreaBase::render (Gtk::CellAreaContext context, Gtk::Widget widget, cairo::Context cr, const Gdk::Rectangle & background_area, const Gdk::Rectangle & cell_area, Gtk::CellRendererState flags, gboolean paint_focus) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, ::cairo_t* cr, const ::GdkRectangle* background_area, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags, gboolean paint_focus);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_render;
  auto paint_focus_to_c = paint_focus;
  auto flags_to_c = gi::unwrap (flags);
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none, gi::direction_in);
  auto background_area_to_c = gi::unwrap (background_area, gi::transfer_none, gi::direction_in);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (::cairo_t*) (cr_to_c), (const ::GdkRectangle*) (background_area_to_c), (const ::GdkRectangle*) (cell_area_to_c), (::GtkCellRendererState) (flags_to_c), (gboolean) (paint_focus_to_c));
}

// void gtk_cell_area_request_renderer (GtkCellArea* area, GtkCellRenderer* renderer, GtkOrientation orientation, GtkWidget* widget, gint for_size, gint* minimum_size, gint* natural_size);
// void gtk_cell_area_request_renderer (::GtkCellArea* area, ::GtkCellRenderer* renderer, ::GtkOrientation orientation, ::GtkWidget* widget, gint for_size, gint* minimum_size, gint* natural_size);
void base::CellAreaBase::request_renderer (Gtk::CellRenderer renderer, Gtk::Orientation orientation, Gtk::Widget widget, gint for_size, gint * minimum_size, gint * natural_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer, ::GtkOrientation orientation, ::GtkWidget* widget, gint for_size, gint* minimum_size, gint* natural_size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_request_renderer;
  gint natural_size_o {};
  gint minimum_size_o {};
  auto for_size_to_c = for_size;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto orientation_to_c = gi::unwrap (orientation);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (::GtkOrientation) (orientation_to_c), (::GtkWidget*) (widget_to_c), (gint) (for_size_to_c), (gint*) (minimum_size ? &minimum_size_o : nullptr), (gint*) (natural_size ? &natural_size_o : nullptr));
  if (natural_size) *natural_size = natural_size_o;
  if (minimum_size) *minimum_size = minimum_size_o;
}
std::tuple<gint, gint> base::CellAreaBase::request_renderer (Gtk::CellRenderer renderer, Gtk::Orientation orientation, Gtk::Widget widget, gint for_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer, ::GtkOrientation orientation, ::GtkWidget* widget, gint for_size, gint* minimum_size, gint* natural_size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_request_renderer;
  gint natural_size_o {};
  gint minimum_size_o {};
  auto for_size_to_c = for_size;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto orientation_to_c = gi::unwrap (orientation);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (::GtkOrientation) (orientation_to_c), (::GtkWidget*) (widget_to_c), (gint) (for_size_to_c), (gint*) (&minimum_size_o), (gint*) (&natural_size_o));
  return std::make_tuple (minimum_size_o, natural_size_o);
}

// void gtk_cell_area_set_focus_cell (GtkCellArea* area, GtkCellRenderer* renderer);
// void gtk_cell_area_set_focus_cell (::GtkCellArea* area, ::GtkCellRenderer* renderer);
void base::CellAreaBase::set_focus_cell (Gtk::CellRenderer renderer) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_set_focus_cell;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c));
}

// void gtk_cell_area_stop_editing (GtkCellArea* area, gboolean canceled);
// void gtk_cell_area_stop_editing (::GtkCellArea* area, gboolean canceled);
void base::CellAreaBase::stop_editing (gboolean canceled) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, gboolean canceled);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_stop_editing;
  auto canceled_to_c = canceled;
  call_wrap_v ((::GtkCellArea*) (gobj_()), (gboolean) (canceled_to_c));
}






} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellarea_extra_def_impl.hpp>)
#include <gtk/cellarea_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellarea_extra_impl.hpp>)
#include <gtk/cellarea_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CellAreaClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkCellAreaClass *methods = (::GtkCellAreaClass *) class_struct;
  (void) methods;

  methods->activate = (decltype (methods->activate)) detail::method_wrapper<self, bool (*) (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle & cell_area, Gtk::CellRendererState flags, gboolean edit_only), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::activate_>;
  methods->add = (decltype (methods->add)) detail::method_wrapper<self, void (*) (Gtk::CellRenderer renderer), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::add_>;
  methods->apply_attributes = (decltype (methods->apply_attributes)) detail::method_wrapper<self, void (*) (Gtk::TreeModel tree_model, Gtk::TreeIter iter, gboolean is_expander, gboolean is_expanded), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::apply_attributes_>;
  methods->copy_context = (decltype (methods->copy_context)) detail::method_wrapper<self, Gtk::CellAreaContext (*) (Gtk::CellAreaContext context), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::copy_context_>;
  methods->create_context = (decltype (methods->create_context)) detail::method_wrapper<self, Gtk::CellAreaContext (*) (), gi::transfer_full_t>::wrapper<&self::create_context_>;
  methods->focus = (decltype (methods->focus)) detail::method_wrapper<self, bool (*) (Gtk::DirectionType direction), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::focus_>;
  methods->get_cell_property = (decltype (methods->get_cell_property)) detail::method_wrapper<self, void (*) (Gtk::CellRenderer renderer, guint property_id, GObject::Value value, GObject::ParamSpec pspec), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_cell_property_>;
  methods->get_request_mode = (decltype (methods->get_request_mode)) detail::method_wrapper<self, Gtk::SizeRequestMode (*) (), gi::transfer_none_t>::wrapper<&self::get_request_mode_>;
  methods->is_activatable = (decltype (methods->is_activatable)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::is_activatable_>;
  methods->remove = (decltype (methods->remove)) detail::method_wrapper<self, void (*) (Gtk::CellRenderer renderer), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::remove_>;
  methods->render = (decltype (methods->render)) detail::method_wrapper<self, void (*) (Gtk::CellAreaContext context, Gtk::Widget widget, cairo::Context cr, const Gdk::Rectangle & background_area, const Gdk::Rectangle & cell_area, Gtk::CellRendererState flags, gboolean paint_focus), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::render_>;
  methods->set_cell_property = (decltype (methods->set_cell_property)) detail::method_wrapper<self, void (*) (Gtk::CellRenderer renderer, guint property_id, const GObject::Value & value, GObject::ParamSpec pspec), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::set_cell_property_>;
}

// gboolean CellArea::activate (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, const GdkRectangle* cell_area, GtkCellRendererState flags, gboolean edit_only);
// gboolean CellArea::activate (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags, gboolean edit_only);
bool CellAreaClass::activate_ (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle & cell_area, Gtk::CellRendererState flags, gboolean edit_only) noexcept
{
  if (!get_struct_()->activate) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags, gboolean edit_only);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate;
  auto edit_only_to_c = edit_only;
  auto flags_to_c = gi::unwrap (flags);
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none, gi::direction_in);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (const ::GdkRectangle*) (cell_area_to_c), (::GtkCellRendererState) (flags_to_c), (gboolean) (edit_only_to_c));
  return _temp_ret;
}

// void CellArea::add (GtkCellArea* area, GtkCellRenderer* renderer);
// void CellArea::add (::GtkCellArea* area, ::GtkCellRenderer* renderer);
void CellAreaClass::add_ (Gtk::CellRenderer renderer) noexcept
{
  if (!get_struct_()->add) return ;
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->add;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c));
}

// void CellArea::apply_attributes (GtkCellArea* area, GtkTreeModel* tree_model, GtkTreeIter* iter, gboolean is_expander, gboolean is_expanded);
// void CellArea::apply_attributes (::GtkCellArea* area, ::GtkTreeModel* tree_model, ::GtkTreeIter* iter, gboolean is_expander, gboolean is_expanded);
void CellAreaClass::apply_attributes_ (Gtk::TreeModel tree_model, Gtk::TreeIter iter, gboolean is_expander, gboolean is_expanded) noexcept
{
  if (!get_struct_()->apply_attributes) return ;
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkTreeModel* tree_model, ::GtkTreeIter* iter, gboolean is_expander, gboolean is_expanded);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->apply_attributes;
  auto is_expanded_to_c = is_expanded;
  auto is_expander_to_c = is_expander;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto tree_model_to_c = gi::unwrap (tree_model, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkTreeModel*) (tree_model_to_c), (::GtkTreeIter*) (iter_to_c), (gboolean) (is_expander_to_c), (gboolean) (is_expanded_to_c));
}

// GtkCellAreaContext* CellArea::copy_context (GtkCellArea* area, GtkCellAreaContext* context);
// ::GtkCellAreaContext* CellArea::copy_context (::GtkCellArea* area, ::GtkCellAreaContext* context);
Gtk::CellAreaContext CellAreaClass::copy_context_ (Gtk::CellAreaContext context) noexcept
{
  if (!get_struct_()->copy_context) return Gtk::CellAreaContext{};
  typedef ::GtkCellAreaContext* (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->copy_context;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkCellAreaContext* CellArea::create_context (GtkCellArea* area);
// ::GtkCellAreaContext* CellArea::create_context (::GtkCellArea* area);
Gtk::CellAreaContext CellAreaClass::create_context_ () noexcept
{
  if (!get_struct_()->create_context) return Gtk::CellAreaContext{};
  typedef ::GtkCellAreaContext* (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->create_context;
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gint CellArea::event (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, GdkEvent* event, const GdkRectangle* cell_area, GtkCellRendererState flags);
// gint CellArea::event (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget,  event, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// gboolean CellArea::focus (GtkCellArea* area, GtkDirectionType direction);
// gboolean CellArea::focus (::GtkCellArea* area, ::GtkDirectionType direction);
bool CellAreaClass::focus_ (Gtk::DirectionType direction) noexcept
{
  if (!get_struct_()->focus) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkCellArea* area, ::GtkDirectionType direction);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->focus;
  auto direction_to_c = gi::unwrap (direction);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkDirectionType) (direction_to_c));
  return _temp_ret;
}

// void CellArea::foreach (GtkCellArea* area, GtkCellCallback callback, gpointer callback_data);
// void CellArea::foreach (::GtkCellArea* area, Gtk::CellCallback::cfunction_type callback, void* callback_data);
// SKIP; virtual-method callback parameter not supported

// void CellArea::foreach_alloc (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, const GdkRectangle* cell_area, const GdkRectangle* background_area, GtkCellAllocCallback callback, gpointer callback_data);
// void CellArea::foreach_alloc (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, const ::GdkRectangle* cell_area, const ::GdkRectangle* background_area, Gtk::CellAllocCallback::cfunction_type callback, void* callback_data);
// SKIP; virtual-method callback parameter not supported

// void CellArea::get_cell_property (GtkCellArea* area, GtkCellRenderer* renderer, guint property_id, GValue* value, GParamSpec* pspec);
// void CellArea::get_cell_property (::GtkCellArea* area, ::GtkCellRenderer* renderer, guint property_id, ::GValue* value, ::GParamSpec* pspec);
void CellAreaClass::get_cell_property_ (Gtk::CellRenderer renderer, guint property_id, GObject::Value value, GObject::ParamSpec pspec) noexcept
{
  if (!get_struct_()->get_cell_property) return ;
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer, guint property_id, ::GValue* value, ::GParamSpec* pspec);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_cell_property;
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto property_id_to_c = property_id;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (guint) (property_id_to_c), (::GValue*) (value_to_c), (::GParamSpec*) (pspec_to_c));
}

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
Gtk::SizeRequestMode CellAreaClass::get_request_mode_ () noexcept
{
  if (!get_struct_()->get_request_mode) return Gtk::SizeRequestMode{};
  typedef ::GtkSizeRequestMode (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_request_mode;
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean CellArea::is_activatable (GtkCellArea* area);
// gboolean CellArea::is_activatable (::GtkCellArea* area);
bool CellAreaClass::is_activatable_ () noexcept
{
  if (!get_struct_()->is_activatable) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_activatable;
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()));
  return _temp_ret;
}

// void CellArea::remove (GtkCellArea* area, GtkCellRenderer* renderer);
// void CellArea::remove (::GtkCellArea* area, ::GtkCellRenderer* renderer);
void CellAreaClass::remove_ (Gtk::CellRenderer renderer) noexcept
{
  if (!get_struct_()->remove) return ;
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->remove;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c));
}

// void CellArea::render (GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, cairo_t* cr, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags, gboolean paint_focus);
// void CellArea::render (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, ::cairo_t* cr, const ::GdkRectangle* background_area, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags, gboolean paint_focus);
void CellAreaClass::render_ (Gtk::CellAreaContext context, Gtk::Widget widget, cairo::Context cr, const Gdk::Rectangle & background_area, const Gdk::Rectangle & cell_area, Gtk::CellRendererState flags, gboolean paint_focus) noexcept
{
  if (!get_struct_()->render) return ;
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, ::cairo_t* cr, const ::GdkRectangle* background_area, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags, gboolean paint_focus);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->render;
  auto paint_focus_to_c = paint_focus;
  auto flags_to_c = gi::unwrap (flags);
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none, gi::direction_in);
  auto background_area_to_c = gi::unwrap (background_area, gi::transfer_none, gi::direction_in);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (::cairo_t*) (cr_to_c), (const ::GdkRectangle*) (background_area_to_c), (const ::GdkRectangle*) (cell_area_to_c), (::GtkCellRendererState) (flags_to_c), (gboolean) (paint_focus_to_c));
}

// void CellArea::set_cell_property (GtkCellArea* area, GtkCellRenderer* renderer, guint property_id, const GValue* value, GParamSpec* pspec);
// void CellArea::set_cell_property (::GtkCellArea* area, ::GtkCellRenderer* renderer, guint property_id, const ::GValue* value, ::GParamSpec* pspec);
void CellAreaClass::set_cell_property_ (Gtk::CellRenderer renderer, guint property_id, const GObject::Value & value, GObject::ParamSpec pspec) noexcept
{
  if (!get_struct_()->set_cell_property) return ;
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer, guint property_id, const ::GValue* value, ::GParamSpec* pspec);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_cell_property;
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto property_id_to_c = property_id;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (guint) (property_id_to_c), (const ::GValue*) (value_to_c), (::GParamSpec*) (pspec_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
