// AUTO-GENERATED

#ifndef _GI_GTK_TABLECHILD_IMPL_HPP_
#define _GI_GTK_TABLECHILD_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

static ::GtkWidget* _field_widget_get (const ::GtkTableChild* obj) { return (::GtkWidget*) obj->widget; }
// ::GtkWidget* TableChild::widget (const ::GtkTableChild* obj);
// ::GtkWidget* TableChild::widget (const ::GtkTableChild* obj);
Gtk::Widget base::TableChildBase::widget_ () const noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (const ::GtkTableChild* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_widget_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTableChild*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static guint16 _field_left_attach_get (const ::GtkTableChild* obj) { return (guint16) obj->left_attach; }
// guint16 TableChild::left_attach (const ::GtkTableChild* obj);
// guint16 TableChild::left_attach (const ::GtkTableChild* obj);
guint16 base::TableChildBase::left_attach_ () const noexcept
{
  typedef guint16 (*call_wrap_t) (const ::GtkTableChild* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_left_attach_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTableChild*) (gobj_()));
  return _temp_ret;
}

static void _field_left_attach_set (::GtkTableChild* obj, guint16 _value) { obj->left_attach = (decltype(obj->left_attach)) _value; }
//  TableChild::left_attach (::GtkTableChild* obj, guint16 _value);
// void TableChild::left_attach (::GtkTableChild* obj, guint16 _value);
void base::TableChildBase::left_attach_ (guint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTableChild* obj, guint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_left_attach_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTableChild*) (gobj_()), (guint16) (_value_to_c));
}

static guint16 _field_right_attach_get (const ::GtkTableChild* obj) { return (guint16) obj->right_attach; }
// guint16 TableChild::right_attach (const ::GtkTableChild* obj);
// guint16 TableChild::right_attach (const ::GtkTableChild* obj);
guint16 base::TableChildBase::right_attach_ () const noexcept
{
  typedef guint16 (*call_wrap_t) (const ::GtkTableChild* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_right_attach_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTableChild*) (gobj_()));
  return _temp_ret;
}

static void _field_right_attach_set (::GtkTableChild* obj, guint16 _value) { obj->right_attach = (decltype(obj->right_attach)) _value; }
//  TableChild::right_attach (::GtkTableChild* obj, guint16 _value);
// void TableChild::right_attach (::GtkTableChild* obj, guint16 _value);
void base::TableChildBase::right_attach_ (guint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTableChild* obj, guint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_right_attach_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTableChild*) (gobj_()), (guint16) (_value_to_c));
}

static guint16 _field_top_attach_get (const ::GtkTableChild* obj) { return (guint16) obj->top_attach; }
// guint16 TableChild::top_attach (const ::GtkTableChild* obj);
// guint16 TableChild::top_attach (const ::GtkTableChild* obj);
guint16 base::TableChildBase::top_attach_ () const noexcept
{
  typedef guint16 (*call_wrap_t) (const ::GtkTableChild* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_top_attach_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTableChild*) (gobj_()));
  return _temp_ret;
}

static void _field_top_attach_set (::GtkTableChild* obj, guint16 _value) { obj->top_attach = (decltype(obj->top_attach)) _value; }
//  TableChild::top_attach (::GtkTableChild* obj, guint16 _value);
// void TableChild::top_attach (::GtkTableChild* obj, guint16 _value);
void base::TableChildBase::top_attach_ (guint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTableChild* obj, guint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_top_attach_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTableChild*) (gobj_()), (guint16) (_value_to_c));
}

static guint16 _field_bottom_attach_get (const ::GtkTableChild* obj) { return (guint16) obj->bottom_attach; }
// guint16 TableChild::bottom_attach (const ::GtkTableChild* obj);
// guint16 TableChild::bottom_attach (const ::GtkTableChild* obj);
guint16 base::TableChildBase::bottom_attach_ () const noexcept
{
  typedef guint16 (*call_wrap_t) (const ::GtkTableChild* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_bottom_attach_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTableChild*) (gobj_()));
  return _temp_ret;
}

static void _field_bottom_attach_set (::GtkTableChild* obj, guint16 _value) { obj->bottom_attach = (decltype(obj->bottom_attach)) _value; }
//  TableChild::bottom_attach (::GtkTableChild* obj, guint16 _value);
// void TableChild::bottom_attach (::GtkTableChild* obj, guint16 _value);
void base::TableChildBase::bottom_attach_ (guint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTableChild* obj, guint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_bottom_attach_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTableChild*) (gobj_()), (guint16) (_value_to_c));
}

static guint16 _field_xpadding_get (const ::GtkTableChild* obj) { return (guint16) obj->xpadding; }
// guint16 TableChild::xpadding (const ::GtkTableChild* obj);
// guint16 TableChild::xpadding (const ::GtkTableChild* obj);
guint16 base::TableChildBase::xpadding_ () const noexcept
{
  typedef guint16 (*call_wrap_t) (const ::GtkTableChild* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_xpadding_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTableChild*) (gobj_()));
  return _temp_ret;
}

static void _field_xpadding_set (::GtkTableChild* obj, guint16 _value) { obj->xpadding = (decltype(obj->xpadding)) _value; }
//  TableChild::xpadding (::GtkTableChild* obj, guint16 _value);
// void TableChild::xpadding (::GtkTableChild* obj, guint16 _value);
void base::TableChildBase::xpadding_ (guint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTableChild* obj, guint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_xpadding_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTableChild*) (gobj_()), (guint16) (_value_to_c));
}

