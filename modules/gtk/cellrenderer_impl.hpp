// AUTO-GENERATED

#ifndef _GI_GTK_CELLRENDERER_IMPL_HPP_
#define _GI_GTK_CELLRENDERER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// gboolean gtk_cell_renderer_activate (GtkCellRenderer* cell, GdkEvent* event, GtkWidget* widget, const gchar* path, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags);
// gboolean gtk_cell_renderer_activate (::GtkCellRenderer* cell,  event, ::GtkWidget* widget, const char* path, const ::GdkRectangle* background_area, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// void gtk_cell_renderer_get_aligned_area (GtkCellRenderer* cell, GtkWidget* widget, GtkCellRendererState flags, const GdkRectangle* cell_area, GdkRectangle* aligned_area);
// void gtk_cell_renderer_get_aligned_area (::GtkCellRenderer* cell, ::GtkWidget* widget, ::GtkCellRendererState flags, const ::GdkRectangle* cell_area, ::GdkRectangle* aligned_area);
void base::CellRendererBase::get_aligned_area (Gtk::Widget widget, Gtk::CellRendererState flags, const Gdk::Rectangle & cell_area, Gdk::Rectangle & aligned_area) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, ::GtkCellRendererState flags, const ::GdkRectangle* cell_area, ::GdkRectangle* aligned_area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_get_aligned_area;
  traits::unset_wrapper<::GdkRectangle>::type aligned_area_c;
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GtkCellRendererState) (flags_to_c), (const ::GdkRectangle*) (cell_area_to_c), (::GdkRectangle*) ((::GdkRectangle*) &aligned_area_c));
  aligned_area = gi::wrap ((::GdkRectangle*) &aligned_area_c, gi::transfer_none, gi::direction_out);
}
Gdk::Rectangle base::CellRendererBase::get_aligned_area (Gtk::Widget widget, Gtk::CellRendererState flags, const Gdk::Rectangle & cell_area) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, ::GtkCellRendererState flags, const ::GdkRectangle* cell_area, ::GdkRectangle* aligned_area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_get_aligned_area;
  traits::unset_wrapper<::GdkRectangle>::type aligned_area_c;
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GtkCellRendererState) (flags_to_c), (const ::GdkRectangle*) (cell_area_to_c), (::GdkRectangle*) ((::GdkRectangle*) &aligned_area_c));
  return gi::wrap ((::GdkRectangle*) &aligned_area_c, gi::transfer_none, gi::direction_out);
}

// void gtk_cell_renderer_get_alignment (GtkCellRenderer* cell, gfloat* xalign, gfloat* yalign);
// void gtk_cell_renderer_get_alignment (::GtkCellRenderer* cell, gfloat* xalign, gfloat* yalign);
void base::CellRendererBase::get_alignment (gfloat * xalign, gfloat * yalign) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gfloat* xalign, gfloat* yalign);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_get_alignment;
  gfloat yalign_o {};
  gfloat xalign_o {};
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gfloat*) (xalign ? &xalign_o : nullptr), (gfloat*) (yalign ? &yalign_o : nullptr));
  if (yalign) *yalign = yalign_o;
  if (xalign) *xalign = xalign_o;
}
std::tuple<gfloat, gfloat> base::CellRendererBase::get_alignment () noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gfloat* xalign, gfloat* yalign);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_get_alignment;
  gfloat yalign_o {};
  gfloat xalign_o {};
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gfloat*) (&xalign_o), (gfloat*) (&yalign_o));
  return std::make_tuple (xalign_o, yalign_o);
}

// void gtk_cell_renderer_get_fixed_size (GtkCellRenderer* cell, gint* width, gint* height);
// void gtk_cell_renderer_get_fixed_size (::GtkCellRenderer* cell, gint* width, gint* height);
void base::CellRendererBase::get_fixed_size (gint * width, gint * height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_get_fixed_size;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gint*) (width ? &width_o : nullptr), (gint*) (height ? &height_o : nullptr));
  if (height) *height = height_o;
  if (width) *width = width_o;
}
std::tuple<gint, gint> base::CellRendererBase::get_fixed_size () noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_get_fixed_size;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gint*) (&width_o), (gint*) (&height_o));
  return std::make_tuple (width_o, height_o);
}

