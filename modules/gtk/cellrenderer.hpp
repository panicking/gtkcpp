// AUTO-GENERATED

#ifndef _GI_GTK_CELLRENDERER_HPP_
#define _GI_GTK_CELLRENDERER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class CellEditable;
class Requisition;
class Widget;

class CellRenderer;

namespace base {


#define GI_GTK_CELLRENDERER_BASE base::CellRendererBase
class CellRendererBase : public GObject::InitiallyUnowned
{
typedef GObject::InitiallyUnowned super_type;
public:
typedef ::GtkCellRenderer BaseObjectType;

CellRendererBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_cell_renderer_get_type(); } 

// gboolean gtk_cell_renderer_activate (GtkCellRenderer* cell, GdkEvent* event, GtkWidget* widget, const gchar* path, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags);
// gboolean gtk_cell_renderer_activate (::GtkCellRenderer* cell,  event, ::GtkWidget* widget, const char* path, const ::GdkRectangle* background_area, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// void gtk_cell_renderer_get_aligned_area (GtkCellRenderer* cell, GtkWidget* widget, GtkCellRendererState flags, const GdkRectangle* cell_area, GdkRectangle* aligned_area);
// void gtk_cell_renderer_get_aligned_area (::GtkCellRenderer* cell, ::GtkWidget* widget, ::GtkCellRendererState flags, const ::GdkRectangle* cell_area, ::GdkRectangle* aligned_area);
GI_INLINE_DECL void get_aligned_area (Gtk::Widget widget, Gtk::CellRendererState flags, const Gdk::Rectangle & cell_area, Gdk::Rectangle & aligned_area) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_aligned_area (Gtk::Widget widget, Gtk::CellRendererState flags, const Gdk::Rectangle & cell_area) noexcept;

// void gtk_cell_renderer_get_alignment (GtkCellRenderer* cell, gfloat* xalign, gfloat* yalign);
// void gtk_cell_renderer_get_alignment (::GtkCellRenderer* cell, gfloat* xalign, gfloat* yalign);
GI_INLINE_DECL void get_alignment (gfloat * xalign = nullptr, gfloat * yalign = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gfloat, gfloat> get_alignment () noexcept;

// void gtk_cell_renderer_get_fixed_size (GtkCellRenderer* cell, gint* width, gint* height);
// void gtk_cell_renderer_get_fixed_size (::GtkCellRenderer* cell, gint* width, gint* height);
GI_INLINE_DECL void get_fixed_size (gint * width = nullptr, gint * height = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_fixed_size () noexcept;

// void gtk_cell_renderer_get_padding (GtkCellRenderer* cell, gint* xpad, gint* ypad);
// void gtk_cell_renderer_get_padding (::GtkCellRenderer* cell, gint* xpad, gint* ypad);
GI_INLINE_DECL void get_padding (gint * xpad = nullptr, gint * ypad = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_padding () noexcept;

// void gtk_cell_renderer_get_preferred_height (GtkCellRenderer* cell, GtkWidget* widget, gint* minimum_size, gint* natural_size);
// void gtk_cell_renderer_get_preferred_height (::GtkCellRenderer* cell, ::GtkWidget* widget, gint* minimum_size, gint* natural_size);
GI_INLINE_DECL void get_preferred_height (Gtk::Widget widget, gint * minimum_size = nullptr, gint * natural_size = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_preferred_height (Gtk::Widget widget) noexcept;

// void gtk_cell_renderer_get_preferred_height_for_width (GtkCellRenderer* cell, GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
// void gtk_cell_renderer_get_preferred_height_for_width (::GtkCellRenderer* cell, ::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
GI_INLINE_DECL void get_preferred_height_for_width (Gtk::Widget widget, gint width, gint * minimum_height = nullptr, gint * natural_height = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_preferred_height_for_width (Gtk::Widget widget, gint width) noexcept;

// void gtk_cell_renderer_get_preferred_size (GtkCellRenderer* cell, GtkWidget* widget, GtkRequisition* minimum_size, GtkRequisition* natural_size);
// void gtk_cell_renderer_get_preferred_size (::GtkCellRenderer* cell, ::GtkWidget* widget, ::GtkRequisition* minimum_size, ::GtkRequisition* natural_size);
GI_INLINE_DECL void get_preferred_size (Gtk::Widget widget, Gtk::Requisition * minimum_size = nullptr, Gtk::Requisition * natural_size = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gtk::Requisition, Gtk::Requisition> get_preferred_size (Gtk::Widget widget) noexcept;

// void gtk_cell_renderer_get_preferred_width (GtkCellRenderer* cell, GtkWidget* widget, gint* minimum_size, gint* natural_size);
// void gtk_cell_renderer_get_preferred_width (::GtkCellRenderer* cell, ::GtkWidget* widget, gint* minimum_size, gint* natural_size);
GI_INLINE_DECL void get_preferred_width (Gtk::Widget widget, gint * minimum_size = nullptr, gint * natural_size = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_preferred_width (Gtk::Widget widget) noexcept;

// void gtk_cell_renderer_get_preferred_width_for_height (GtkCellRenderer* cell, GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
// void gtk_cell_renderer_get_preferred_width_for_height (::GtkCellRenderer* cell, ::GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
GI_INLINE_DECL void get_preferred_width_for_height (Gtk::Widget widget, gint height, gint * minimum_width = nullptr, gint * natural_width = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_preferred_width_for_height (Gtk::Widget widget, gint height) noexcept;

// GtkSizeRequestMode gtk_cell_renderer_get_request_mode (GtkCellRenderer* cell);
// ::GtkSizeRequestMode gtk_cell_renderer_get_request_mode (::GtkCellRenderer* cell);
GI_INLINE_DECL Gtk::SizeRequestMode get_request_mode () noexcept;

// gboolean gtk_cell_renderer_get_sensitive (GtkCellRenderer* cell);
// gboolean gtk_cell_renderer_get_sensitive (::GtkCellRenderer* cell);
GI_INLINE_DECL bool get_sensitive () noexcept;

// void gtk_cell_renderer_get_size (GtkCellRenderer* cell, GtkWidget* widget, const GdkRectangle* cell_area, gint* x_offset, gint* y_offset, gint* width, gint* height);
// void gtk_cell_renderer_get_size (::GtkCellRenderer* cell, ::GtkWidget* widget, const ::GdkRectangle* cell_area, gint* x_offset, gint* y_offset, gint* width, gint* height);
// IGNORE; deprecated

// GtkStateFlags gtk_cell_renderer_get_state (GtkCellRenderer* cell, GtkWidget* widget, GtkCellRendererState cell_state);
// ::GtkStateFlags gtk_cell_renderer_get_state (::GtkCellRenderer* cell, ::GtkWidget* widget, ::GtkCellRendererState cell_state);
GI_INLINE_DECL Gtk::StateFlags get_state (Gtk::Widget widget, Gtk::CellRendererState cell_state) noexcept;
GI_INLINE_DECL Gtk::StateFlags get_state (Gtk::CellRendererState cell_state) noexcept;

// gboolean gtk_cell_renderer_get_visible (GtkCellRenderer* cell);
// gboolean gtk_cell_renderer_get_visible (::GtkCellRenderer* cell);
GI_INLINE_DECL bool get_visible () noexcept;

// gboolean gtk_cell_renderer_is_activatable (GtkCellRenderer* cell);
// gboolean gtk_cell_renderer_is_activatable (::GtkCellRenderer* cell);
GI_INLINE_DECL bool is_activatable () noexcept;

// void gtk_cell_renderer_render (GtkCellRenderer* cell, cairo_t* cr, GtkWidget* widget, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags);
// void gtk_cell_renderer_render (::GtkCellRenderer* cell, ::cairo_t* cr, ::GtkWidget* widget, const ::GdkRectangle* background_area, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags);
GI_INLINE_DECL void render (cairo::Context cr, Gtk::Widget widget, const Gdk::Rectangle & background_area, const Gdk::Rectangle & cell_area, Gtk::CellRendererState flags) noexcept;

// void gtk_cell_renderer_set_alignment (GtkCellRenderer* cell, gfloat xalign, gfloat yalign);
// void gtk_cell_renderer_set_alignment (::GtkCellRenderer* cell, gfloat xalign, gfloat yalign);
GI_INLINE_DECL void set_alignment (gfloat xalign, gfloat yalign) noexcept;

// void gtk_cell_renderer_set_fixed_size (GtkCellRenderer* cell, gint width, gint height);
// void gtk_cell_renderer_set_fixed_size (::GtkCellRenderer* cell, gint width, gint height);
GI_INLINE_DECL void set_fixed_size (gint width, gint height) noexcept;

// void gtk_cell_renderer_set_padding (GtkCellRenderer* cell, gint xpad, gint ypad);
// void gtk_cell_renderer_set_padding (::GtkCellRenderer* cell, gint xpad, gint ypad);
GI_INLINE_DECL void set_padding (gint xpad, gint ypad) noexcept;

// void gtk_cell_renderer_set_sensitive (GtkCellRenderer* cell, gboolean sensitive);
// void gtk_cell_renderer_set_sensitive (::GtkCellRenderer* cell, gboolean sensitive);
GI_INLINE_DECL void set_sensitive (gboolean sensitive) noexcept;

// void gtk_cell_renderer_set_visible (GtkCellRenderer* cell, gboolean visible);
// void gtk_cell_renderer_set_visible (::GtkCellRenderer* cell, gboolean visible);
GI_INLINE_DECL void set_visible (gboolean visible) noexcept;

// GtkCellEditable* gtk_cell_renderer_start_editing (GtkCellRenderer* cell, GdkEvent* event, GtkWidget* widget, const gchar* path, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags);
// ::GtkCellEditable* gtk_cell_renderer_start_editing (::GtkCellRenderer* cell,  event, ::GtkWidget* widget, const char* path, const ::GdkRectangle* background_area, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// void gtk_cell_renderer_stop_editing (GtkCellRenderer* cell, gboolean canceled);
// void gtk_cell_renderer_stop_editing (::GtkCellRenderer* cell, gboolean canceled);
GI_INLINE_DECL void stop_editing (gboolean canceled) noexcept;

gi::property_proxy_write<std::string, base::CellRendererBase> property_cell_background()
{ return gi::property_proxy_write<std::string, base::CellRendererBase> (*this, "cell-background"); }

gi::property_proxy<Gdk::RGBA, base::CellRendererBase> property_cell_background_rgba()
{ return gi::property_proxy<Gdk::RGBA, base::CellRendererBase> (*this, "cell-background-rgba"); }
const gi::property_proxy<Gdk::RGBA, base::CellRendererBase> property_cell_background_rgba() const
{ return gi::property_proxy<Gdk::RGBA, base::CellRendererBase> (*this, "cell-background-rgba"); }

gi::property_proxy<bool, base::CellRendererBase> property_cell_background_set()
{ return gi::property_proxy<bool, base::CellRendererBase> (*this, "cell-background-set"); }
const gi::property_proxy<bool, base::CellRendererBase> property_cell_background_set() const
{ return gi::property_proxy<bool, base::CellRendererBase> (*this, "cell-background-set"); }

gi::property_proxy<bool, base::CellRendererBase> property_editing()
{ return gi::property_proxy<bool, base::CellRendererBase> (*this, "editing"); }
const gi::property_proxy<bool, base::CellRendererBase> property_editing() const
{ return gi::property_proxy<bool, base::CellRendererBase> (*this, "editing"); }

gi::property_proxy<gint, base::CellRendererBase> property_height()
{ return gi::property_proxy<gint, base::CellRendererBase> (*this, "height"); }
const gi::property_proxy<gint, base::CellRendererBase> property_height() const
{ return gi::property_proxy<gint, base::CellRendererBase> (*this, "height"); }

gi::property_proxy<bool, base::CellRendererBase> property_is_expanded()
{ return gi::property_proxy<bool, base::CellRendererBase> (*this, "is-expanded"); }
const gi::property_proxy<bool, base::CellRendererBase> property_is_expanded() const
{ return gi::property_proxy<bool, base::CellRendererBase> (*this, "is-expanded"); }

gi::property_proxy<bool, base::CellRendererBase> property_is_expander()
{ return gi::property_proxy<bool, base::CellRendererBase> (*this, "is-expander"); }
const gi::property_proxy<bool, base::CellRendererBase> property_is_expander() const
{ return gi::property_proxy<bool, base::CellRendererBase> (*this, "is-expander"); }

gi::property_proxy<Gtk::CellRendererMode, base::CellRendererBase> property_mode()
{ return gi::property_proxy<Gtk::CellRendererMode, base::CellRendererBase> (*this, "mode"); }
const gi::property_proxy<Gtk::CellRendererMode, base::CellRendererBase> property_mode() const
{ return gi::property_proxy<Gtk::CellRendererMode, base::CellRendererBase> (*this, "mode"); }

gi::property_proxy<bool, base::CellRendererBase> property_sensitive()
{ return gi::property_proxy<bool, base::CellRendererBase> (*this, "sensitive"); }
const gi::property_proxy<bool, base::CellRendererBase> property_sensitive() const
{ return gi::property_proxy<bool, base::CellRendererBase> (*this, "sensitive"); }

gi::property_proxy<bool, base::CellRendererBase> property_visible()
{ return gi::property_proxy<bool, base::CellRendererBase> (*this, "visible"); }
const gi::property_proxy<bool, base::CellRendererBase> property_visible() const
{ return gi::property_proxy<bool, base::CellRendererBase> (*this, "visible"); }

gi::property_proxy<gint, base::CellRendererBase> property_width()
{ return gi::property_proxy<gint, base::CellRendererBase> (*this, "width"); }
const gi::property_proxy<gint, base::CellRendererBase> property_width() const
{ return gi::property_proxy<gint, base::CellRendererBase> (*this, "width"); }

gi::property_proxy<gfloat, base::CellRendererBase> property_xalign()
{ return gi::property_proxy<gfloat, base::CellRendererBase> (*this, "xalign"); }
const gi::property_proxy<gfloat, base::CellRendererBase> property_xalign() const
{ return gi::property_proxy<gfloat, base::CellRendererBase> (*this, "xalign"); }

gi::property_proxy<guint, base::CellRendererBase> property_xpad()
{ return gi::property_proxy<guint, base::CellRendererBase> (*this, "xpad"); }
const gi::property_proxy<guint, base::CellRendererBase> property_xpad() const
{ return gi::property_proxy<guint, base::CellRendererBase> (*this, "xpad"); }

gi::property_proxy<gfloat, base::CellRendererBase> property_yalign()
{ return gi::property_proxy<gfloat, base::CellRendererBase> (*this, "yalign"); }
const gi::property_proxy<gfloat, base::CellRendererBase> property_yalign() const
{ return gi::property_proxy<gfloat, base::CellRendererBase> (*this, "yalign"); }

gi::property_proxy<guint, base::CellRendererBase> property_ypad()
{ return gi::property_proxy<guint, base::CellRendererBase> (*this, "ypad"); }
const gi::property_proxy<guint, base::CellRendererBase> property_ypad() const
{ return gi::property_proxy<guint, base::CellRendererBase> (*this, "ypad"); }

// signal editing-canceled
gi::signal_proxy<void(Gtk::CellRenderer)> signal_editing_canceled()
{ return gi::signal_proxy<void(Gtk::CellRenderer)> (*this, "editing-canceled"); }

// signal editing-started
gi::signal_proxy<void(Gtk::CellRenderer, Gtk::CellEditable editable, const std::string & path)> signal_editing_started()
{ return gi::signal_proxy<void(Gtk::CellRenderer, Gtk::CellEditable editable, const std::string & path)> (*this, "editing-started"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellrenderer_extra_def.hpp>)
#include <gtk/cellrenderer_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellrenderer_extra.hpp>)
#include <gtk/cellrenderer_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CellRenderer : public GI_GTK_CELLRENDERER_BASE
{ typedef GI_GTK_CELLRENDERER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCellRenderer>
{ typedef Gtk::CellRenderer type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CellRendererClassDef
{
typedef CellRendererClassDef self;
public:
typedef Gtk::CellRenderer instance_type;
typedef ::GtkCellRendererClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean CellRenderer::activate (GtkCellRenderer* cell, GdkEvent* event, GtkWidget* widget, const gchar* path, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags);
// gboolean CellRenderer::activate (::GtkCellRenderer* cell,  event, ::GtkWidget* widget, const char* path, const ::GdkRectangle* background_area, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// void CellRenderer::editing_canceled (GtkCellRenderer* cell);
// void CellRenderer::editing_canceled (::GtkCellRenderer* cell);
virtual void editing_canceled_ () noexcept = 0;

// void CellRenderer::editing_started (GtkCellRenderer* cell, GtkCellEditable* editable, const gchar* path);
// void CellRenderer::editing_started (::GtkCellRenderer* cell, ::GtkCellEditable* editable, const char* path);
virtual void editing_started_ (Gtk::CellEditable editable, const std::string & path) noexcept = 0;

// void CellRenderer::get_aligned_area (GtkCellRenderer* cell, GtkWidget* widget, GtkCellRendererState flags, const GdkRectangle* cell_area, GdkRectangle* aligned_area);
// void CellRenderer::get_aligned_area (::GtkCellRenderer* cell, ::GtkWidget* widget, ::GtkCellRendererState flags, const ::GdkRectangle* cell_area, ::GdkRectangle* aligned_area);
// SKIP; virtual-method out parameter not supported

// void CellRenderer::get_preferred_height (GtkCellRenderer* cell, GtkWidget* widget, gint* minimum_size, gint* natural_size);
// void CellRenderer::get_preferred_height (::GtkCellRenderer* cell, ::GtkWidget* widget, gint* minimum_size, gint* natural_size);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void CellRenderer::get_preferred_height_for_width (GtkCellRenderer* cell, GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
// void CellRenderer::get_preferred_height_for_width (::GtkCellRenderer* cell, ::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void CellRenderer::get_preferred_width (GtkCellRenderer* cell, GtkWidget* widget, gint* minimum_size, gint* natural_size);
// void CellRenderer::get_preferred_width (::GtkCellRenderer* cell, ::GtkWidget* widget, gint* minimum_size, gint* natural_size);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void CellRenderer::get_preferred_width_for_height (GtkCellRenderer* cell, GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
// void CellRenderer::get_preferred_width_for_height (::GtkCellRenderer* cell, ::GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// GtkSizeRequestMode CellRenderer::get_request_mode (GtkCellRenderer* cell);
// ::GtkSizeRequestMode CellRenderer::get_request_mode (::GtkCellRenderer* cell);
virtual Gtk::SizeRequestMode get_request_mode_ () noexcept = 0;

// void CellRenderer::get_size (GtkCellRenderer* cell, GtkWidget* widget, const GdkRectangle* cell_area, gint* x_offset, gint* y_offset, gint* width, gint* height);
// void CellRenderer::get_size (::GtkCellRenderer* cell, ::GtkWidget* widget, const ::GdkRectangle* cell_area, gint* x_offset, gint* y_offset, gint* width, gint* height);
// IGNORE; deprecated, virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported

// void CellRenderer::render (GtkCellRenderer* cell, cairo_t* cr, GtkWidget* widget, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags);
// void CellRenderer::render (::GtkCellRenderer* cell, ::cairo_t* cr, ::GtkWidget* widget, const ::GdkRectangle* background_area, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags);
virtual void render_ (cairo::Context cr, Gtk::Widget widget, const Gdk::Rectangle & background_area, const Gdk::Rectangle & cell_area, Gtk::CellRendererState flags) noexcept = 0;

// GtkCellEditable* CellRenderer::start_editing (GtkCellRenderer* cell, GdkEvent* event, GtkWidget* widget, const gchar* path, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags);
// ::GtkCellEditable* CellRenderer::start_editing (::GtkCellRenderer* cell,  event, ::GtkWidget* widget, const char* path, const ::GdkRectangle* background_area, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags);
// SKIP; event type  not supported


};

GI_CLASS_IMPL_BEGIN


class CellRendererClass: public detail::ClassTemplate<Gtk::impl::internal::CellRendererClassDef, GObject::impl::internal::InitiallyUnownedClass>
{
typedef CellRendererClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::CellRendererClassDef, GObject::impl::internal::InitiallyUnownedClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean CellRenderer::activate (GtkCellRenderer* cell, GdkEvent* event, GtkWidget* widget, const gchar* path, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags);
// gboolean CellRenderer::activate (::GtkCellRenderer* cell,  event, ::GtkWidget* widget, const char* path, const ::GdkRectangle* background_area, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// void CellRenderer::editing_canceled (GtkCellRenderer* cell);
// void CellRenderer::editing_canceled (::GtkCellRenderer* cell);
GI_INLINE_DECL void editing_canceled_ () noexcept override;

// void CellRenderer::editing_started (GtkCellRenderer* cell, GtkCellEditable* editable, const gchar* path);
// void CellRenderer::editing_started (::GtkCellRenderer* cell, ::GtkCellEditable* editable, const char* path);
GI_INLINE_DECL void editing_started_ (Gtk::CellEditable editable, const std::string & path) noexcept override;

// void CellRenderer::get_aligned_area (GtkCellRenderer* cell, GtkWidget* widget, GtkCellRendererState flags, const GdkRectangle* cell_area, GdkRectangle* aligned_area);
// void CellRenderer::get_aligned_area (::GtkCellRenderer* cell, ::GtkWidget* widget, ::GtkCellRendererState flags, const ::GdkRectangle* cell_area, ::GdkRectangle* aligned_area);
// SKIP; virtual-method out parameter not supported

// void CellRenderer::get_preferred_height (GtkCellRenderer* cell, GtkWidget* widget, gint* minimum_size, gint* natural_size);
// void CellRenderer::get_preferred_height (::GtkCellRenderer* cell, ::GtkWidget* widget, gint* minimum_size, gint* natural_size);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void CellRenderer::get_preferred_height_for_width (GtkCellRenderer* cell, GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
// void CellRenderer::get_preferred_height_for_width (::GtkCellRenderer* cell, ::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void CellRenderer::get_preferred_width (GtkCellRenderer* cell, GtkWidget* widget, gint* minimum_size, gint* natural_size);
// void CellRenderer::get_preferred_width (::GtkCellRenderer* cell, ::GtkWidget* widget, gint* minimum_size, gint* natural_size);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void CellRenderer::get_preferred_width_for_height (GtkCellRenderer* cell, GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
// void CellRenderer::get_preferred_width_for_height (::GtkCellRenderer* cell, ::GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// GtkSizeRequestMode CellRenderer::get_request_mode (GtkCellRenderer* cell);
// ::GtkSizeRequestMode CellRenderer::get_request_mode (::GtkCellRenderer* cell);
GI_INLINE_DECL Gtk::SizeRequestMode get_request_mode_ () noexcept override;

// void CellRenderer::get_size (GtkCellRenderer* cell, GtkWidget* widget, const GdkRectangle* cell_area, gint* x_offset, gint* y_offset, gint* width, gint* height);
// void CellRenderer::get_size (::GtkCellRenderer* cell, ::GtkWidget* widget, const ::GdkRectangle* cell_area, gint* x_offset, gint* y_offset, gint* width, gint* height);
// IGNORE; deprecated, virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported

// void CellRenderer::render (GtkCellRenderer* cell, cairo_t* cr, GtkWidget* widget, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags);
// void CellRenderer::render (::GtkCellRenderer* cell, ::cairo_t* cr, ::GtkWidget* widget, const ::GdkRectangle* background_area, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags);
GI_INLINE_DECL void render_ (cairo::Context cr, Gtk::Widget widget, const Gdk::Rectangle & background_area, const Gdk::Rectangle & cell_area, Gtk::CellRendererState flags) noexcept override;

// GtkCellEditable* CellRenderer::start_editing (GtkCellRenderer* cell, GdkEvent* event, GtkWidget* widget, const gchar* path, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags);
// ::GtkCellEditable* CellRenderer::start_editing (::GtkCellRenderer* cell,  event, ::GtkWidget* widget, const char* path, const ::GdkRectangle* background_area, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags);
// SKIP; event type  not supported


};

} // namespace internal

GI_CLASS_IMPL_END

using CellRendererImpl = detail::ObjectImpl<CellRenderer, internal::CellRendererClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
