// AUTO-GENERATED

#ifndef _GI_GTK_CONTAINER_IMPL_HPP_
#define _GI_GTK_CONTAINER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_container_add (GtkContainer* container, GtkWidget* widget);
// void gtk_container_add (::GtkContainer* container, ::GtkWidget* widget);
void base::ContainerBase::add (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkContainer* container, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_add;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkContainer*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void gtk_container_add_with_properties (GtkContainer* container, GtkWidget* widget, const gchar* first_prop_name);
// void gtk_container_add_with_properties (::GtkContainer* container, ::GtkWidget* widget, const char* first_prop_name);
// IGNORE; not introspectable, varargs not supported

// void gtk_container_check_resize (GtkContainer* container);
// void gtk_container_check_resize (::GtkContainer* container);
void base::ContainerBase::check_resize () noexcept
{
  typedef void (*call_wrap_t) (::GtkContainer* container);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_check_resize;
  call_wrap_v ((::GtkContainer*) (gobj_()));
}

// void gtk_container_child_get (GtkContainer* container, GtkWidget* child, const gchar* first_prop_name);
// void gtk_container_child_get (::GtkContainer* container, ::GtkWidget* child, const char* first_prop_name);
// IGNORE; not introspectable, varargs not supported

// void gtk_container_child_get_property (GtkContainer* container, GtkWidget* child, const gchar* property_name, GValue* value);
// void gtk_container_child_get_property (::GtkContainer* container, ::GtkWidget* child, const char* property_name, ::GValue* value);
void base::ContainerBase::child_get_property (Gtk::Widget child, const std::string & property_name, GObject::Value value) noexcept
{
  typedef void (*call_wrap_t) (::GtkContainer* container, ::GtkWidget* child, const char* property_name, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_child_get_property;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkContainer*) (gobj_()), (::GtkWidget*) (child_to_c), (const char*) (property_name_to_c), (::GValue*) (value_to_c));
}

// void gtk_container_child_get_valist (GtkContainer* container, GtkWidget* child, const gchar* first_property_name, va_list var_args);
// void gtk_container_child_get_valist (::GtkContainer* container, ::GtkWidget* child, const char* first_property_name,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// void gtk_container_child_notify (GtkContainer* container, GtkWidget* child, const gchar* child_property);
// void gtk_container_child_notify (::GtkContainer* container, ::GtkWidget* child, const char* child_property);
void base::ContainerBase::child_notify (Gtk::Widget child, const std::string & child_property) noexcept
{
  typedef void (*call_wrap_t) (::GtkContainer* container, ::GtkWidget* child, const char* child_property);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_child_notify;
  auto child_property_to_c = gi::unwrap (child_property, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkContainer*) (gobj_()), (::GtkWidget*) (child_to_c), (const char*) (child_property_to_c));
}

// void gtk_container_child_notify_by_pspec (GtkContainer* container, GtkWidget* child, GParamSpec* pspec);
// void gtk_container_child_notify_by_pspec (::GtkContainer* container, ::GtkWidget* child, ::GParamSpec* pspec);
void base::ContainerBase::child_notify_by_pspec (Gtk::Widget child, GObject::ParamSpec pspec) noexcept
{
  typedef void (*call_wrap_t) (::GtkContainer* container, ::GtkWidget* child, ::GParamSpec* pspec);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_child_notify_by_pspec;
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkContainer*) (gobj_()), (::GtkWidget*) (child_to_c), (::GParamSpec*) (pspec_to_c));
}

// void gtk_container_child_set (GtkContainer* container, GtkWidget* child, const gchar* first_prop_name);
// void gtk_container_child_set (::GtkContainer* container, ::GtkWidget* child, const char* first_prop_name);
// IGNORE; not introspectable, varargs not supported

