// AUTO-GENERATED

#ifndef _GI_GIO_SETTINGSBACKEND_IMPL_HPP_
#define _GI_GIO_SETTINGSBACKEND_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// void g_settings_backend_flatten_tree (GTree* tree, gchar** path, const gchar*** keys, GVariant*** values);
// void g_settings_backend_flatten_tree (::GTree* tree, char** path, const char*** keys, ::GVariant*** values);
void base::SettingsBackendBase::flatten_tree (GLib::Tree tree, std::string & path, std::vector<std::string> & keys, std::vector<GLib::Variant> * values) noexcept
{
  typedef void (*call_wrap_t) (::GTree* tree, char** path, const char*** keys, ::GVariant*** values);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_backend_flatten_tree;
  ::GVariant** values_o {};
  const char** keys_o {};
  char* path_o {};
  auto tree_to_c = gi::unwrap (tree, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GTree*) (tree_to_c), (char**) (&path_o), (const char***) (&keys_o), (::GVariant***) (values ? &values_o : nullptr));
  if (values) *values = gi::detail::wrap_list<GLib::Variant> (values_o, gi::transfer_container);
  keys = gi::detail::wrap_list<std::string> (keys_o, gi::transfer_container);
  path = gi::wrap (path_o, gi::transfer_full, gi::direction_out);
}
std::tuple<std::string, std::vector<std::string>, std::vector<GLib::Variant>> base::SettingsBackendBase::flatten_tree (GLib::Tree tree) noexcept
{
  typedef void (*call_wrap_t) (::GTree* tree, char** path, const char*** keys, ::GVariant*** values);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_backend_flatten_tree;
  ::GVariant** values_o {};
  const char** keys_o {};
  char* path_o {};
  auto tree_to_c = gi::unwrap (tree, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GTree*) (tree_to_c), (char**) (&path_o), (const char***) (&keys_o), (::GVariant***) (&values_o));
  return std::make_tuple (gi::wrap (path_o, gi::transfer_full, gi::direction_out), gi::detail::wrap_list<std::string> (keys_o, gi::transfer_container), gi::detail::wrap_list<GLib::Variant> (values_o, gi::transfer_container));
}

// GSettingsBackend* g_settings_backend_get_default ();
// ::GSettingsBackend* g_settings_backend_get_default ();
Gio::SettingsBackend base::SettingsBackendBase::get_default () noexcept
{
  typedef ::GSettingsBackend* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_backend_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_settings_backend_changed (GSettingsBackend* backend, const gchar* key, gpointer origin_tag);
// void g_settings_backend_changed (::GSettingsBackend* backend, const char* key, void* origin_tag);
void base::SettingsBackendBase::changed (const std::string & key, void* origin_tag) noexcept
{
  typedef void (*call_wrap_t) (::GSettingsBackend* backend, const char* key, void* origin_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_backend_changed;
  auto origin_tag_to_c = origin_tag;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSettingsBackend*) (gobj_()), (const char*) (key_to_c), (void*) (origin_tag_to_c));
}

// void g_settings_backend_changed_tree (GSettingsBackend* backend, GTree* tree, gpointer origin_tag);
// void g_settings_backend_changed_tree (::GSettingsBackend* backend, ::GTree* tree, void* origin_tag);
void base::SettingsBackendBase::changed_tree (GLib::Tree tree, void* origin_tag) noexcept
{
  typedef void (*call_wrap_t) (::GSettingsBackend* backend, ::GTree* tree, void* origin_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_backend_changed_tree;
  auto origin_tag_to_c = origin_tag;
  auto tree_to_c = gi::unwrap (tree, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSettingsBackend*) (gobj_()), (::GTree*) (tree_to_c), (void*) (origin_tag_to_c));
}

// void g_settings_backend_keys_changed (GSettingsBackend* backend, const gchar* path, const gchar* const* items, gpointer origin_tag);
// void g_settings_backend_keys_changed (::GSettingsBackend* backend, const char* path, const char** items, void* origin_tag);
void base::SettingsBackendBase::keys_changed (const std::string & path, const std::vector<std::string> & items, void* origin_tag) noexcept
{
  typedef void (*call_wrap_t) (::GSettingsBackend* backend, const char* path, const char** items, void* origin_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_backend_keys_changed;
  auto origin_tag_to_c = origin_tag;
  auto items_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (items);
  auto items_w = unwrap (items_i, gi::transfer_none, direction_in);
  auto items_to_c = items_w.gobj_(false);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSettingsBackend*) (gobj_()), (const char*) (path_to_c), (const char**) (items_to_c), (void*) (origin_tag_to_c));
}

