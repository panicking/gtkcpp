// AUTO-GENERATED

#ifndef _GI_GTK_TREESTORE_IMPL_HPP_
#define _GI_GTK_TREESTORE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Buildable TreeStoreBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

TreeStoreBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

Gtk::TreeDragDest TreeStoreBase::interface_ (gi::interface_tag<Gtk::TreeDragDest>)
{ return gi::wrap ((Gtk::TreeDragDest::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

TreeStoreBase::operator Gtk::TreeDragDest ()
{ return interface_ (gi::interface_tag<Gtk::TreeDragDest>()); }

Gtk::TreeDragSource TreeStoreBase::interface_ (gi::interface_tag<Gtk::TreeDragSource>)
{ return gi::wrap ((Gtk::TreeDragSource::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

TreeStoreBase::operator Gtk::TreeDragSource ()
{ return interface_ (gi::interface_tag<Gtk::TreeDragSource>()); }

Gtk::TreeModel TreeStoreBase::interface_ (gi::interface_tag<Gtk::TreeModel>)
{ return gi::wrap ((Gtk::TreeModel::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

TreeStoreBase::operator Gtk::TreeModel ()
{ return interface_ (gi::interface_tag<Gtk::TreeModel>()); }

Gtk::TreeSortable TreeStoreBase::interface_ (gi::interface_tag<Gtk::TreeSortable>)
{ return gi::wrap ((Gtk::TreeSortable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

TreeStoreBase::operator Gtk::TreeSortable ()
{ return interface_ (gi::interface_tag<Gtk::TreeSortable>()); }

// GtkTreeStore* gtk_tree_store_new (gint n_columns);
// ::GtkTreeStore* gtk_tree_store_new (gint n_columns);
// IGNORE; not introspectable; shadowed-by newv, varargs not supported

// GtkTreeStore* gtk_tree_store_newv (gint n_columns, GType* types);
// ::GtkTreeStore* gtk_tree_store_newv (gint n_columns, GType* types);
Gtk::TreeStore base::TreeStoreBase::new_ (gint n_columns, GType * types) noexcept
{
  typedef ::GtkTreeStore* (*call_wrap_t) (gint n_columns, GType* types);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_newv;
  auto types_i = detail::make_list_unwrap_range (types, n_columns, false);
  auto types_w = unwrap (types_i, gi::transfer_none, direction_in);
  auto types_to_c = types_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((gint) (types_w.size()), (GType*) (types_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_tree_store_append (GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* parent);
// void gtk_tree_store_append (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
void base::TreeStoreBase::append (Gtk::TreeIter & iter, Gtk::TreeIter parent) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_append;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
void base::TreeStoreBase::append (Gtk::TreeIter & iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_append;
  auto parent_to_c = nullptr;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TreeIter base::TreeStoreBase::append (Gtk::TreeIter parent) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_append;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c));
  return gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TreeIter base::TreeStoreBase::append () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_append;
  auto parent_to_c = nullptr;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c));
  return gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}

// void gtk_tree_store_clear (GtkTreeStore* tree_store);
// void gtk_tree_store_clear (::GtkTreeStore* tree_store);
void base::TreeStoreBase::clear () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_clear;
  call_wrap_v ((::GtkTreeStore*) (gobj_()));
}

// void gtk_tree_store_insert (GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* parent, gint position);
// void gtk_tree_store_insert (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint position);
void base::TreeStoreBase::insert (Gtk::TreeIter & iter, Gtk::TreeIter parent, gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_insert;
  auto position_to_c = position;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c), (gint) (position_to_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
void base::TreeStoreBase::insert (Gtk::TreeIter & iter, gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_insert;
  auto position_to_c = position;
  auto parent_to_c = nullptr;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c), (gint) (position_to_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TreeIter base::TreeStoreBase::insert (Gtk::TreeIter parent, gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_insert;
  auto position_to_c = position;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c), (gint) (position_to_c));
  return gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TreeIter base::TreeStoreBase::insert (gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_insert;
  auto position_to_c = position;
  auto parent_to_c = nullptr;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c), (gint) (position_to_c));
  return gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}

// void gtk_tree_store_insert_after (GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* parent, GtkTreeIter* sibling);
// void gtk_tree_store_insert_after (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, ::GtkTreeIter* sibling);
void base::TreeStoreBase::insert_after (Gtk::TreeIter & iter, Gtk::TreeIter parent, Gtk::TreeIter sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_insert_after;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none, gi::direction_in);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c), (::GtkTreeIter*) (sibling_to_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
void base::TreeStoreBase::insert_after (Gtk::TreeIter & iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_insert_after;
  auto sibling_to_c = nullptr;
  auto parent_to_c = nullptr;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c), (::GtkTreeIter*) (sibling_to_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TreeIter base::TreeStoreBase::insert_after (Gtk::TreeIter parent, Gtk::TreeIter sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_insert_after;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none, gi::direction_in);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c), (::GtkTreeIter*) (sibling_to_c));
  return gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TreeIter base::TreeStoreBase::insert_after () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_insert_after;
  auto sibling_to_c = nullptr;
  auto parent_to_c = nullptr;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c), (::GtkTreeIter*) (sibling_to_c));
  return gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}

// void gtk_tree_store_insert_before (GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* parent, GtkTreeIter* sibling);
// void gtk_tree_store_insert_before (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, ::GtkTreeIter* sibling);
void base::TreeStoreBase::insert_before (Gtk::TreeIter & iter, Gtk::TreeIter parent, Gtk::TreeIter sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_insert_before;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none, gi::direction_in);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c), (::GtkTreeIter*) (sibling_to_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
void base::TreeStoreBase::insert_before (Gtk::TreeIter & iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_insert_before;
  auto sibling_to_c = nullptr;
  auto parent_to_c = nullptr;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c), (::GtkTreeIter*) (sibling_to_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TreeIter base::TreeStoreBase::insert_before (Gtk::TreeIter parent, Gtk::TreeIter sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_insert_before;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none, gi::direction_in);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c), (::GtkTreeIter*) (sibling_to_c));
  return gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TreeIter base::TreeStoreBase::insert_before () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, ::GtkTreeIter* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_insert_before;
  auto sibling_to_c = nullptr;
  auto parent_to_c = nullptr;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c), (::GtkTreeIter*) (sibling_to_c));
  return gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}

// void gtk_tree_store_insert_with_values (GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* parent, gint position);
// void gtk_tree_store_insert_with_values (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint position);
// IGNORE; not introspectable; shadowed-by insert_with_valuesv, varargs not supported

// void gtk_tree_store_insert_with_valuesv (GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* parent, gint position, gint* columns, GValue* values, gint n_values);
// void gtk_tree_store_insert_with_valuesv (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint position, gint* columns, ::GValue** values, gint n_values);
// SKIP; inconsistent in values pointer depth (1 vs 2)

// gboolean gtk_tree_store_is_ancestor (GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* descendant);
// gboolean gtk_tree_store_is_ancestor (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* descendant);
bool base::TreeStoreBase::is_ancestor (Gtk::TreeIter iter, Gtk::TreeIter descendant) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* descendant);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_is_ancestor;
  auto descendant_to_c = gi::unwrap (descendant, gi::transfer_none, gi::direction_in);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreeIter*) (descendant_to_c));
  return _temp_ret;
}

