// AUTO-GENERATED

#ifndef _GI_GTK_CELLAREACONTEXT_IMPL_HPP_
#define _GI_GTK_CELLAREACONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_cell_area_context_allocate (GtkCellAreaContext* context, gint width, gint height);
// void gtk_cell_area_context_allocate (::GtkCellAreaContext* context, gint width, gint height);
void base::CellAreaContextBase::allocate (gint width, gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_context_allocate;
  auto height_to_c = height;
  auto width_to_c = width;
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c));
}

// void gtk_cell_area_context_get_allocation (GtkCellAreaContext* context, gint* width, gint* height);
// void gtk_cell_area_context_get_allocation (::GtkCellAreaContext* context, gint* width, gint* height);
void base::CellAreaContextBase::get_allocation (gint * width, gint * height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_context_get_allocation;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint*) (width ? &width_o : nullptr), (gint*) (height ? &height_o : nullptr));
  if (height) *height = height_o;
  if (width) *width = width_o;
}
std::tuple<gint, gint> base::CellAreaContextBase::get_allocation () noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_context_get_allocation;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint*) (&width_o), (gint*) (&height_o));
  return std::make_tuple (width_o, height_o);
}

// GtkCellArea* gtk_cell_area_context_get_area (GtkCellAreaContext* context);
// ::GtkCellArea* gtk_cell_area_context_get_area (::GtkCellAreaContext* context);
Gtk::CellArea base::CellAreaContextBase::get_area () noexcept
{
  typedef ::GtkCellArea* (*call_wrap_t) (::GtkCellAreaContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_context_get_area;
  auto _temp_ret = call_wrap_v ((::GtkCellAreaContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_cell_area_context_get_preferred_height (GtkCellAreaContext* context, gint* minimum_height, gint* natural_height);
// void gtk_cell_area_context_get_preferred_height (::GtkCellAreaContext* context, gint* minimum_height, gint* natural_height);
void base::CellAreaContextBase::get_preferred_height (gint * minimum_height, gint * natural_height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_context_get_preferred_height;
  gint natural_height_o {};
  gint minimum_height_o {};
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint*) (minimum_height ? &minimum_height_o : nullptr), (gint*) (natural_height ? &natural_height_o : nullptr));
  if (natural_height) *natural_height = natural_height_o;
  if (minimum_height) *minimum_height = minimum_height_o;
}
std::tuple<gint, gint> base::CellAreaContextBase::get_preferred_height () noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_context_get_preferred_height;
  gint natural_height_o {};
  gint minimum_height_o {};
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint*) (&minimum_height_o), (gint*) (&natural_height_o));
  return std::make_tuple (minimum_height_o, natural_height_o);
}

// void gtk_cell_area_context_get_preferred_height_for_width (GtkCellAreaContext* context, gint width, gint* minimum_height, gint* natural_height);
// void gtk_cell_area_context_get_preferred_height_for_width (::GtkCellAreaContext* context, gint width, gint* minimum_height, gint* natural_height);
void base::CellAreaContextBase::get_preferred_height_for_width (gint width, gint * minimum_height, gint * natural_height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint width, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_context_get_preferred_height_for_width;
  gint natural_height_o {};
  gint minimum_height_o {};
  auto width_to_c = width;
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint) (width_to_c), (gint*) (minimum_height ? &minimum_height_o : nullptr), (gint*) (natural_height ? &natural_height_o : nullptr));
  if (natural_height) *natural_height = natural_height_o;
  if (minimum_height) *minimum_height = minimum_height_o;
}
std::tuple<gint, gint> base::CellAreaContextBase::get_preferred_height_for_width (gint width) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint width, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_context_get_preferred_height_for_width;
  gint natural_height_o {};
  gint minimum_height_o {};
  auto width_to_c = width;
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint) (width_to_c), (gint*) (&minimum_height_o), (gint*) (&natural_height_o));
  return std::make_tuple (minimum_height_o, natural_height_o);
}

// void gtk_cell_area_context_get_preferred_width (GtkCellAreaContext* context, gint* minimum_width, gint* natural_width);
// void gtk_cell_area_context_get_preferred_width (::GtkCellAreaContext* context, gint* minimum_width, gint* natural_width);
void base::CellAreaContextBase::get_preferred_width (gint * minimum_width, gint * natural_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_context_get_preferred_width;
  gint natural_width_o {};
  gint minimum_width_o {};
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint*) (minimum_width ? &minimum_width_o : nullptr), (gint*) (natural_width ? &natural_width_o : nullptr));
  if (natural_width) *natural_width = natural_width_o;
  if (minimum_width) *minimum_width = minimum_width_o;
}
std::tuple<gint, gint> base::CellAreaContextBase::get_preferred_width () noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_context_get_preferred_width;
  gint natural_width_o {};
  gint minimum_width_o {};
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint*) (&minimum_width_o), (gint*) (&natural_width_o));
  return std::make_tuple (minimum_width_o, natural_width_o);
}

