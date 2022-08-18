// AUTO-GENERATED

#ifndef _GI_GIO_MENUMODEL_IMPL_HPP_
#define _GI_GIO_MENUMODEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_menu_model_get_item_attribute (GMenuModel* model, gint item_index, const gchar* attribute, const gchar* format_string);
// gboolean g_menu_model_get_item_attribute (::GMenuModel* model, gint item_index, const char* attribute, const char* format_string);
// IGNORE; not introspectable, varargs not supported

// GVariant* g_menu_model_get_item_attribute_value (GMenuModel* model, gint item_index, const gchar* attribute, const GVariantType* expected_type);
// ::GVariant* g_menu_model_get_item_attribute_value (::GMenuModel* model, gint item_index, const char* attribute, const ::GVariantType* expected_type);
GLib::Variant base::MenuModelBase::get_item_attribute_value (gint item_index, const std::string & attribute, const GLib::VariantType & expected_type) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GMenuModel* model, gint item_index, const char* attribute, const ::GVariantType* expected_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_model_get_item_attribute_value;
  auto expected_type_to_c = gi::unwrap (expected_type, gi::transfer_none, gi::direction_in);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  auto item_index_to_c = item_index;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()), (gint) (item_index_to_c), (const char*) (attribute_to_c), (const ::GVariantType*) (expected_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Variant base::MenuModelBase::get_item_attribute_value (gint item_index, const std::string & attribute) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GMenuModel* model, gint item_index, const char* attribute, const ::GVariantType* expected_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_model_get_item_attribute_value;
  auto expected_type_to_c = nullptr;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  auto item_index_to_c = item_index;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()), (gint) (item_index_to_c), (const char*) (attribute_to_c), (const ::GVariantType*) (expected_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GMenuModel* g_menu_model_get_item_link (GMenuModel* model, gint item_index, const gchar* link);
// ::GMenuModel* g_menu_model_get_item_link (::GMenuModel* model, gint item_index, const char* link);
Gio::MenuModel base::MenuModelBase::get_item_link (gint item_index, const std::string & link) noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::GMenuModel* model, gint item_index, const char* link);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_model_get_item_link;
  auto link_to_c = gi::unwrap (link, gi::transfer_none, gi::direction_in);
  auto item_index_to_c = item_index;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()), (gint) (item_index_to_c), (const char*) (link_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gint g_menu_model_get_n_items (GMenuModel* model);
// gint g_menu_model_get_n_items (::GMenuModel* model);
gint base::MenuModelBase::get_n_items () noexcept
{
  typedef gint (*call_wrap_t) (::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_model_get_n_items;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()));
  return _temp_ret;
}

// gboolean g_menu_model_is_mutable (GMenuModel* model);
// gboolean g_menu_model_is_mutable (::GMenuModel* model);
bool base::MenuModelBase::is_mutable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_model_is_mutable;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()));
  return _temp_ret;
}

// void g_menu_model_items_changed (GMenuModel* model, gint position, gint removed, gint added);
// void g_menu_model_items_changed (::GMenuModel* model, gint position, gint removed, gint added);
void base::MenuModelBase::items_changed (gint position, gint removed, gint added) noexcept
{
  typedef void (*call_wrap_t) (::GMenuModel* model, gint position, gint removed, gint added);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_model_items_changed;
  auto added_to_c = added;
  auto removed_to_c = removed;
  auto position_to_c = position;
  call_wrap_v ((::GMenuModel*) (gobj_()), (gint) (position_to_c), (gint) (removed_to_c), (gint) (added_to_c));
}