// gint gtk_tree_store_iter_depth (GtkTreeStore* tree_store, GtkTreeIter* iter);
// gint gtk_tree_store_iter_depth (::GtkTreeStore* tree_store, ::GtkTreeIter* iter);
gint base::TreeStoreBase::iter_depth (Gtk::TreeIter iter) noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_iter_depth;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// gboolean gtk_tree_store_iter_is_valid (GtkTreeStore* tree_store, GtkTreeIter* iter);
// gboolean gtk_tree_store_iter_is_valid (::GtkTreeStore* tree_store, ::GtkTreeIter* iter);
bool base::TreeStoreBase::iter_is_valid (Gtk::TreeIter iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_iter_is_valid;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// void gtk_tree_store_move_after (GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* position);
// void gtk_tree_store_move_after (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* position);
void base::TreeStoreBase::move_after (Gtk::TreeIter iter, Gtk::TreeIter position) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_move_after;
  auto position_to_c = gi::unwrap (position, gi::transfer_none, gi::direction_in);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreeIter*) (position_to_c));
}
void base::TreeStoreBase::move_after (Gtk::TreeIter iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_move_after;
  auto position_to_c = nullptr;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreeIter*) (position_to_c));
}

// void gtk_tree_store_move_before (GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* position);
// void gtk_tree_store_move_before (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* position);
void base::TreeStoreBase::move_before (Gtk::TreeIter iter, Gtk::TreeIter position) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_move_before;
  auto position_to_c = gi::unwrap (position, gi::transfer_none, gi::direction_in);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreeIter*) (position_to_c));
}
void base::TreeStoreBase::move_before (Gtk::TreeIter iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_move_before;
  auto position_to_c = nullptr;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (::GtkTreeIter*) (position_to_c));
}

