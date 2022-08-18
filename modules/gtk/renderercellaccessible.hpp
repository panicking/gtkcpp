// AUTO-GENERATED

#ifndef _GI_GTK_RENDERERCELLACCESSIBLE_HPP_
#define _GI_GTK_RENDERERCELLACCESSIBLE_HPP_

#include "cellaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class CellRenderer;

class RendererCellAccessible;

namespace base {


#define GI_GTK_RENDERERCELLACCESSIBLE_BASE base::RendererCellAccessibleBase
class RendererCellAccessibleBase : public Gtk::CellAccessible
{
typedef Gtk::CellAccessible super_type;
public:
typedef ::GtkRendererCellAccessible BaseObjectType;

RendererCellAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_renderer_cell_accessible_get_type(); } 

// AtkObject* gtk_renderer_cell_accessible_new (GtkCellRenderer* renderer);
// ::GtkRendererCellAccessible* gtk_renderer_cell_accessible_new (::GtkCellRenderer* renderer);
static GI_INLINE_DECL Gtk::RendererCellAccessible new_ (Gtk::CellRenderer renderer) noexcept;

gi::property_proxy<Gtk::CellRenderer, base::RendererCellAccessibleBase> property_renderer()
{ return gi::property_proxy<Gtk::CellRenderer, base::RendererCellAccessibleBase> (*this, "renderer"); }
const gi::property_proxy<Gtk::CellRenderer, base::RendererCellAccessibleBase> property_renderer() const
{ return gi::property_proxy<Gtk::CellRenderer, base::RendererCellAccessibleBase> (*this, "renderer"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/renderercellaccessible_extra_def.hpp>)
#include <gtk/renderercellaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/renderercellaccessible_extra.hpp>)
#include <gtk/renderercellaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class RendererCellAccessible : public GI_GTK_RENDERERCELLACCESSIBLE_BASE
{ typedef GI_GTK_RENDERERCELLACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRendererCellAccessible>
{ typedef Gtk::RendererCellAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class RendererCellAccessibleClassDef
{
typedef RendererCellAccessibleClassDef self;
public:
typedef Gtk::RendererCellAccessible instance_type;
typedef ::GtkRendererCellAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class RendererCellAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::RendererCellAccessibleClassDef, Gtk::impl::internal::CellAccessibleClass>
{
typedef RendererCellAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::RendererCellAccessibleClassDef, Gtk::impl::internal::CellAccessibleClass> super;

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

using RendererCellAccessibleImpl = detail::ObjectImpl<RendererCellAccessible, internal::RendererCellAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
