// AUTO-GENERATED

#ifndef _GI_GTK_CONTAINER_HPP_
#define _GI_GTK_CONTAINER_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;
class Widget;
class WidgetPath;

class Container;

namespace base {


#define GI_GTK_CONTAINER_BASE base::ContainerBase
class ContainerBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkContainer BaseObjectType;

ContainerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_container_get_type(); } 

// void gtk_container_add (GtkContainer* container, GtkWidget* widget);
// void gtk_container_add (::GtkContainer* container, ::GtkWidget* widget);
GI_INLINE_DECL void add (Gtk::Widget widget) noexcept;

// void gtk_container_add_with_properties (GtkContainer* container, GtkWidget* widget, const gchar* first_prop_name);
// void gtk_container_add_with_properties (::GtkContainer* container, ::GtkWidget* widget, const char* first_prop_name);
// IGNORE; not introspectable, varargs not supported

// void gtk_container_check_resize (GtkContainer* container);
// void gtk_container_check_resize (::GtkContainer* container);
GI_INLINE_DECL void check_resize () noexcept;

// void gtk_container_child_get (GtkContainer* container, GtkWidget* child, const gchar* first_prop_name);
// void gtk_container_child_get (::GtkContainer* container, ::GtkWidget* child, const char* first_prop_name);
// IGNORE; not introspectable, varargs not supported

// void gtk_container_child_get_property (GtkContainer* container, GtkWidget* child, const gchar* property_name, GValue* value);
// void gtk_container_child_get_property (::GtkContainer* container, ::GtkWidget* child, const char* property_name, ::GValue* value);
GI_INLINE_DECL void child_get_property (Gtk::Widget child, const std::string & property_name, GObject::Value value) noexcept;

// void gtk_container_child_get_valist (GtkContainer* container, GtkWidget* child, const gchar* first_property_name, va_list var_args);
// void gtk_container_child_get_valist (::GtkContainer* container, ::GtkWidget* child, const char* first_property_name,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// void gtk_container_child_notify (GtkContainer* container, GtkWidget* child, const gchar* child_property);
// void gtk_container_child_notify (::GtkContainer* container, ::GtkWidget* child, const char* child_property);
GI_INLINE_DECL void child_notify (Gtk::Widget child, const std::string & child_property) noexcept;

// void gtk_container_child_notify_by_pspec (GtkContainer* container, GtkWidget* child, GParamSpec* pspec);
// void gtk_container_child_notify_by_pspec (::GtkContainer* container, ::GtkWidget* child, ::GParamSpec* pspec);
GI_INLINE_DECL void child_notify_by_pspec (Gtk::Widget child, GObject::ParamSpec pspec) noexcept;

// void gtk_container_child_set (GtkContainer* container, GtkWidget* child, const gchar* first_prop_name);
// void gtk_container_child_set (::GtkContainer* container, ::GtkWidget* child, const char* first_prop_name);
// IGNORE; not introspectable, varargs not supported

// void gtk_container_child_set_property (GtkContainer* container, GtkWidget* child, const gchar* property_name, const GValue* value);
// void gtk_container_child_set_property (::GtkContainer* container, ::GtkWidget* child, const char* property_name, const ::GValue* value);
GI_INLINE_DECL void child_set_property (Gtk::Widget child, const std::string & property_name, const GObject::Value & value) noexcept;

// void gtk_container_child_set_valist (GtkContainer* container, GtkWidget* child, const gchar* first_property_name, va_list var_args);
// void gtk_container_child_set_valist (::GtkContainer* container, ::GtkWidget* child, const char* first_property_name,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// GType gtk_container_child_type (GtkContainer* container);
// GType gtk_container_child_type (::GtkContainer* container);
GI_INLINE_DECL GType child_type () noexcept;

// void gtk_container_forall (GtkContainer* container, GtkCallback callback, gpointer callback_data);
// void gtk_container_forall (::GtkContainer* container, Gtk::Callback::cfunction_type callback, void* callback_data);
GI_INLINE_DECL void forall (Gtk::Callback callback) noexcept;

// void gtk_container_foreach (GtkContainer* container, GtkCallback callback, gpointer callback_data);
// void gtk_container_foreach (::GtkContainer* container, Gtk::Callback::cfunction_type callback, void* callback_data);
GI_INLINE_DECL void foreach (Gtk::Callback callback) noexcept;

