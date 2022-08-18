// AUTO-GENERATED

#ifndef _GI_GTK_CELLRENDERERPROGRESS_HPP_
#define _GI_GTK_CELLRENDERERPROGRESS_HPP_

#include "cellrenderer.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Orientable;

class CellRendererProgress;

namespace base {


#define GI_GTK_CELLRENDERERPROGRESS_BASE base::CellRendererProgressBase
class CellRendererProgressBase : public Gtk::CellRenderer
{
typedef Gtk::CellRenderer super_type;
public:
typedef ::GtkCellRendererProgress BaseObjectType;

CellRendererProgressBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_cell_renderer_progress_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkCellRenderer* gtk_cell_renderer_progress_new ();
// ::GtkCellRendererProgress* gtk_cell_renderer_progress_new ();
static GI_INLINE_DECL Gtk::CellRendererProgress new_ () noexcept;

gi::property_proxy<bool, base::CellRendererProgressBase> property_inverted()
{ return gi::property_proxy<bool, base::CellRendererProgressBase> (*this, "inverted"); }
const gi::property_proxy<bool, base::CellRendererProgressBase> property_inverted() const
{ return gi::property_proxy<bool, base::CellRendererProgressBase> (*this, "inverted"); }

gi::property_proxy<gint, base::CellRendererProgressBase> property_pulse()
{ return gi::property_proxy<gint, base::CellRendererProgressBase> (*this, "pulse"); }
const gi::property_proxy<gint, base::CellRendererProgressBase> property_pulse() const
{ return gi::property_proxy<gint, base::CellRendererProgressBase> (*this, "pulse"); }

gi::property_proxy<std::string, base::CellRendererProgressBase> property_text()
{ return gi::property_proxy<std::string, base::CellRendererProgressBase> (*this, "text"); }
const gi::property_proxy<std::string, base::CellRendererProgressBase> property_text() const
{ return gi::property_proxy<std::string, base::CellRendererProgressBase> (*this, "text"); }

gi::property_proxy<gfloat, base::CellRendererProgressBase> property_text_xalign()
{ return gi::property_proxy<gfloat, base::CellRendererProgressBase> (*this, "text-xalign"); }
const gi::property_proxy<gfloat, base::CellRendererProgressBase> property_text_xalign() const
{ return gi::property_proxy<gfloat, base::CellRendererProgressBase> (*this, "text-xalign"); }

gi::property_proxy<gfloat, base::CellRendererProgressBase> property_text_yalign()
{ return gi::property_proxy<gfloat, base::CellRendererProgressBase> (*this, "text-yalign"); }
const gi::property_proxy<gfloat, base::CellRendererProgressBase> property_text_yalign() const
{ return gi::property_proxy<gfloat, base::CellRendererProgressBase> (*this, "text-yalign"); }

gi::property_proxy<gint, base::CellRendererProgressBase> property_value()
{ return gi::property_proxy<gint, base::CellRendererProgressBase> (*this, "value"); }
const gi::property_proxy<gint, base::CellRendererProgressBase> property_value() const
{ return gi::property_proxy<gint, base::CellRendererProgressBase> (*this, "value"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellrendererprogress_extra_def.hpp>)
#include <gtk/cellrendererprogress_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellrendererprogress_extra.hpp>)
#include <gtk/cellrendererprogress_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CellRendererProgress : public GI_GTK_CELLRENDERERPROGRESS_BASE
{ typedef GI_GTK_CELLRENDERERPROGRESS_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCellRendererProgress>
{ typedef Gtk::CellRendererProgress type; }; 

} // namespace repository

} // namespace gi

#include "orientable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CellRendererProgressClassDef
{
typedef CellRendererProgressClassDef self;
public:
typedef Gtk::CellRendererProgress instance_type;
typedef ::GtkCellRendererProgressClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class CellRendererProgressClass: public detail::ClassTemplate<Gtk::impl::internal::CellRendererProgressClassDef, Gtk::impl::internal::CellRendererClass, Gtk::impl::internal::OrientableIfaceClassImpl>
{
typedef CellRendererProgressClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::CellRendererProgressClassDef, Gtk::impl::internal::CellRendererClass, Gtk::impl::internal::OrientableIfaceClassImpl> super;

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

using CellRendererProgressImpl = detail::ObjectImpl<CellRendererProgress, internal::CellRendererProgressClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