// void gtk_tree_store_prepend (GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* parent);
// void gtk_tree_store_prepend (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
void base::TreeStoreBase::prepend (Gtk::TreeIter & iter, Gtk::TreeIter parent) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_prepend;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
void base::TreeStoreBase::prepend (Gtk::TreeIter & iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_prepend;
  auto parent_to_c = nullptr;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TreeIter base::TreeStoreBase::prepend (Gtk::TreeIter parent) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_prepend;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c));
  return gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TreeIter base::TreeStoreBase::prepend () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_prepend;
  auto parent_to_c = nullptr;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c));
  return gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_tree_store_remove (GtkTreeStore* tree_store, GtkTreeIter* iter);
// gboolean gtk_tree_store_remove (::GtkTreeStore* tree_store, ::GtkTreeIter* iter);
bool base::TreeStoreBase::remove (Gtk::TreeIter iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_remove;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// void gtk_tree_store_reorder (GtkTreeStore* tree_store, GtkTreeIter* parent);
// void gtk_tree_store_reorder (::GtkTreeStore* tree_store, ::GtkTreeIter* parent);
// IGNORE; not introspectable, inconsistent array info

// void gtk_tree_store_set (GtkTreeStore* tree_store, GtkTreeIter* iter);
// void gtk_tree_store_set (::GtkTreeStore* tree_store, ::GtkTreeIter* iter);
// IGNORE; not introspectable; shadowed-by set_valuesv, varargs not supported

// void gtk_tree_store_set_column_types (GtkTreeStore* tree_store, gint n_columns, GType* types);
// void gtk_tree_store_set_column_types (::GtkTreeStore* tree_store, gint n_columns, GType* types);
void base::TreeStoreBase::set_column_types (gint n_columns, GType * types) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, gint n_columns, GType* types);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_set_column_types;
  auto types_i = detail::make_list_unwrap_range (types, n_columns, false);
  auto types_w = unwrap (types_i, gi::transfer_none, direction_in);
  auto types_to_c = types_w.gobj_(false);
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (gint) (types_w.size()), (GType*) (types_to_c));
}

// void gtk_tree_store_set_valist (GtkTreeStore* tree_store, GtkTreeIter* iter, va_list var_args);
// void gtk_tree_store_set_valist (::GtkTreeStore* tree_store, ::GtkTreeIter* iter,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// void gtk_tree_store_set_value (GtkTreeStore* tree_store, GtkTreeIter* iter, gint column, GValue* value);
// void gtk_tree_store_set_value (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, gint column, ::GValue* value);
void base::TreeStoreBase::set_value (Gtk::TreeIter iter, gint column, GObject::Value value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, gint column, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_set_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto column_to_c = column;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (gint) (column_to_c), (::GValue*) (value_to_c));
}

// void gtk_tree_store_set_valuesv (GtkTreeStore* tree_store, GtkTreeIter* iter, gint* columns, GValue* values, gint n_values);
// void gtk_tree_store_set_valuesv (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, gint* columns, ::GValue** values, gint n_values);
// SKIP; inconsistent in values pointer depth (1 vs 2)

// void gtk_tree_store_swap (GtkTreeStore* tree_store, GtkTreeIter* a, GtkTreeIter* b);
// void gtk_tree_store_swap (::GtkTreeStore* tree_store, ::GtkTreeIter* a, ::GtkTreeIter* b);
void base::TreeStoreBase::swap (Gtk::TreeIter a, Gtk::TreeIter b) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeStore* tree_store, ::GtkTreeIter* a, ::GtkTreeIter* b);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_store_swap;
  auto b_to_c = gi::unwrap (b, gi::transfer_none, gi::direction_in);
  auto a_to_c = gi::unwrap (a, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeStore*) (gobj_()), (::GtkTreeIter*) (a_to_c), (::GtkTreeIter*) (b_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treestore_extra_def_impl.hpp>)
#include <gtk/treestore_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treestore_extra_impl.hpp>)
#include <gtk/treestore_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TreeStoreClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkTreeStoreClass *methods = (::GtkTreeStoreClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
