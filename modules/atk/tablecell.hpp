// AUTO-GENERATED

#ifndef _GI_ATK_TABLECELL_HPP_
#define _GI_ATK_TABLECELL_HPP_


namespace gi {

namespace repository {

namespace Atk {

class Object;

class TableCell;

namespace base {


#define GI_ATK_TABLECELL_BASE base::TableCellBase
class TableCellBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::AtkTableCell BaseObjectType;

TableCellBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_table_cell_get_type(); } 

// GPtrArray* atk_table_cell_get_column_header_cells (AtkTableCell* cell);
//  atk_table_cell_get_column_header_cells (::AtkTableCell* cell);
// SKIP;  type  not supported

// gint atk_table_cell_get_column_span (AtkTableCell* cell);
// gint atk_table_cell_get_column_span (::AtkTableCell* cell);
GI_INLINE_DECL gint get_column_span () noexcept;

// gboolean atk_table_cell_get_position (AtkTableCell* cell, gint* row, gint* column);
// gboolean atk_table_cell_get_position (::AtkTableCell* cell, gint* row, gint* column);
GI_INLINE_DECL bool get_position (gint & row, gint & column) noexcept;
GI_INLINE_DECL std::tuple<bool, gint, gint> get_position () noexcept;

// gboolean atk_table_cell_get_row_column_span (AtkTableCell* cell, gint* row, gint* column, gint* row_span, gint* column_span);
// gboolean atk_table_cell_get_row_column_span (::AtkTableCell* cell, gint* row, gint* column, gint* row_span, gint* column_span);
GI_INLINE_DECL bool get_row_column_span (gint & row, gint & column, gint & row_span, gint & column_span) noexcept;
GI_INLINE_DECL std::tuple<bool, gint, gint, gint, gint> get_row_column_span () noexcept;

// GPtrArray* atk_table_cell_get_row_header_cells (AtkTableCell* cell);
//  atk_table_cell_get_row_header_cells (::AtkTableCell* cell);
// SKIP;  type  not supported

// gint atk_table_cell_get_row_span (AtkTableCell* cell);
// gint atk_table_cell_get_row_span (::AtkTableCell* cell);
GI_INLINE_DECL gint get_row_span () noexcept;

// AtkObject* atk_table_cell_get_table (AtkTableCell* cell);
// ::AtkObject* atk_table_cell_get_table (::AtkTableCell* cell);
GI_INLINE_DECL Atk::Object get_table () noexcept;

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/tablecell_extra_def.hpp>)
#include <atk/tablecell_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/tablecell_extra.hpp>)
#include <atk/tablecell_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class TableCell : public GI_ATK_TABLECELL_BASE
{ typedef GI_ATK_TABLECELL_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkTableCell>
{ typedef Atk::TableCell type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class TableCellIfaceDef
{
typedef TableCellIfaceDef self;
public:
typedef Atk::TableCell instance_type;
typedef ::AtkTableCellIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GPtrArray* TableCell::get_column_header_cells (AtkTableCell* cell);
//  TableCell::get_column_header_cells (::AtkTableCell* cell);
// SKIP;  type  not supported

// gint TableCell::get_column_span (AtkTableCell* cell);
// gint TableCell::get_column_span (::AtkTableCell* cell);
virtual gint get_column_span_ () noexcept = 0;

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
virtual gint get_row_span_ () noexcept = 0;

// AtkObject* TableCell::get_table (AtkTableCell* cell);
// ::AtkObject* TableCell::get_table (::AtkTableCell* cell);
virtual Atk::Object get_table_ () noexcept = 0;


};

using TableCellImpl = detail::InterfaceImpl<TableCellIfaceDef>;

class TableCellIfaceClassImpl: public detail::InterfaceClassImpl<TableCellImpl>
{
typedef TableCellIfaceClassImpl self;
typedef detail::InterfaceClassImpl<TableCellImpl> super;

protected:
using super::super;

// GPtrArray* TableCell::get_column_header_cells (AtkTableCell* cell);
//  TableCell::get_column_header_cells (::AtkTableCell* cell);
// SKIP;  type  not supported

// gint TableCell::get_column_span (AtkTableCell* cell);
// gint TableCell::get_column_span (::AtkTableCell* cell);
GI_INLINE_DECL gint get_column_span_ () noexcept override;

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
GI_INLINE_DECL gint get_row_span_ () noexcept override;

// AtkObject* TableCell::get_table (AtkTableCell* cell);
// ::AtkObject* TableCell::get_table (::AtkTableCell* cell);
GI_INLINE_DECL Atk::Object get_table_ () noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
