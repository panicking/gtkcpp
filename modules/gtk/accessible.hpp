// AUTO-GENERATED

#ifndef _GI_GTK_ACCESSIBLE_HPP_
#define _GI_GTK_ACCESSIBLE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class Accessible;

namespace base {


#define GI_GTK_ACCESSIBLE_BASE base::AccessibleBase
class AccessibleBase : public Atk::Object
{
typedef Atk::Object super_type;
public:
typedef ::GtkAccessible BaseObjectType;

AccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_accessible_get_type(); } 

// void gtk_accessible_connect_widget_destroyed (GtkAccessible* accessible);
// void gtk_accessible_connect_widget_destroyed (::GtkAccessible* accessible);
// IGNORE; deprecated

// GtkWidget* gtk_accessible_get_widget (GtkAccessible* accessible);
// ::GtkWidget* gtk_accessible_get_widget (::GtkAccessible* accessible);
GI_INLINE_DECL Gtk::Widget get_widget () noexcept;

// void gtk_accessible_set_widget (GtkAccessible* accessible, GtkWidget* widget);
// void gtk_accessible_set_widget (::GtkAccessible* accessible, ::GtkWidget* widget);
GI_INLINE_DECL void set_widget (Gtk::Widget widget) noexcept;
GI_INLINE_DECL void set_widget () noexcept;

gi::property_proxy<Gtk::Widget, base::AccessibleBase> property_widget()
{ return gi::property_proxy<Gtk::Widget, base::AccessibleBase> (*this, "widget"); }
const gi::property_proxy<Gtk::Widget, base::AccessibleBase> property_widget() const
{ return gi::property_proxy<Gtk::Widget, base::AccessibleBase> (*this, "widget"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accessible_extra_def.hpp>)
#include <gtk/accessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accessible_extra.hpp>)
#include <gtk/accessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Accessible : public GI_GTK_ACCESSIBLE_BASE
{ typedef GI_GTK_ACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAccessible>
{ typedef Gtk::Accessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class AccessibleClassDef
{
typedef AccessibleClassDef self;
public:
typedef Gtk::Accessible instance_type;
typedef ::GtkAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Accessible::connect_widget_destroyed (GtkAccessible* accessible);
// void Accessible::connect_widget_destroyed (::GtkAccessible* accessible);
// IGNORE; deprecated

// void Accessible::widget_set (GtkAccessible* accessible);
// void Accessible::widget_set (::GtkAccessible* accessible);
virtual void widget_set_ () noexcept = 0;

// void Accessible::widget_unset (GtkAccessible* accessible);
// void Accessible::widget_unset (::GtkAccessible* accessible);
virtual void widget_unset_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class AccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::AccessibleClassDef, Atk::impl::internal::ObjectClass>
{
typedef AccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::AccessibleClassDef, Atk::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Accessible::connect_widget_destroyed (GtkAccessible* accessible);
// void Accessible::connect_widget_destroyed (::GtkAccessible* accessible);
// IGNORE; deprecated

// void Accessible::widget_set (GtkAccessible* accessible);
// void Accessible::widget_set (::GtkAccessible* accessible);
GI_INLINE_DECL void widget_set_ () noexcept override;

// void Accessible::widget_unset (GtkAccessible* accessible);
// void Accessible::widget_unset (::GtkAccessible* accessible);
GI_INLINE_DECL void widget_unset_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using AccessibleImpl = detail::ObjectImpl<Accessible, internal::AccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
