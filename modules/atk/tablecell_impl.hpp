// AUTO-GENERATED

#ifndef _GI_ATK_TABLECELL_IMPL_HPP_
#define _GI_ATK_TABLECELL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

// GPtrArray* atk_table_cell_get_column_header_cells (AtkTableCell* cell);
//  atk_table_cell_get_column_header_cells (::AtkTableCell* cell);
// SKIP;  type  not supported

// gint atk_table_cell_get_column_span (AtkTableCell* cell);
// gint atk_table_cell_get_column_span (::AtkTableCell* cell);
gint base::TableCellBase::get_column_span () noexcept
{
  typedef gint (*call_wrap_t) (::AtkTableCell* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_cell_get_column_span;
  auto _temp_ret = call_wrap_v ((::AtkTableCell*) (gobj_()));
  return _temp_ret;
}

// gboolean atk_table_cell_get_position (AtkTableCell* cell, gint* row, gint* column);
// gboolean atk_table_cell_get_position (::AtkTableCell* cell, gint* row, gint* column);
bool base::TableCellBase::get_position (gint & row, gint & column) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkTableCell* cell, gint* row, gint* column);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_cell_get_position;
  gint column_o {};
  gint row_o {};
  auto _temp_ret = call_wrap_v ((::AtkTableCell*) (gobj_()), (gint*) (&row_o), (gint*) (&column_o));
  column = column_o;
  row = row_o;
  return _temp_ret;
}
std::tuple<bool, gint, gint> base::TableCellBase::get_position () noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkTableCell* cell, gint* row, gint* column);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_cell_get_position;
  gint column_o {};
  gint row_o {};
  auto _temp_ret = call_wrap_v ((::AtkTableCell*) (gobj_()), (gint*) (&row_o), (gint*) (&column_o));
  return std::make_tuple (_temp_ret, row_o, column_o);
}

// gboolean atk_table_cell_get_row_column_span (AtkTableCell* cell, gint* row, gint* column, gint* row_span, gint* column_span);
// gboolean atk_table_cell_get_row_column_span (::AtkTableCell* cell, gint* row, gint* column, gint* row_span, gint* column_span);
bool base::TableCellBase::get_row_column_span (gint & row, gint & column, gint & row_span, gint & column_span) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkTableCell* cell, gint* row, gint* column, gint* row_span, gint* column_span);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_cell_get_row_column_span;
  gint column_span_o {};
  gint row_span_o {};
  gint column_o {};
  gint row_o {};
  auto _temp_ret = call_wrap_v ((::AtkTableCell*) (gobj_()), (gint*) (&row_o), (gint*) (&column_o), (gint*) (&row_span_o), (gint*) (&column_span_o));
  column_span = column_span_o;
  row_span = row_span_o;
  column = column_o;
  row = row_o;
  return _temp_ret;
}
std::tuple<bool, gint, gint, gint, gint> base::TableCellBase::get_row_column_span () noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkTableCell* cell, gint* row, gint* column, gint* row_span, gint* column_span);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_cell_get_row_column_span;
  gint column_span_o {};
  gint row_span_o {};
  gint column_o {};
  gint row_o {};
  auto _temp_ret = call_wrap_v ((::AtkTableCell*) (gobj_()), (gint*) (&row_o), (gint*) (&column_o), (gint*) (&row_span_o), (gint*) (&column_span_o));
  return std::make_tuple (_temp_ret, row_o, column_o, row_span_o, column_span_o);
}

// GPtrArray* atk_table_cell_get_row_header_cells (AtkTableCell* cell);
//  atk_table_cell_get_row_header_cells (::AtkTableCell* cell);
// SKIP;  type  not supported

// gint atk_table_cell_get_row_span (AtkTableCell* cell);
// gint atk_table_cell_get_row_span (::AtkTableCell* cell);
gint base::TableCellBase::get_row_span () noexcept
{
  typedef gint (*call_wrap_t) (::AtkTableCell* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_cell_get_row_span;
  auto _temp_ret = call_wrap_v ((::AtkTableCell*) (gobj_()));
  return _temp_ret;
}

// AtkObject* atk_table_cell_get_table (AtkTableCell* cell);
// ::AtkObject* atk_table_cell_get_table (::AtkTableCell* cell);
Atk::Object base::TableCellBase::get_table () noexcept
{
  typedef ::AtkObject* (*call_wrap_t) (::AtkTableCell* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_cell_get_table;
  auto _temp_ret = call_wrap_v ((::AtkTableCell*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/tablecell_extra_def_impl.hpp>)
#include <atk/tablecell_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/tablecell_extra_impl.hpp>)
#include <atk/tablecell_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void TableCellIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::AtkTableCellIface *methods = (::AtkTableCellIface *) interface_struct;
  (void) methods;

  methods->get_column_span = (decltype (methods->get_column_span)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_column_span_>;
  methods->get_row_span = (decltype (methods->get_row_span)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_row_span_>;
  methods->get_table = (decltype (methods->get_table)) detail::method_wrapper<self, Atk::Object (*) (), gi::transfer_full_t>::wrapper<&self::get_table_>;
}

// GPtrArray* TableCell::get_column_header_cells (AtkTableCell* cell);
//  TableCell::get_column_header_cells (::AtkTableCell* cell);
// SKIP;  type  not supported

// gint TableCell::get_column_span (AtkTableCell* cell);
// gint TableCell::get_column_span (::AtkTableCell* cell);
gint TableCellIfaceClassImpl::get_column_span_ () noexcept
{
  if (!get_struct_()->get_column_span) return gint{};
  typedef gint (*call_wrap_t) (::AtkTableCell* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_column_span;
  auto _temp_ret = call_wrap_v ((::AtkTableCell*) (gobj_()));
  return _temp_ret;
}

// gboolean TableCell::get_position (AtkTableCell* cell, gint* row, gint* column);
// gboolean TableCell::get_position (::AtkTableCell* cell, gint* row, gint* column);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// gboolean TableCell::get_row_column_span (AtkTableCell* cell, gint* row, gint* column, gint* row_span, gint* column_span);
// gboolean TableCell::get_row_column_span (::AtkTableCell* cell, gint* row, gint* column, gint* row_span, gint* column_span);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported

// GPtrArray* TableCell::get_row_header_cells (AtkTableCell* cell);
//  TableCell::get_row_header_cells (::AtkTableCell* cell);
// SKIP;  type  not supported

// gint TableCell::get_row_span (AtkTableCell* cell);
// gint TableCell::get_row_span (::AtkTableCell* cell);
gint TableCellIfaceClassImpl::get_row_span_ () noexcept
{
  if (!get_struct_()->get_row_span) return gint{};
  typedef gint (*call_wrap_t) (::AtkTableCell* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_row_span;
  auto _temp_ret = call_wrap_v ((::AtkTableCell*) (gobj_()));
  return _temp_ret;
}

// AtkObject* TableCell::get_table (AtkTableCell* cell);
// ::AtkObject* TableCell::get_table (::AtkTableCell* cell);
Atk::Object TableCellIfaceClassImpl::get_table_ () noexcept
{
  if (!get_struct_()->get_table) return Atk::Object{};
  typedef ::AtkObject* (*call_wrap_t) (::AtkTableCell* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_table;
  auto _temp_ret = call_wrap_v ((::AtkTableCell*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
