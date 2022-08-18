// AUTO-GENERATED

#ifndef _GI_GTK_TREESORTABLE_IMPL_HPP_
#define _GI_GTK_TREESORTABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// gboolean gtk_tree_sortable_get_sort_column_id (GtkTreeSortable* sortable, gint* sort_column_id, GtkSortType* order);
// gboolean gtk_tree_sortable_get_sort_column_id (::GtkTreeSortable* sortable, gint* sort_column_id, ::GtkSortType* order);
bool base::TreeSortableBase::get_sort_column_id (gint & sort_column_id, Gtk::SortType & order) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeSortable* sortable, gint* sort_column_id, ::GtkSortType* order);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_sortable_get_sort_column_id;
  ::GtkSortType order_o {};
  gint sort_column_id_o {};
  auto _temp_ret = call_wrap_v ((::GtkTreeSortable*) (gobj_()), (gint*) (&sort_column_id_o), (::GtkSortType*) (&order_o));
  order = gi::wrap (order_o);
  sort_column_id = sort_column_id_o;
  return _temp_ret;
}
std::tuple<bool, gint, Gtk::SortType> base::TreeSortableBase::get_sort_column_id () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeSortable* sortable, gint* sort_column_id, ::GtkSortType* order);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_sortable_get_sort_column_id;
  ::GtkSortType order_o {};
  gint sort_column_id_o {};
  auto _temp_ret = call_wrap_v ((::GtkTreeSortable*) (gobj_()), (gint*) (&sort_column_id_o), (::GtkSortType*) (&order_o));
  return std::make_tuple (_temp_ret, sort_column_id_o, gi::wrap (order_o));
}

// gboolean gtk_tree_sortable_has_default_sort_func (GtkTreeSortable* sortable);
// gboolean gtk_tree_sortable_has_default_sort_func (::GtkTreeSortable* sortable);
bool base::TreeSortableBase::has_default_sort_func () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeSortable* sortable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_sortable_has_default_sort_func;
  auto _temp_ret = call_wrap_v ((::GtkTreeSortable*) (gobj_()));
  return _temp_ret;
}

// void gtk_tree_sortable_set_default_sort_func (GtkTreeSortable* sortable, GtkTreeIterCompareFunc sort_func, gpointer user_data, GDestroyNotify destroy);
// void gtk_tree_sortable_set_default_sort_func (::GtkTreeSortable* sortable, Gtk::TreeIterCompareFunc::cfunction_type sort_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
void base::TreeSortableBase::set_default_sort_func (Gtk::TreeIterCompareFunc sort_func) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSortable* sortable, Gtk::TreeIterCompareFunc::cfunction_type sort_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_sortable_set_default_sort_func;
  auto sort_func_wrap_ = sort_func ? unwrap (std::move (sort_func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkTreeSortable*) (gobj_()), (Gtk::TreeIterCompareFunc::cfunction_type) (sort_func_wrap_ ? &sort_func_wrap_->wrapper : nullptr), (void*) (sort_func_wrap_), (GLib::DestroyNotify::cfunction_type) (sort_func_wrap_ ? &sort_func_wrap_->destroy : nullptr));
}

// void gtk_tree_sortable_set_sort_column_id (GtkTreeSortable* sortable, gint sort_column_id, GtkSortType order);
// void gtk_tree_sortable_set_sort_column_id (::GtkTreeSortable* sortable, gint sort_column_id, ::GtkSortType order);
void base::TreeSortableBase::set_sort_column_id (gint sort_column_id, Gtk::SortType order) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSortable* sortable, gint sort_column_id, ::GtkSortType order);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_sortable_set_sort_column_id;
  auto order_to_c = gi::unwrap (order);
  auto sort_column_id_to_c = sort_column_id;
  call_wrap_v ((::GtkTreeSortable*) (gobj_()), (gint) (sort_column_id_to_c), (::GtkSortType) (order_to_c));
}

// void gtk_tree_sortable_set_sort_func (GtkTreeSortable* sortable, gint sort_column_id, GtkTreeIterCompareFunc sort_func, gpointer user_data, GDestroyNotify destroy);
// void gtk_tree_sortable_set_sort_func (::GtkTreeSortable* sortable, gint sort_column_id, Gtk::TreeIterCompareFunc::cfunction_type sort_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
void base::TreeSortableBase::set_sort_func (gint sort_column_id, Gtk::TreeIterCompareFunc sort_func) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSortable* sortable, gint sort_column_id, Gtk::TreeIterCompareFunc::cfunction_type sort_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_sortable_set_sort_func;
  auto sort_func_wrap_ = sort_func ? unwrap (std::move (sort_func), gi::scope_notified) : nullptr;
  auto sort_column_id_to_c = sort_column_id;
  call_wrap_v ((::GtkTreeSortable*) (gobj_()), (gint) (sort_column_id_to_c), (Gtk::TreeIterCompareFunc::cfunction_type) (sort_func_wrap_ ? &sort_func_wrap_->wrapper : nullptr), (void*) (sort_func_wrap_), (GLib::DestroyNotify::cfunction_type) (sort_func_wrap_ ? &sort_func_wrap_->destroy : nullptr));
}