static guint16 _field_ypadding_get (const ::GtkTableChild* obj) { return (guint16) obj->ypadding; }
// guint16 TableChild::ypadding (const ::GtkTableChild* obj);
// guint16 TableChild::ypadding (const ::GtkTableChild* obj);
guint16 base::TableChildBase::ypadding_ () const noexcept
{
  typedef guint16 (*call_wrap_t) (const ::GtkTableChild* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ypadding_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTableChild*) (gobj_()));
  return _temp_ret;
}

static void _field_ypadding_set (::GtkTableChild* obj, guint16 _value) { obj->ypadding = (decltype(obj->ypadding)) _value; }
//  TableChild::ypadding (::GtkTableChild* obj, guint16 _value);
// void TableChild::ypadding (::GtkTableChild* obj, guint16 _value);
void base::TableChildBase::ypadding_ (guint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTableChild* obj, guint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ypadding_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTableChild*) (gobj_()), (guint16) (_value_to_c));
}

static guint _field_xexpand_get (const ::GtkTableChild* obj) { return (guint) obj->xexpand; }
// guint TableChild::xexpand (const ::GtkTableChild* obj);
// guint TableChild::xexpand (const ::GtkTableChild* obj);
guint base::TableChildBase::xexpand_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkTableChild* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_xexpand_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTableChild*) (gobj_()));
  return _temp_ret;
}

static void _field_xexpand_set (::GtkTableChild* obj, guint _value) { obj->xexpand = (decltype(obj->xexpand)) _value; }
//  TableChild::xexpand (::GtkTableChild* obj, guint _value);
// void TableChild::xexpand (::GtkTableChild* obj, guint _value);
void base::TableChildBase::xexpand_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTableChild* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_xexpand_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTableChild*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_yexpand_get (const ::GtkTableChild* obj) { return (guint) obj->yexpand; }
// guint TableChild::yexpand (const ::GtkTableChild* obj);
// guint TableChild::yexpand (const ::GtkTableChild* obj);
guint base::TableChildBase::yexpand_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkTableChild* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_yexpand_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTableChild*) (gobj_()));
  return _temp_ret;
}

static void _field_yexpand_set (::GtkTableChild* obj, guint _value) { obj->yexpand = (decltype(obj->yexpand)) _value; }
//  TableChild::yexpand (::GtkTableChild* obj, guint _value);
// void TableChild::yexpand (::GtkTableChild* obj, guint _value);
void base::TableChildBase::yexpand_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTableChild* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_yexpand_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTableChild*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_xshrink_get (const ::GtkTableChild* obj) { return (guint) obj->xshrink; }
// guint TableChild::xshrink (const ::GtkTableChild* obj);
// guint TableChild::xshrink (const ::GtkTableChild* obj);
guint base::TableChildBase::xshrink_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkTableChild* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_xshrink_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTableChild*) (gobj_()));
  return _temp_ret;
}

static void _field_xshrink_set (::GtkTableChild* obj, guint _value) { obj->xshrink = (decltype(obj->xshrink)) _value; }
//  TableChild::xshrink (::GtkTableChild* obj, guint _value);
// void TableChild::xshrink (::GtkTableChild* obj, guint _value);
void base::TableChildBase::xshrink_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTableChild* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_xshrink_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTableChild*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_yshrink_get (const ::GtkTableChild* obj) { return (guint) obj->yshrink; }
// guint TableChild::yshrink (const ::GtkTableChild* obj);
// guint TableChild::yshrink (const ::GtkTableChild* obj);
guint base::TableChildBase::yshrink_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkTableChild* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_yshrink_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTableChild*) (gobj_()));
  return _temp_ret;
}

static void _field_yshrink_set (::GtkTableChild* obj, guint _value) { obj->yshrink = (decltype(obj->yshrink)) _value; }
//  TableChild::yshrink (::GtkTableChild* obj, guint _value);
// void TableChild::yshrink (::GtkTableChild* obj, guint _value);
void base::TableChildBase::yshrink_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTableChild* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_yshrink_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTableChild*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_xfill_get (const ::GtkTableChild* obj) { return (guint) obj->xfill; }
// guint TableChild::xfill (const ::GtkTableChild* obj);
// guint TableChild::xfill (const ::GtkTableChild* obj);
guint base::TableChildBase::xfill_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkTableChild* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_xfill_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTableChild*) (gobj_()));
  return _temp_ret;
}

static void _field_xfill_set (::GtkTableChild* obj, guint _value) { obj->xfill = (decltype(obj->xfill)) _value; }
//  TableChild::xfill (::GtkTableChild* obj, guint _value);
// void TableChild::xfill (::GtkTableChild* obj, guint _value);
void base::TableChildBase::xfill_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTableChild* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_xfill_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTableChild*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_yfill_get (const ::GtkTableChild* obj) { return (guint) obj->yfill; }
// guint TableChild::yfill (const ::GtkTableChild* obj);
// guint TableChild::yfill (const ::GtkTableChild* obj);
guint base::TableChildBase::yfill_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkTableChild* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_yfill_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTableChild*) (gobj_()));
  return _temp_ret;
}

static void _field_yfill_set (::GtkTableChild* obj, guint _value) { obj->yfill = (decltype(obj->yfill)) _value; }
//  TableChild::yfill (::GtkTableChild* obj, guint _value);
// void TableChild::yfill (::GtkTableChild* obj, guint _value);
void base::TableChildBase::yfill_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTableChild* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_yfill_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTableChild*) (gobj_()), (guint) (_value_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/tablechild_extra_def_impl.hpp>)
#include <gtk/tablechild_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/tablechild_extra_impl.hpp>)
#include <gtk/tablechild_extra_impl.hpp>
#endif
#endif

#endif
