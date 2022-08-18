// AUTO-GENERATED

#ifndef _GI_GTK_RECENTMANAGER_IMPL_HPP_
#define _GI_GTK_RECENTMANAGER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkRecentManager* gtk_recent_manager_new ();
// ::GtkRecentManager* gtk_recent_manager_new ();
Gtk::RecentManager base::RecentManagerBase::new_ () noexcept
{
  typedef ::GtkRecentManager* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_manager_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkRecentManager* gtk_recent_manager_get_default ();
// ::GtkRecentManager* gtk_recent_manager_get_default ();
Gtk::RecentManager base::RecentManagerBase::get_default () noexcept
{
  typedef ::GtkRecentManager* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_manager_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_recent_manager_add_full (GtkRecentManager* manager, const gchar* uri, const GtkRecentData* recent_data);
// gboolean gtk_recent_manager_add_full (::GtkRecentManager* manager, const char* uri, const ::GtkRecentData* recent_data);
bool base::RecentManagerBase::add_full (const std::string & uri, const Gtk::RecentData & recent_data) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentManager* manager, const char* uri, const ::GtkRecentData* recent_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_manager_add_full;
  auto recent_data_to_c = gi::unwrap (recent_data, gi::transfer_none, gi::direction_in);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), (const char*) (uri_to_c), (const ::GtkRecentData*) (recent_data_to_c));
  return _temp_ret;
}

// gboolean gtk_recent_manager_add_item (GtkRecentManager* manager, const gchar* uri);
// gboolean gtk_recent_manager_add_item (::GtkRecentManager* manager, const char* uri);
bool base::RecentManagerBase::add_item (const std::string & uri) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentManager* manager, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_manager_add_item;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), (const char*) (uri_to_c));
  return _temp_ret;
}

// GList* gtk_recent_manager_get_items (GtkRecentManager* manager);
// ::GList* gtk_recent_manager_get_items (::GtkRecentManager* manager);
std::vector<Gtk::RecentInfo> base::RecentManagerBase::get_items () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkRecentManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_manager_get_items;
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()));
  return gi::detail::wrap_list<Gtk::RecentInfo> (_temp_ret, gi::transfer_full);
}

// gboolean gtk_recent_manager_has_item (GtkRecentManager* manager, const gchar* uri);
// gboolean gtk_recent_manager_has_item (::GtkRecentManager* manager, const char* uri);
bool base::RecentManagerBase::has_item (const std::string & uri) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentManager* manager, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_manager_has_item;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), (const char*) (uri_to_c));
  return _temp_ret;
}

// GtkRecentInfo* gtk_recent_manager_lookup_item (GtkRecentManager* manager, const gchar* uri, GError ** error);
// ::GtkRecentInfo* gtk_recent_manager_lookup_item (::GtkRecentManager* manager, const char* uri, GError ** error);
Gtk::RecentInfo base::RecentManagerBase::lookup_item (const std::string & uri)
{
  typedef ::GtkRecentInfo* (*call_wrap_t) (::GtkRecentManager* manager, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_manager_lookup_item;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), (const char*) (uri_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gtk::RecentInfo base::RecentManagerBase::lookup_item (const std::string & uri, GLib::Error * _error) noexcept
{
  typedef ::GtkRecentInfo* (*call_wrap_t) (::GtkRecentManager* manager, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_manager_lookup_item;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), (const char*) (uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gtk_recent_manager_move_item (GtkRecentManager* manager, const gchar* uri, const gchar* new_uri, GError ** error);
// gboolean gtk_recent_manager_move_item (::GtkRecentManager* manager, const char* uri, const char* new_uri, GError ** error);
bool base::RecentManagerBase::move_item (const std::string & uri, const std::string & new_uri)
{
  typedef gboolean (*call_wrap_t) (::GtkRecentManager* manager, const char* uri, const char* new_uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_manager_move_item;
  auto new_uri_to_c = gi::unwrap (new_uri, gi::transfer_none, gi::direction_in);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), (const char*) (uri_to_c), (const char*) (new_uri_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::RecentManagerBase::move_item (const std::string & uri)
{
  typedef gboolean (*call_wrap_t) (::GtkRecentManager* manager, const char* uri, const char* new_uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_manager_move_item;
  auto new_uri_to_c = nullptr;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), (const char*) (uri_to_c), (const char*) (new_uri_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::RecentManagerBase::move_item (const std::string & uri, const std::string & new_uri, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentManager* manager, const char* uri, const char* new_uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_manager_move_item;
  auto new_uri_to_c = gi::unwrap (new_uri, gi::transfer_none, gi::direction_in);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), (const char*) (uri_to_c), (const char*) (new_uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::RecentManagerBase::move_item (const std::string & uri, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentManager* manager, const char* uri, const char* new_uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_manager_move_item;
  auto new_uri_to_c = nullptr;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), (const char*) (uri_to_c), (const char*) (new_uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gint gtk_recent_manager_purge_items (GtkRecentManager* manager, GError ** error);
// gint gtk_recent_manager_purge_items (::GtkRecentManager* manager, GError ** error);
gint base::RecentManagerBase::purge_items ()
{
  typedef gint (*call_wrap_t) (::GtkRecentManager* manager, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_manager_purge_items;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint base::RecentManagerBase::purge_items (GLib::Error * _error) noexcept
{
  typedef gint (*call_wrap_t) (::GtkRecentManager* manager, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_manager_purge_items;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean gtk_recent_manager_remove_item (GtkRecentManager* manager, const gchar* uri, GError ** error);
// gboolean gtk_recent_manager_remove_item (::GtkRecentManager* manager, const char* uri, GError ** error);
bool base::RecentManagerBase::remove_item (const std::string & uri)
{
  typedef gboolean (*call_wrap_t) (::GtkRecentManager* manager, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_manager_remove_item;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), (const char*) (uri_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::RecentManagerBase::remove_item (const std::string & uri, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentManager* manager, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_manager_remove_item;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), (const char*) (uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/recentmanager_extra_def_impl.hpp>)
#include <gtk/recentmanager_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/recentmanager_extra_impl.hpp>)
#include <gtk/recentmanager_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void RecentManagerClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkRecentManagerClass *methods = (::GtkRecentManagerClass *) class_struct;
  (void) methods;

  methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::changed_>;
}

// void RecentManager::changed (GtkRecentManager* manager);
// void RecentManager::changed (::GtkRecentManager* manager);
void RecentManagerClass::changed_ () noexcept
{
  if (!get_struct_()->changed) return ;
  typedef void (*call_wrap_t) (::GtkRecentManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  call_wrap_v ((::GtkRecentManager*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
