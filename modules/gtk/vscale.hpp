// AUTO-GENERATED

#ifndef _GI_GTK_VSCALE_HPP_
#define _GI_GTK_VSCALE_HPP_

#include "scale.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;

class VScale;

namespace base {


#define GI_GTK_VSCALE_BASE base::VScaleBase
class VScaleBase : public Gtk::Scale
{
typedef Gtk::Scale super_type;
public:
typedef ::GtkVScale BaseObjectType;

VScaleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_vscale_get_type(); } 

// GtkWidget* gtk_vscale_new (GtkAdjustment* adjustment);
// ::GtkVScale* gtk_vscale_new (::GtkAdjustment* adjustment);
// IGNORE; deprecated

// GtkWidget* gtk_vscale_new_with_range (gdouble min, gdouble max, gdouble step);
// ::GtkVScale* gtk_vscale_new_with_range (gdouble min, gdouble max, gdouble step);
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/vscale_extra_def.hpp>)
#include <gtk/vscale_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/vscale_extra.hpp>)
#include <gtk/vscale_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class VScale : public GI_GTK_VSCALE_BASE
{ typedef GI_GTK_VSCALE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkVScale>
{ typedef Gtk::VScale type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class VScaleClassDef
{
typedef VScaleClassDef self;
public:
typedef Gtk::VScale instance_type;
typedef ::GtkVScaleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class VScaleClass: public detail::ClassTemplate<Gtk::impl::internal::VScaleClassDef, Gtk::impl::internal::ScaleClass>
{
typedef VScaleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::VScaleClassDef, Gtk::impl::internal::ScaleClass> super;

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

using VScaleImpl = detail::ObjectImpl<VScale, internal::VScaleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