// void gtk_tree_sortable_sort_column_changed (GtkTreeSortable* sortable);
// void gtk_tree_sortable_sort_column_changed (::GtkTreeSortable* sortable);
void base::TreeSortableBase::sort_column_changed () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSortable* sortable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_sortable_sort_column_changed;
  call_wrap_v ((::GtkTreeSortable*) (gobj_()));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treesortable_extra_def_impl.hpp>)
#include <gtk/treesortable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treesortable_extra_impl.hpp>)
#include <gtk/treesortable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TreeSortableIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GtkTreeSortableIface *methods = (::GtkTreeSortableIface *) interface_struct;
  (void) methods;

  methods->has_default_sort_func = (decltype (methods->has_default_sort_func)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::has_default_sort_func_>;
  methods->set_sort_column_id = (decltype (methods->set_sort_column_id)) detail::method_wrapper<self, void (*) (gint sort_column_id, Gtk::SortType order), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::set_sort_column_id_>;
  methods->sort_column_changed = (decltype (methods->sort_column_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::sort_column_changed_>;
}

// gboolean TreeSortable::get_sort_column_id (GtkTreeSortable* sortable, gint* sort_column_id, GtkSortType* order);
// gboolean TreeSortable::get_sort_column_id (::GtkTreeSortable* sortable, gint* sort_column_id, ::GtkSortType* order);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// gboolean TreeSortable::has_default_sort_func (GtkTreeSortable* sortable);
// gboolean TreeSortable::has_default_sort_func (::GtkTreeSortable* sortable);
bool TreeSortableIfaceClassImpl::has_default_sort_func_ () noexcept
{
  if (!get_struct_()->has_default_sort_func) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkTreeSortable* sortable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->has_default_sort_func;
  auto _temp_ret = call_wrap_v ((::GtkTreeSortable*) (gobj_()));
  return _temp_ret;
}

// void TreeSortable::set_default_sort_func (GtkTreeSortable* sortable, GtkTreeIterCompareFunc sort_func, gpointer user_data, GDestroyNotify destroy);
// void TreeSortable::set_default_sort_func (::GtkTreeSortable* sortable, Gtk::TreeIterCompareFunc::cfunction_type sort_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; virtual-method callback parameter not supported, virtual-method callback parameter not supported

// void TreeSortable::set_sort_column_id (GtkTreeSortable* sortable, gint sort_column_id, GtkSortType order);
// void TreeSortable::set_sort_column_id (::GtkTreeSortable* sortable, gint sort_column_id, ::GtkSortType order);
void TreeSortableIfaceClassImpl::set_sort_column_id_ (gint sort_column_id, Gtk::SortType order) noexcept
{
  if (!get_struct_()->set_sort_column_id) return ;
  typedef void (*call_wrap_t) (::GtkTreeSortable* sortable, gint sort_column_id, ::GtkSortType order);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_sort_column_id;
  auto order_to_c = gi::unwrap (order);
  auto sort_column_id_to_c = sort_column_id;
  call_wrap_v ((::GtkTreeSortable*) (gobj_()), (gint) (sort_column_id_to_c), (::GtkSortType) (order_to_c));
}

// void TreeSortable::set_sort_func (GtkTreeSortable* sortable, gint sort_column_id, GtkTreeIterCompareFunc sort_func, gpointer user_data, GDestroyNotify destroy);
// void TreeSortable::set_sort_func (::GtkTreeSortable* sortable, gint sort_column_id, Gtk::TreeIterCompareFunc::cfunction_type sort_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; virtual-method callback parameter not supported, virtual-method callback parameter not supported

// void TreeSortable::sort_column_changed (GtkTreeSortable* sortable);
// void TreeSortable::sort_column_changed (::GtkTreeSortable* sortable);
void TreeSortableIfaceClassImpl::sort_column_changed_ () noexcept
{
  if (!get_struct_()->sort_column_changed) return ;
  typedef void (*call_wrap_t) (::GtkTreeSortable* sortable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->sort_column_changed;
  call_wrap_v ((::GtkTreeSortable*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