// void gtk_container_child_set_property (GtkContainer* container, GtkWidget* child, const gchar* property_name, const GValue* value);
// void gtk_container_child_set_property (::GtkContainer* container, ::GtkWidget* child, const char* property_name, const ::GValue* value);
void base::ContainerBase::child_set_property (Gtk::Widget child, const std::string & property_name, const GObject::Value & value) noexcept
{
  typedef void (*call_wrap_t) (::GtkContainer* container, ::GtkWidget* child, const char* property_name, const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_child_set_property;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkContainer*) (gobj_()), (::GtkWidget*) (child_to_c), (const char*) (property_name_to_c), (const ::GValue*) (value_to_c));
}

// void gtk_container_child_set_valist (GtkContainer* container, GtkWidget* child, const gchar* first_property_name, va_list var_args);
// void gtk_container_child_set_valist (::GtkContainer* container, ::GtkWidget* child, const char* first_property_name,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// GType gtk_container_child_type (GtkContainer* container);
// GType gtk_container_child_type (::GtkContainer* container);
GType base::ContainerBase::child_type () noexcept
{
  typedef GType (*call_wrap_t) (::GtkContainer* container);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_child_type;
  auto _temp_ret = call_wrap_v ((::GtkContainer*) (gobj_()));
  return _temp_ret;
}

