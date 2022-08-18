// AUTO-GENERATED

#ifndef _GI_GIO_LISTSTORE_IMPL_HPP_
#define _GI_GIO_LISTSTORE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::ListModel ListStoreBase::interface_ (gi::interface_tag<Gio::ListModel>)
{ return gi::wrap ((Gio::ListModel::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ListStoreBase::operator Gio::ListModel ()
{ return interface_ (gi::interface_tag<Gio::ListModel>()); }

// GListStore* g_list_store_new (GType item_type);
// ::GListStore* g_list_store_new (GType item_type);
Gio::ListStore base::ListStoreBase::new_ (GType item_type) noexcept
{
  typedef ::GListStore* (*call_wrap_t) (GType item_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_list_store_new;
  auto item_type_to_c = item_type;
  auto _temp_ret = call_wrap_v ((GType) (item_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_list_store_append (GListStore* store, gpointer item);
// void g_list_store_append (::GListStore* store, ::GObject* item);
void base::ListStoreBase::append (GObject::Object item) noexcept
{
  typedef void (*call_wrap_t) (::GListStore* store, ::GObject* item);
  call_wrap_t call_wrap_v = (call_wrap_t) g_list_store_append;
  auto item_to_c = gi::unwrap (item, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GListStore*) (gobj_()), (::GObject*) (item_to_c));
}

// gboolean g_list_store_find (GListStore* store, gpointer item, guint* position);
// gboolean g_list_store_find (::GListStore* store, ::GObject* item, guint* position);
bool base::ListStoreBase::find (GObject::Object item, guint * position) noexcept
{
  typedef gboolean (*call_wrap_t) (::GListStore* store, ::GObject* item, guint* position);
  call_wrap_t call_wrap_v = (call_wrap_t) g_list_store_find;
  guint position_o {};
  auto item_to_c = gi::unwrap (item, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GListStore*) (gobj_()), (::GObject*) (item_to_c), (guint*) (position ? &position_o : nullptr));
  if (position) *position = position_o;
  return _temp_ret;
}
std::tuple<bool, guint> base::ListStoreBase::find (GObject::Object item) noexcept
{
  typedef gboolean (*call_wrap_t) (::GListStore* store, ::GObject* item, guint* position);
  call_wrap_t call_wrap_v = (call_wrap_t) g_list_store_find;
  guint position_o {};
  auto item_to_c = gi::unwrap (item, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GListStore*) (gobj_()), (::GObject*) (item_to_c), (guint*) (&position_o));
  return std::make_tuple (_temp_ret, position_o);
}

// gboolean g_list_store_find_with_equal_func (GListStore* store, gpointer item, GEqualFunc equal_func, guint* position);
// gboolean g_list_store_find_with_equal_func (::GListStore* store, ::GObject* item,  equal_func, guint* position);
// SKIP; equal_func type  not supported

// void g_list_store_insert (GListStore* store, guint position, gpointer item);
// void g_list_store_insert (::GListStore* store, guint position, ::GObject* item);
void base::ListStoreBase::insert (guint position, GObject::Object item) noexcept
{
  typedef void (*call_wrap_t) (::GListStore* store, guint position, ::GObject* item);
  call_wrap_t call_wrap_v = (call_wrap_t) g_list_store_insert;
  auto item_to_c = gi::unwrap (item, gi::transfer_none, gi::direction_in);
  auto position_to_c = position;
  call_wrap_v ((::GListStore*) (gobj_()), (guint) (position_to_c), (::GObject*) (item_to_c));
}

// guint g_list_store_insert_sorted (GListStore* store, gpointer item, GCompareDataFunc compare_func, gpointer user_data);
// guint g_list_store_insert_sorted (::GListStore* store, ::GObject* item, GLib::CompareDataFunc::cfunction_type compare_func, void* user_data);
guint base::ListStoreBase::insert_sorted (GObject::Object item, GLib::CompareDataFunc compare_func) noexcept
{
  typedef guint (*call_wrap_t) (::GListStore* store, ::GObject* item, GLib::CompareDataFunc::cfunction_type compare_func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_list_store_insert_sorted;
  auto compare_func_wrap_ = compare_func ? unwrap (std::move (compare_func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(compare_func_wrap_)>::type> compare_func_wrap__sp (compare_func_wrap_);
  auto item_to_c = gi::unwrap (item, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GListStore*) (gobj_()), (::GObject*) (item_to_c), (GLib::CompareDataFunc::cfunction_type) (compare_func_wrap_ ? &compare_func_wrap_->wrapper : nullptr), (void*) (compare_func_wrap_));
  return _temp_ret;
}

// void g_list_store_remove (GListStore* store, guint position);
// void g_list_store_remove (::GListStore* store, guint position);
void base::ListStoreBase::remove (guint position) noexcept
{
  typedef void (*call_wrap_t) (::GListStore* store, guint position);
  call_wrap_t call_wrap_v = (call_wrap_t) g_list_store_remove;
  auto position_to_c = position;
  call_wrap_v ((::GListStore*) (gobj_()), (guint) (position_to_c));
}

// void g_list_store_remove_all (GListStore* store);
// void g_list_store_remove_all (::GListStore* store);
void base::ListStoreBase::remove_all () noexcept
{
  typedef void (*call_wrap_t) (::GListStore* store);
  call_wrap_t call_wrap_v = (call_wrap_t) g_list_store_remove_all;
  call_wrap_v ((::GListStore*) (gobj_()));
}

// void g_list_store_sort (GListStore* store, GCompareDataFunc compare_func, gpointer user_data);
// void g_list_store_sort (::GListStore* store, GLib::CompareDataFunc::cfunction_type compare_func, void* user_data);
void base::ListStoreBase::sort (GLib::CompareDataFunc compare_func) noexcept
{
  typedef void (*call_wrap_t) (::GListStore* store, GLib::CompareDataFunc::cfunction_type compare_func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_list_store_sort;
  auto compare_func_wrap_ = compare_func ? unwrap (std::move (compare_func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(compare_func_wrap_)>::type> compare_func_wrap__sp (compare_func_wrap_);
  call_wrap_v ((::GListStore*) (gobj_()), (GLib::CompareDataFunc::cfunction_type) (compare_func_wrap_ ? &compare_func_wrap_->wrapper : nullptr), (void*) (compare_func_wrap_));
}

// void g_list_store_splice (GListStore* store, guint position, guint n_removals, gpointer* additions, guint n_additions);
// void g_list_store_splice (::GListStore* store, guint position, guint n_removals, ::GObject** additions, guint n_additions);
void base::ListStoreBase::splice (guint position, guint n_removals, GObject::Object * additions, guint n_additions) noexcept
{
  typedef void (*call_wrap_t) (::GListStore* store, guint position, guint n_removals, ::GObject** additions, guint n_additions);
  call_wrap_t call_wrap_v = (call_wrap_t) g_list_store_splice;
  auto additions_i = detail::make_list_unwrap_range (additions, n_additions, false);
  auto additions_w = unwrap (additions_i, gi::transfer_none, direction_in);
  auto additions_to_c = additions_w.gobj_(false);
  auto n_removals_to_c = n_removals;
  auto position_to_c = position;
  call_wrap_v ((::GListStore*) (gobj_()), (guint) (position_to_c), (guint) (n_removals_to_c), (::GObject**) (additions_to_c), (guint) (additions_w.size()));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/liststore_extra_def_impl.hpp>)
#include <gio/liststore_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/liststore_extra_impl.hpp>)
#include <gio/liststore_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ListStoreClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GListStoreClass *methods = (::GListStoreClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
