// AUTO-GENERATED

#ifndef _GI_GTK_CELLVIEW_HPP_
#define _GI_GTK_CELLVIEW_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class CellArea;
class CellAreaContext;
class CellLayout;
class Orientable;
class Requisition;
class TreeModel;
class TreePath;

class CellView;

namespace base {


#define GI_GTK_CELLVIEW_BASE base::CellViewBase
class CellViewBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkCellView BaseObjectType;

CellViewBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_cell_view_get_type(); } 

GI_INLINE_DECL Gtk::CellLayout interface_ (gi::interface_tag<Gtk::CellLayout>);

GI_INLINE_DECL operator Gtk::CellLayout ();

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* gtk_cell_view_new ();
// ::GtkCellView* gtk_cell_view_new ();
static GI_INLINE_DECL Gtk::CellView new_ () noexcept;

// GtkWidget* gtk_cell_view_new_with_context (GtkCellArea* area, GtkCellAreaContext* context);
// ::GtkCellView* gtk_cell_view_new_with_context (::GtkCellArea* area, ::GtkCellAreaContext* context);
static GI_INLINE_DECL Gtk::CellView new_with_context (Gtk::CellArea area, Gtk::CellAreaContext context) noexcept;

// GtkWidget* gtk_cell_view_new_with_markup (const gchar* markup);
// ::GtkCellView* gtk_cell_view_new_with_markup (const char* markup);
static GI_INLINE_DECL Gtk::CellView new_with_markup (const std::string & markup) noexcept;

// GtkWidget* gtk_cell_view_new_with_pixbuf (GdkPixbuf* pixbuf);
// ::GtkCellView* gtk_cell_view_new_with_pixbuf (::GdkPixbuf* pixbuf);
static GI_INLINE_DECL Gtk::CellView new_with_pixbuf (GdkPixbuf::Pixbuf pixbuf) noexcept;

// GtkWidget* gtk_cell_view_new_with_text (const gchar* text);
// ::GtkCellView* gtk_cell_view_new_with_text (const char* text);
static GI_INLINE_DECL Gtk::CellView new_with_text (const std::string & text) noexcept;

// GtkTreePath* gtk_cell_view_get_displayed_row (GtkCellView* cell_view);
// ::GtkTreePath* gtk_cell_view_get_displayed_row (::GtkCellView* cell_view);
GI_INLINE_DECL Gtk::TreePath get_displayed_row () noexcept;

// gboolean gtk_cell_view_get_draw_sensitive (GtkCellView* cell_view);
// gboolean gtk_cell_view_get_draw_sensitive (::GtkCellView* cell_view);
GI_INLINE_DECL bool get_draw_sensitive () noexcept;

// gboolean gtk_cell_view_get_fit_model (GtkCellView* cell_view);
// gboolean gtk_cell_view_get_fit_model (::GtkCellView* cell_view);
GI_INLINE_DECL bool get_fit_model () noexcept;

// GtkTreeModel* gtk_cell_view_get_model (GtkCellView* cell_view);
// ::GtkTreeModel* gtk_cell_view_get_model (::GtkCellView* cell_view);
GI_INLINE_DECL Gtk::TreeModel get_model () noexcept;

// gboolean gtk_cell_view_get_size_of_row (GtkCellView* cell_view, GtkTreePath* path, GtkRequisition* requisition);
// gboolean gtk_cell_view_get_size_of_row (::GtkCellView* cell_view, ::GtkTreePath* path, ::GtkRequisition* requisition);
// IGNORE; deprecated

// void gtk_cell_view_set_background_color (GtkCellView* cell_view, const GdkColor* color);
// void gtk_cell_view_set_background_color (::GtkCellView* cell_view, const  color);
// IGNORE; deprecated

// void gtk_cell_view_set_background_rgba (GtkCellView* cell_view, const GdkRGBA* rgba);
// void gtk_cell_view_set_background_rgba (::GtkCellView* cell_view, const ::GdkRGBA* rgba);
GI_INLINE_DECL void set_background_rgba (const Gdk::RGBA & rgba) noexcept;

// void gtk_cell_view_set_displayed_row (GtkCellView* cell_view, GtkTreePath* path);
// void gtk_cell_view_set_displayed_row (::GtkCellView* cell_view, ::GtkTreePath* path);
GI_INLINE_DECL void set_displayed_row (Gtk::TreePath path) noexcept;
GI_INLINE_DECL void set_displayed_row () noexcept;

// void gtk_cell_view_set_draw_sensitive (GtkCellView* cell_view, gboolean draw_sensitive);
// void gtk_cell_view_set_draw_sensitive (::GtkCellView* cell_view, gboolean draw_sensitive);
GI_INLINE_DECL void set_draw_sensitive (gboolean draw_sensitive) noexcept;

