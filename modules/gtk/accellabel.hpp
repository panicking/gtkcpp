// AUTO-GENERATED

#ifndef _GI_GTK_ACCELLABEL_HPP_
#define _GI_GTK_ACCELLABEL_HPP_

#include "label.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class AccelLabel;

namespace base {


#define GI_GTK_ACCELLABEL_BASE base::AccelLabelBase
class AccelLabelBase : public Gtk::Label
{
typedef Gtk::Label super_type;
public:
typedef ::GtkAccelLabel BaseObjectType;

AccelLabelBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_accel_label_get_type(); } 

// GtkWidget* gtk_accel_label_new (const gchar* string);
// ::GtkAccelLabel* gtk_accel_label_new (const char* string);
static GI_INLINE_DECL Gtk::AccelLabel new_ (const std::string & string) noexcept;

// void gtk_accel_label_get_accel (GtkAccelLabel* accel_label, guint* accelerator_key, GdkModifierType* accelerator_mods);
// void gtk_accel_label_get_accel (::GtkAccelLabel* accel_label, guint* accelerator_key, ::GdkModifierType* accelerator_mods);
GI_INLINE_DECL void get_accel (guint & accelerator_key, Gdk::ModifierType & accelerator_mods) noexcept;
GI_INLINE_DECL std::tuple<guint, Gdk::ModifierType> get_accel () noexcept;

// GtkWidget* gtk_accel_label_get_accel_widget (GtkAccelLabel* accel_label);
// ::GtkWidget* gtk_accel_label_get_accel_widget (::GtkAccelLabel* accel_label);
GI_INLINE_DECL Gtk::Widget get_accel_widget () noexcept;

// guint gtk_accel_label_get_accel_width (GtkAccelLabel* accel_label);
// guint gtk_accel_label_get_accel_width (::GtkAccelLabel* accel_label);
GI_INLINE_DECL guint get_accel_width () noexcept;

// gboolean gtk_accel_label_refetch (GtkAccelLabel* accel_label);
// gboolean gtk_accel_label_refetch (::GtkAccelLabel* accel_label);
GI_INLINE_DECL bool refetch () noexcept;

// void gtk_accel_label_set_accel (GtkAccelLabel* accel_label, guint accelerator_key, GdkModifierType accelerator_mods);
// void gtk_accel_label_set_accel (::GtkAccelLabel* accel_label, guint accelerator_key, ::GdkModifierType accelerator_mods);
GI_INLINE_DECL void set_accel (guint accelerator_key, Gdk::ModifierType accelerator_mods) noexcept;

// void gtk_accel_label_set_accel_closure (GtkAccelLabel* accel_label, GClosure* accel_closure);
// void gtk_accel_label_set_accel_closure (::GtkAccelLabel* accel_label, ::GClosure* accel_closure);
GI_INLINE_DECL void set_accel_closure (GObject::Closure accel_closure) noexcept;
GI_INLINE_DECL void set_accel_closure () noexcept;

// void gtk_accel_label_set_accel_widget (GtkAccelLabel* accel_label, GtkWidget* accel_widget);
// void gtk_accel_label_set_accel_widget (::GtkAccelLabel* accel_label, ::GtkWidget* accel_widget);
GI_INLINE_DECL void set_accel_widget (Gtk::Widget accel_widget) noexcept;
GI_INLINE_DECL void set_accel_widget () noexcept;

gi::property_proxy<GObject::Closure, base::AccelLabelBase> property_accel_closure()
{ return gi::property_proxy<GObject::Closure, base::AccelLabelBase> (*this, "accel-closure"); }
const gi::property_proxy<GObject::Closure, base::AccelLabelBase> property_accel_closure() const
{ return gi::property_proxy<GObject::Closure, base::AccelLabelBase> (*this, "accel-closure"); }

gi::property_proxy<Gtk::Widget, base::AccelLabelBase> property_accel_widget()
{ return gi::property_proxy<Gtk::Widget, base::AccelLabelBase> (*this, "accel-widget"); }
const gi::property_proxy<Gtk::Widget, base::AccelLabelBase> property_accel_widget() const
{ return gi::property_proxy<Gtk::Widget, base::AccelLabelBase> (*this, "accel-widget"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accellabel_extra_def.hpp>)
#include <gtk/accellabel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accellabel_extra.hpp>)
#include <gtk/accellabel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AccelLabel : public GI_GTK_ACCELLABEL_BASE
{ typedef GI_GTK_ACCELLABEL_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAccelLabel>
{ typedef Gtk::AccelLabel type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class AccelLabelClassDef
{
typedef AccelLabelClassDef self;
public:
typedef Gtk::AccelLabel instance_type;
typedef ::GtkAccelLabelClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class AccelLabelClass: public detail::ClassTemplate<Gtk::impl::internal::AccelLabelClassDef, Gtk::impl::internal::LabelClass>
{
typedef AccelLabelClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::AccelLabelClassDef, Gtk::impl::internal::LabelClass> super;

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

using AccelLabelImpl = detail::ObjectImpl<AccelLabel, internal::AccelLabelClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
