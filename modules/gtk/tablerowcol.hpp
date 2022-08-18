// AUTO-GENERATED

#ifndef _GI_GTK_TABLEROWCOL_HPP_
#define _GI_GTK_TABLEROWCOL_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class TableRowCol;

namespace base {


#define GI_GTK_TABLEROWCOL_BASE base::TableRowColBase
class TableRowColBase : public gi::detail::CBoxedWrapper<TableRowColBase, ::GtkTableRowCol>
{
typedef gi::detail::CBoxedWrapper<TableRowColBase, ::GtkTableRowCol> super_type;
public:

TableRowColBase (std::nullptr_t = nullptr) : super_type() {}

// guint16 TableRowCol::requisition (const ::GtkTableRowCol* obj);
// guint16 TableRowCol::requisition (const ::GtkTableRowCol* obj);
GI_INLINE_DECL guint16 requisition_ () const noexcept;

//  TableRowCol::requisition (::GtkTableRowCol* obj, guint16 _value);
// void TableRowCol::requisition (::GtkTableRowCol* obj, guint16 _value);
GI_INLINE_DECL void requisition_ (guint16 _value) noexcept;

// guint16 TableRowCol::allocation (const ::GtkTableRowCol* obj);
// guint16 TableRowCol::allocation (const ::GtkTableRowCol* obj);
GI_INLINE_DECL guint16 allocation_ () const noexcept;

//  TableRowCol::allocation (::GtkTableRowCol* obj, guint16 _value);
// void TableRowCol::allocation (::GtkTableRowCol* obj, guint16 _value);
GI_INLINE_DECL void allocation_ (guint16 _value) noexcept;

// guint16 TableRowCol::spacing (const ::GtkTableRowCol* obj);
// guint16 TableRowCol::spacing (const ::GtkTableRowCol* obj);
GI_INLINE_DECL guint16 spacing_ () const noexcept;

//  TableRowCol::spacing (::GtkTableRowCol* obj, guint16 _value);
// void TableRowCol::spacing (::GtkTableRowCol* obj, guint16 _value);
GI_INLINE_DECL void spacing_ (guint16 _value) noexcept;

// guint TableRowCol::need_expand (const ::GtkTableRowCol* obj);
// guint TableRowCol::need_expand (const ::GtkTableRowCol* obj);
GI_INLINE_DECL guint need_expand_ () const noexcept;

//  TableRowCol::need_expand (::GtkTableRowCol* obj, guint _value);
// void TableRowCol::need_expand (::GtkTableRowCol* obj, guint _value);
GI_INLINE_DECL void need_expand_ (guint _value) noexcept;

// guint TableRowCol::need_shrink (const ::GtkTableRowCol* obj);
// guint TableRowCol::need_shrink (const ::GtkTableRowCol* obj);
GI_INLINE_DECL guint need_shrink_ () const noexcept;

//  TableRowCol::need_shrink (::GtkTableRowCol* obj, guint _value);
// void TableRowCol::need_shrink (::GtkTableRowCol* obj, guint _value);
GI_INLINE_DECL void need_shrink_ (guint _value) noexcept;

// guint TableRowCol::expand (const ::GtkTableRowCol* obj);
// guint TableRowCol::expand (const ::GtkTableRowCol* obj);
GI_INLINE_DECL guint expand_ () const noexcept;

//  TableRowCol::expand (::GtkTableRowCol* obj, guint _value);
// void TableRowCol::expand (::GtkTableRowCol* obj, guint _value);
GI_INLINE_DECL void expand_ (guint _value) noexcept;

// guint TableRowCol::shrink (const ::GtkTableRowCol* obj);
// guint TableRowCol::shrink (const ::GtkTableRowCol* obj);
GI_INLINE_DECL guint shrink_ () const noexcept;

//  TableRowCol::shrink (::GtkTableRowCol* obj, guint _value);
// void TableRowCol::shrink (::GtkTableRowCol* obj, guint _value);
GI_INLINE_DECL void shrink_ (guint _value) noexcept;

// guint TableRowCol::empty (const ::GtkTableRowCol* obj);
// guint TableRowCol::empty (const ::GtkTableRowCol* obj);
GI_INLINE_DECL guint empty_ () const noexcept;

//  TableRowCol::empty (::GtkTableRowCol* obj, guint _value);
// void TableRowCol::empty (::GtkTableRowCol* obj, guint _value);
GI_INLINE_DECL void empty_ (guint _value) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/tablerowcol_extra_def.hpp>)
#include <gtk/tablerowcol_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/tablerowcol_extra.hpp>)
#include <gtk/tablerowcol_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TableRowCol : public GI_GTK_TABLEROWCOL_BASE
{ typedef GI_GTK_TABLEROWCOL_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTableRowCol>
{ typedef Gtk::TableRowCol type; }; 

} // namespace repository

} // namespace gi

#endif
