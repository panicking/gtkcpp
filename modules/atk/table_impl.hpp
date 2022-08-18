// AUTO-GENERATED

#ifndef _GI_ATK_TABLE_IMPL_HPP_
#define _GI_ATK_TABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

// gboolean atk_table_add_column_selection (AtkTable* table, gint column);
// gboolean atk_table_add_column_selection (::AtkTable* table, gint column);
bool base::TableBase::add_column_selection (gint column) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkTable* table, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_add_column_selection;
  auto column_to_c = column;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (column_to_c));
  return _temp_ret;
}

// gboolean atk_table_add_row_selection (AtkTable* table, gint row);
// gboolean atk_table_add_row_selection (::AtkTable* table, gint row);
bool base::TableBase::add_row_selection (gint row) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkTable* table, gint row);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_add_row_selection;
  auto row_to_c = row;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (row_to_c));
  return _temp_ret;
}

// AtkObject* atk_table_get_caption (AtkTable* table);
// ::AtkObject* atk_table_get_caption (::AtkTable* table);
Atk::Object base::TableBase::get_caption () noexcept
{
  typedef ::AtkObject* (*call_wrap_t) (::AtkTable* table);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_get_caption;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint atk_table_get_column_at_index (AtkTable* table, gint index_);
// gint atk_table_get_column_at_index (::AtkTable* table, gint index_);
// IGNORE; deprecated

// const gchar* atk_table_get_column_description (AtkTable* table, gint column);
// const char* atk_table_get_column_description (::AtkTable* table, gint column);
std::string base::TableBase::get_column_description (gint column) noexcept
{
  typedef const char* (*call_wrap_t) (::AtkTable* table, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_get_column_description;
  auto column_to_c = column;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (column_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint atk_table_get_column_extent_at (AtkTable* table, gint row, gint column);
// gint atk_table_get_column_extent_at (::AtkTable* table, gint row, gint column);
gint base::TableBase::get_column_extent_at (gint row, gint column) noexcept
{
  typedef gint (*call_wrap_t) (::AtkTable* table, gint row, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_get_column_extent_at;
  auto column_to_c = column;
  auto row_to_c = row;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (row_to_c), (gint) (column_to_c));
  return _temp_ret;
}

// AtkObject* atk_table_get_column_header (AtkTable* table, gint column);
// ::AtkObject* atk_table_get_column_header (::AtkTable* table, gint column);
Atk::Object base::TableBase::get_column_header (gint column) noexcept
{
  typedef ::AtkObject* (*call_wrap_t) (::AtkTable* table, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_get_column_header;
  auto column_to_c = column;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (column_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint atk_table_get_index_at (AtkTable* table, gint row, gint column);
// gint atk_table_get_index_at (::AtkTable* table, gint row, gint column);
// IGNORE; deprecated

// gint atk_table_get_n_columns (AtkTable* table);
// gint atk_table_get_n_columns (::AtkTable* table);
gint base::TableBase::get_n_columns () noexcept
{
  typedef gint (*call_wrap_t) (::AtkTable* table);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_get_n_columns;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()));
  return _temp_ret;
}

// gint atk_table_get_n_rows (AtkTable* table);
// gint atk_table_get_n_rows (::AtkTable* table);
gint base::TableBase::get_n_rows () noexcept
{
  typedef gint (*call_wrap_t) (::AtkTable* table);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_get_n_rows;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()));
  return _temp_ret;
}

// gint atk_table_get_row_at_index (AtkTable* table, gint index_);
// gint atk_table_get_row_at_index (::AtkTable* table, gint index_);
// IGNORE; deprecated

// const gchar* atk_table_get_row_description (AtkTable* table, gint row);
// const char* atk_table_get_row_description (::AtkTable* table, gint row);
std::string base::TableBase::get_row_description (gint row) noexcept
{
  typedef const char* (*call_wrap_t) (::AtkTable* table, gint row);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_get_row_description;
  auto row_to_c = row;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (row_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint atk_table_get_row_extent_at (AtkTable* table, gint row, gint column);
// gint atk_table_get_row_extent_at (::AtkTable* table, gint row, gint column);
gint base::TableBase::get_row_extent_at (gint row, gint column) noexcept
{
  typedef gint (*call_wrap_t) (::AtkTable* table, gint row, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_get_row_extent_at;
  auto column_to_c = column;
  auto row_to_c = row;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (row_to_c), (gint) (column_to_c));
  return _temp_ret;
}

// AtkObject* atk_table_get_row_header (AtkTable* table, gint row);
// ::AtkObject* atk_table_get_row_header (::AtkTable* table, gint row);
Atk::Object base::TableBase::get_row_header (gint row) noexcept
{
  typedef ::AtkObject* (*call_wrap_t) (::AtkTable* table, gint row);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_get_row_header;
  auto row_to_c = row;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (row_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint atk_table_get_selected_columns (AtkTable* table, gint** selected);
// gint atk_table_get_selected_columns (::AtkTable* table, gint selected);
// SKIP; inconsistent in selected pointer depth (2 vs 0)

// gint atk_table_get_selected_rows (AtkTable* table, gint** selected);
// gint atk_table_get_selected_rows (::AtkTable* table, gint selected);
// SKIP; inconsistent in selected pointer depth (2 vs 0)

// AtkObject* atk_table_get_summary (AtkTable* table);
// ::AtkObject* atk_table_get_summary (::AtkTable* table);
Atk::Object base::TableBase::get_summary () noexcept
{
  typedef ::AtkObject* (*call_wrap_t) (::AtkTable* table);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_get_summary;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean atk_table_is_column_selected (AtkTable* table, gint column);
// gboolean atk_table_is_column_selected (::AtkTable* table, gint column);
bool base::TableBase::is_column_selected (gint column) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkTable* table, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_is_column_selected;
  auto column_to_c = column;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (column_to_c));
  return _temp_ret;
}

// gboolean atk_table_is_row_selected (AtkTable* table, gint row);
// gboolean atk_table_is_row_selected (::AtkTable* table, gint row);
bool base::TableBase::is_row_selected (gint row) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkTable* table, gint row);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_is_row_selected;
  auto row_to_c = row;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (row_to_c));
  return _temp_ret;
}

// gboolean atk_table_is_selected (AtkTable* table, gint row, gint column);
// gboolean atk_table_is_selected (::AtkTable* table, gint row, gint column);
bool base::TableBase::is_selected (gint row, gint column) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkTable* table, gint row, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_is_selected;
  auto column_to_c = column;
  auto row_to_c = row;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (row_to_c), (gint) (column_to_c));
  return _temp_ret;
}

// AtkObject* atk_table_ref_at (AtkTable* table, gint row, gint column);
// ::AtkObject* atk_table_ref_at (::AtkTable* table, gint row, gint column);
Atk::Object base::TableBase::ref_at (gint row, gint column) noexcept
{
  typedef ::AtkObject* (*call_wrap_t) (::AtkTable* table, gint row, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_ref_at;
  auto column_to_c = column;
  auto row_to_c = row;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (row_to_c), (gint) (column_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean atk_table_remove_column_selection (AtkTable* table, gint column);
// gboolean atk_table_remove_column_selection (::AtkTable* table, gint column);
bool base::TableBase::remove_column_selection (gint column) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkTable* table, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_remove_column_selection;
  auto column_to_c = column;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (column_to_c));
  return _temp_ret;
}

// gboolean atk_table_remove_row_selection (AtkTable* table, gint row);
// gboolean atk_table_remove_row_selection (::AtkTable* table, gint row);
bool base::TableBase::remove_row_selection (gint row) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkTable* table, gint row);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_remove_row_selection;
  auto row_to_c = row;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (row_to_c));
  return _temp_ret;
}

