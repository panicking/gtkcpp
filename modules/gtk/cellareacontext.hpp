// AUTO-GENERATED

#ifndef _GI_GTK_CELLAREACONTEXT_HPP_
#define _GI_GTK_CELLAREACONTEXT_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class CellArea;

class CellAreaContext;

namespace base {


#define GI_GTK_CELLAREACONTEXT_BASE base::CellAreaContextBase
class CellAreaContextBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkCellAreaContext BaseObjectType;

CellAreaContextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_cell_area_context_get_type(); } 

// void gtk_cell_area_context_allocate (GtkCellAreaContext* context, gint width, gint height);
// void gtk_cell_area_context_allocate (::GtkCellAreaContext* context, gint width, gint height);
GI_INLINE_DECL void allocate (gint width, gint height) noexcept;

// void gtk_cell_area_context_get_allocation (GtkCellAreaContext* context, gint* width, gint* height);
// void gtk_cell_area_context_get_allocation (::GtkCellAreaContext* context, gint* width, gint* height);
GI_INLINE_DECL void get_allocation (gint * width = nullptr, gint * height = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_allocation () noexcept;

// GtkCellArea* gtk_cell_area_context_get_area (GtkCellAreaContext* context);
// ::GtkCellArea* gtk_cell_area_context_get_area (::GtkCellAreaContext* context);
GI_INLINE_DECL Gtk::CellArea get_area () noexcept;

// void gtk_cell_area_context_get_preferred_height (GtkCellAreaContext* context, gint* minimum_height, gint* natural_height);
// void gtk_cell_area_context_get_preferred_height (::GtkCellAreaContext* context, gint* minimum_height, gint* natural_height);
GI_INLINE_DECL void get_preferred_height (gint * minimum_height = nullptr, gint * natural_height = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_preferred_height () noexcept;

// void gtk_cell_area_context_get_preferred_height_for_width (GtkCellAreaContext* context, gint width, gint* minimum_height, gint* natural_height);
// void gtk_cell_area_context_get_preferred_height_for_width (::GtkCellAreaContext* context, gint width, gint* minimum_height, gint* natural_height);
GI_INLINE_DECL void get_preferred_height_for_width (gint width, gint * minimum_height = nullptr, gint * natural_height = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_preferred_height_for_width (gint width) noexcept;

// void gtk_cell_area_context_get_preferred_width (GtkCellAreaContext* context, gint* minimum_width, gint* natural_width);
// void gtk_cell_area_context_get_preferred_width (::GtkCellAreaContext* context, gint* minimum_width, gint* natural_width);
GI_INLINE_DECL void get_preferred_width (gint * minimum_width = nullptr, gint * natural_width = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_preferred_width () noexcept;

// void gtk_cell_area_context_get_preferred_width_for_height (GtkCellAreaContext* context, gint height, gint* minimum_width, gint* natural_width);
// void gtk_cell_area_context_get_preferred_width_for_height (::GtkCellAreaContext* context, gint height, gint* minimum_width, gint* natural_width);
GI_INLINE_DECL void get_preferred_width_for_height (gint height, gint * minimum_width = nullptr, gint * natural_width = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_preferred_width_for_height (gint height) noexcept;

// void gtk_cell_area_context_push_preferred_height (GtkCellAreaContext* context, gint minimum_height, gint natural_height);
// void gtk_cell_area_context_push_preferred_height (::GtkCellAreaContext* context, gint minimum_height, gint natural_height);
GI_INLINE_DECL void push_preferred_height (gint minimum_height, gint natural_height) noexcept;

// void gtk_cell_area_context_push_preferred_width (GtkCellAreaContext* context, gint minimum_width, gint natural_width);
// void gtk_cell_area_context_push_preferred_width (::GtkCellAreaContext* context, gint minimum_width, gint natural_width);
GI_INLINE_DECL void push_preferred_width (gint minimum_width, gint natural_width) noexcept;

// void gtk_cell_area_context_reset (GtkCellAreaContext* context);
// void gtk_cell_area_context_reset (::GtkCellAreaContext* context);
GI_INLINE_DECL void reset () noexcept;

gi::property_proxy<Gtk::CellArea, base::CellAreaContextBase> property_area()
{ return gi::property_proxy<Gtk::CellArea, base::CellAreaContextBase> (*this, "area"); }
const gi::property_proxy<Gtk::CellArea, base::CellAreaContextBase> property_area() const
{ return gi::property_proxy<Gtk::CellArea, base::CellAreaContextBase> (*this, "area"); }

gi::property_proxy<gint, base::CellAreaContextBase> property_minimum_height()
{ return gi::property_proxy<gint, base::CellAreaContextBase> (*this, "minimum-height"); }
const gi::property_proxy<gint, base::CellAreaContextBase> property_minimum_height() const
{ return gi::property_proxy<gint, base::CellAreaContextBase> (*this, "minimum-height"); }

gi::property_proxy<gint, base::CellAreaContextBase> property_minimum_width()
{ return gi::property_proxy<gint, base::CellAreaContextBase> (*this, "minimum-width"); }
const gi::property_proxy<gint, base::CellAreaContextBase> property_minimum_width() const
{ return gi::property_proxy<gint, base::CellAreaContextBase> (*this, "minimum-width"); }

gi::property_proxy<gint, base::CellAreaContextBase> property_natural_height()
{ return gi::property_proxy<gint, base::CellAreaContextBase> (*this, "natural-height"); }
const gi::property_proxy<gint, base::CellAreaContextBase> property_natural_height() const
{ return gi::property_proxy<gint, base::CellAreaContextBase> (*this, "natural-height"); }

gi::property_proxy<gint, base::CellAreaContextBase> property_natural_width()
{ return gi::property_proxy<gint, base::CellAreaContextBase> (*this, "natural-width"); }
const gi::property_proxy<gint, base::CellAreaContextBase> property_natural_width() const
{ return gi::property_proxy<gint, base::CellAreaContextBase> (*this, "natural-width"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellareacontext_extra_def.hpp>)
#include <gtk/cellareacontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellareacontext_extra.hpp>)
#include <gtk/cellareacontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CellAreaContext : public GI_GTK_CELLAREACONTEXT_BASE
{ typedef GI_GTK_CELLAREACONTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCellAreaContext>
{ typedef Gtk::CellAreaContext type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CellAreaContextClassDef
{
typedef CellAreaContextClassDef self;
public:
typedef Gtk::CellAreaContext instance_type;
typedef ::GtkCellAreaContextClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void CellAreaContext::allocate (GtkCellAreaContext* context, gint width, gint height);
// void CellAreaContext::allocate (::GtkCellAreaContext* context, gint width, gint height);
virtual void allocate_ (gint width, gint height) noexcept = 0;

// void CellAreaContext::get_preferred_height_for_width (GtkCellAreaContext* context, gint width, gint* minimum_height, gint* natural_height);
// void CellAreaContext::get_preferred_height_for_width (::GtkCellAreaContext* context, gint width, gint* minimum_height, gint* natural_height);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void CellAreaContext::get_preferred_width_for_height (GtkCellAreaContext* context, gint height, gint* minimum_width, gint* natural_width);
// void CellAreaContext::get_preferred_width_for_height (::GtkCellAreaContext* context, gint height, gint* minimum_width, gint* natural_width);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void CellAreaContext::reset (GtkCellAreaContext* context);
// void CellAreaContext::reset (::GtkCellAreaContext* context);
virtual void reset_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class CellAreaContextClass: public detail::ClassTemplate<Gtk::impl::internal::CellAreaContextClassDef, GObject::impl::internal::ObjectClass>
{
typedef CellAreaContextClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::CellAreaContextClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void CellAreaContext::allocate (GtkCellAreaContext* context, gint width, gint height);
// void CellAreaContext::allocate (::GtkCellAreaContext* context, gint width, gint height);
GI_INLINE_DECL void allocate_ (gint width, gint height) noexcept override;

// void CellAreaContext::get_preferred_height_for_width (GtkCellAreaContext* context, gint width, gint* minimum_height, gint* natural_height);
// void CellAreaContext::get_preferred_height_for_width (::GtkCellAreaContext* context, gint width, gint* minimum_height, gint* natural_height);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void CellAreaContext::get_preferred_width_for_height (GtkCellAreaContext* context, gint height, gint* minimum_width, gint* natural_width);
// void CellAreaContext::get_preferred_width_for_height (::GtkCellAreaContext* context, gint height, gint* minimum_width, gint* natural_width);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void CellAreaContext::reset (GtkCellAreaContext* context);
// void CellAreaContext::reset (::GtkCellAreaContext* context);
GI_INLINE_DECL void reset_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using CellAreaContextImpl = detail::ObjectImpl<CellAreaContext, internal::CellAreaContextClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
