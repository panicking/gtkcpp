// AUTO-GENERATED

#ifndef _GI_GTK_SEPARATOR_HPP_
#define _GI_GTK_SEPARATOR_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Orientable;

class Separator;

namespace base {


#define GI_GTK_SEPARATOR_BASE base::SeparatorBase
class SeparatorBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkSeparator BaseObjectType;

SeparatorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_separator_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* gtk_separator_new (GtkOrientation orientation);
// ::GtkSeparator* gtk_separator_new (::GtkOrientation orientation);
static GI_INLINE_DECL Gtk::Separator new_ (Gtk::Orientation orientation) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/separator_extra_def.hpp>)
#include <gtk/separator_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/separator_extra.hpp>)
#include <gtk/separator_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Separator : public GI_GTK_SEPARATOR_BASE
{ typedef GI_GTK_SEPARATOR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSeparator>
{ typedef Gtk::Separator type; }; 

} // namespace repository

} // namespace gi

#include "orientable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class SeparatorClassDef
{
typedef SeparatorClassDef self;
public:
typedef Gtk::Separator instance_type;
typedef ::GtkSeparatorClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SeparatorClass: public detail::ClassTemplate<Gtk::impl::internal::SeparatorClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::OrientableIfaceClassImpl>
{
typedef SeparatorClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::SeparatorClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::OrientableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::OrientableIfaceClassImpl GtkOrientableIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using SeparatorImpl = detail::ObjectImpl<Separator, internal::SeparatorClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