// void gtk_cell_renderer_get_padding (GtkCellRenderer* cell, gint* xpad, gint* ypad);
// void gtk_cell_renderer_get_padding (::GtkCellRenderer* cell, gint* xpad, gint* ypad);
void base::CellRendererBase::get_padding (gint * xpad, gint * ypad) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gint* xpad, gint* ypad);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_get_padding;
  gint ypad_o {};
  gint xpad_o {};
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gint*) (xpad ? &xpad_o : nullptr), (gint*) (ypad ? &ypad_o : nullptr));
  if (ypad) *ypad = ypad_o;
  if (xpad) *xpad = xpad_o;
}
std::tuple<gint, gint> base::CellRendererBase::get_padding () noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gint* xpad, gint* ypad);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_get_padding;
  gint ypad_o {};
  gint xpad_o {};
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gint*) (&xpad_o), (gint*) (&ypad_o));
  return std::make_tuple (xpad_o, ypad_o);
}

// void gtk_cell_renderer_get_preferred_height (GtkCellRenderer* cell, GtkWidget* widget, gint* minimum_size, gint* natural_size);
// void gtk_cell_renderer_get_preferred_height (::GtkCellRenderer* cell, ::GtkWidget* widget, gint* minimum_size, gint* natural_size);
void base::CellRendererBase::get_preferred_height (Gtk::Widget widget, gint * minimum_size, gint * natural_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, gint* minimum_size, gint* natural_size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_get_preferred_height;
  gint natural_size_o {};
  gint minimum_size_o {};
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint*) (minimum_size ? &minimum_size_o : nullptr), (gint*) (natural_size ? &natural_size_o : nullptr));
  if (natural_size) *natural_size = natural_size_o;
  if (minimum_size) *minimum_size = minimum_size_o;
}
std::tuple<gint, gint> base::CellRendererBase::get_preferred_height (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, gint* minimum_size, gint* natural_size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_get_preferred_height;
  gint natural_size_o {};
  gint minimum_size_o {};
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint*) (&minimum_size_o), (gint*) (&natural_size_o));
  return std::make_tuple (minimum_size_o, natural_size_o);
}

// void gtk_cell_renderer_get_preferred_height_for_width (GtkCellRenderer* cell, GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
// void gtk_cell_renderer_get_preferred_height_for_width (::GtkCellRenderer* cell, ::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
void base::CellRendererBase::get_preferred_height_for_width (Gtk::Widget widget, gint width, gint * minimum_height, gint * natural_height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_get_preferred_height_for_width;
  gint natural_height_o {};
  gint minimum_height_o {};
  auto width_to_c = width;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint) (width_to_c), (gint*) (minimum_height ? &minimum_height_o : nullptr), (gint*) (natural_height ? &natural_height_o : nullptr));
  if (natural_height) *natural_height = natural_height_o;
  if (minimum_height) *minimum_height = minimum_height_o;
}
std::tuple<gint, gint> base::CellRendererBase::get_preferred_height_for_width (Gtk::Widget widget, gint width) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_get_preferred_height_for_width;
  gint natural_height_o {};
  gint minimum_height_o {};
  auto width_to_c = width;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint) (width_to_c), (gint*) (&minimum_height_o), (gint*) (&natural_height_o));
  return std::make_tuple (minimum_height_o, natural_height_o);
}

