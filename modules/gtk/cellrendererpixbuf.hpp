// AUTO-GENERATED

#ifndef _GI_GTK_CELLRENDERERPIXBUF_HPP_
#define _GI_GTK_CELLRENDERERPIXBUF_HPP_

#include "cellrenderer.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class CellRendererPixbuf;

namespace base {


#define GI_GTK_CELLRENDERERPIXBUF_BASE base::CellRendererPixbufBase
class CellRendererPixbufBase : public Gtk::CellRenderer
{
typedef Gtk::CellRenderer super_type;
public:
typedef ::GtkCellRendererPixbuf BaseObjectType;

CellRendererPixbufBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_cell_renderer_pixbuf_get_type(); } 

// GtkCellRenderer* gtk_cell_renderer_pixbuf_new ();
// ::GtkCellRendererPixbuf* gtk_cell_renderer_pixbuf_new ();
static GI_INLINE_DECL Gtk::CellRendererPixbuf new_ () noexcept;

gi::property_proxy<bool, base::CellRendererPixbufBase> property_follow_state()
{ return gi::property_proxy<bool, base::CellRendererPixbufBase> (*this, "follow-state"); }
const gi::property_proxy<bool, base::CellRendererPixbufBase> property_follow_state() const
{ return gi::property_proxy<bool, base::CellRendererPixbufBase> (*this, "follow-state"); }

gi::property_proxy<Gio::Icon, base::CellRendererPixbufBase> property_gicon()
{ return gi::property_proxy<Gio::Icon, base::CellRendererPixbufBase> (*this, "gicon"); }
const gi::property_proxy<Gio::Icon, base::CellRendererPixbufBase> property_gicon() const
{ return gi::property_proxy<Gio::Icon, base::CellRendererPixbufBase> (*this, "gicon"); }

gi::property_proxy<std::string, base::CellRendererPixbufBase> property_icon_name()
{ return gi::property_proxy<std::string, base::CellRendererPixbufBase> (*this, "icon-name"); }
const gi::property_proxy<std::string, base::CellRendererPixbufBase> property_icon_name() const
{ return gi::property_proxy<std::string, base::CellRendererPixbufBase> (*this, "icon-name"); }

gi::property_proxy<GdkPixbuf::Pixbuf, base::CellRendererPixbufBase> property_pixbuf()
{ return gi::property_proxy<GdkPixbuf::Pixbuf, base::CellRendererPixbufBase> (*this, "pixbuf"); }
const gi::property_proxy<GdkPixbuf::Pixbuf, base::CellRendererPixbufBase> property_pixbuf() const
{ return gi::property_proxy<GdkPixbuf::Pixbuf, base::CellRendererPixbufBase> (*this, "pixbuf"); }

gi::property_proxy<GdkPixbuf::Pixbuf, base::CellRendererPixbufBase> property_pixbuf_expander_closed()
{ return gi::property_proxy<GdkPixbuf::Pixbuf, base::CellRendererPixbufBase> (*this, "pixbuf-expander-closed"); }
const gi::property_proxy<GdkPixbuf::Pixbuf, base::CellRendererPixbufBase> property_pixbuf_expander_closed() const
{ return gi::property_proxy<GdkPixbuf::Pixbuf, base::CellRendererPixbufBase> (*this, "pixbuf-expander-closed"); }

gi::property_proxy<GdkPixbuf::Pixbuf, base::CellRendererPixbufBase> property_pixbuf_expander_open()
{ return gi::property_proxy<GdkPixbuf::Pixbuf, base::CellRendererPixbufBase> (*this, "pixbuf-expander-open"); }
const gi::property_proxy<GdkPixbuf::Pixbuf, base::CellRendererPixbufBase> property_pixbuf_expander_open() const
{ return gi::property_proxy<GdkPixbuf::Pixbuf, base::CellRendererPixbufBase> (*this, "pixbuf-expander-open"); }

gi::property_proxy<std::string, base::CellRendererPixbufBase> property_stock_detail()
{ return gi::property_proxy<std::string, base::CellRendererPixbufBase> (*this, "stock-detail"); }
const gi::property_proxy<std::string, base::CellRendererPixbufBase> property_stock_detail() const
{ return gi::property_proxy<std::string, base::CellRendererPixbufBase> (*this, "stock-detail"); }

gi::property_proxy<std::string, base::CellRendererPixbufBase> property_stock_id()
{ return gi::property_proxy<std::string, base::CellRendererPixbufBase> (*this, "stock-id"); }
const gi::property_proxy<std::string, base::CellRendererPixbufBase> property_stock_id() const
{ return gi::property_proxy<std::string, base::CellRendererPixbufBase> (*this, "stock-id"); }

gi::property_proxy<guint, base::CellRendererPixbufBase> property_stock_size()
{ return gi::property_proxy<guint, base::CellRendererPixbufBase> (*this, "stock-size"); }
const gi::property_proxy<guint, base::CellRendererPixbufBase> property_stock_size() const
{ return gi::property_proxy<guint, base::CellRendererPixbufBase> (*this, "stock-size"); }

gi::property_proxy<cairo::Surface, base::CellRendererPixbufBase> property_surface()
{ return gi::property_proxy<cairo::Surface, base::CellRendererPixbufBase> (*this, "surface"); }
const gi::property_proxy<cairo::Surface, base::CellRendererPixbufBase> property_surface() const
{ return gi::property_proxy<cairo::Surface, base::CellRendererPixbufBase> (*this, "surface"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellrendererpixbuf_extra_def.hpp>)
#include <gtk/cellrendererpixbuf_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellrendererpixbuf_extra.hpp>)
#include <gtk/cellrendererpixbuf_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CellRendererPixbuf : public GI_GTK_CELLRENDERERPIXBUF_BASE
{ typedef GI_GTK_CELLRENDERERPIXBUF_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCellRendererPixbuf>
{ typedef Gtk::CellRendererPixbuf type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CellRendererPixbufClassDef
{
typedef CellRendererPixbufClassDef self;
public:
typedef Gtk::CellRendererPixbuf instance_type;
typedef ::GtkCellRendererPixbufClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class CellRendererPixbufClass: public detail::ClassTemplate<Gtk::impl::internal::CellRendererPixbufClassDef, Gtk::impl::internal::CellRendererClass>
{
typedef CellRendererPixbufClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::CellRendererPixbufClassDef, Gtk::impl::internal::CellRendererClass> super;

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

using CellRendererPixbufImpl = detail::ObjectImpl<CellRendererPixbuf, internal::CellRendererPixbufClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
