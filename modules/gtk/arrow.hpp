// AUTO-GENERATED

#ifndef _GI_GTK_ARROW_HPP_
#define _GI_GTK_ARROW_HPP_

#include "misc.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class Arrow;

namespace base {


#define GI_GTK_ARROW_BASE base::ArrowBase
class ArrowBase : public Gtk::Misc
{
typedef Gtk::Misc super_type;
public:
typedef ::GtkArrow BaseObjectType;

ArrowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_arrow_get_type(); } 

// GtkWidget* gtk_arrow_new (GtkArrowType arrow_type, GtkShadowType shadow_type);
// ::GtkArrow* gtk_arrow_new (::GtkArrowType arrow_type, ::GtkShadowType shadow_type);
// IGNORE; deprecated

// void gtk_arrow_set (GtkArrow* arrow, GtkArrowType arrow_type, GtkShadowType shadow_type);
// void gtk_arrow_set (::GtkArrow* arrow, ::GtkArrowType arrow_type, ::GtkShadowType shadow_type);
// IGNORE; deprecated

gi::property_proxy<Gtk::ArrowType, base::ArrowBase> property_arrow_type()
{ return gi::property_proxy<Gtk::ArrowType, base::ArrowBase> (*this, "arrow-type"); }
const gi::property_proxy<Gtk::ArrowType, base::ArrowBase> property_arrow_type() const
{ return gi::property_proxy<Gtk::ArrowType, base::ArrowBase> (*this, "arrow-type"); }

gi::property_proxy<Gtk::ShadowType, base::ArrowBase> property_shadow_type()
{ return gi::property_proxy<Gtk::ShadowType, base::ArrowBase> (*this, "shadow-type"); }
const gi::property_proxy<Gtk::ShadowType, base::ArrowBase> property_shadow_type() const
{ return gi::property_proxy<Gtk::ShadowType, base::ArrowBase> (*this, "shadow-type"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/arrow_extra_def.hpp>)
#include <gtk/arrow_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/arrow_extra.hpp>)
#include <gtk/arrow_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Arrow : public GI_GTK_ARROW_BASE
{ typedef GI_GTK_ARROW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkArrow>
{ typedef Gtk::Arrow type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ArrowClassDef
{
typedef ArrowClassDef self;
public:
typedef Gtk::Arrow instance_type;
typedef ::GtkArrowClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ArrowClass: public detail::ClassTemplate<Gtk::impl::internal::ArrowClassDef, Gtk::impl::internal::MiscClass>
{
typedef ArrowClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ArrowClassDef, Gtk::impl::internal::MiscClass> super;

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

using ArrowImpl = detail::ObjectImpl<Arrow, internal::ArrowClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