// void gtk_cell_renderer_get_preferred_size (GtkCellRenderer* cell, GtkWidget* widget, GtkRequisition* minimum_size, GtkRequisition* natural_size);
// void gtk_cell_renderer_get_preferred_size (::GtkCellRenderer* cell, ::GtkWidget* widget, ::GtkRequisition* minimum_size, ::GtkRequisition* natural_size);
void base::CellRendererBase::get_preferred_size (Gtk::Widget widget, Gtk::Requisition * minimum_size, Gtk::Requisition * natural_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, ::GtkRequisition* minimum_size, ::GtkRequisition* natural_size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_get_preferred_size;
  traits::unset_wrapper<::GtkRequisition>::type natural_size_c;
  traits::unset_wrapper<::GtkRequisition>::type minimum_size_c;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GtkRequisition*) (minimum_size ? (::GtkRequisition*) &minimum_size_c : nullptr), (::GtkRequisition*) (natural_size ? (::GtkRequisition*) &natural_size_c : nullptr));
  if (natural_size) *natural_size = gi::wrap ((::GtkRequisition*) &natural_size_c, gi::transfer_none, gi::direction_out);
  if (minimum_size) *minimum_size = gi::wrap ((::GtkRequisition*) &minimum_size_c, gi::transfer_none, gi::direction_out);
}
std::tuple<Gtk::Requisition, Gtk::Requisition> base::CellRendererBase::get_preferred_size (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, ::GtkRequisition* minimum_size, ::GtkRequisition* natural_size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_get_preferred_size;
  traits::unset_wrapper<::GtkRequisition>::type natural_size_c;
  traits::unset_wrapper<::GtkRequisition>::type minimum_size_c;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GtkRequisition*) ((::GtkRequisition*) &minimum_size_c), (::GtkRequisition*) ((::GtkRequisition*) &natural_size_c));
  return std::make_tuple (gi::wrap ((::GtkRequisition*) &minimum_size_c, gi::transfer_none, gi::direction_out), gi::wrap ((::GtkRequisition*) &natural_size_c, gi::transfer_none, gi::direction_out));
}

// void gtk_cell_renderer_get_preferred_width (GtkCellRenderer* cell, GtkWidget* widget, gint* minimum_size, gint* natural_size);
// void gtk_cell_renderer_get_preferred_width (::GtkCellRenderer* cell, ::GtkWidget* widget, gint* minimum_size, gint* natural_size);
void base::CellRendererBase::get_preferred_width (Gtk::Widget widget, gint * minimum_size, gint * natural_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, gint* minimum_size, gint* natural_size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_get_preferred_width;
  gint natural_size_o {};
  gint minimum_size_o {};
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint*) (minimum_size ? &minimum_size_o : nullptr), (gint*) (natural_size ? &natural_size_o : nullptr));
  if (natural_size) *natural_size = natural_size_o;
  if (minimum_size) *minimum_size = minimum_size_o;
}
std::tuple<gint, gint> base::CellRendererBase::get_preferred_width (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, gint* minimum_size, gint* natural_size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_get_preferred_width;
  gint natural_size_o {};
  gint minimum_size_o {};
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint*) (&minimum_size_o), (gint*) (&natural_size_o));
  return std::make_tuple (minimum_size_o, natural_size_o);
}

// void gtk_cell_renderer_get_preferred_width_for_height (GtkCellRenderer* cell, GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
// void gtk_cell_renderer_get_preferred_width_for_height (::GtkCellRenderer* cell, ::GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
void base::CellRendererBase::get_preferred_width_for_height (Gtk::Widget widget, gint height, gint * minimum_width, gint * natural_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_get_preferred_width_for_height;
  gint natural_width_o {};
  gint minimum_width_o {};
  auto height_to_c = height;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint) (height_to_c), (gint*) (minimum_width ? &minimum_width_o : nullptr), (gint*) (natural_width ? &natural_width_o : nullptr));
  if (natural_width) *natural_width = natural_width_o;
  if (minimum_width) *minimum_width = minimum_width_o;
}
std::tuple<gint, gint> base::CellRendererBase::get_preferred_width_for_height (Gtk::Widget widget, gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_get_preferred_width_for_height;
  gint natural_width_o {};
  gint minimum_width_o {};
  auto height_to_c = height;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint) (height_to_c), (gint*) (&minimum_width_o), (gint*) (&natural_width_o));
  return std::make_tuple (minimum_width_o, natural_width_o);
}