// guint gtk_container_get_border_width (GtkContainer* container);
// guint gtk_container_get_border_width (::GtkContainer* container);
GI_INLINE_DECL guint get_border_width () noexcept;

// GList* gtk_container_get_children (GtkContainer* container);
// ::GList* gtk_container_get_children (::GtkContainer* container);
GI_INLINE_DECL std::vector<Gtk::Widget> get_children () noexcept;

// gboolean gtk_container_get_focus_chain (GtkContainer* container, GList** focusable_widgets);
// gboolean gtk_container_get_focus_chain (::GtkContainer* container, ::GList** focusable_widgets);
// IGNORE; deprecated

// GtkWidget* gtk_container_get_focus_child (GtkContainer* container);
// ::GtkWidget* gtk_container_get_focus_child (::GtkContainer* container);
GI_INLINE_DECL Gtk::Widget get_focus_child () noexcept;

// GtkAdjustment* gtk_container_get_focus_hadjustment (GtkContainer* container);
// ::GtkAdjustment* gtk_container_get_focus_hadjustment (::GtkContainer* container);
GI_INLINE_DECL Gtk::Adjustment get_focus_hadjustment () noexcept;

// GtkAdjustment* gtk_container_get_focus_vadjustment (GtkContainer* container);
// ::GtkAdjustment* gtk_container_get_focus_vadjustment (::GtkContainer* container);
GI_INLINE_DECL Gtk::Adjustment get_focus_vadjustment () noexcept;

// GtkWidgetPath* gtk_container_get_path_for_child (GtkContainer* container, GtkWidget* child);
// ::GtkWidgetPath* gtk_container_get_path_for_child (::GtkContainer* container, ::GtkWidget* child);
GI_INLINE_DECL Gtk::WidgetPath get_path_for_child (Gtk::Widget child) noexcept;

// GtkResizeMode gtk_container_get_resize_mode (GtkContainer* container);
// ::GtkResizeMode gtk_container_get_resize_mode (::GtkContainer* container);
// IGNORE; deprecated

// void gtk_container_propagate_draw (GtkContainer* container, GtkWidget* child, cairo_t* cr);
// void gtk_container_propagate_draw (::GtkContainer* container, ::GtkWidget* child, ::cairo_t* cr);
GI_INLINE_DECL void propagate_draw (Gtk::Widget child, cairo::Context cr) noexcept;

// void gtk_container_remove (GtkContainer* container, GtkWidget* widget);
// void gtk_container_remove (::GtkContainer* container, ::GtkWidget* widget);
GI_INLINE_DECL void remove (Gtk::Widget widget) noexcept;

// void gtk_container_resize_children (GtkContainer* container);
// void gtk_container_resize_children (::GtkContainer* container);
// IGNORE; deprecated

// void gtk_container_set_border_width (GtkContainer* container, guint border_width);
// void gtk_container_set_border_width (::GtkContainer* container, guint border_width);
GI_INLINE_DECL void set_border_width (guint border_width) noexcept;

// void gtk_container_set_focus_chain (GtkContainer* container, GList* focusable_widgets);
// void gtk_container_set_focus_chain (::GtkContainer* container, ::GList* focusable_widgets);
// IGNORE; deprecated

// void gtk_container_set_focus_child (GtkContainer* container, GtkWidget* child);
// void gtk_container_set_focus_child (::GtkContainer* container, ::GtkWidget* child);
GI_INLINE_DECL void set_focus_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_focus_child () noexcept;

// void gtk_container_set_focus_hadjustment (GtkContainer* container, GtkAdjustment* adjustment);
// void gtk_container_set_focus_hadjustment (::GtkContainer* container, ::GtkAdjustment* adjustment);
GI_INLINE_DECL void set_focus_hadjustment (Gtk::Adjustment adjustment) noexcept;

// void gtk_container_set_focus_vadjustment (GtkContainer* container, GtkAdjustment* adjustment);
// void gtk_container_set_focus_vadjustment (::GtkContainer* container, ::GtkAdjustment* adjustment);
GI_INLINE_DECL void set_focus_vadjustment (Gtk::Adjustment adjustment) noexcept;

// void gtk_container_set_reallocate_redraws (GtkContainer* container, gboolean needs_redraws);
// void gtk_container_set_reallocate_redraws (::GtkContainer* container, gboolean needs_redraws);
// IGNORE; deprecated

