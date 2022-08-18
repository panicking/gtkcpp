// AUTO-GENERATED

#ifndef _GI_GTK_LISTSTORE_IMPL_HPP_
#define _GI_GTK_LISTSTORE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Buildable ListStoreBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ListStoreBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

Gtk::TreeDragDest ListStoreBase::interface_ (gi::interface_tag<Gtk::TreeDragDest>)
{ return gi::wrap ((Gtk::TreeDragDest::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ListStoreBase::operator Gtk::TreeDragDest ()
{ return interface_ (gi::interface_tag<Gtk::TreeDragDest>()); }

Gtk::TreeDragSource ListStoreBase::interface_ (gi::interface_tag<Gtk::TreeDragSource>)
{ return gi::wrap ((Gtk::TreeDragSource::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ListStoreBase::operator Gtk::TreeDragSource ()
{ return interface_ (gi::interface_tag<Gtk::TreeDragSource>()); }

Gtk::TreeModel ListStoreBase::interface_ (gi::interface_tag<Gtk::TreeModel>)
{ return gi::wrap ((Gtk::TreeModel::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ListStoreBase::operator Gtk::TreeModel ()
{ return interface_ (gi::interface_tag<Gtk::TreeModel>()); }

Gtk::TreeSortable ListStoreBase::interface_ (gi::interface_tag<Gtk::TreeSortable>)
{ return gi::wrap ((Gtk::TreeSortable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ListStoreBase::operator Gtk::TreeSortable ()
{ return interface_ (gi::interface_tag<Gtk::TreeSortable>()); }

// GtkListStore* gtk_list_store_new (gint n_columns);
// ::GtkListStore* gtk_list_store_new (gint n_columns);
// IGNORE; not introspectable; shadowed-by newv, varargs not supported

// GtkListStore* gtk_list_store_newv (gint n_columns, GType* types);
// ::GtkListStore* gtk_list_store_newv (gint n_columns, GType* types);
Gtk::ListStore base::ListStoreBase::new_ (gint n_columns, GType * types) noexcept
{
  typedef ::GtkListStore* (*call_wrap_t) (gint n_columns, GType* types);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_newv;
  auto types_i = detail::make_list_unwrap_range (types, n_columns, false);
  auto types_w = unwrap (types_i, gi::transfer_none, direction_in);
  auto types_to_c = types_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((gint) (types_w.size()), (GType*) (types_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_list_store_append (GtkListStore* list_store, GtkTreeIter* iter);
// void gtk_list_store_append (::GtkListStore* list_store, ::GtkTreeIter* iter);
void base::ListStoreBase::append (Gtk::TreeIter & iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_append;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TreeIter base::ListStoreBase::append () noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_append;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c));
  return gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}

// void gtk_list_store_clear (GtkListStore* list_store);
// void gtk_list_store_clear (::GtkListStore* list_store);
void base::ListStoreBase::clear () noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_clear;
  call_wrap_v ((::GtkListStore*) (gobj_()));
}

// void gtk_list_store_insert (GtkListStore* list_store, GtkTreeIter* iter, gint position);
// void gtk_list_store_insert (::GtkListStore* list_store, ::GtkTreeIter* iter, gint position);
void base::ListStoreBase::insert (Gtk::TreeIter & iter, gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_insert;
  auto position_to_c = position;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (gint) (position_to_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TreeIter base::ListStoreBase::insert (gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_insert;
  auto position_to_c = position;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (gint) (position_to_c));
  return gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}

// void gtk_list_store_insert_after (GtkListStore* list_store, GtkTreeIter* iter, GtkTreeIter* sibling);
// void gtk_list_store_insert_after (::GtkListStore* list_store, ::GtkTreeIter* iter, ::GtkTreeIter* sibling);
void base::ListStoreBase::insert_after (Gtk::TreeIter & iter, Gtk::TreeIter sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_insert_after;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (sibling_to_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
void base::ListStoreBase::insert_after (Gtk::TreeIter & iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_insert_after;
  auto sibling_to_c = nullptr;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (sibling_to_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TreeIter base::ListStoreBase::insert_after (Gtk::TreeIter sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_insert_after;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (sibling_to_c));
  return gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TreeIter base::ListStoreBase::insert_after () noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_insert_after;
  auto sibling_to_c = nullptr;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (sibling_to_c));
  return gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}

// void gtk_list_store_insert_before (GtkListStore* list_store, GtkTreeIter* iter, GtkTreeIter* sibling);
// void gtk_list_store_insert_before (::GtkListStore* list_store, ::GtkTreeIter* iter, ::GtkTreeIter* sibling);
void base::ListStoreBase::insert_before (Gtk::TreeIter & iter, Gtk::TreeIter sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_insert_before;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (sibling_to_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
void base::ListStoreBase::insert_before (Gtk::TreeIter & iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_insert_before;
  auto sibling_to_c = nullptr;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (sibling_to_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TreeIter base::ListStoreBase::insert_before (Gtk::TreeIter sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_insert_before;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (sibling_to_c));
  return gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TreeIter base::ListStoreBase::insert_before () noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_insert_before;
  auto sibling_to_c = nullptr;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (sibling_to_c));
  return gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}

// void gtk_list_store_insert_with_values (GtkListStore* list_store, GtkTreeIter* iter, gint position);
// void gtk_list_store_insert_with_values (::GtkListStore* list_store, ::GtkTreeIter* iter, gint position);
// IGNORE; not introspectable, varargs not supported

// void gtk_list_store_insert_with_valuesv (GtkListStore* list_store, GtkTreeIter* iter, gint position, gint* columns, GValue* values, gint n_values);
// void gtk_list_store_insert_with_valuesv (::GtkListStore* list_store, ::GtkTreeIter* iter, gint position, gint* columns, ::GValue** values, gint n_values);
// SKIP; inconsistent in values pointer depth (1 vs 2)

// gboolean gtk_list_store_iter_is_valid (GtkListStore* list_store, GtkTreeIter* iter);
// gboolean gtk_list_store_iter_is_valid (::GtkListStore* list_store, ::GtkTreeIter* iter);
bool base::ListStoreBase::iter_is_valid (Gtk::TreeIter iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_iter_is_valid;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// void gtk_list_store_move_after (GtkListStore* store, GtkTreeIter* iter, GtkTreeIter* position);
// void gtk_list_store_move_after (::GtkListStore* store, ::GtkTreeIter* iter, ::GtkTreeIter* position);
void base::ListStoreBase::move_after (Gtk::TreeIter iter, Gtk::TreeIter position) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* store, ::GtkTreeIter* iter, ::GtkTreeIter* position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_move_after;
  auto position_to_c = gi::unwrap (position, gi::transfer_none, gi::direction_in);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreeIter*) (position_to_c));
}
void base::ListStoreBase::move_after (Gtk::TreeIter iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* store, ::GtkTreeIter* iter, ::GtkTreeIter* position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_move_after;
  auto position_to_c = nullptr;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreeIter*) (position_to_c));
}

// void gtk_list_store_move_before (GtkListStore* store, GtkTreeIter* iter, GtkTreeIter* position);
// void gtk_list_store_move_before (::GtkListStore* store, ::GtkTreeIter* iter, ::GtkTreeIter* position);
void base::ListStoreBase::move_before (Gtk::TreeIter iter, Gtk::TreeIter position) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* store, ::GtkTreeIter* iter, ::GtkTreeIter* position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_move_before;
  auto position_to_c = gi::unwrap (position, gi::transfer_none, gi::direction_in);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreeIter*) (position_to_c));
}
void base::ListStoreBase::move_before (Gtk::TreeIter iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* store, ::GtkTreeIter* iter, ::GtkTreeIter* position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_move_before;
  auto position_to_c = nullptr;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreeIter*) (position_to_c));
}

// void gtk_list_store_prepend (GtkListStore* list_store, GtkTreeIter* iter);
// void gtk_list_store_prepend (::GtkListStore* list_store, ::GtkTreeIter* iter);
void base::ListStoreBase::prepend (Gtk::TreeIter & iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_prepend;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TreeIter base::ListStoreBase::prepend () noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_prepend;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c));
  return gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_list_store_remove (GtkListStore* list_store, GtkTreeIter* iter);
// gboolean gtk_list_store_remove (::GtkListStore* list_store, ::GtkTreeIter* iter);
bool base::ListStoreBase::remove (Gtk::TreeIter iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_remove;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// void gtk_list_store_reorder (GtkListStore* store, gint* new_order);
// void gtk_list_store_reorder (::GtkListStore* store, gint* new_order);
void base::ListStoreBase::reorder (const std::vector<gint> & new_order) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* store, gint* new_order);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_reorder;
  auto new_order_i = detail::make_list_unwrap_range<traits::ctype<gint>::type> (new_order);
  auto new_order_w = unwrap (new_order_i, gi::transfer_none, direction_in);
  auto new_order_to_c = new_order_w.gobj_(false);
  call_wrap_v ((::GtkListStore*) (gobj_()), (gint*) (new_order_to_c));
}

// void gtk_list_store_set (GtkListStore* list_store, GtkTreeIter* iter);
// void gtk_list_store_set (::GtkListStore* list_store, ::GtkTreeIter* iter);
// IGNORE; not introspectable; shadowed-by set_valuesv, varargs not supported

// void gtk_list_store_set_column_types (GtkListStore* list_store, gint n_columns, GType* types);
// void gtk_list_store_set_column_types (::GtkListStore* list_store, gint n_columns, GType* types);
void base::ListStoreBase::set_column_types (gint n_columns, GType * types) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, gint n_columns, GType* types);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_set_column_types;
  auto types_i = detail::make_list_unwrap_range (types, n_columns, false);
  auto types_w = unwrap (types_i, gi::transfer_none, direction_in);
  auto types_to_c = types_w.gobj_(false);
  call_wrap_v ((::GtkListStore*) (gobj_()), (gint) (types_w.size()), (GType*) (types_to_c));
}

// void gtk_list_store_set_valist (GtkListStore* list_store, GtkTreeIter* iter, va_list var_args);
// void gtk_list_store_set_valist (::GtkListStore* list_store, ::GtkTreeIter* iter,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// void gtk_list_store_set_value (GtkListStore* list_store, GtkTreeIter* iter, gint column, GValue* value);
// void gtk_list_store_set_value (::GtkListStore* list_store, ::GtkTreeIter* iter, gint column, ::GValue* value);
void base::ListStoreBase::set_value (Gtk::TreeIter iter, gint column, GObject::Value value) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* list_store, ::GtkTreeIter* iter, gint column, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_set_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto column_to_c = column;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (gint) (column_to_c), (::GValue*) (value_to_c));
}

// void gtk_list_store_set_valuesv (GtkListStore* list_store, GtkTreeIter* iter, gint* columns, GValue* values, gint n_values);
// void gtk_list_store_set_valuesv (::GtkListStore* list_store, ::GtkTreeIter* iter, gint* columns, ::GValue** values, gint n_values);
// SKIP; inconsistent in values pointer depth (1 vs 2)

// void gtk_list_store_swap (GtkListStore* store, GtkTreeIter* a, GtkTreeIter* b);
// void gtk_list_store_swap (::GtkListStore* store, ::GtkTreeIter* a, ::GtkTreeIter* b);
void base::ListStoreBase::swap (Gtk::TreeIter a, Gtk::TreeIter b) noexcept
{
  typedef void (*call_wrap_t) (::GtkListStore* store, ::GtkTreeIter* a, ::GtkTreeIter* b);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_store_swap;
  auto b_to_c = gi::unwrap (b, gi::transfer_none, gi::direction_in);
  auto a_to_c = gi::unwrap (a, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkListStore*) (gobj_()), (::GtkTreeIter*) (a_to_c), (::GtkTreeIter*) (b_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/liststore_extra_def_impl.hpp>)
#include <gtk/liststore_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/liststore_extra_impl.hpp>)
#include <gtk/liststore_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ListStoreClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkListStoreClass *methods = (::GtkListStoreClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