// void gtk_cell_view_set_fit_model (GtkCellView* cell_view, gboolean fit_model);
// void gtk_cell_view_set_fit_model (::GtkCellView* cell_view, gboolean fit_model);
GI_INLINE_DECL void set_fit_model (gboolean fit_model) noexcept;

// void gtk_cell_view_set_model (GtkCellView* cell_view, GtkTreeModel* model);
// void gtk_cell_view_set_model (::GtkCellView* cell_view, ::GtkTreeModel* model);
GI_INLINE_DECL void set_model (Gtk::TreeModel model) noexcept;
GI_INLINE_DECL void set_model () noexcept;

gi::property_proxy_write<std::string, base::CellViewBase> property_background()
{ return gi::property_proxy_write<std::string, base::CellViewBase> (*this, "background"); }

gi::property_proxy<Gdk::RGBA, base::CellViewBase> property_background_rgba()
{ return gi::property_proxy<Gdk::RGBA, base::CellViewBase> (*this, "background-rgba"); }
const gi::property_proxy<Gdk::RGBA, base::CellViewBase> property_background_rgba() const
{ return gi::property_proxy<Gdk::RGBA, base::CellViewBase> (*this, "background-rgba"); }

gi::property_proxy<bool, base::CellViewBase> property_background_set()
{ return gi::property_proxy<bool, base::CellViewBase> (*this, "background-set"); }
const gi::property_proxy<bool, base::CellViewBase> property_background_set() const
{ return gi::property_proxy<bool, base::CellViewBase> (*this, "background-set"); }

gi::property_proxy<Gtk::CellArea, base::CellViewBase> property_cell_area()
{ return gi::property_proxy<Gtk::CellArea, base::CellViewBase> (*this, "cell-area"); }
const gi::property_proxy<Gtk::CellArea, base::CellViewBase> property_cell_area() const
{ return gi::property_proxy<Gtk::CellArea, base::CellViewBase> (*this, "cell-area"); }

gi::property_proxy<Gtk::CellAreaContext, base::CellViewBase> property_cell_area_context()
{ return gi::property_proxy<Gtk::CellAreaContext, base::CellViewBase> (*this, "cell-area-context"); }
const gi::property_proxy<Gtk::CellAreaContext, base::CellViewBase> property_cell_area_context() const
{ return gi::property_proxy<Gtk::CellAreaContext, base::CellViewBase> (*this, "cell-area-context"); }

gi::property_proxy<bool, base::CellViewBase> property_draw_sensitive()
{ return gi::property_proxy<bool, base::CellViewBase> (*this, "draw-sensitive"); }
const gi::property_proxy<bool, base::CellViewBase> property_draw_sensitive() const
{ return gi::property_proxy<bool, base::CellViewBase> (*this, "draw-sensitive"); }

gi::property_proxy<bool, base::CellViewBase> property_fit_model()
{ return gi::property_proxy<bool, base::CellViewBase> (*this, "fit-model"); }
const gi::property_proxy<bool, base::CellViewBase> property_fit_model() const
{ return gi::property_proxy<bool, base::CellViewBase> (*this, "fit-model"); }

gi::property_proxy<Gtk::TreeModel, base::CellViewBase> property_model()
{ return gi::property_proxy<Gtk::TreeModel, base::CellViewBase> (*this, "model"); }
const gi::property_proxy<Gtk::TreeModel, base::CellViewBase> property_model() const
{ return gi::property_proxy<Gtk::TreeModel, base::CellViewBase> (*this, "model"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellview_extra_def.hpp>)
#include <gtk/cellview_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellview_extra.hpp>)
#include <gtk/cellview_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CellView : public GI_GTK_CELLVIEW_BASE
{ typedef GI_GTK_CELLVIEW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCellView>
{ typedef Gtk::CellView type; }; 

} // namespace repository

} // namespace gi

#include "celllayout.hpp"
#include "orientable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CellViewClassDef
{
typedef CellViewClassDef self;
public:
typedef Gtk::CellView instance_type;
typedef ::GtkCellViewClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class CellViewClass: public detail::ClassTemplate<Gtk::impl::internal::CellViewClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::CellLayoutIfaceClassImpl, Gtk::impl::internal::OrientableIfaceClassImpl>
{
typedef CellViewClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::CellViewClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::CellLayoutIfaceClassImpl, Gtk::impl::internal::OrientableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::CellLayoutIfaceClassImpl GtkCellLayoutIface_type;
typedef Gtk::impl::internal::OrientableIfaceClassImpl GtkOrientableIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using CellViewImpl = detail::ObjectImpl<CellView, internal::CellViewClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