// void gtk_container_set_resize_mode (GtkContainer* container, GtkResizeMode resize_mode);
// void gtk_container_set_resize_mode (::GtkContainer* container, ::GtkResizeMode resize_mode);
// IGNORE; deprecated

// void gtk_container_unset_focus_chain (GtkContainer* container);
// void gtk_container_unset_focus_chain (::GtkContainer* container);
// IGNORE; deprecated

gi::property_proxy<guint, base::ContainerBase> property_border_width()
{ return gi::property_proxy<guint, base::ContainerBase> (*this, "border-width"); }
const gi::property_proxy<guint, base::ContainerBase> property_border_width() const
{ return gi::property_proxy<guint, base::ContainerBase> (*this, "border-width"); }

gi::property_proxy_write<Gtk::Widget, base::ContainerBase> property_child()
{ return gi::property_proxy_write<Gtk::Widget, base::ContainerBase> (*this, "child"); }

gi::property_proxy<Gtk::ResizeMode, base::ContainerBase> property_resize_mode()
{ return gi::property_proxy<Gtk::ResizeMode, base::ContainerBase> (*this, "resize-mode"); }
const gi::property_proxy<Gtk::ResizeMode, base::ContainerBase> property_resize_mode() const
{ return gi::property_proxy<Gtk::ResizeMode, base::ContainerBase> (*this, "resize-mode"); }

// signal add
gi::signal_proxy<void(Gtk::Container, Gtk::Widget object)> signal_add()
{ return gi::signal_proxy<void(Gtk::Container, Gtk::Widget object)> (*this, "add"); }

// signal check-resize
gi::signal_proxy<void(Gtk::Container)> signal_check_resize()
{ return gi::signal_proxy<void(Gtk::Container)> (*this, "check-resize"); }

// signal remove
gi::signal_proxy<void(Gtk::Container, Gtk::Widget object)> signal_remove()
{ return gi::signal_proxy<void(Gtk::Container, Gtk::Widget object)> (*this, "remove"); }

