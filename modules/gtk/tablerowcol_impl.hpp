// AUTO-GENERATED

#ifndef _GI_GTK_TABLEROWCOL_IMPL_HPP_
#define _GI_GTK_TABLEROWCOL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

static guint16 _field_requisition_get (const ::GtkTableRowCol* obj) { return (guint16) obj->requisition; }
// guint16 TableRowCol::requisition (const ::GtkTableRowCol* obj);
// guint16 TableRowCol::requisition (const ::GtkTableRowCol* obj);
guint16 base::TableRowColBase::requisition_ () const noexcept
{
  typedef guint16 (*call_wrap_t) (const ::GtkTableRowCol* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_requisition_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTableRowCol*) (gobj_()));
  return _temp_ret;
}

static void _field_requisition_set (::GtkTableRowCol* obj, guint16 _value) { obj->requisition = (decltype(obj->requisition)) _value; }
//  TableRowCol::requisition (::GtkTableRowCol* obj, guint16 _value);
// void TableRowCol::requisition (::GtkTableRowCol* obj, guint16 _value);
void base::TableRowColBase::requisition_ (guint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTableRowCol* obj, guint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_requisition_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTableRowCol*) (gobj_()), (guint16) (_value_to_c));
}

static guint16 _field_allocation_get (const ::GtkTableRowCol* obj) { return (guint16) obj->allocation; }
// guint16 TableRowCol::allocation (const ::GtkTableRowCol* obj);
// guint16 TableRowCol::allocation (const ::GtkTableRowCol* obj);
guint16 base::TableRowColBase::allocation_ () const noexcept
{
  typedef guint16 (*call_wrap_t) (const ::GtkTableRowCol* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_allocation_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTableRowCol*) (gobj_()));
  return _temp_ret;
}

static void _field_allocation_set (::GtkTableRowCol* obj, guint16 _value) { obj->allocation = (decltype(obj->allocation)) _value; }
//  TableRowCol::allocation (::GtkTableRowCol* obj, guint16 _value);
// void TableRowCol::allocation (::GtkTableRowCol* obj, guint16 _value);
void base::TableRowColBase::allocation_ (guint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTableRowCol* obj, guint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_allocation_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTableRowCol*) (gobj_()), (guint16) (_value_to_c));
}

static guint16 _field_spacing_get (const ::GtkTableRowCol* obj) { return (guint16) obj->spacing; }
// guint16 TableRowCol::spacing (const ::GtkTableRowCol* obj);
// guint16 TableRowCol::spacing (const ::GtkTableRowCol* obj);
guint16 base::TableRowColBase::spacing_ () const noexcept
{
  typedef guint16 (*call_wrap_t) (const ::GtkTableRowCol* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_spacing_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTableRowCol*) (gobj_()));
  return _temp_ret;
}

static void _field_spacing_set (::GtkTableRowCol* obj, guint16 _value) { obj->spacing = (decltype(obj->spacing)) _value; }
//  TableRowCol::spacing (::GtkTableRowCol* obj, guint16 _value);
// void TableRowCol::spacing (::GtkTableRowCol* obj, guint16 _value);
void base::TableRowColBase::spacing_ (guint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTableRowCol* obj, guint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_spacing_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTableRowCol*) (gobj_()), (guint16) (_value_to_c));
}

static guint _field_need_expand_get (const ::GtkTableRowCol* obj) { return (guint) obj->need_expand; }
// guint TableRowCol::need_expand (const ::GtkTableRowCol* obj);
// guint TableRowCol::need_expand (const ::GtkTableRowCol* obj);
guint base::TableRowColBase::need_expand_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkTableRowCol* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_need_expand_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTableRowCol*) (gobj_()));
  return _temp_ret;
}

static void _field_need_expand_set (::GtkTableRowCol* obj, guint _value) { obj->need_expand = (decltype(obj->need_expand)) _value; }
//  TableRowCol::need_expand (::GtkTableRowCol* obj, guint _value);
// void TableRowCol::need_expand (::GtkTableRowCol* obj, guint _value);
void base::TableRowColBase::need_expand_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTableRowCol* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_need_expand_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTableRowCol*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_need_shrink_get (const ::GtkTableRowCol* obj) { return (guint) obj->need_shrink; }
// guint TableRowCol::need_shrink (const ::GtkTableRowCol* obj);
// guint TableRowCol::need_shrink (const ::GtkTableRowCol* obj);
guint base::TableRowColBase::need_shrink_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkTableRowCol* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_need_shrink_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTableRowCol*) (gobj_()));
  return _temp_ret;
}

static void _field_need_shrink_set (::GtkTableRowCol* obj, guint _value) { obj->need_shrink = (decltype(obj->need_shrink)) _value; }
//  TableRowCol::need_shrink (::GtkTableRowCol* obj, guint _value);
// void TableRowCol::need_shrink (::GtkTableRowCol* obj, guint _value);
void base::TableRowColBase::need_shrink_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTableRowCol* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_need_shrink_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTableRowCol*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_expand_get (const ::GtkTableRowCol* obj) { return (guint) obj->expand; }
// guint TableRowCol::expand (const ::GtkTableRowCol* obj);
// guint TableRowCol::expand (const ::GtkTableRowCol* obj);
guint base::TableRowColBase::expand_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkTableRowCol* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_expand_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTableRowCol*) (gobj_()));
  return _temp_ret;
}

static void _field_expand_set (::GtkTableRowCol* obj, guint _value) { obj->expand = (decltype(obj->expand)) _value; }
//  TableRowCol::expand (::GtkTableRowCol* obj, guint _value);
// void TableRowCol::expand (::GtkTableRowCol* obj, guint _value);
void base::TableRowColBase::expand_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTableRowCol* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_expand_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTableRowCol*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_shrink_get (const ::GtkTableRowCol* obj) { return (guint) obj->shrink; }
// guint TableRowCol::shrink (const ::GtkTableRowCol* obj);
// guint TableRowCol::shrink (const ::GtkTableRowCol* obj);
guint base::TableRowColBase::shrink_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkTableRowCol* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_shrink_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTableRowCol*) (gobj_()));
  return _temp_ret;
}

static void _field_shrink_set (::GtkTableRowCol* obj, guint _value) { obj->shrink = (decltype(obj->shrink)) _value; }
//  TableRowCol::shrink (::GtkTableRowCol* obj, guint _value);
// void TableRowCol::shrink (::GtkTableRowCol* obj, guint _value);
void base::TableRowColBase::shrink_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTableRowCol* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_shrink_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTableRowCol*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_empty_get (const ::GtkTableRowCol* obj) { return (guint) obj->empty; }
// guint TableRowCol::empty (const ::GtkTableRowCol* obj);
// guint TableRowCol::empty (const ::GtkTableRowCol* obj);
guint base::TableRowColBase::empty_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkTableRowCol* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_empty_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTableRowCol*) (gobj_()));
  return _temp_ret;
}

static void _field_empty_set (::GtkTableRowCol* obj, guint _value) { obj->empty = (decltype(obj->empty)) _value; }
//  TableRowCol::empty (::GtkTableRowCol* obj, guint _value);
// void TableRowCol::empty (::GtkTableRowCol* obj, guint _value);
void base::TableRowColBase::empty_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTableRowCol* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_empty_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTableRowCol*) (gobj_()), (guint) (_value_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/tablerowcol_extra_def_impl.hpp>)
#include <gtk/tablerowcol_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/tablerowcol_extra_impl.hpp>)
#include <gtk/tablerowcol_extra_impl.hpp>
#endif
#endif

#endif
