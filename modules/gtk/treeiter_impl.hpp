// AUTO-GENERATED

#ifndef _GI_GTK_TREEITER_IMPL_HPP_
#define _GI_GTK_TREEITER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

static gint _field_stamp_get (const ::GtkTreeIter* obj) { return (gint) obj->stamp; }
// gint TreeIter::stamp (const ::GtkTreeIter* obj);
// gint TreeIter::stamp (const ::GtkTreeIter* obj);
gint base::TreeIterBase::stamp_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkTreeIter* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_stamp_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTreeIter*) (gobj_()));
  return _temp_ret;
}

static void _field_stamp_set (::GtkTreeIter* obj, gint _value) { obj->stamp = (decltype(obj->stamp)) _value; }
//  TreeIter::stamp (::GtkTreeIter* obj, gint _value);
// void TreeIter::stamp (::GtkTreeIter* obj, gint _value);
void base::TreeIterBase::stamp_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeIter* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_stamp_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTreeIter*) (gobj_()), (gint) (_value_to_c));
}

// GtkTreeIter* gtk_tree_iter_copy (GtkTreeIter* iter);
// ::GtkTreeIter* gtk_tree_iter_copy (::GtkTreeIter* iter);
Gtk::TreeIter base::TreeIterBase::copy () noexcept
{
  typedef ::GtkTreeIter* (*call_wrap_t) (::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_iter_copy;
  auto _temp_ret = call_wrap_v ((::GtkTreeIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_tree_iter_free (GtkTreeIter* iter);
// void gtk_tree_iter_free (::GtkTreeIter* iter);
// IGNORE; marked ignore


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treeiter_extra_def_impl.hpp>)
#include <gtk/treeiter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treeiter_extra_impl.hpp>)
#include <gtk/treeiter_extra_impl.hpp>
#endif
#endif

#endif
