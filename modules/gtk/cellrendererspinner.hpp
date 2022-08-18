// AUTO-GENERATED

#ifndef _GI_GTK_CELLRENDERERSPINNER_HPP_
#define _GI_GTK_CELLRENDERERSPINNER_HPP_

#include "cellrenderer.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class CellRendererSpinner;

namespace base {


#define GI_GTK_CELLRENDERERSPINNER_BASE base::CellRendererSpinnerBase
class CellRendererSpinnerBase : public Gtk::CellRenderer
{
typedef Gtk::CellRenderer super_type;
public:
typedef ::GtkCellRendererSpinner BaseObjectType;

CellRendererSpinnerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_cell_renderer_spinner_get_type(); } 

// GtkCellRenderer* gtk_cell_renderer_spinner_new ();
// ::GtkCellRendererSpinner* gtk_cell_renderer_spinner_new ();
static GI_INLINE_DECL Gtk::CellRendererSpinner new_ () noexcept;

gi::property_proxy<bool, base::CellRendererSpinnerBase> property_active()
{ return gi::property_proxy<bool, base::CellRendererSpinnerBase> (*this, "active"); }
const gi::property_proxy<bool, base::CellRendererSpinnerBase> property_active() const
{ return gi::property_proxy<bool, base::CellRendererSpinnerBase> (*this, "active"); }

gi::property_proxy<guint, base::CellRendererSpinnerBase> property_pulse()
{ return gi::property_proxy<guint, base::CellRendererSpinnerBase> (*this, "pulse"); }
const gi::property_proxy<guint, base::CellRendererSpinnerBase> property_pulse() const
{ return gi::property_proxy<guint, base::CellRendererSpinnerBase> (*this, "pulse"); }

gi::property_proxy<Gtk::IconSize, base::CellRendererSpinnerBase> property_size()
{ return gi::property_proxy<Gtk::IconSize, base::CellRendererSpinnerBase> (*this, "size"); }
const gi::property_proxy<Gtk::IconSize, base::CellRendererSpinnerBase> property_size() const
{ return gi::property_proxy<Gtk::IconSize, base::CellRendererSpinnerBase> (*this, "size"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellrendererspinner_extra_def.hpp>)
#include <gtk/cellrendererspinner_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellrendererspinner_extra.hpp>)
#include <gtk/cellrendererspinner_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CellRendererSpinner : public GI_GTK_CELLRENDERERSPINNER_BASE
{ typedef GI_GTK_CELLRENDERERSPINNER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCellRendererSpinner>
{ typedef Gtk::CellRendererSpinner type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CellRendererSpinnerClassDef
{
typedef CellRendererSpinnerClassDef self;
public:
typedef Gtk::CellRendererSpinner instance_type;
typedef ::GtkCellRendererSpinnerClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class CellRendererSpinnerClass: public detail::ClassTemplate<Gtk::impl::internal::CellRendererSpinnerClassDef, Gtk::impl::internal::CellRendererClass>
{
typedef CellRendererSpinnerClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::CellRendererSpinnerClassDef, Gtk::impl::internal::CellRendererClass> super;

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

using CellRendererSpinnerImpl = detail::ObjectImpl<CellRendererSpinner, internal::CellRendererSpinnerClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