// GtkSizeRequestMode gtk_cell_renderer_get_request_mode (GtkCellRenderer* cell);
// ::GtkSizeRequestMode gtk_cell_renderer_get_request_mode (::GtkCellRenderer* cell);
Gtk::SizeRequestMode base::CellRendererBase::get_request_mode () noexcept
{
  typedef ::GtkSizeRequestMode (*call_wrap_t) (::GtkCellRenderer* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_get_request_mode;
  auto _temp_ret = call_wrap_v ((::GtkCellRenderer*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_cell_renderer_get_sensitive (GtkCellRenderer* cell);
// gboolean gtk_cell_renderer_get_sensitive (::GtkCellRenderer* cell);
bool base::CellRendererBase::get_sensitive () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellRenderer* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_get_sensitive;
  auto _temp_ret = call_wrap_v ((::GtkCellRenderer*) (gobj_()));
  return _temp_ret;
}

// void gtk_cell_renderer_get_size (GtkCellRenderer* cell, GtkWidget* widget, const GdkRectangle* cell_area, gint* x_offset, gint* y_offset, gint* width, gint* height);
// void gtk_cell_renderer_get_size (::GtkCellRenderer* cell, ::GtkWidget* widget, const ::GdkRectangle* cell_area, gint* x_offset, gint* y_offset, gint* width, gint* height);
// IGNORE; deprecated

// GtkStateFlags gtk_cell_renderer_get_state (GtkCellRenderer* cell, GtkWidget* widget, GtkCellRendererState cell_state);
// ::GtkStateFlags gtk_cell_renderer_get_state (::GtkCellRenderer* cell, ::GtkWidget* widget, ::GtkCellRendererState cell_state);
Gtk::StateFlags base::CellRendererBase::get_state (Gtk::Widget widget, Gtk::CellRendererState cell_state) noexcept
{
  typedef ::GtkStateFlags (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, ::GtkCellRendererState cell_state);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_get_state;
  auto cell_state_to_c = gi::unwrap (cell_state);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GtkCellRendererState) (cell_state_to_c));
  return gi::wrap (_temp_ret);
}
Gtk::StateFlags base::CellRendererBase::get_state (Gtk::CellRendererState cell_state) noexcept
{
  typedef ::GtkStateFlags (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, ::GtkCellRendererState cell_state);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_get_state;
  auto cell_state_to_c = gi::unwrap (cell_state);
  auto widget_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GtkCellRendererState) (cell_state_to_c));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_cell_renderer_get_visible (GtkCellRenderer* cell);
// gboolean gtk_cell_renderer_get_visible (::GtkCellRenderer* cell);
bool base::CellRendererBase::get_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellRenderer* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_get_visible;
  auto _temp_ret = call_wrap_v ((::GtkCellRenderer*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_cell_renderer_is_activatable (GtkCellRenderer* cell);
// gboolean gtk_cell_renderer_is_activatable (::GtkCellRenderer* cell);
bool base::CellRendererBase::is_activatable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellRenderer* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_is_activatable;
  auto _temp_ret = call_wrap_v ((::GtkCellRenderer*) (gobj_()));
  return _temp_ret;
}

// void gtk_cell_renderer_render (GtkCellRenderer* cell, cairo_t* cr, GtkWidget* widget, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags);
// void gtk_cell_renderer_render (::GtkCellRenderer* cell, ::cairo_t* cr, ::GtkWidget* widget, const ::GdkRectangle* background_area, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags);
void base::CellRendererBase::render (cairo::Context cr, Gtk::Widget widget, const Gdk::Rectangle & background_area, const Gdk::Rectangle & cell_area, Gtk::CellRendererState flags) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::cairo_t* cr, ::GtkWidget* widget, const ::GdkRectangle* background_area, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_render;
  auto flags_to_c = gi::unwrap (flags);
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none, gi::direction_in);
  auto background_area_to_c = gi::unwrap (background_area, gi::transfer_none, gi::direction_in);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::cairo_t*) (cr_to_c), (::GtkWidget*) (widget_to_c), (const ::GdkRectangle*) (background_area_to_c), (const ::GdkRectangle*) (cell_area_to_c), (::GtkCellRendererState) (flags_to_c));
}