// void gtk_cell_area_context_get_preferred_width_for_height (GtkCellAreaContext* context, gint height, gint* minimum_width, gint* natural_width);
// void gtk_cell_area_context_get_preferred_width_for_height (::GtkCellAreaContext* context, gint height, gint* minimum_width, gint* natural_width);
void base::CellAreaContextBase::get_preferred_width_for_height (gint height, gint * minimum_width, gint * natural_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint height, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_context_get_preferred_width_for_height;
  gint natural_width_o {};
  gint minimum_width_o {};
  auto height_to_c = height;
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint) (height_to_c), (gint*) (minimum_width ? &minimum_width_o : nullptr), (gint*) (natural_width ? &natural_width_o : nullptr));
  if (natural_width) *natural_width = natural_width_o;
  if (minimum_width) *minimum_width = minimum_width_o;
}
std::tuple<gint, gint> base::CellAreaContextBase::get_preferred_width_for_height (gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint height, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_context_get_preferred_width_for_height;
  gint natural_width_o {};
  gint minimum_width_o {};
  auto height_to_c = height;
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint) (height_to_c), (gint*) (&minimum_width_o), (gint*) (&natural_width_o));
  return std::make_tuple (minimum_width_o, natural_width_o);
}

// void gtk_cell_area_context_push_preferred_height (GtkCellAreaContext* context, gint minimum_height, gint natural_height);
// void gtk_cell_area_context_push_preferred_height (::GtkCellAreaContext* context, gint minimum_height, gint natural_height);
void base::CellAreaContextBase::push_preferred_height (gint minimum_height, gint natural_height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint minimum_height, gint natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_context_push_preferred_height;
  auto natural_height_to_c = natural_height;
  auto minimum_height_to_c = minimum_height;
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint) (minimum_height_to_c), (gint) (natural_height_to_c));
}

// void gtk_cell_area_context_push_preferred_width (GtkCellAreaContext* context, gint minimum_width, gint natural_width);
// void gtk_cell_area_context_push_preferred_width (::GtkCellAreaContext* context, gint minimum_width, gint natural_width);
void base::CellAreaContextBase::push_preferred_width (gint minimum_width, gint natural_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint minimum_width, gint natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_context_push_preferred_width;
  auto natural_width_to_c = natural_width;
  auto minimum_width_to_c = minimum_width;
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint) (minimum_width_to_c), (gint) (natural_width_to_c));
}

// void gtk_cell_area_context_reset (GtkCellAreaContext* context);
// void gtk_cell_area_context_reset (::GtkCellAreaContext* context);
void base::CellAreaContextBase::reset () noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_context_reset;
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellareacontext_extra_def_impl.hpp>)
#include <gtk/cellareacontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellareacontext_extra_impl.hpp>)
#include <gtk/cellareacontext_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CellAreaContextClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkCellAreaContextClass *methods = (::GtkCellAreaContextClass *) class_struct;
  (void) methods;

  methods->allocate = (decltype (methods->allocate)) detail::method_wrapper<self, void (*) (gint width, gint height), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::allocate_>;
  methods->reset = (decltype (methods->reset)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::reset_>;
}

// void CellAreaContext::allocate (GtkCellAreaContext* context, gint width, gint height);
// void CellAreaContext::allocate (::GtkCellAreaContext* context, gint width, gint height);
void CellAreaContextClass::allocate_ (gint width, gint height) noexcept
{
  if (!get_struct_()->allocate) return ;
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->allocate;
  auto height_to_c = height;
  auto width_to_c = width;
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c));
}

// void CellAreaContext::get_preferred_height_for_width (GtkCellAreaContext* context, gint width, gint* minimum_height, gint* natural_height);
// void CellAreaContext::get_preferred_height_for_width (::GtkCellAreaContext* context, gint width, gint* minimum_height, gint* natural_height);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void CellAreaContext::get_preferred_width_for_height (GtkCellAreaContext* context, gint height, gint* minimum_width, gint* natural_width);
// void CellAreaContext::get_preferred_width_for_height (::GtkCellAreaContext* context, gint height, gint* minimum_width, gint* natural_width);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void CellAreaContext::reset (GtkCellAreaContext* context);
// void CellAreaContext::reset (::GtkCellAreaContext* context);
void CellAreaContextClass::reset_ () noexcept
{
  if (!get_struct_()->reset) return ;
  typedef void (*call_wrap_t) (::GtkCellAreaContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->reset;
  call_wrap_v ((::GtkCellAreaContext*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