// void g_settings_backend_path_changed (GSettingsBackend* backend, const gchar* path, gpointer origin_tag);
// void g_settings_backend_path_changed (::GSettingsBackend* backend, const char* path, void* origin_tag);
void base::SettingsBackendBase::path_changed (const std::string & path, void* origin_tag) noexcept
{
  typedef void (*call_wrap_t) (::GSettingsBackend* backend, const char* path, void* origin_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_backend_path_changed;
  auto origin_tag_to_c = origin_tag;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSettingsBackend*) (gobj_()), (const char*) (path_to_c), (void*) (origin_tag_to_c));
}

// void g_settings_backend_path_writable_changed (GSettingsBackend* backend, const gchar* path);
// void g_settings_backend_path_writable_changed (::GSettingsBackend* backend, const char* path);
void base::SettingsBackendBase::path_writable_changed (const std::string & path) noexcept
{
  typedef void (*call_wrap_t) (::GSettingsBackend* backend, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_backend_path_writable_changed;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSettingsBackend*) (gobj_()), (const char*) (path_to_c));
}

// void g_settings_backend_writable_changed (GSettingsBackend* backend, const gchar* key);
// void g_settings_backend_writable_changed (::GSettingsBackend* backend, const char* key);
void base::SettingsBackendBase::writable_changed (const std::string & key) noexcept
{
  typedef void (*call_wrap_t) (::GSettingsBackend* backend, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_backend_writable_changed;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSettingsBackend*) (gobj_()), (const char*) (key_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/settingsbackend_extra_def_impl.hpp>)
#include <gio/settingsbackend_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/settingsbackend_extra_impl.hpp>)
#include <gio/settingsbackend_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void SettingsBackendClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GSettingsBackendClass *methods = (::GSettingsBackendClass *) class_struct;
  (void) methods;

  methods->get_writable = (decltype (methods->get_writable)) detail::method_wrapper<self, bool (*) (const std::string & key), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_writable_>;
  methods->read = (decltype (methods->read)) detail::method_wrapper<self, GLib::Variant (*) (const std::string & key, const GLib::VariantType & expected_type, gboolean default_value), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::read_>;
  methods->read_user_value = (decltype (methods->read_user_value)) detail::method_wrapper<self, GLib::Variant (*) (const std::string & key, const GLib::VariantType & expected_type), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::read_user_value_>;
  methods->reset = (decltype (methods->reset)) detail::method_wrapper<self, void (*) (const std::string & key, void* origin_tag), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::reset_>;
  methods->subscribe = (decltype (methods->subscribe)) detail::method_wrapper<self, void (*) (const std::string & name), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::subscribe_>;
  methods->sync = (decltype (methods->sync)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::sync_>;
  methods->unsubscribe = (decltype (methods->unsubscribe)) detail::method_wrapper<self, void (*) (const std::string & name), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::unsubscribe_>;
  methods->write = (decltype (methods->write)) detail::method_wrapper<self, bool (*) (const std::string & key, GLib::Variant value, void* origin_tag), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::write_>;
  methods->write_tree = (decltype (methods->write_tree)) detail::method_wrapper<self, bool (*) (GLib::Tree tree, void* origin_tag), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::write_tree_>;
}

// gboolean SettingsBackend::get_writable (GSettingsBackend* backend, const gchar* key);
// gboolean SettingsBackend::get_writable (::GSettingsBackend* backend, const char* key);
bool SettingsBackendClass::get_writable_ (const std::string & key) noexcept
{
  if (!get_struct_()->get_writable) return bool{};
  typedef gboolean (*call_wrap_t) (::GSettingsBackend* backend, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_writable;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettingsBackend*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// GVariant* SettingsBackend::read (GSettingsBackend* backend, const gchar* key, const GVariantType* expected_type, gboolean default_value);
// ::GVariant* SettingsBackend::read (::GSettingsBackend* backend, const char* key, const ::GVariantType* expected_type, gboolean default_value);
GLib::Variant SettingsBackendClass::read_ (const std::string & key, const GLib::VariantType & expected_type, gboolean default_value) noexcept
{
  if (!get_struct_()->read) return GLib::Variant{};
  typedef ::GVariant* (*call_wrap_t) (::GSettingsBackend* backend, const char* key, const ::GVariantType* expected_type, gboolean default_value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->read;
  auto default_value_to_c = default_value;
  auto expected_type_to_c = gi::unwrap (expected_type, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettingsBackend*) (gobj_()), (const char*) (key_to_c), (const ::GVariantType*) (expected_type_to_c), (gboolean) (default_value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GVariant* SettingsBackend::read_user_value (GSettingsBackend* backend, const gchar* key, const GVariantType* expected_type);
// ::GVariant* SettingsBackend::read_user_value (::GSettingsBackend* backend, const char* key, const ::GVariantType* expected_type);
GLib::Variant SettingsBackendClass::read_user_value_ (const std::string & key, const GLib::VariantType & expected_type) noexcept
{
  if (!get_struct_()->read_user_value) return GLib::Variant{};
  typedef ::GVariant* (*call_wrap_t) (::GSettingsBackend* backend, const char* key, const ::GVariantType* expected_type);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->read_user_value;
  auto expected_type_to_c = gi::unwrap (expected_type, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettingsBackend*) (gobj_()), (const char*) (key_to_c), (const ::GVariantType*) (expected_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void SettingsBackend::reset (GSettingsBackend* backend, const gchar* key, gpointer origin_tag);
// void SettingsBackend::reset (::GSettingsBackend* backend, const char* key, void* origin_tag);
void SettingsBackendClass::reset_ (const std::string & key, void* origin_tag) noexcept
{
  if (!get_struct_()->reset) return ;
  typedef void (*call_wrap_t) (::GSettingsBackend* backend, const char* key, void* origin_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->reset;
  auto origin_tag_to_c = origin_tag;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSettingsBackend*) (gobj_()), (const char*) (key_to_c), (void*) (origin_tag_to_c));
}

// void SettingsBackend::subscribe (GSettingsBackend* backend, const gchar* name);
// void SettingsBackend::subscribe (::GSettingsBackend* backend, const char* name);
void SettingsBackendClass::subscribe_ (const std::string & name) noexcept
{
  if (!get_struct_()->subscribe) return ;
  typedef void (*call_wrap_t) (::GSettingsBackend* backend, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->subscribe;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSettingsBackend*) (gobj_()), (const char*) (name_to_c));
}

// void SettingsBackend::sync (GSettingsBackend* backend);
// void SettingsBackend::sync (::GSettingsBackend* backend);
void SettingsBackendClass::sync_ () noexcept
{
  if (!get_struct_()->sync) return ;
  typedef void (*call_wrap_t) (::GSettingsBackend* backend);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->sync;
  call_wrap_v ((::GSettingsBackend*) (gobj_()));
}

// void SettingsBackend::unsubscribe (GSettingsBackend* backend, const gchar* name);
// void SettingsBackend::unsubscribe (::GSettingsBackend* backend, const char* name);
void SettingsBackendClass::unsubscribe_ (const std::string & name) noexcept
{
  if (!get_struct_()->unsubscribe) return ;
  typedef void (*call_wrap_t) (::GSettingsBackend* backend, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unsubscribe;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSettingsBackend*) (gobj_()), (const char*) (name_to_c));
}

// gboolean SettingsBackend::write (GSettingsBackend* backend, const gchar* key, GVariant* value, gpointer origin_tag);
// gboolean SettingsBackend::write (::GSettingsBackend* backend, const char* key, ::GVariant* value, void* origin_tag);
bool SettingsBackendClass::write_ (const std::string & key, GLib::Variant value, void* origin_tag) noexcept
{
  if (!get_struct_()->write) return bool{};
  typedef gboolean (*call_wrap_t) (::GSettingsBackend* backend, const char* key, ::GVariant* value, void* origin_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->write;
  auto origin_tag_to_c = origin_tag;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettingsBackend*) (gobj_()), (const char*) (key_to_c), (::GVariant*) (value_to_c), (void*) (origin_tag_to_c));
  return _temp_ret;
}

// gboolean SettingsBackend::write_tree (GSettingsBackend* backend, GTree* tree, gpointer origin_tag);
// gboolean SettingsBackend::write_tree (::GSettingsBackend* backend, ::GTree* tree, void* origin_tag);
bool SettingsBackendClass::write_tree_ (GLib::Tree tree, void* origin_tag) noexcept
{
  if (!get_struct_()->write_tree) return bool{};
  typedef gboolean (*call_wrap_t) (::GSettingsBackend* backend, ::GTree* tree, void* origin_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->write_tree;
  auto origin_tag_to_c = origin_tag;
  auto tree_to_c = gi::unwrap (tree, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettingsBackend*) (gobj_()), (::GTree*) (tree_to_c), (void*) (origin_tag_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
