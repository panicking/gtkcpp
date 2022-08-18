// AUTO-GENERATED

#ifndef _GI_ATK_TABLE_HPP_
#define _GI_ATK_TABLE_HPP_


namespace gi {

namespace repository {

namespace Atk {

class Object;

class Table;

namespace base {


#define GI_ATK_TABLE_BASE base::TableBase
class TableBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::AtkTable BaseObjectType;

TableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_table_get_type(); } 

// gboolean atk_table_add_column_selection (AtkTable* table, gint column);
// gboolean atk_table_add_column_selection (::AtkTable* table, gint column);
GI_INLINE_DECL bool add_column_selection (gint column) noexcept;

// gboolean atk_table_add_row_selection (AtkTable* table, gint row);
// gboolean atk_table_add_row_selection (::AtkTable* table, gint row);
GI_INLINE_DECL bool add_row_selection (gint row) noexcept;

// AtkObject* atk_table_get_caption (AtkTable* table);
// ::AtkObject* atk_table_get_caption (::AtkTable* table);
GI_INLINE_DECL Atk::Object get_caption () noexcept;

// gint atk_table_get_column_at_index (AtkTable* table, gint index_);
// gint atk_table_get_column_at_index (::AtkTable* table, gint index_);
// IGNORE; deprecated

// const gchar* atk_table_get_column_description (AtkTable* table, gint column);
// const char* atk_table_get_column_description (::AtkTable* table, gint column);
GI_INLINE_DECL std::string get_column_description (gint column) noexcept;

// gint atk_table_get_column_extent_at (AtkTable* table, gint row, gint column);
// gint atk_table_get_column_extent_at (::AtkTable* table, gint row, gint column);
GI_INLINE_DECL gint get_column_extent_at (gint row, gint column) noexcept;

// AtkObject* atk_table_get_column_header (AtkTable* table, gint column);
// ::AtkObject* atk_table_get_column_header (::AtkTable* table, gint column);
GI_INLINE_DECL Atk::Object get_column_header (gint column) noexcept;

// gint atk_table_get_index_at (AtkTable* table, gint row, gint column);
// gint atk_table_get_index_at (::AtkTable* table, gint row, gint column);
// IGNORE; deprecated

// gint atk_table_get_n_columns (AtkTable* table);
// gint atk_table_get_n_columns (::AtkTable* table);
GI_INLINE_DECL gint get_n_columns () noexcept;

// gint atk_table_get_n_rows (AtkTable* table);
// gint atk_table_get_n_rows (::AtkTable* table);
GI_INLINE_DECL gint get_n_rows () noexcept;

// gint atk_table_get_row_at_index (AtkTable* table, gint index_);
// gint atk_table_get_row_at_index (::AtkTable* table, gint index_);
// IGNORE; deprecated

// const gchar* atk_table_get_row_description (AtkTable* table, gint row);
// const char* atk_table_get_row_description (::AtkTable* table, gint row);
GI_INLINE_DECL std::string get_row_description (gint row) noexcept;

// gint atk_table_get_row_extent_at (AtkTable* table, gint row, gint column);
// gint atk_table_get_row_extent_at (::AtkTable* table, gint row, gint column);
GI_INLINE_DECL gint get_row_extent_at (gint row, gint column) noexcept;

// AtkObject* atk_table_get_row_header (AtkTable* table, gint row);
// ::AtkObject* atk_table_get_row_header (::AtkTable* table, gint row);
GI_INLINE_DECL Atk::Object get_row_header (gint row) noexcept;

// gint atk_table_get_selected_columns (AtkTable* table, gint** selected);
// gint atk_table_get_selected_columns (::AtkTable* table, gint selected);
// SKIP; inconsistent in selected pointer depth (2 vs 0)

// gint atk_table_get_selected_rows (AtkTable* table, gint** selected);
// gint atk_table_get_selected_rows (::AtkTable* table, gint selected);
// SKIP; inconsistent in selected pointer depth (2 vs 0)

// AtkObject* atk_table_get_summary (AtkTable* table);
// ::AtkObject* atk_table_get_summary (::AtkTable* table);
GI_INLINE_DECL Atk::Object get_summary () noexcept;

// gboolean atk_table_is_column_selected (AtkTable* table, gint column);
// gboolean atk_table_is_column_selected (::AtkTable* table, gint column);
GI_INLINE_DECL bool is_column_selected (gint column) noexcept;

// gboolean atk_table_is_row_selected (AtkTable* table, gint row);
// gboolean atk_table_is_row_selected (::AtkTable* table, gint row);
GI_INLINE_DECL bool is_row_selected (gint row) noexcept;

// gboolean atk_table_is_selected (AtkTable* table, gint row, gint column);
// gboolean atk_table_is_selected (::AtkTable* table, gint row, gint column);
GI_INLINE_DECL bool is_selected (gint row, gint column) noexcept;

// AtkObject* atk_table_ref_at (AtkTable* table, gint row, gint column);
// ::AtkObject* atk_table_ref_at (::AtkTable* table, gint row, gint column);
GI_INLINE_DECL Atk::Object ref_at (gint row, gint column) noexcept;

// gboolean atk_table_remove_column_selection (AtkTable* table, gint column);
// gboolean atk_table_remove_column_selection (::AtkTable* table, gint column);
GI_INLINE_DECL bool remove_column_selection (gint column) noexcept;

// gboolean atk_table_remove_row_selection (AtkTable* table, gint row);
// gboolean atk_table_remove_row_selection (::AtkTable* table, gint row);
GI_INLINE_DECL bool remove_row_selection (gint row) noexcept;

// void atk_table_set_caption (AtkTable* table, AtkObject* caption);
// void atk_table_set_caption (::AtkTable* table, ::AtkObject* caption);
GI_INLINE_DECL void set_caption (Atk::Object caption) noexcept;

// void atk_table_set_column_description (AtkTable* table, gint column, const gchar* description);
// void atk_table_set_column_description (::AtkTable* table, gint column, const char* description);
GI_INLINE_DECL void set_column_description (gint column, const std::string & description) noexcept;

// void atk_table_set_column_header (AtkTable* table, gint column, AtkObject* header);
// void atk_table_set_column_header (::AtkTable* table, gint column, ::AtkObject* header);
GI_INLINE_DECL void set_column_header (gint column, Atk::Object header) noexcept;

// void atk_table_set_row_description (AtkTable* table, gint row, const gchar* description);
// void atk_table_set_row_description (::AtkTable* table, gint row, const char* description);
GI_INLINE_DECL void set_row_description (gint row, const std::string & description) noexcept;

// void atk_table_set_row_header (AtkTable* table, gint row, AtkObject* header);
// void atk_table_set_row_header (::AtkTable* table, gint row, ::AtkObject* header);
GI_INLINE_DECL void set_row_header (gint row, Atk::Object header) noexcept;

// void atk_table_set_summary (AtkTable* table, AtkObject* accessible);
// void atk_table_set_summary (::AtkTable* table, ::AtkObject* accessible);
GI_INLINE_DECL void set_summary (Atk::Object accessible) noexcept;

// signal column-deleted
gi::signal_proxy<void(Atk::Table, gint arg1, gint arg2)> signal_column_deleted()
{ return gi::signal_proxy<void(Atk::Table, gint arg1, gint arg2)> (*this, "column-deleted"); }

// signal column-inserted
gi::signal_proxy<void(Atk::Table, gint arg1, gint arg2)> signal_column_inserted()
{ return gi::signal_proxy<void(Atk::Table, gint arg1, gint arg2)> (*this, "column-inserted"); }

// signal column-reordered
gi::signal_proxy<void(Atk::Table)> signal_column_reordered()
{ return gi::signal_proxy<void(Atk::Table)> (*this, "column-reordered"); }

// signal model-changed
gi::signal_proxy<void(Atk::Table)> signal_model_changed()
{ return gi::signal_proxy<void(Atk::Table)> (*this, "model-changed"); }

// signal row-deleted
gi::signal_proxy<void(Atk::Table, gint arg1, gint arg2)> signal_row_deleted()
{ return gi::signal_proxy<void(Atk::Table, gint arg1, gint arg2)> (*this, "row-deleted"); }

// signal row-inserted
gi::signal_proxy<void(Atk::Table, gint arg1, gint arg2)> signal_row_inserted()
{ return gi::signal_proxy<void(Atk::Table, gint arg1, gint arg2)> (*this, "row-inserted"); }

// signal row-reordered
gi::signal_proxy<void(Atk::Table)> signal_row_reordered()
{ return gi::signal_proxy<void(Atk::Table)> (*this, "row-reordered"); }

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/table_extra_def.hpp>)
#include <atk/table_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/table_extra.hpp>)
#include <atk/table_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class Table : public GI_ATK_TABLE_BASE
{ typedef GI_ATK_TABLE_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkTable>
{ typedef Atk::Table type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class TableIfaceDef
{
typedef TableIfaceDef self;
public:
typedef Atk::Table instance_type;
typedef ::AtkTableIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Table::add_column_selection (AtkTable* table, gint column);
// gboolean Table::add_column_selection (::AtkTable* table, gint column);
virtual bool add_column_selection_ (gint column) noexcept = 0;

// gboolean Table::add_row_selection (AtkTable* table, gint row);
// gboolean Table::add_row_selection (::AtkTable* table, gint row);
virtual bool add_row_selection_ (gint row) noexcept = 0;

// void Table::column_deleted (AtkTable* table, gint column, gint num_deleted);
// void Table::column_deleted (::AtkTable* table, gint column, gint num_deleted);
virtual void column_deleted_ (gint column, gint num_deleted) noexcept = 0;

// void Table::column_inserted (AtkTable* table, gint column, gint num_inserted);
// void Table::column_inserted (::AtkTable* table, gint column, gint num_inserted);
virtual void column_inserted_ (gint column, gint num_inserted) noexcept = 0;

// void Table::column_reordered (AtkTable* table);
// void Table::column_reordered (::AtkTable* table);
virtual void column_reordered_ () noexcept = 0;

// AtkObject* Table::get_caption (AtkTable* table);
// ::AtkObject* Table::get_caption (::AtkTable* table);
virtual Atk::Object get_caption_ () noexcept = 0;

// gint Table::get_column_at_index (AtkTable* table, gint index_);
// gint Table::get_column_at_index (::AtkTable* table, gint index_);
// IGNORE; deprecated

// const gchar* Table::get_column_description (AtkTable* table, gint column);
// const char* Table::get_column_description (::AtkTable* table, gint column);
// SKIP; invalid callback return transfer none

// gint Table::get_column_extent_at (AtkTable* table, gint row, gint column);
// gint Table::get_column_extent_at (::AtkTable* table, gint row, gint column);
virtual gint get_column_extent_at_ (gint row, gint column) noexcept = 0;

// AtkObject* Table::get_column_header (AtkTable* table, gint column);
// ::AtkObject* Table::get_column_header (::AtkTable* table, gint column);
virtual Atk::Object get_column_header_ (gint column) noexcept = 0;

// gint Table::get_index_at (AtkTable* table, gint row, gint column);
// gint Table::get_index_at (::AtkTable* table, gint row, gint column);
// IGNORE; deprecated

// gint Table::get_n_columns (AtkTable* table);
// gint Table::get_n_columns (::AtkTable* table);
virtual gint get_n_columns_ () noexcept = 0;

// gint Table::get_n_rows (AtkTable* table);
// gint Table::get_n_rows (::AtkTable* table);
virtual gint get_n_rows_ () noexcept = 0;

// gint Table::get_row_at_index (AtkTable* table, gint index_);
// gint Table::get_row_at_index (::AtkTable* table, gint index_);
// IGNORE; deprecated

// const gchar* Table::get_row_description (AtkTable* table, gint row);
// const char* Table::get_row_description (::AtkTable* table, gint row);
// SKIP; invalid callback return transfer none

// gint Table::get_row_extent_at (AtkTable* table, gint row, gint column);
// gint Table::get_row_extent_at (::AtkTable* table, gint row, gint column);
virtual gint get_row_extent_at_ (gint row, gint column) noexcept = 0;

// AtkObject* Table::get_row_header (AtkTable* table, gint row);
// ::AtkObject* Table::get_row_header (::AtkTable* table, gint row);
virtual Atk::Object get_row_header_ (gint row) noexcept = 0;

// gint Table::get_selected_columns (AtkTable* table, gint** selected);
// gint Table::get_selected_columns (::AtkTable* table, gint selected);
// SKIP; inconsistent in selected pointer depth (2 vs 0)

// gint Table::get_selected_rows (AtkTable* table, gint** selected);
// gint Table::get_selected_rows (::AtkTable* table, gint selected);
// SKIP; inconsistent in selected pointer depth (2 vs 0)

// AtkObject* Table::get_summary (AtkTable* table);
// ::AtkObject* Table::get_summary (::AtkTable* table);
virtual Atk::Object get_summary_ () noexcept = 0;

// gboolean Table::is_column_selected (AtkTable* table, gint column);
// gboolean Table::is_column_selected (::AtkTable* table, gint column);
virtual bool is_column_selected_ (gint column) noexcept = 0;

// gboolean Table::is_row_selected (AtkTable* table, gint row);
// gboolean Table::is_row_selected (::AtkTable* table, gint row);
virtual bool is_row_selected_ (gint row) noexcept = 0;

// gboolean Table::is_selected (AtkTable* table, gint row, gint column);
// gboolean Table::is_selected (::AtkTable* table, gint row, gint column);
virtual bool is_selected_ (gint row, gint column) noexcept = 0;

// void Table::model_changed (AtkTable* table);
// void Table::model_changed (::AtkTable* table);
virtual void model_changed_ () noexcept = 0;

// AtkObject* Table::ref_at (AtkTable* table, gint row, gint column);
// ::AtkObject* Table::ref_at (::AtkTable* table, gint row, gint column);
virtual Atk::Object ref_at_ (gint row, gint column) noexcept = 0;

// gboolean Table::remove_column_selection (AtkTable* table, gint column);
// gboolean Table::remove_column_selection (::AtkTable* table, gint column);
virtual bool remove_column_selection_ (gint column) noexcept = 0;

// gboolean Table::remove_row_selection (AtkTable* table, gint row);
// gboolean Table::remove_row_selection (::AtkTable* table, gint row);
virtual bool remove_row_selection_ (gint row) noexcept = 0;

// void Table::row_deleted (AtkTable* table, gint row, gint num_deleted);
// void Table::row_deleted (::AtkTable* table, gint row, gint num_deleted);
virtual void row_deleted_ (gint row, gint num_deleted) noexcept = 0;

// void Table::row_inserted (AtkTable* table, gint row, gint num_inserted);
// void Table::row_inserted (::AtkTable* table, gint row, gint num_inserted);
virtual void row_inserted_ (gint row, gint num_inserted) noexcept = 0;

// void Table::row_reordered (AtkTable* table);
// void Table::row_reordered (::AtkTable* table);
virtual void row_reordered_ () noexcept = 0;

// void Table::set_caption (AtkTable* table, AtkObject* caption);
// void Table::set_caption (::AtkTable* table, ::AtkObject* caption);
virtual void set_caption_ (Atk::Object caption) noexcept = 0;

// void Table::set_column_description (AtkTable* table, gint column, const gchar* description);
// void Table::set_column_description (::AtkTable* table, gint column, const char* description);
virtual void set_column_description_ (gint column, const std::string & description) noexcept = 0;

// void Table::set_column_header (AtkTable* table, gint column, AtkObject* header);
// void Table::set_column_header (::AtkTable* table, gint column, ::AtkObject* header);
virtual void set_column_header_ (gint column, Atk::Object header) noexcept = 0;

// void Table::set_row_description (AtkTable* table, gint row, const gchar* description);
// void Table::set_row_description (::AtkTable* table, gint row, const char* description);
virtual void set_row_description_ (gint row, const std::string & description) noexcept = 0;

// void Table::set_row_header (AtkTable* table, gint row, AtkObject* header);
// void Table::set_row_header (::AtkTable* table, gint row, ::AtkObject* header);
virtual void set_row_header_ (gint row, Atk::Object header) noexcept = 0;

// void Table::set_summary (AtkTable* table, AtkObject* accessible);
// void Table::set_summary (::AtkTable* table, ::AtkObject* accessible);
virtual void set_summary_ (Atk::Object accessible) noexcept = 0;


};

using TableImpl = detail::InterfaceImpl<TableIfaceDef>;

class TableIfaceClassImpl: public detail::InterfaceClassImpl<TableImpl>
{
typedef TableIfaceClassImpl self;
typedef detail::InterfaceClassImpl<TableImpl> super;

protected:
using super::super;

// gboolean Table::add_column_selection (AtkTable* table, gint column);
// gboolean Table::add_column_selection (::AtkTable* table, gint column);
GI_INLINE_DECL bool add_column_selection_ (gint column) noexcept override;

// gboolean Table::add_row_selection (AtkTable* table, gint row);
// gboolean Table::add_row_selection (::AtkTable* table, gint row);
GI_INLINE_DECL bool add_row_selection_ (gint row) noexcept override;

// void Table::column_deleted (AtkTable* table, gint column, gint num_deleted);
// void Table::column_deleted (::AtkTable* table, gint column, gint num_deleted);
GI_INLINE_DECL void column_deleted_ (gint column, gint num_deleted) noexcept override;

// void Table::column_inserted (AtkTable* table, gint column, gint num_inserted);
// void Table::column_inserted (::AtkTable* table, gint column, gint num_inserted);
GI_INLINE_DECL void column_inserted_ (gint column, gint num_inserted) noexcept override;

// void Table::column_reordered (AtkTable* table);
// void Table::column_reordered (::AtkTable* table);
GI_INLINE_DECL void column_reordered_ () noexcept override;

// AtkObject* Table::get_caption (AtkTable* table);
// ::AtkObject* Table::get_caption (::AtkTable* table);
GI_INLINE_DECL Atk::Object get_caption_ () noexcept override;

// gint Table::get_column_at_index (AtkTable* table, gint index_);
// gint Table::get_column_at_index (::AtkTable* table, gint index_);
// IGNORE; deprecated

// const gchar* Table::get_column_description (AtkTable* table, gint column);
// const char* Table::get_column_description (::AtkTable* table, gint column);
// SKIP; invalid callback return transfer none

// gint Table::get_column_extent_at (AtkTable* table, gint row, gint column);
// gint Table::get_column_extent_at (::AtkTable* table, gint row, gint column);
GI_INLINE_DECL gint get_column_extent_at_ (gint row, gint column) noexcept override;

// AtkObject* Table::get_column_header (AtkTable* table, gint column);
// ::AtkObject* Table::get_column_header (::AtkTable* table, gint column);
GI_INLINE_DECL Atk::Object get_column_header_ (gint column) noexcept override;

// gint Table::get_index_at (AtkTable* table, gint row, gint column);
// gint Table::get_index_at (::AtkTable* table, gint row, gint column);
// IGNORE; deprecated

// gint Table::get_n_columns (AtkTable* table);
// gint Table::get_n_columns (::AtkTable* table);
GI_INLINE_DECL gint get_n_columns_ () noexcept override;

// gint Table::get_n_rows (AtkTable* table);
// gint Table::get_n_rows (::AtkTable* table);
GI_INLINE_DECL gint get_n_rows_ () noexcept override;

// gint Table::get_row_at_index (AtkTable* table, gint index_);
// gint Table::get_row_at_index (::AtkTable* table, gint index_);
// IGNORE; deprecated

// const gchar* Table::get_row_description (AtkTable* table, gint row);
// const char* Table::get_row_description (::AtkTable* table, gint row);
// SKIP; invalid callback return transfer none

// gint Table::get_row_extent_at (AtkTable* table, gint row, gint column);
// gint Table::get_row_extent_at (::AtkTable* table, gint row, gint column);
GI_INLINE_DECL gint get_row_extent_at_ (gint row, gint column) noexcept override;

// AtkObject* Table::get_row_header (AtkTable* table, gint row);
// ::AtkObject* Table::get_row_header (::AtkTable* table, gint row);
GI_INLINE_DECL Atk::Object get_row_header_ (gint row) noexcept override;

// gint Table::get_selected_columns (AtkTable* table, gint** selected);
// gint Table::get_selected_columns (::AtkTable* table, gint selected);
// SKIP; inconsistent in selected pointer depth (2 vs 0)

// gint Table::get_selected_rows (AtkTable* table, gint** selected);
// gint Table::get_selected_rows (::AtkTable* table, gint selected);
// SKIP; inconsistent in selected pointer depth (2 vs 0)

// AtkObject* Table::get_summary (AtkTable* table);
// ::AtkObject* Table::get_summary (::AtkTable* table);
GI_INLINE_DECL Atk::Object get_summary_ () noexcept override;

// gboolean Table::is_column_selected (AtkTable* table, gint column);
// gboolean Table::is_column_selected (::AtkTable* table, gint column);
GI_INLINE_DECL bool is_column_selected_ (gint column) noexcept override;

// gboolean Table::is_row_selected (AtkTable* table, gint row);
// gboolean Table::is_row_selected (::AtkTable* table, gint row);
GI_INLINE_DECL bool is_row_selected_ (gint row) noexcept override;

// gboolean Table::is_selected (AtkTable* table, gint row, gint column);
// gboolean Table::is_selected (::AtkTable* table, gint row, gint column);
GI_INLINE_DECL bool is_selected_ (gint row, gint column) noexcept override;

// void Table::model_changed (AtkTable* table);
// void Table::model_changed (::AtkTable* table);
GI_INLINE_DECL void model_changed_ () noexcept override;

// AtkObject* Table::ref_at (AtkTable* table, gint row, gint column);
// ::AtkObject* Table::ref_at (::AtkTable* table, gint row, gint column);
GI_INLINE_DECL Atk::Object ref_at_ (gint row, gint column) noexcept override;

// gboolean Table::remove_column_selection (AtkTable* table, gint column);
// gboolean Table::remove_column_selection (::AtkTable* table, gint column);
GI_INLINE_DECL bool remove_column_selection_ (gint column) noexcept override;

// gboolean Table::remove_row_selection (AtkTable* table, gint row);
// gboolean Table::remove_row_selection (::AtkTable* table, gint row);
GI_INLINE_DECL bool remove_row_selection_ (gint row) noexcept override;

// void Table::row_deleted (AtkTable* table, gint row, gint num_deleted);
// void Table::row_deleted (::AtkTable* table, gint row, gint num_deleted);
GI_INLINE_DECL void row_deleted_ (gint row, gint num_deleted) noexcept override;

// void Table::row_inserted (AtkTable* table, gint row, gint num_inserted);
// void Table::row_inserted (::AtkTable* table, gint row, gint num_inserted);
GI_INLINE_DECL void row_inserted_ (gint row, gint num_inserted) noexcept override;

// void Table::row_reordered (AtkTable* table);
// void Table::row_reordered (::AtkTable* table);
GI_INLINE_DECL void row_reordered_ () noexcept override;

// void Table::set_caption (AtkTable* table, AtkObject* caption);
// void Table::set_caption (::AtkTable* table, ::AtkObject* caption);
GI_INLINE_DECL void set_caption_ (Atk::Object caption) noexcept override;

// void Table::set_column_description (AtkTable* table, gint column, const gchar* description);
// void Table::set_column_description (::AtkTable* table, gint column, const char* description);
GI_INLINE_DECL void set_column_description_ (gint column, const std::string & description) noexcept override;

// void Table::set_column_header (AtkTable* table, gint column, AtkObject* header);
// void Table::set_column_header (::AtkTable* table, gint column, ::AtkObject* header);
GI_INLINE_DECL void set_column_header_ (gint column, Atk::Object header) noexcept override;

// void Table::set_row_description (AtkTable* table, gint row, const gchar* description);
// void Table::set_row_description (::AtkTable* table, gint row, const char* description);
GI_INLINE_DECL void set_row_description_ (gint row, const std::string & description) noexcept override;

// void Table::set_row_header (AtkTable* table, gint row, AtkObject* header);
// void Table::set_row_header (::AtkTable* table, gint row, ::AtkObject* header);
GI_INLINE_DECL void set_row_header_ (gint row, Atk::Object header) noexcept override;

// void Table::set_summary (AtkTable* table, AtkObject* accessible);
// void Table::set_summary (::AtkTable* table, ::AtkObject* accessible);
GI_INLINE_DECL void set_summary_ (Atk::Object accessible) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