// void gtk_cell_renderer_set_alignment (GtkCellRenderer* cell, gfloat xalign, gfloat yalign);
// void gtk_cell_renderer_set_alignment (::GtkCellRenderer* cell, gfloat xalign, gfloat yalign);
void base::CellRendererBase::set_alignment (gfloat xalign, gfloat yalign) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gfloat xalign, gfloat yalign);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_set_alignment;
  auto yalign_to_c = yalign;
  auto xalign_to_c = xalign;
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gfloat) (xalign_to_c), (gfloat) (yalign_to_c));
}

// void gtk_cell_renderer_set_fixed_size (GtkCellRenderer* cell, gint width, gint height);
// void gtk_cell_renderer_set_fixed_size (::GtkCellRenderer* cell, gint width, gint height);
void base::CellRendererBase::set_fixed_size (gint width, gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_set_fixed_size;
  auto height_to_c = height;
  auto width_to_c = width;
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c));
}

// void gtk_cell_renderer_set_padding (GtkCellRenderer* cell, gint xpad, gint ypad);
// void gtk_cell_renderer_set_padding (::GtkCellRenderer* cell, gint xpad, gint ypad);
void base::CellRendererBase::set_padding (gint xpad, gint ypad) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gint xpad, gint ypad);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_set_padding;
  auto ypad_to_c = ypad;
  auto xpad_to_c = xpad;
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gint) (xpad_to_c), (gint) (ypad_to_c));
}

// void gtk_cell_renderer_set_sensitive (GtkCellRenderer* cell, gboolean sensitive);
// void gtk_cell_renderer_set_sensitive (::GtkCellRenderer* cell, gboolean sensitive);
void base::CellRendererBase::set_sensitive (gboolean sensitive) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gboolean sensitive);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_set_sensitive;
  auto sensitive_to_c = sensitive;
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gboolean) (sensitive_to_c));
}

// void gtk_cell_renderer_set_visible (GtkCellRenderer* cell, gboolean visible);
// void gtk_cell_renderer_set_visible (::GtkCellRenderer* cell, gboolean visible);
void base::CellRendererBase::set_visible (gboolean visible) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gboolean visible);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_set_visible;
  auto visible_to_c = visible;
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gboolean) (visible_to_c));
}

// GtkCellEditable* gtk_cell_renderer_start_editing (GtkCellRenderer* cell, GdkEvent* event, GtkWidget* widget, const gchar* path, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags);
// ::GtkCellEditable* gtk_cell_renderer_start_editing (::GtkCellRenderer* cell,  event, ::GtkWidget* widget, const char* path, const ::GdkRectangle* background_area, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// void gtk_cell_renderer_stop_editing (GtkCellRenderer* cell, gboolean canceled);
// void gtk_cell_renderer_stop_editing (::GtkCellRenderer* cell, gboolean canceled);
void base::CellRendererBase::stop_editing (gboolean canceled) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gboolean canceled);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_stop_editing;
  auto canceled_to_c = canceled;
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gboolean) (canceled_to_c));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellrenderer_extra_def_impl.hpp>)
#include <gtk/cellrenderer_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellrenderer_extra_impl.hpp>)
#include <gtk/cellrenderer_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CellRendererClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkCellRendererClass *methods = (::GtkCellRendererClass *) class_struct;
  (void) methods;

  methods->editing_canceled = (decltype (methods->editing_canceled)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::editing_canceled_>;
  methods->editing_started = (decltype (methods->editing_started)) detail::method_wrapper<self, void (*) (Gtk::CellEditable editable, const std::string & path), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::editing_started_>;
  methods->get_request_mode = (decltype (methods->get_request_mode)) detail::method_wrapper<self, Gtk::SizeRequestMode (*) (), gi::transfer_none_t>::wrapper<&self::get_request_mode_>;
  methods->render = (decltype (methods->render)) detail::method_wrapper<self, void (*) (cairo::Context cr, Gtk::Widget widget, const Gdk::Rectangle & background_area, const Gdk::Rectangle & cell_area, Gtk::CellRendererState flags), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::render_>;
}