// void atk_table_set_caption (AtkTable* table, AtkObject* caption);
// void atk_table_set_caption (::AtkTable* table, ::AtkObject* caption);
void base::TableBase::set_caption (Atk::Object caption) noexcept
{
  typedef void (*call_wrap_t) (::AtkTable* table, ::AtkObject* caption);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_set_caption;
  auto caption_to_c = gi::unwrap (caption, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::AtkTable*) (gobj_()), (::AtkObject*) (caption_to_c));
}

// void atk_table_set_column_description (AtkTable* table, gint column, const gchar* description);
// void atk_table_set_column_description (::AtkTable* table, gint column, const char* description);
void base::TableBase::set_column_description (gint column, const std::string & description) noexcept
{
  typedef void (*call_wrap_t) (::AtkTable* table, gint column, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_set_column_description;
  auto description_to_c = gi::unwrap (description, gi::transfer_none, gi::direction_in);
  auto column_to_c = column;
  call_wrap_v ((::AtkTable*) (gobj_()), (gint) (column_to_c), (const char*) (description_to_c));
}

// void atk_table_set_column_header (AtkTable* table, gint column, AtkObject* header);
// void atk_table_set_column_header (::AtkTable* table, gint column, ::AtkObject* header);
void base::TableBase::set_column_header (gint column, Atk::Object header) noexcept
{
  typedef void (*call_wrap_t) (::AtkTable* table, gint column, ::AtkObject* header);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_set_column_header;
  auto header_to_c = gi::unwrap (header, gi::transfer_none, gi::direction_in);
  auto column_to_c = column;
  call_wrap_v ((::AtkTable*) (gobj_()), (gint) (column_to_c), (::AtkObject*) (header_to_c));
}

// void atk_table_set_row_description (AtkTable* table, gint row, const gchar* description);
// void atk_table_set_row_description (::AtkTable* table, gint row, const char* description);
void base::TableBase::set_row_description (gint row, const std::string & description) noexcept
{
  typedef void (*call_wrap_t) (::AtkTable* table, gint row, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_set_row_description;
  auto description_to_c = gi::unwrap (description, gi::transfer_none, gi::direction_in);
  auto row_to_c = row;
  call_wrap_v ((::AtkTable*) (gobj_()), (gint) (row_to_c), (const char*) (description_to_c));
}

// void atk_table_set_row_header (AtkTable* table, gint row, AtkObject* header);
// void atk_table_set_row_header (::AtkTable* table, gint row, ::AtkObject* header);
void base::TableBase::set_row_header (gint row, Atk::Object header) noexcept
{
  typedef void (*call_wrap_t) (::AtkTable* table, gint row, ::AtkObject* header);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_set_row_header;
  auto header_to_c = gi::unwrap (header, gi::transfer_none, gi::direction_in);
  auto row_to_c = row;
  call_wrap_v ((::AtkTable*) (gobj_()), (gint) (row_to_c), (::AtkObject*) (header_to_c));
}

// void atk_table_set_summary (AtkTable* table, AtkObject* accessible);
// void atk_table_set_summary (::AtkTable* table, ::AtkObject* accessible);
void base::TableBase::set_summary (Atk::Object accessible) noexcept
{
  typedef void (*call_wrap_t) (::AtkTable* table, ::AtkObject* accessible);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_table_set_summary;
  auto accessible_to_c = gi::unwrap (accessible, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::AtkTable*) (gobj_()), (::AtkObject*) (accessible_to_c));
}









} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/table_extra_def_impl.hpp>)
#include <atk/table_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/table_extra_impl.hpp>)
#include <atk/table_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void TableIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::AtkTableIface *methods = (::AtkTableIface *) interface_struct;
  (void) methods;

  methods->add_column_selection = (decltype (methods->add_column_selection)) detail::method_wrapper<self, bool (*) (gint column), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::add_column_selection_>;
  methods->add_row_selection = (decltype (methods->add_row_selection)) detail::method_wrapper<self, bool (*) (gint row), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::add_row_selection_>;
  methods->column_deleted = (decltype (methods->column_deleted)) detail::method_wrapper<self, void (*) (gint column, gint num_deleted), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::column_deleted_>;
  methods->column_inserted = (decltype (methods->column_inserted)) detail::method_wrapper<self, void (*) (gint column, gint num_inserted), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::column_inserted_>;
  methods->column_reordered = (decltype (methods->column_reordered)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::column_reordered_>;
  methods->get_caption = (decltype (methods->get_caption)) detail::method_wrapper<self, Atk::Object (*) (), gi::transfer_none_t>::wrapper<&self::get_caption_>;
  methods->get_column_extent_at = (decltype (methods->get_column_extent_at)) detail::method_wrapper<self, gint (*) (gint row, gint column), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_column_extent_at_>;
  methods->get_column_header = (decltype (methods->get_column_header)) detail::method_wrapper<self, Atk::Object (*) (gint column), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_column_header_>;
  methods->get_n_columns = (decltype (methods->get_n_columns)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_n_columns_>;
  methods->get_n_rows = (decltype (methods->get_n_rows)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_n_rows_>;
  methods->get_row_extent_at = (decltype (methods->get_row_extent_at)) detail::method_wrapper<self, gint (*) (gint row, gint column), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_row_extent_at_>;
  methods->get_row_header = (decltype (methods->get_row_header)) detail::method_wrapper<self, Atk::Object (*) (gint row), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_row_header_>;
  methods->get_summary = (decltype (methods->get_summary)) detail::method_wrapper<self, Atk::Object (*) (), gi::transfer_full_t>::wrapper<&self::get_summary_>;
  methods->is_column_selected = (decltype (methods->is_column_selected)) detail::method_wrapper<self, bool (*) (gint column), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::is_column_selected_>;
  methods->is_row_selected = (decltype (methods->is_row_selected)) detail::method_wrapper<self, bool (*) (gint row), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::is_row_selected_>;
  methods->is_selected = (decltype (methods->is_selected)) detail::method_wrapper<self, bool (*) (gint row, gint column), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::is_selected_>;
  methods->model_changed = (decltype (methods->model_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::model_changed_>;
  methods->ref_at = (decltype (methods->ref_at)) detail::method_wrapper<self, Atk::Object (*) (gint row, gint column), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::ref_at_>;
  methods->remove_column_selection = (decltype (methods->remove_column_selection)) detail::method_wrapper<self, bool (*) (gint column), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::remove_column_selection_>;
  methods->remove_row_selection = (decltype (methods->remove_row_selection)) detail::method_wrapper<self, bool (*) (gint row), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::remove_row_selection_>;
  methods->row_deleted = (decltype (methods->row_deleted)) detail::method_wrapper<self, void (*) (gint row, gint num_deleted), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::row_deleted_>;
  methods->row_inserted = (decltype (methods->row_inserted)) detail::method_wrapper<self, void (*) (gint row, gint num_inserted), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::row_inserted_>;
  methods->row_reordered = (decltype (methods->row_reordered)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::row_reordered_>;
  methods->set_caption = (decltype (methods->set_caption)) detail::method_wrapper<self, void (*) (Atk::Object caption), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::set_caption_>;
  methods->set_column_description = (decltype (methods->set_column_description)) detail::method_wrapper<self, void (*) (gint column, const std::string & description), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::set_column_description_>;
  methods->set_column_header = (decltype (methods->set_column_header)) detail::method_wrapper<self, void (*) (gint column, Atk::Object header), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::set_column_header_>;
  methods->set_row_description = (decltype (methods->set_row_description)) detail::method_wrapper<self, void (*) (gint row, const std::string & description), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::set_row_description_>;
  methods->set_row_header = (decltype (methods->set_row_header)) detail::method_wrapper<self, void (*) (gint row, Atk::Object header), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::set_row_header_>;
  methods->set_summary = (decltype (methods->set_summary)) detail::method_wrapper<self, void (*) (Atk::Object accessible), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::set_summary_>;
}

// gboolean Table::add_column_selection (AtkTable* table, gint column);
// gboolean Table::add_column_selection (::AtkTable* table, gint column);
bool TableIfaceClassImpl::add_column_selection_ (gint column) noexcept
{
  if (!get_struct_()->add_column_selection) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkTable* table, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->add_column_selection;
  auto column_to_c = column;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (column_to_c));
  return _temp_ret;
}

// gboolean Table::add_row_selection (AtkTable* table, gint row);
// gboolean Table::add_row_selection (::AtkTable* table, gint row);
bool TableIfaceClassImpl::add_row_selection_ (gint row) noexcept
{
  if (!get_struct_()->add_row_selection) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkTable* table, gint row);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->add_row_selection;
  auto row_to_c = row;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (row_to_c));
  return _temp_ret;
}

// void Table::column_deleted (AtkTable* table, gint column, gint num_deleted);
// void Table::column_deleted (::AtkTable* table, gint column, gint num_deleted);
void TableIfaceClassImpl::column_deleted_ (gint column, gint num_deleted) noexcept
{
  if (!get_struct_()->column_deleted) return ;
  typedef void (*call_wrap_t) (::AtkTable* table, gint column, gint num_deleted);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->column_deleted;
  auto num_deleted_to_c = num_deleted;
  auto column_to_c = column;
  call_wrap_v ((::AtkTable*) (gobj_()), (gint) (column_to_c), (gint) (num_deleted_to_c));
}

// void Table::column_inserted (AtkTable* table, gint column, gint num_inserted);
// void Table::column_inserted (::AtkTable* table, gint column, gint num_inserted);
void TableIfaceClassImpl::column_inserted_ (gint column, gint num_inserted) noexcept
{
  if (!get_struct_()->column_inserted) return ;
  typedef void (*call_wrap_t) (::AtkTable* table, gint column, gint num_inserted);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->column_inserted;
  auto num_inserted_to_c = num_inserted;
  auto column_to_c = column;
  call_wrap_v ((::AtkTable*) (gobj_()), (gint) (column_to_c), (gint) (num_inserted_to_c));
}

// void Table::column_reordered (AtkTable* table);
// void Table::column_reordered (::AtkTable* table);
void TableIfaceClassImpl::column_reordered_ () noexcept
{
  if (!get_struct_()->column_reordered) return ;
  typedef void (*call_wrap_t) (::AtkTable* table);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->column_reordered;
  call_wrap_v ((::AtkTable*) (gobj_()));
}

// AtkObject* Table::get_caption (AtkTable* table);
// ::AtkObject* Table::get_caption (::AtkTable* table);
Atk::Object TableIfaceClassImpl::get_caption_ () noexcept
{
  if (!get_struct_()->get_caption) return Atk::Object{};
  typedef ::AtkObject* (*call_wrap_t) (::AtkTable* table);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_caption;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint Table::get_column_at_index (AtkTable* table, gint index_);
// gint Table::get_column_at_index (::AtkTable* table, gint index_);
// IGNORE; deprecated

// const gchar* Table::get_column_description (AtkTable* table, gint column);
// const char* Table::get_column_description (::AtkTable* table, gint column);
// SKIP; invalid callback return transfer none

// gint Table::get_column_extent_at (AtkTable* table, gint row, gint column);
// gint Table::get_column_extent_at (::AtkTable* table, gint row, gint column);
gint TableIfaceClassImpl::get_column_extent_at_ (gint row, gint column) noexcept
{
  if (!get_struct_()->get_column_extent_at) return gint{};
  typedef gint (*call_wrap_t) (::AtkTable* table, gint row, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_column_extent_at;
  auto column_to_c = column;
  auto row_to_c = row;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (row_to_c), (gint) (column_to_c));
  return _temp_ret;
}

// AtkObject* Table::get_column_header (AtkTable* table, gint column);
// ::AtkObject* Table::get_column_header (::AtkTable* table, gint column);
Atk::Object TableIfaceClassImpl::get_column_header_ (gint column) noexcept
{
  if (!get_struct_()->get_column_header) return Atk::Object{};
  typedef ::AtkObject* (*call_wrap_t) (::AtkTable* table, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_column_header;
  auto column_to_c = column;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (column_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint Table::get_index_at (AtkTable* table, gint row, gint column);
// gint Table::get_index_at (::AtkTable* table, gint row, gint column);
// IGNORE; deprecated

// gint Table::get_n_columns (AtkTable* table);
// gint Table::get_n_columns (::AtkTable* table);
gint TableIfaceClassImpl::get_n_columns_ () noexcept
{
  if (!get_struct_()->get_n_columns) return gint{};
  typedef gint (*call_wrap_t) (::AtkTable* table);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_n_columns;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()));
  return _temp_ret;
}

// gint Table::get_n_rows (AtkTable* table);
// gint Table::get_n_rows (::AtkTable* table);
gint TableIfaceClassImpl::get_n_rows_ () noexcept
{
  if (!get_struct_()->get_n_rows) return gint{};
  typedef gint (*call_wrap_t) (::AtkTable* table);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_n_rows;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()));
  return _temp_ret;
}

// gint Table::get_row_at_index (AtkTable* table, gint index_);
// gint Table::get_row_at_index (::AtkTable* table, gint index_);
// IGNORE; deprecated

// const gchar* Table::get_row_description (AtkTable* table, gint row);
// const char* Table::get_row_description (::AtkTable* table, gint row);
// SKIP; invalid callback return transfer none

// gint Table::get_row_extent_at (AtkTable* table, gint row, gint column);
// gint Table::get_row_extent_at (::AtkTable* table, gint row, gint column);
gint TableIfaceClassImpl::get_row_extent_at_ (gint row, gint column) noexcept
{
  if (!get_struct_()->get_row_extent_at) return gint{};
  typedef gint (*call_wrap_t) (::AtkTable* table, gint row, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_row_extent_at;
  auto column_to_c = column;
  auto row_to_c = row;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (row_to_c), (gint) (column_to_c));
  return _temp_ret;
}

// AtkObject* Table::get_row_header (AtkTable* table, gint row);
// ::AtkObject* Table::get_row_header (::AtkTable* table, gint row);
Atk::Object TableIfaceClassImpl::get_row_header_ (gint row) noexcept
{
  if (!get_struct_()->get_row_header) return Atk::Object{};
  typedef ::AtkObject* (*call_wrap_t) (::AtkTable* table, gint row);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_row_header;
  auto row_to_c = row;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (row_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint Table::get_selected_columns (AtkTable* table, gint** selected);
// gint Table::get_selected_columns (::AtkTable* table, gint selected);
// SKIP; inconsistent in selected pointer depth (2 vs 0)

// gint Table::get_selected_rows (AtkTable* table, gint** selected);
// gint Table::get_selected_rows (::AtkTable* table, gint selected);
// SKIP; inconsistent in selected pointer depth (2 vs 0)

// AtkObject* Table::get_summary (AtkTable* table);
// ::AtkObject* Table::get_summary (::AtkTable* table);
Atk::Object TableIfaceClassImpl::get_summary_ () noexcept
{
  if (!get_struct_()->get_summary) return Atk::Object{};
  typedef ::AtkObject* (*call_wrap_t) (::AtkTable* table);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_summary;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean Table::is_column_selected (AtkTable* table, gint column);
// gboolean Table::is_column_selected (::AtkTable* table, gint column);
bool TableIfaceClassImpl::is_column_selected_ (gint column) noexcept
{
  if (!get_struct_()->is_column_selected) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkTable* table, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_column_selected;
  auto column_to_c = column;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (column_to_c));
  return _temp_ret;
}

// gboolean Table::is_row_selected (AtkTable* table, gint row);
// gboolean Table::is_row_selected (::AtkTable* table, gint row);
bool TableIfaceClassImpl::is_row_selected_ (gint row) noexcept
{
  if (!get_struct_()->is_row_selected) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkTable* table, gint row);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_row_selected;
  auto row_to_c = row;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (row_to_c));
  return _temp_ret;
}

// gboolean Table::is_selected (AtkTable* table, gint row, gint column);
// gboolean Table::is_selected (::AtkTable* table, gint row, gint column);
bool TableIfaceClassImpl::is_selected_ (gint row, gint column) noexcept
{
  if (!get_struct_()->is_selected) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkTable* table, gint row, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_selected;
  auto column_to_c = column;
  auto row_to_c = row;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (row_to_c), (gint) (column_to_c));
  return _temp_ret;
}

// void Table::model_changed (AtkTable* table);
// void Table::model_changed (::AtkTable* table);
void TableIfaceClassImpl::model_changed_ () noexcept
{
  if (!get_struct_()->model_changed) return ;
  typedef void (*call_wrap_t) (::AtkTable* table);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->model_changed;
  call_wrap_v ((::AtkTable*) (gobj_()));
}

// AtkObject* Table::ref_at (AtkTable* table, gint row, gint column);
// ::AtkObject* Table::ref_at (::AtkTable* table, gint row, gint column);
Atk::Object TableIfaceClassImpl::ref_at_ (gint row, gint column) noexcept
{
  if (!get_struct_()->ref_at) return Atk::Object{};
  typedef ::AtkObject* (*call_wrap_t) (::AtkTable* table, gint row, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->ref_at;
  auto column_to_c = column;
  auto row_to_c = row;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (row_to_c), (gint) (column_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean Table::remove_column_selection (AtkTable* table, gint column);
// gboolean Table::remove_column_selection (::AtkTable* table, gint column);
bool TableIfaceClassImpl::remove_column_selection_ (gint column) noexcept
{
  if (!get_struct_()->remove_column_selection) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkTable* table, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->remove_column_selection;
  auto column_to_c = column;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (column_to_c));
  return _temp_ret;
}

// gboolean Table::remove_row_selection (AtkTable* table, gint row);
// gboolean Table::remove_row_selection (::AtkTable* table, gint row);
bool TableIfaceClassImpl::remove_row_selection_ (gint row) noexcept
{
  if (!get_struct_()->remove_row_selection) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkTable* table, gint row);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->remove_row_selection;
  auto row_to_c = row;
  auto _temp_ret = call_wrap_v ((::AtkTable*) (gobj_()), (gint) (row_to_c));
  return _temp_ret;
}

// void Table::row_deleted (AtkTable* table, gint row, gint num_deleted);
// void Table::row_deleted (::AtkTable* table, gint row, gint num_deleted);
void TableIfaceClassImpl::row_deleted_ (gint row, gint num_deleted) noexcept
{
  if (!get_struct_()->row_deleted) return ;
  typedef void (*call_wrap_t) (::AtkTable* table, gint row, gint num_deleted);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->row_deleted;
  auto num_deleted_to_c = num_deleted;
  auto row_to_c = row;
  call_wrap_v ((::AtkTable*) (gobj_()), (gint) (row_to_c), (gint) (num_deleted_to_c));
}

// void Table::row_inserted (AtkTable* table, gint row, gint num_inserted);
// void Table::row_inserted (::AtkTable* table, gint row, gint num_inserted);
void TableIfaceClassImpl::row_inserted_ (gint row, gint num_inserted) noexcept
{
  if (!get_struct_()->row_inserted) return ;
  typedef void (*call_wrap_t) (::AtkTable* table, gint row, gint num_inserted);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->row_inserted;
  auto num_inserted_to_c = num_inserted;
  auto row_to_c = row;
  call_wrap_v ((::AtkTable*) (gobj_()), (gint) (row_to_c), (gint) (num_inserted_to_c));
}

// void Table::row_reordered (AtkTable* table);
// void Table::row_reordered (::AtkTable* table);
void TableIfaceClassImpl::row_reordered_ () noexcept
{
  if (!get_struct_()->row_reordered) return ;
  typedef void (*call_wrap_t) (::AtkTable* table);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->row_reordered;
  call_wrap_v ((::AtkTable*) (gobj_()));
}

// void Table::set_caption (AtkTable* table, AtkObject* caption);
// void Table::set_caption (::AtkTable* table, ::AtkObject* caption);
void TableIfaceClassImpl::set_caption_ (Atk::Object caption) noexcept
{
  if (!get_struct_()->set_caption) return ;
  typedef void (*call_wrap_t) (::AtkTable* table, ::AtkObject* caption);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_caption;
  auto caption_to_c = gi::unwrap (caption, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::AtkTable*) (gobj_()), (::AtkObject*) (caption_to_c));
}

// void Table::set_column_description (AtkTable* table, gint column, const gchar* description);
// void Table::set_column_description (::AtkTable* table, gint column, const char* description);
void TableIfaceClassImpl::set_column_description_ (gint column, const std::string & description) noexcept
{
  if (!get_struct_()->set_column_description) return ;
  typedef void (*call_wrap_t) (::AtkTable* table, gint column, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_column_description;
  auto description_to_c = gi::unwrap (description, gi::transfer_none, gi::direction_in);
  auto column_to_c = column;
  call_wrap_v ((::AtkTable*) (gobj_()), (gint) (column_to_c), (const char*) (description_to_c));
}

// void Table::set_column_header (AtkTable* table, gint column, AtkObject* header);
// void Table::set_column_header (::AtkTable* table, gint column, ::AtkObject* header);
void TableIfaceClassImpl::set_column_header_ (gint column, Atk::Object header) noexcept
{
  if (!get_struct_()->set_column_header) return ;
  typedef void (*call_wrap_t) (::AtkTable* table, gint column, ::AtkObject* header);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_column_header;
  auto header_to_c = gi::unwrap (header, gi::transfer_none, gi::direction_in);
  auto column_to_c = column;
  call_wrap_v ((::AtkTable*) (gobj_()), (gint) (column_to_c), (::AtkObject*) (header_to_c));
}

// void Table::set_row_description (AtkTable* table, gint row, const gchar* description);
// void Table::set_row_description (::AtkTable* table, gint row, const char* description);
void TableIfaceClassImpl::set_row_description_ (gint row, const std::string & description) noexcept
{
  if (!get_struct_()->set_row_description) return ;
  typedef void (*call_wrap_t) (::AtkTable* table, gint row, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_row_description;
  auto description_to_c = gi::unwrap (description, gi::transfer_none, gi::direction_in);
  auto row_to_c = row;
  call_wrap_v ((::AtkTable*) (gobj_()), (gint) (row_to_c), (const char*) (description_to_c));
}

// void Table::set_row_header (AtkTable* table, gint row, AtkObject* header);
// void Table::set_row_header (::AtkTable* table, gint row, ::AtkObject* header);
void TableIfaceClassImpl::set_row_header_ (gint row, Atk::Object header) noexcept
{
  if (!get_struct_()->set_row_header) return ;
  typedef void (*call_wrap_t) (::AtkTable* table, gint row, ::AtkObject* header);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_row_header;
  auto header_to_c = gi::unwrap (header, gi::transfer_none, gi::direction_in);
  auto row_to_c = row;
  call_wrap_v ((::AtkTable*) (gobj_()), (gint) (row_to_c), (::AtkObject*) (header_to_c));
}

// void Table::set_summary (AtkTable* table, AtkObject* accessible);
// void Table::set_summary (::AtkTable* table, ::AtkObject* accessible);
void TableIfaceClassImpl::set_summary_ (Atk::Object accessible) noexcept
{
  if (!get_struct_()->set_summary) return ;
  typedef void (*call_wrap_t) (::AtkTable* table, ::AtkObject* accessible);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_summary;
  auto accessible_to_c = gi::unwrap (accessible, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::AtkTable*) (gobj_()), (::AtkObject*) (accessible_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