// GMenuAttributeIter* g_menu_model_iterate_item_attributes (GMenuModel* model, gint item_index);
// ::GMenuAttributeIter* g_menu_model_iterate_item_attributes (::GMenuModel* model, gint item_index);
Gio::MenuAttributeIter base::MenuModelBase::iterate_item_attributes (gint item_index) noexcept
{
  typedef ::GMenuAttributeIter* (*call_wrap_t) (::GMenuModel* model, gint item_index);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_model_iterate_item_attributes;
  auto item_index_to_c = item_index;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()), (gint) (item_index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GMenuLinkIter* g_menu_model_iterate_item_links (GMenuModel* model, gint item_index);
// ::GMenuLinkIter* g_menu_model_iterate_item_links (::GMenuModel* model, gint item_index);
Gio::MenuLinkIter base::MenuModelBase::iterate_item_links (gint item_index) noexcept
{
  typedef ::GMenuLinkIter* (*call_wrap_t) (::GMenuModel* model, gint item_index);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_model_iterate_item_links;
  auto item_index_to_c = item_index;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()), (gint) (item_index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/menumodel_extra_def_impl.hpp>)
#include <gio/menumodel_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/menumodel_extra_impl.hpp>)
#include <gio/menumodel_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void MenuModelClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GMenuModelClass *methods = (::GMenuModelClass *) class_struct;
  (void) methods;

  methods->get_item_attribute_value = (decltype (methods->get_item_attribute_value)) detail::method_wrapper<self, GLib::Variant (*) (gint item_index, const std::string & attribute, const GLib::VariantType & expected_type), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_item_attribute_value_>;
  methods->get_item_link = (decltype (methods->get_item_link)) detail::method_wrapper<self, Gio::MenuModel (*) (gint item_index, const std::string & link), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_item_link_>;
  methods->get_n_items = (decltype (methods->get_n_items)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_n_items_>;
  methods->is_mutable = (decltype (methods->is_mutable)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::is_mutable_>;
  methods->iterate_item_attributes = (decltype (methods->iterate_item_attributes)) detail::method_wrapper<self, Gio::MenuAttributeIter (*) (gint item_index), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::iterate_item_attributes_>;
  methods->iterate_item_links = (decltype (methods->iterate_item_links)) detail::method_wrapper<self, Gio::MenuLinkIter (*) (gint item_index), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::iterate_item_links_>;
}

// GVariant* MenuModel::get_item_attribute_value (GMenuModel* model, gint item_index, const gchar* attribute, const GVariantType* expected_type);
// ::GVariant* MenuModel::get_item_attribute_value (::GMenuModel* model, gint item_index, const char* attribute, const ::GVariantType* expected_type);
GLib::Variant MenuModelClass::get_item_attribute_value_ (gint item_index, const std::string & attribute, const GLib::VariantType & expected_type) noexcept
{
  if (!get_struct_()->get_item_attribute_value) return GLib::Variant{};
  typedef ::GVariant* (*call_wrap_t) (::GMenuModel* model, gint item_index, const char* attribute, const ::GVariantType* expected_type);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_item_attribute_value;
  auto expected_type_to_c = gi::unwrap (expected_type, gi::transfer_none, gi::direction_in);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  auto item_index_to_c = item_index;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()), (gint) (item_index_to_c), (const char*) (attribute_to_c), (const ::GVariantType*) (expected_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void MenuModel::get_item_attributes (GMenuModel* model, gint item_index, GHashTable** attributes);
// void MenuModel::get_item_attributes (::GMenuModel* model, gint item_index, ::GHashTable** attributes);
// SKIP; virtual-method out parameter not supported

// GMenuModel* MenuModel::get_item_link (GMenuModel* model, gint item_index, const gchar* link);
// ::GMenuModel* MenuModel::get_item_link (::GMenuModel* model, gint item_index, const char* link);
Gio::MenuModel MenuModelClass::get_item_link_ (gint item_index, const std::string & link) noexcept
{
  if (!get_struct_()->get_item_link) return Gio::MenuModel{};
  typedef ::GMenuModel* (*call_wrap_t) (::GMenuModel* model, gint item_index, const char* link);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_item_link;
  auto link_to_c = gi::unwrap (link, gi::transfer_none, gi::direction_in);
  auto item_index_to_c = item_index;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()), (gint) (item_index_to_c), (const char*) (link_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void MenuModel::get_item_links (GMenuModel* model, gint item_index, GHashTable** links);
// void MenuModel::get_item_links (::GMenuModel* model, gint item_index, ::GHashTable** links);
// SKIP; virtual-method out parameter not supported

// gint MenuModel::get_n_items (GMenuModel* model);
// gint MenuModel::get_n_items (::GMenuModel* model);
gint MenuModelClass::get_n_items_ () noexcept
{
  if (!get_struct_()->get_n_items) return gint{};
  typedef gint (*call_wrap_t) (::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_n_items;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()));
  return _temp_ret;
}

// gboolean MenuModel::is_mutable (GMenuModel* model);
// gboolean MenuModel::is_mutable (::GMenuModel* model);
bool MenuModelClass::is_mutable_ () noexcept
{
  if (!get_struct_()->is_mutable) return bool{};
  typedef gboolean (*call_wrap_t) (::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_mutable;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()));
  return _temp_ret;
}

// GMenuAttributeIter* MenuModel::iterate_item_attributes (GMenuModel* model, gint item_index);
// ::GMenuAttributeIter* MenuModel::iterate_item_attributes (::GMenuModel* model, gint item_index);
Gio::MenuAttributeIter MenuModelClass::iterate_item_attributes_ (gint item_index) noexcept
{
  if (!get_struct_()->iterate_item_attributes) return Gio::MenuAttributeIter{};
  typedef ::GMenuAttributeIter* (*call_wrap_t) (::GMenuModel* model, gint item_index);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->iterate_item_attributes;
  auto item_index_to_c = item_index;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()), (gint) (item_index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GMenuLinkIter* MenuModel::iterate_item_links (GMenuModel* model, gint item_index);
// ::GMenuLinkIter* MenuModel::iterate_item_links (::GMenuModel* model, gint item_index);
Gio::MenuLinkIter MenuModelClass::iterate_item_links_ (gint item_index) noexcept
{
  if (!get_struct_()->iterate_item_links) return Gio::MenuLinkIter{};
  typedef ::GMenuLinkIter* (*call_wrap_t) (::GMenuModel* model, gint item_index);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->iterate_item_links;
  auto item_index_to_c = item_index;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()), (gint) (item_index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