// gboolean CellRenderer::activate (GtkCellRenderer* cell, GdkEvent* event, GtkWidget* widget, const gchar* path, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags);
// gboolean CellRenderer::activate (::GtkCellRenderer* cell,  event, ::GtkWidget* widget, const char* path, const ::GdkRectangle* background_area, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// void CellRenderer::editing_canceled (GtkCellRenderer* cell);
// void CellRenderer::editing_canceled (::GtkCellRenderer* cell);
void CellRendererClass::editing_canceled_ () noexcept
{
  if (!get_struct_()->editing_canceled) return ;
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->editing_canceled;
  call_wrap_v ((::GtkCellRenderer*) (gobj_()));
}

// void CellRenderer::editing_started (GtkCellRenderer* cell, GtkCellEditable* editable, const gchar* path);
// void CellRenderer::editing_started (::GtkCellRenderer* cell, ::GtkCellEditable* editable, const char* path);
void CellRendererClass::editing_started_ (Gtk::CellEditable editable, const std::string & path) noexcept
{
  if (!get_struct_()->editing_started) return ;
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkCellEditable* editable, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->editing_started;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto editable_to_c = gi::unwrap (editable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkCellEditable*) (editable_to_c), (const char*) (path_to_c));
}

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
Gtk::SizeRequestMode CellRendererClass::get_request_mode_ () noexcept
{
  if (!get_struct_()->get_request_mode) return Gtk::SizeRequestMode{};
  typedef ::GtkSizeRequestMode (*call_wrap_t) (::GtkCellRenderer* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_request_mode;
  auto _temp_ret = call_wrap_v ((::GtkCellRenderer*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void CellRenderer::get_size (GtkCellRenderer* cell, GtkWidget* widget, const GdkRectangle* cell_area, gint* x_offset, gint* y_offset, gint* width, gint* height);
// void CellRenderer::get_size (::GtkCellRenderer* cell, ::GtkWidget* widget, const ::GdkRectangle* cell_area, gint* x_offset, gint* y_offset, gint* width, gint* height);
// IGNORE; deprecated, virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported

// void CellRenderer::render (GtkCellRenderer* cell, cairo_t* cr, GtkWidget* widget, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags);
// void CellRenderer::render (::GtkCellRenderer* cell, ::cairo_t* cr, ::GtkWidget* widget, const ::GdkRectangle* background_area, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags);
void CellRendererClass::render_ (cairo::Context cr, Gtk::Widget widget, const Gdk::Rectangle & background_area, const Gdk::Rectangle & cell_area, Gtk::CellRendererState flags) noexcept
{
  if (!get_struct_()->render) return ;
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::cairo_t* cr, ::GtkWidget* widget, const ::GdkRectangle* background_area, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->render;
  auto flags_to_c = gi::unwrap (flags);
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none, gi::direction_in);
  auto background_area_to_c = gi::unwrap (background_area, gi::transfer_none, gi::direction_in);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::cairo_t*) (cr_to_c), (::GtkWidget*) (widget_to_c), (const ::GdkRectangle*) (background_area_to_c), (const ::GdkRectangle*) (cell_area_to_c), (::GtkCellRendererState) (flags_to_c));
}

// GtkCellEditable* CellRenderer::start_editing (GtkCellRenderer* cell, GdkEvent* event, GtkWidget* widget, const gchar* path, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags);
// ::GtkCellEditable* CellRenderer::start_editing (::GtkCellRenderer* cell,  event, ::GtkWidget* widget, const char* path, const ::GdkRectangle* background_area, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags);
// SKIP; event type  not supported

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
