// AUTO-GENERATED

#ifndef _GI_GTK_HSCALE_HPP_
#define _GI_GTK_HSCALE_HPP_

#include "scale.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;

class HScale;

namespace base {


#define GI_GTK_HSCALE_BASE base::HScaleBase
class HScaleBase : public Gtk::Scale
{
typedef Gtk::Scale super_type;
public:
typedef ::GtkHScale BaseObjectType;

HScaleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_hscale_get_type(); } 

// GtkWidget* gtk_hscale_new (GtkAdjustment* adjustment);
// ::GtkHScale* gtk_hscale_new (::GtkAdjustment* adjustment);
// IGNORE; deprecated

// GtkWidget* gtk_hscale_new_with_range (gdouble min, gdouble max, gdouble step);
// ::GtkHScale* gtk_hscale_new_with_range (gdouble min, gdouble max, gdouble step);
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/hscale_extra_def.hpp>)
#include <gtk/hscale_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/hscale_extra.hpp>)
#include <gtk/hscale_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class HScale : public GI_GTK_HSCALE_BASE
{ typedef GI_GTK_HSCALE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkHScale>
{ typedef Gtk::HScale type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class HScaleClassDef
{
typedef HScaleClassDef self;
public:
typedef Gtk::HScale instance_type;
typedef ::GtkHScaleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class HScaleClass: public detail::ClassTemplate<Gtk::impl::internal::HScaleClassDef, Gtk::impl::internal::ScaleClass>
{
typedef HScaleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::HScaleClassDef, Gtk::impl::internal::ScaleClass> super;

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

using HScaleImpl = detail::ObjectImpl<HScale, internal::HScaleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