// void gtk_container_forall (GtkContainer* container, GtkCallback callback, gpointer callback_data);
// void gtk_container_forall (::GtkContainer* container, Gtk::Callback::cfunction_type callback, void* callback_data);
void base::ContainerBase::forall (Gtk::Callback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkContainer* container, Gtk::Callback::cfunction_type callback, void* callback_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_forall;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(callback_wrap_)>::type> callback_wrap__sp (callback_wrap_);
  call_wrap_v ((::GtkContainer*) (gobj_()), (Gtk::Callback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void gtk_container_foreach (GtkContainer* container, GtkCallback callback, gpointer callback_data);
// void gtk_container_foreach (::GtkContainer* container, Gtk::Callback::cfunction_type callback, void* callback_data);
void base::ContainerBase::foreach (Gtk::Callback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkContainer* container, Gtk::Callback::cfunction_type callback, void* callback_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_foreach;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(callback_wrap_)>::type> callback_wrap__sp (callback_wrap_);
  call_wrap_v ((::GtkContainer*) (gobj_()), (Gtk::Callback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// guint gtk_container_get_border_width (GtkContainer* container);
// guint gtk_container_get_border_width (::GtkContainer* container);
guint base::ContainerBase::get_border_width () noexcept
{
  typedef guint (*call_wrap_t) (::GtkContainer* container);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_get_border_width;
  auto _temp_ret = call_wrap_v ((::GtkContainer*) (gobj_()));
  return _temp_ret;
}

// GList* gtk_container_get_children (GtkContainer* container);
// ::GList* gtk_container_get_children (::GtkContainer* container);
std::vector<Gtk::Widget> base::ContainerBase::get_children () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkContainer* container);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_get_children;
  auto _temp_ret = call_wrap_v ((::GtkContainer*) (gobj_()));
  return gi::detail::wrap_list<Gtk::Widget> (_temp_ret, gi::transfer_container);
}

// gboolean gtk_container_get_focus_chain (GtkContainer* container, GList** focusable_widgets);
// gboolean gtk_container_get_focus_chain (::GtkContainer* container, ::GList** focusable_widgets);
// IGNORE; deprecated

// GtkWidget* gtk_container_get_focus_child (GtkContainer* container);
// ::GtkWidget* gtk_container_get_focus_child (::GtkContainer* container);
Gtk::Widget base::ContainerBase::get_focus_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkContainer* container);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_get_focus_child;
  auto _temp_ret = call_wrap_v ((::GtkContainer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkAdjustment* gtk_container_get_focus_hadjustment (GtkContainer* container);
// ::GtkAdjustment* gtk_container_get_focus_hadjustment (::GtkContainer* container);
Gtk::Adjustment base::ContainerBase::get_focus_hadjustment () noexcept
{
  typedef ::GtkAdjustment* (*call_wrap_t) (::GtkContainer* container);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_get_focus_hadjustment;
  auto _temp_ret = call_wrap_v ((::GtkContainer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkAdjustment* gtk_container_get_focus_vadjustment (GtkContainer* container);
// ::GtkAdjustment* gtk_container_get_focus_vadjustment (::GtkContainer* container);
Gtk::Adjustment base::ContainerBase::get_focus_vadjustment () noexcept
{
  typedef ::GtkAdjustment* (*call_wrap_t) (::GtkContainer* container);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_get_focus_vadjustment;
  auto _temp_ret = call_wrap_v ((::GtkContainer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidgetPath* gtk_container_get_path_for_child (GtkContainer* container, GtkWidget* child);
// ::GtkWidgetPath* gtk_container_get_path_for_child (::GtkContainer* container, ::GtkWidget* child);
Gtk::WidgetPath base::ContainerBase::get_path_for_child (Gtk::Widget child) noexcept
{
  typedef ::GtkWidgetPath* (*call_wrap_t) (::GtkContainer* container, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_get_path_for_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkContainer*) (gobj_()), (::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkResizeMode gtk_container_get_resize_mode (GtkContainer* container);
// ::GtkResizeMode gtk_container_get_resize_mode (::GtkContainer* container);
// IGNORE; deprecated

// void gtk_container_propagate_draw (GtkContainer* container, GtkWidget* child, cairo_t* cr);
// void gtk_container_propagate_draw (::GtkContainer* container, ::GtkWidget* child, ::cairo_t* cr);
void base::ContainerBase::propagate_draw (Gtk::Widget child, cairo::Context cr) noexcept
{
  typedef void (*call_wrap_t) (::GtkContainer* container, ::GtkWidget* child, ::cairo_t* cr);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_propagate_draw;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkContainer*) (gobj_()), (::GtkWidget*) (child_to_c), (::cairo_t*) (cr_to_c));
}

// void gtk_container_remove (GtkContainer* container, GtkWidget* widget);
// void gtk_container_remove (::GtkContainer* container, ::GtkWidget* widget);
void base::ContainerBase::remove (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkContainer* container, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_remove;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkContainer*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void gtk_container_resize_children (GtkContainer* container);
// void gtk_container_resize_children (::GtkContainer* container);
// IGNORE; deprecated

// void gtk_container_set_border_width (GtkContainer* container, guint border_width);
// void gtk_container_set_border_width (::GtkContainer* container, guint border_width);
void base::ContainerBase::set_border_width (guint border_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkContainer* container, guint border_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_set_border_width;
  auto border_width_to_c = border_width;
  call_wrap_v ((::GtkContainer*) (gobj_()), (guint) (border_width_to_c));
}

// void gtk_container_set_focus_chain (GtkContainer* container, GList* focusable_widgets);
// void gtk_container_set_focus_chain (::GtkContainer* container, ::GList* focusable_widgets);
// IGNORE; deprecated

// void gtk_container_set_focus_child (GtkContainer* container, GtkWidget* child);
// void gtk_container_set_focus_child (::GtkContainer* container, ::GtkWidget* child);
void base::ContainerBase::set_focus_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkContainer* container, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_set_focus_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkContainer*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::ContainerBase::set_focus_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkContainer* container, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_set_focus_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkContainer*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_container_set_focus_hadjustment (GtkContainer* container, GtkAdjustment* adjustment);
// void gtk_container_set_focus_hadjustment (::GtkContainer* container, ::GtkAdjustment* adjustment);
void base::ContainerBase::set_focus_hadjustment (Gtk::Adjustment adjustment) noexcept
{
  typedef void (*call_wrap_t) (::GtkContainer* container, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_set_focus_hadjustment;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkContainer*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c));
}

// void gtk_container_set_focus_vadjustment (GtkContainer* container, GtkAdjustment* adjustment);
// void gtk_container_set_focus_vadjustment (::GtkContainer* container, ::GtkAdjustment* adjustment);
void base::ContainerBase::set_focus_vadjustment (Gtk::Adjustment adjustment) noexcept
{
  typedef void (*call_wrap_t) (::GtkContainer* container, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_set_focus_vadjustment;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkContainer*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c));
}

// void gtk_container_set_reallocate_redraws (GtkContainer* container, gboolean needs_redraws);
// void gtk_container_set_reallocate_redraws (::GtkContainer* container, gboolean needs_redraws);
// IGNORE; deprecated

// void gtk_container_set_resize_mode (GtkContainer* container, GtkResizeMode resize_mode);
// void gtk_container_set_resize_mode (::GtkContainer* container, ::GtkResizeMode resize_mode);
// IGNORE; deprecated

// void gtk_container_unset_focus_chain (GtkContainer* container);
// void gtk_container_unset_focus_chain (::GtkContainer* container);
// IGNORE; deprecated






} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/container_extra_def_impl.hpp>)
#include <gtk/container_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/container_extra_impl.hpp>)
#include <gtk/container_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ContainerClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkContainerClass *methods = (::GtkContainerClass *) class_struct;
  (void) methods;

  methods->add = (decltype (methods->add)) detail::method_wrapper<self, void (*) (Gtk::Widget widget), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::add_>;
  methods->check_resize = (decltype (methods->check_resize)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::check_resize_>;
  methods->child_type = (decltype (methods->child_type)) detail::method_wrapper<self, GType (*) (), gi::transfer_none_t>::wrapper<&self::child_type_>;
  methods->composite_name = (decltype (methods->composite_name)) detail::method_wrapper<self, std::string (*) (Gtk::Widget child), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::composite_name_>;
  methods->get_child_property = (decltype (methods->get_child_property)) detail::method_wrapper<self, void (*) (Gtk::Widget child, guint property_id, GObject::Value value, GObject::ParamSpec pspec), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_child_property_>;
  methods->get_path_for_child = (decltype (methods->get_path_for_child)) detail::method_wrapper<self, Gtk::WidgetPath (*) (Gtk::Widget child), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::get_path_for_child_>;
  methods->remove = (decltype (methods->remove)) detail::method_wrapper<self, void (*) (Gtk::Widget widget), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::remove_>;
  methods->set_child_property = (decltype (methods->set_child_property)) detail::method_wrapper<self, void (*) (Gtk::Widget child, guint property_id, const GObject::Value & value, GObject::ParamSpec pspec), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::set_child_property_>;
  methods->set_focus_child = (decltype (methods->set_focus_child)) detail::method_wrapper<self, void (*) (Gtk::Widget child), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::set_focus_child_>;
}

// void Container::add (GtkContainer* container, GtkWidget* widget);
// void Container::add (::GtkContainer* container, ::GtkWidget* widget);
void ContainerClass::add_ (Gtk::Widget widget) noexcept
{
  if (!get_struct_()->add) return ;
  typedef void (*call_wrap_t) (::GtkContainer* container, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->add;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkContainer*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void Container::check_resize (GtkContainer* container);
// void Container::check_resize (::GtkContainer* container);
void ContainerClass::check_resize_ () noexcept
{
  if (!get_struct_()->check_resize) return ;
  typedef void (*call_wrap_t) (::GtkContainer* container);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->check_resize;
  call_wrap_v ((::GtkContainer*) (gobj_()));
}

// GType Container::child_type (GtkContainer* container);
// GType Container::child_type (::GtkContainer* container);
GType ContainerClass::child_type_ () noexcept
{
  if (!get_struct_()->child_type) return GType{};
  typedef GType (*call_wrap_t) (::GtkContainer* container);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->child_type;
  auto _temp_ret = call_wrap_v ((::GtkContainer*) (gobj_()));
  return _temp_ret;
}

// gchar* Container::composite_name (GtkContainer* container, GtkWidget* child);
// char* Container::composite_name (::GtkContainer* container, ::GtkWidget* child);
std::string ContainerClass::composite_name_ (Gtk::Widget child) noexcept
{
  if (!get_struct_()->composite_name) return std::string{};
  typedef char* (*call_wrap_t) (::GtkContainer* container, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->composite_name;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkContainer*) (gobj_()), (::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void Container::forall (GtkContainer* container, gboolean include_internals, GtkCallback callback, gpointer callback_data);
// void Container::forall (::GtkContainer* container, gboolean include_internals, Gtk::Callback::cfunction_type callback, void* callback_data);
// SKIP; virtual-method callback parameter not supported

// void Container::get_child_property (GtkContainer* container, GtkWidget* child, guint property_id, GValue* value, GParamSpec* pspec);
// void Container::get_child_property (::GtkContainer* container, ::GtkWidget* child, guint property_id, ::GValue* value, ::GParamSpec* pspec);
void ContainerClass::get_child_property_ (Gtk::Widget child, guint property_id, GObject::Value value, GObject::ParamSpec pspec) noexcept
{
  if (!get_struct_()->get_child_property) return ;
  typedef void (*call_wrap_t) (::GtkContainer* container, ::GtkWidget* child, guint property_id, ::GValue* value, ::GParamSpec* pspec);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_child_property;
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto property_id_to_c = property_id;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkContainer*) (gobj_()), (::GtkWidget*) (child_to_c), (guint) (property_id_to_c), (::GValue*) (value_to_c), (::GParamSpec*) (pspec_to_c));
}

// GtkWidgetPath* Container::get_path_for_child (GtkContainer* container, GtkWidget* child);
// ::GtkWidgetPath* Container::get_path_for_child (::GtkContainer* container, ::GtkWidget* child);
Gtk::WidgetPath ContainerClass::get_path_for_child_ (Gtk::Widget child) noexcept
{
  if (!get_struct_()->get_path_for_child) return Gtk::WidgetPath{};
  typedef ::GtkWidgetPath* (*call_wrap_t) (::GtkContainer* container, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_path_for_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkContainer*) (gobj_()), (::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void Container::remove (GtkContainer* container, GtkWidget* widget);
// void Container::remove (::GtkContainer* container, ::GtkWidget* widget);
void ContainerClass::remove_ (Gtk::Widget widget) noexcept
{
  if (!get_struct_()->remove) return ;
  typedef void (*call_wrap_t) (::GtkContainer* container, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->remove;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkContainer*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void Container::set_child_property (GtkContainer* container, GtkWidget* child, guint property_id, const GValue* value, GParamSpec* pspec);
// void Container::set_child_property (::GtkContainer* container, ::GtkWidget* child, guint property_id, const ::GValue* value, ::GParamSpec* pspec);
void ContainerClass::set_child_property_ (Gtk::Widget child, guint property_id, const GObject::Value & value, GObject::ParamSpec pspec) noexcept
{
  if (!get_struct_()->set_child_property) return ;
  typedef void (*call_wrap_t) (::GtkContainer* container, ::GtkWidget* child, guint property_id, const ::GValue* value, ::GParamSpec* pspec);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_child_property;
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto property_id_to_c = property_id;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkContainer*) (gobj_()), (::GtkWidget*) (child_to_c), (guint) (property_id_to_c), (const ::GValue*) (value_to_c), (::GParamSpec*) (pspec_to_c));
}

// void Container::set_focus_child (GtkContainer* container, GtkWidget* child);
// void Container::set_focus_child (::GtkContainer* container, ::GtkWidget* child);
void ContainerClass::set_focus_child_ (Gtk::Widget child) noexcept
{
  if (!get_struct_()->set_focus_child) return ;
  typedef void (*call_wrap_t) (::GtkContainer* container, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_focus_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkContainer*) (gobj_()), (::GtkWidget*) (child_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
