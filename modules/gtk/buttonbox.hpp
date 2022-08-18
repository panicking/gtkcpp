// AUTO-GENERATED

#ifndef _GI_GTK_BUTTONBOX_HPP_
#define _GI_GTK_BUTTONBOX_HPP_

#include "box.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class ButtonBox;

namespace base {


#define GI_GTK_BUTTONBOX_BASE base::ButtonBoxBase
class ButtonBoxBase : public Gtk::Box
{
typedef Gtk::Box super_type;
public:
typedef ::GtkButtonBox BaseObjectType;

ButtonBoxBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_button_box_get_type(); } 

// GtkWidget* gtk_button_box_new (GtkOrientation orientation);
// ::GtkButtonBox* gtk_button_box_new (::GtkOrientation orientation);
static GI_INLINE_DECL Gtk::ButtonBox new_ (Gtk::Orientation orientation) noexcept;

// gboolean gtk_button_box_get_child_non_homogeneous (GtkButtonBox* widget, GtkWidget* child);
// gboolean gtk_button_box_get_child_non_homogeneous (::GtkButtonBox* widget, ::GtkWidget* child);
GI_INLINE_DECL bool get_child_non_homogeneous (Gtk::Widget child) noexcept;

// gboolean gtk_button_box_get_child_secondary (GtkButtonBox* widget, GtkWidget* child);
// gboolean gtk_button_box_get_child_secondary (::GtkButtonBox* widget, ::GtkWidget* child);
GI_INLINE_DECL bool get_child_secondary (Gtk::Widget child) noexcept;

// GtkButtonBoxStyle gtk_button_box_get_layout (GtkButtonBox* widget);
// ::GtkButtonBoxStyle gtk_button_box_get_layout (::GtkButtonBox* widget);
GI_INLINE_DECL Gtk::ButtonBoxStyle get_layout () noexcept;

// void gtk_button_box_set_child_non_homogeneous (GtkButtonBox* widget, GtkWidget* child, gboolean non_homogeneous);
// void gtk_button_box_set_child_non_homogeneous (::GtkButtonBox* widget, ::GtkWidget* child, gboolean non_homogeneous);
GI_INLINE_DECL void set_child_non_homogeneous (Gtk::Widget child, gboolean non_homogeneous) noexcept;

// void gtk_button_box_set_child_secondary (GtkButtonBox* widget, GtkWidget* child, gboolean is_secondary);
// void gtk_button_box_set_child_secondary (::GtkButtonBox* widget, ::GtkWidget* child, gboolean is_secondary);
GI_INLINE_DECL void set_child_secondary (Gtk::Widget child, gboolean is_secondary) noexcept;

// void gtk_button_box_set_layout (GtkButtonBox* widget, GtkButtonBoxStyle layout_style);
// void gtk_button_box_set_layout (::GtkButtonBox* widget, ::GtkButtonBoxStyle layout_style);
GI_INLINE_DECL void set_layout (Gtk::ButtonBoxStyle layout_style) noexcept;

gi::property_proxy<Gtk::ButtonBoxStyle, base::ButtonBoxBase> property_layout_style()
{ return gi::property_proxy<Gtk::ButtonBoxStyle, base::ButtonBoxBase> (*this, "layout-style"); }
const gi::property_proxy<Gtk::ButtonBoxStyle, base::ButtonBoxBase> property_layout_style() const
{ return gi::property_proxy<Gtk::ButtonBoxStyle, base::ButtonBoxBase> (*this, "layout-style"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/buttonbox_extra_def.hpp>)
#include <gtk/buttonbox_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/buttonbox_extra.hpp>)
#include <gtk/buttonbox_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ButtonBox : public GI_GTK_BUTTONBOX_BASE
{ typedef GI_GTK_BUTTONBOX_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkButtonBox>
{ typedef Gtk::ButtonBox type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ButtonBoxClassDef
{
typedef ButtonBoxClassDef self;
public:
typedef Gtk::ButtonBox instance_type;
typedef ::GtkButtonBoxClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ButtonBoxClass: public detail::ClassTemplate<Gtk::impl::internal::ButtonBoxClassDef, Gtk::impl::internal::BoxClass>
{
typedef ButtonBoxClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ButtonBoxClassDef, Gtk::impl::internal::BoxClass> super;

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

using ButtonBoxImpl = detail::ObjectImpl<ButtonBox, internal::ButtonBoxClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
