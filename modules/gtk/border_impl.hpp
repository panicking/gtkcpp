// AUTO-GENERATED

#ifndef _GI_GTK_BORDER_IMPL_HPP_
#define _GI_GTK_BORDER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

static gint16 _field_left_get (const ::GtkBorder* obj) { return (gint16) obj->left; }
// gint16 Border::left (const ::GtkBorder* obj);
// gint16 Border::left (const ::GtkBorder* obj);
gint16 base::BorderBase::left_ () const noexcept
{
  typedef gint16 (*call_wrap_t) (const ::GtkBorder* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_left_get;
  auto _temp_ret = call_wrap_v ((const ::GtkBorder*) (gobj_()));
  return _temp_ret;
}

static void _field_left_set (::GtkBorder* obj, gint16 _value) { obj->left = (decltype(obj->left)) _value; }
//  Border::left (::GtkBorder* obj, gint16 _value);
// void Border::left (::GtkBorder* obj, gint16 _value);
void base::BorderBase::left_ (gint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkBorder* obj, gint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_left_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkBorder*) (gobj_()), (gint16) (_value_to_c));
}

static gint16 _field_right_get (const ::GtkBorder* obj) { return (gint16) obj->right; }
// gint16 Border::right (const ::GtkBorder* obj);
// gint16 Border::right (const ::GtkBorder* obj);
gint16 base::BorderBase::right_ () const noexcept
{
  typedef gint16 (*call_wrap_t) (const ::GtkBorder* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_right_get;
  auto _temp_ret = call_wrap_v ((const ::GtkBorder*) (gobj_()));
  return _temp_ret;
}

static void _field_right_set (::GtkBorder* obj, gint16 _value) { obj->right = (decltype(obj->right)) _value; }
//  Border::right (::GtkBorder* obj, gint16 _value);
// void Border::right (::GtkBorder* obj, gint16 _value);
void base::BorderBase::right_ (gint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkBorder* obj, gint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_right_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkBorder*) (gobj_()), (gint16) (_value_to_c));
}

static gint16 _field_top_get (const ::GtkBorder* obj) { return (gint16) obj->top; }
// gint16 Border::top (const ::GtkBorder* obj);
// gint16 Border::top (const ::GtkBorder* obj);
gint16 base::BorderBase::top_ () const noexcept
{
  typedef gint16 (*call_wrap_t) (const ::GtkBorder* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_top_get;
  auto _temp_ret = call_wrap_v ((const ::GtkBorder*) (gobj_()));
  return _temp_ret;
}

static void _field_top_set (::GtkBorder* obj, gint16 _value) { obj->top = (decltype(obj->top)) _value; }
//  Border::top (::GtkBorder* obj, gint16 _value);
// void Border::top (::GtkBorder* obj, gint16 _value);
void base::BorderBase::top_ (gint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkBorder* obj, gint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_top_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkBorder*) (gobj_()), (gint16) (_value_to_c));
}

static gint16 _field_bottom_get (const ::GtkBorder* obj) { return (gint16) obj->bottom; }
// gint16 Border::bottom (const ::GtkBorder* obj);
// gint16 Border::bottom (const ::GtkBorder* obj);
gint16 base::BorderBase::bottom_ () const noexcept
{
  typedef gint16 (*call_wrap_t) (const ::GtkBorder* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_bottom_get;
  auto _temp_ret = call_wrap_v ((const ::GtkBorder*) (gobj_()));
  return _temp_ret;
}

static void _field_bottom_set (::GtkBorder* obj, gint16 _value) { obj->bottom = (decltype(obj->bottom)) _value; }
//  Border::bottom (::GtkBorder* obj, gint16 _value);
// void Border::bottom (::GtkBorder* obj, gint16 _value);
void base::BorderBase::bottom_ (gint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkBorder* obj, gint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_bottom_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkBorder*) (gobj_()), (gint16) (_value_to_c));
}

// GtkBorder* gtk_border_new ();
// ::GtkBorder* gtk_border_new ();
Gtk::Border base::BorderBase::new_ () noexcept
{
  typedef ::GtkBorder* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_border_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkBorder* gtk_border_copy (const GtkBorder* border_);
// ::GtkBorder* gtk_border_copy (const ::GtkBorder* border_);
Gtk::Border base::BorderBase::copy () const noexcept
{
  typedef ::GtkBorder* (*call_wrap_t) (const ::GtkBorder* border_);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_border_copy;
  auto _temp_ret = call_wrap_v ((const ::GtkBorder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_border_free (GtkBorder* border_);
// void gtk_border_free (::GtkBorder* border_);
// IGNORE; marked ignore


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/border_extra_def_impl.hpp>)
#include <gtk/border_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/border_extra_impl.hpp>)
#include <gtk/border_extra_impl.hpp>
#endif
#endif

#endif