// signal set-focus-child
gi::signal_proxy<void(Gtk::Container, Gtk::Widget object)> signal_set_focus_child()
{ return gi::signal_proxy<void(Gtk::Container, Gtk::Widget object)> (*this, "set-focus-child"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/container_extra_def.hpp>)
#include <gtk/container_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/container_extra.hpp>)
#include <gtk/container_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Container : public GI_GTK_CONTAINER_BASE
{ typedef GI_GTK_CONTAINER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkContainer>
{ typedef Gtk::Container type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ContainerClassDef
{
typedef ContainerClassDef self;
public:
typedef Gtk::Container instance_type;
typedef ::GtkContainerClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Container::add (GtkContainer* container, GtkWidget* widget);
// void Container::add (::GtkContainer* container, ::GtkWidget* widget);
virtual void add_ (Gtk::Widget widget) noexcept = 0;

// void Container::check_resize (GtkContainer* container);
// void Container::check_resize (::GtkContainer* container);
virtual void check_resize_ () noexcept = 0;

// GType Container::child_type (GtkContainer* container);
// GType Container::child_type (::GtkContainer* container);
virtual GType child_type_ () noexcept = 0;

// gchar* Container::composite_name (GtkContainer* container, GtkWidget* child);
// char* Container::composite_name (::GtkContainer* container, ::GtkWidget* child);
virtual std::string composite_name_ (Gtk::Widget child) noexcept = 0;

// void Container::forall (GtkContainer* container, gboolean include_internals, GtkCallback callback, gpointer callback_data);
// void Container::forall (::GtkContainer* container, gboolean include_internals, Gtk::Callback::cfunction_type callback, void* callback_data);
// SKIP; virtual-method callback parameter not supported

// void Container::get_child_property (GtkContainer* container, GtkWidget* child, guint property_id, GValue* value, GParamSpec* pspec);
// void Container::get_child_property (::GtkContainer* container, ::GtkWidget* child, guint property_id, ::GValue* value, ::GParamSpec* pspec);
virtual void get_child_property_ (Gtk::Widget child, guint property_id, GObject::Value value, GObject::ParamSpec pspec) noexcept = 0;

// GtkWidgetPath* Container::get_path_for_child (GtkContainer* container, GtkWidget* child);
// ::GtkWidgetPath* Container::get_path_for_child (::GtkContainer* container, ::GtkWidget* child);
virtual Gtk::WidgetPath get_path_for_child_ (Gtk::Widget child) noexcept = 0;

// void Container::remove (GtkContainer* container, GtkWidget* widget);
// void Container::remove (::GtkContainer* container, ::GtkWidget* widget);
virtual void remove_ (Gtk::Widget widget) noexcept = 0;

// void Container::set_child_property (GtkContainer* container, GtkWidget* child, guint property_id, const GValue* value, GParamSpec* pspec);
// void Container::set_child_property (::GtkContainer* container, ::GtkWidget* child, guint property_id, const ::GValue* value, ::GParamSpec* pspec);
virtual void set_child_property_ (Gtk::Widget child, guint property_id, const GObject::Value & value, GObject::ParamSpec pspec) noexcept = 0;

// void Container::set_focus_child (GtkContainer* container, GtkWidget* child);
// void Container::set_focus_child (::GtkContainer* container, ::GtkWidget* child);
virtual void set_focus_child_ (Gtk::Widget child) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ContainerClass: public detail::ClassTemplate<Gtk::impl::internal::ContainerClassDef, Gtk::impl::internal::WidgetClass>
{
typedef ContainerClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ContainerClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Container::add (GtkContainer* container, GtkWidget* widget);
// void Container::add (::GtkContainer* container, ::GtkWidget* widget);
GI_INLINE_DECL void add_ (Gtk::Widget widget) noexcept override;

// void Container::check_resize (GtkContainer* container);
// void Container::check_resize (::GtkContainer* container);
GI_INLINE_DECL void check_resize_ () noexcept override;

// GType Container::child_type (GtkContainer* container);
// GType Container::child_type (::GtkContainer* container);
GI_INLINE_DECL GType child_type_ () noexcept override;

// gchar* Container::composite_name (GtkContainer* container, GtkWidget* child);
// char* Container::composite_name (::GtkContainer* container, ::GtkWidget* child);
GI_INLINE_DECL std::string composite_name_ (Gtk::Widget child) noexcept override;

// void Container::forall (GtkContainer* container, gboolean include_internals, GtkCallback callback, gpointer callback_data);
// void Container::forall (::GtkContainer* container, gboolean include_internals, Gtk::Callback::cfunction_type callback, void* callback_data);
// SKIP; virtual-method callback parameter not supported

// void Container::get_child_property (GtkContainer* container, GtkWidget* child, guint property_id, GValue* value, GParamSpec* pspec);
// void Container::get_child_property (::GtkContainer* container, ::GtkWidget* child, guint property_id, ::GValue* value, ::GParamSpec* pspec);
GI_INLINE_DECL void get_child_property_ (Gtk::Widget child, guint property_id, GObject::Value value, GObject::ParamSpec pspec) noexcept override;

// GtkWidgetPath* Container::get_path_for_child (GtkContainer* container, GtkWidget* child);
// ::GtkWidgetPath* Container::get_path_for_child (::GtkContainer* container, ::GtkWidget* child);
GI_INLINE_DECL Gtk::WidgetPath get_path_for_child_ (Gtk::Widget child) noexcept override;

// void Container::remove (GtkContainer* container, GtkWidget* widget);
// void Container::remove (::GtkContainer* container, ::GtkWidget* widget);
GI_INLINE_DECL void remove_ (Gtk::Widget widget) noexcept override;

// void Container::set_child_property (GtkContainer* container, GtkWidget* child, guint property_id, const GValue* value, GParamSpec* pspec);
// void Container::set_child_property (::GtkContainer* container, ::GtkWidget* child, guint property_id, const ::GValue* value, ::GParamSpec* pspec);
GI_INLINE_DECL void set_child_property_ (Gtk::Widget child, guint property_id, const GObject::Value & value, GObject::ParamSpec pspec) noexcept override;

// void Container::set_focus_child (GtkContainer* container, GtkWidget* child);
// void Container::set_focus_child (::GtkContainer* container, ::GtkWidget* child);
GI_INLINE_DECL void set_focus_child_ (Gtk::Widget child) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ContainerImpl = detail::ObjectImpl<Container, internal::ContainerClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
