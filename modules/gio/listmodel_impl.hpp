// AUTO-GENERATED

#ifndef _GI_GIO_LISTMODEL_IMPL_HPP_
#define _GI_GIO_LISTMODEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gpointer g_list_model_get_item (GListModel* list, guint position);
// void* g_list_model_get_item (::GListModel* list, guint position);
// IGNORE; not introspectable; shadowed-by get_object

// GType g_list_model_get_item_type (GListModel* list);
// GType g_list_model_get_item_type (::GListModel* list);
GType base::ListModelBase::get_item_type () noexcept
{
  typedef GType (*call_wrap_t) (::GListModel* list);
  call_wrap_t call_wrap_v = (call_wrap_t) g_list_model_get_item_type;
  auto _temp_ret = call_wrap_v ((::GListModel*) (gobj_()));
  return _temp_ret;
}

// guint g_list_model_get_n_items (GListModel* list);
// guint g_list_model_get_n_items (::GListModel* list);
guint base::ListModelBase::get_n_items () noexcept
{
  typedef guint (*call_wrap_t) (::GListModel* list);
  call_wrap_t call_wrap_v = (call_wrap_t) g_list_model_get_n_items;
  auto _temp_ret = call_wrap_v ((::GListModel*) (gobj_()));
  return _temp_ret;
}

// GObject* g_list_model_get_object (GListModel* list, guint position);
// ::GObject* g_list_model_get_object (::GListModel* list, guint position);
GObject::Object base::ListModelBase::get_item (guint position) noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GListModel* list, guint position);
  call_wrap_t call_wrap_v = (call_wrap_t) g_list_model_get_object;
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GListModel*) (gobj_()), (guint) (position_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_list_model_items_changed (GListModel* list, guint position, guint removed, guint added);
// void g_list_model_items_changed (::GListModel* list, guint position, guint removed, guint added);
void base::ListModelBase::items_changed (guint position, guint removed, guint added) noexcept
{
  typedef void (*call_wrap_t) (::GListModel* list, guint position, guint removed, guint added);
  call_wrap_t call_wrap_v = (call_wrap_t) g_list_model_items_changed;
  auto added_to_c = added;
  auto removed_to_c = removed;
  auto position_to_c = position;
  call_wrap_v ((::GListModel*) (gobj_()), (guint) (position_to_c), (guint) (removed_to_c), (guint) (added_to_c));
}



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/listmodel_extra_def_impl.hpp>)
#include <gio/listmodel_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/listmodel_extra_impl.hpp>)
#include <gio/listmodel_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ListModelInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GListModelInterface *methods = (::GListModelInterface *) interface_struct;
  (void) methods;

  methods->get_item = (decltype (methods->get_item)) detail::method_wrapper<self, GObject::Object (*) (guint position), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::get_item_>;
  methods->get_item_type = (decltype (methods->get_item_type)) detail::method_wrapper<self, GType (*) (), gi::transfer_none_t>::wrapper<&self::get_item_type_>;
  methods->get_n_items = (decltype (methods->get_n_items)) detail::method_wrapper<self, guint (*) (), gi::transfer_none_t>::wrapper<&self::get_n_items_>;
}

// gpointer ListModel::get_item (GListModel* list, guint position);
// ::GObject* ListModel::get_item (::GListModel* list, guint position);
GObject::Object ListModelInterfaceClassImpl::get_item_ (guint position) noexcept
{
  if (!get_struct_()->get_item) return GObject::Object{};
  typedef ::GObject* (*call_wrap_t) (::GListModel* list, guint position);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_item;
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GListModel*) (gobj_()), (guint) (position_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GType ListModel::get_item_type (GListModel* list);
// GType ListModel::get_item_type (::GListModel* list);
GType ListModelInterfaceClassImpl::get_item_type_ () noexcept
{
  if (!get_struct_()->get_item_type) return GType{};
  typedef GType (*call_wrap_t) (::GListModel* list);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_item_type;
  auto _temp_ret = call_wrap_v ((::GListModel*) (gobj_()));
  return _temp_ret;
}

// guint ListModel::get_n_items (GListModel* list);
// guint ListModel::get_n_items (::GListModel* list);
guint ListModelInterfaceClassImpl::get_n_items_ () noexcept
{
  if (!get_struct_()->get_n_items) return guint{};
  typedef guint (*call_wrap_t) (::GListModel* list);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_n_items;
  auto _temp_ret = call_wrap_v ((::GListModel*) (gobj_()));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
