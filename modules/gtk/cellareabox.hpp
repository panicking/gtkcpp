// AUTO-GENERATED

#ifndef _GI_GTK_CELLAREABOX_HPP_
#define _GI_GTK_CELLAREABOX_HPP_

#include "cellarea.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class CellRenderer;
class Orientable;

class CellAreaBox;

namespace base {


#define GI_GTK_CELLAREABOX_BASE base::CellAreaBoxBase
class CellAreaBoxBase : public Gtk::CellArea
{
typedef Gtk::CellArea super_type;
public:
typedef ::GtkCellAreaBox BaseObjectType;

CellAreaBoxBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_cell_area_box_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkCellArea* gtk_cell_area_box_new ();
// ::GtkCellAreaBox* gtk_cell_area_box_new ();
static GI_INLINE_DECL Gtk::CellAreaBox new_ () noexcept;

// gint gtk_cell_area_box_get_spacing (GtkCellAreaBox* box);
// gint gtk_cell_area_box_get_spacing (::GtkCellAreaBox* box);
GI_INLINE_DECL gint get_spacing () noexcept;

// void gtk_cell_area_box_pack_end (GtkCellAreaBox* box, GtkCellRenderer* renderer, gboolean expand, gboolean align, gboolean fixed);
// void gtk_cell_area_box_pack_end (::GtkCellAreaBox* box, ::GtkCellRenderer* renderer, gboolean expand, gboolean align, gboolean fixed);
GI_INLINE_DECL void pack_end (Gtk::CellRenderer renderer, gboolean expand, gboolean align, gboolean fixed) noexcept;

// void gtk_cell_area_box_pack_start (GtkCellAreaBox* box, GtkCellRenderer* renderer, gboolean expand, gboolean align, gboolean fixed);
// void gtk_cell_area_box_pack_start (::GtkCellAreaBox* box, ::GtkCellRenderer* renderer, gboolean expand, gboolean align, gboolean fixed);
GI_INLINE_DECL void pack_start (Gtk::CellRenderer renderer, gboolean expand, gboolean align, gboolean fixed) noexcept;

// void gtk_cell_area_box_set_spacing (GtkCellAreaBox* box, gint spacing);
// void gtk_cell_area_box_set_spacing (::GtkCellAreaBox* box, gint spacing);
GI_INLINE_DECL void set_spacing (gint spacing) noexcept;

gi::property_proxy<gint, base::CellAreaBoxBase> property_spacing()
{ return gi::property_proxy<gint, base::CellAreaBoxBase> (*this, "spacing"); }
const gi::property_proxy<gint, base::CellAreaBoxBase> property_spacing() const
{ return gi::property_proxy<gint, base::CellAreaBoxBase> (*this, "spacing"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellareabox_extra_def.hpp>)
#include <gtk/cellareabox_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellareabox_extra.hpp>)
#include <gtk/cellareabox_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CellAreaBox : public GI_GTK_CELLAREABOX_BASE
{ typedef GI_GTK_CELLAREABOX_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCellAreaBox>
{ typedef Gtk::CellAreaBox type; }; 

} // namespace repository

} // namespace gi

#include "orientable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CellAreaBoxClassDef
{
typedef CellAreaBoxClassDef self;
public:
typedef Gtk::CellAreaBox instance_type;
typedef ::GtkCellAreaBoxClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class CellAreaBoxClass: public detail::ClassTemplate<Gtk::impl::internal::CellAreaBoxClassDef, Gtk::impl::internal::CellAreaClass, Gtk::impl::internal::OrientableIfaceClassImpl>
{
typedef CellAreaBoxClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::CellAreaBoxClassDef, Gtk::impl::internal::CellAreaClass, Gtk::impl::internal::OrientableIfaceClassImpl> super;

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

using CellAreaBoxImpl = detail::ObjectImpl<CellAreaBox, internal::CellAreaBoxClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
