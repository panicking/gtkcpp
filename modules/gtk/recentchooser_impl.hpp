// AUTO-GENERATED

#ifndef _GI_GTK_RECENTCHOOSER_IMPL_HPP_
#define _GI_GTK_RECENTCHOOSER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_recent_chooser_add_filter (GtkRecentChooser* chooser, GtkRecentFilter* filter);
// void gtk_recent_chooser_add_filter (::GtkRecentChooser* chooser, ::GtkRecentFilter* filter);
void base::RecentChooserBase::add_filter (Gtk::RecentFilter filter) noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentChooser* chooser, ::GtkRecentFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_add_filter;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkRecentChooser*) (gobj_()), (::GtkRecentFilter*) (filter_to_c));
}

// GtkRecentInfo* gtk_recent_chooser_get_current_item (GtkRecentChooser* chooser);
// ::GtkRecentInfo* gtk_recent_chooser_get_current_item (::GtkRecentChooser* chooser);
Gtk::RecentInfo base::RecentChooserBase::get_current_item () noexcept
{
  typedef ::GtkRecentInfo* (*call_wrap_t) (::GtkRecentChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_get_current_item;
  auto _temp_ret = call_wrap_v ((::GtkRecentChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* gtk_recent_chooser_get_current_uri (GtkRecentChooser* chooser);
// char* gtk_recent_chooser_get_current_uri (::GtkRecentChooser* chooser);
std::string base::RecentChooserBase::get_current_uri () noexcept
{
  typedef char* (*call_wrap_t) (::GtkRecentChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_get_current_uri;
  auto _temp_ret = call_wrap_v ((::GtkRecentChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkRecentFilter* gtk_recent_chooser_get_filter (GtkRecentChooser* chooser);
// ::GtkRecentFilter* gtk_recent_chooser_get_filter (::GtkRecentChooser* chooser);
Gtk::RecentFilter base::RecentChooserBase::get_filter () noexcept
{
  typedef ::GtkRecentFilter* (*call_wrap_t) (::GtkRecentChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_get_filter;
  auto _temp_ret = call_wrap_v ((::GtkRecentChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GList* gtk_recent_chooser_get_items (GtkRecentChooser* chooser);
// ::GList* gtk_recent_chooser_get_items (::GtkRecentChooser* chooser);
std::vector<Gtk::RecentInfo> base::RecentChooserBase::get_items () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkRecentChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_get_items;
  auto _temp_ret = call_wrap_v ((::GtkRecentChooser*) (gobj_()));
  return gi::detail::wrap_list<Gtk::RecentInfo> (_temp_ret, gi::transfer_full);
}

// gint gtk_recent_chooser_get_limit (GtkRecentChooser* chooser);
// gint gtk_recent_chooser_get_limit (::GtkRecentChooser* chooser);
gint base::RecentChooserBase::get_limit () noexcept
{
  typedef gint (*call_wrap_t) (::GtkRecentChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_get_limit;
  auto _temp_ret = call_wrap_v ((::GtkRecentChooser*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_recent_chooser_get_local_only (GtkRecentChooser* chooser);
// gboolean gtk_recent_chooser_get_local_only (::GtkRecentChooser* chooser);
bool base::RecentChooserBase::get_local_only () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_get_local_only;
  auto _temp_ret = call_wrap_v ((::GtkRecentChooser*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_recent_chooser_get_select_multiple (GtkRecentChooser* chooser);
// gboolean gtk_recent_chooser_get_select_multiple (::GtkRecentChooser* chooser);
bool base::RecentChooserBase::get_select_multiple () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_get_select_multiple;
  auto _temp_ret = call_wrap_v ((::GtkRecentChooser*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_recent_chooser_get_show_icons (GtkRecentChooser* chooser);
// gboolean gtk_recent_chooser_get_show_icons (::GtkRecentChooser* chooser);
bool base::RecentChooserBase::get_show_icons () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_get_show_icons;
  auto _temp_ret = call_wrap_v ((::GtkRecentChooser*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_recent_chooser_get_show_not_found (GtkRecentChooser* chooser);
// gboolean gtk_recent_chooser_get_show_not_found (::GtkRecentChooser* chooser);
bool base::RecentChooserBase::get_show_not_found () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_get_show_not_found;
  auto _temp_ret = call_wrap_v ((::GtkRecentChooser*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_recent_chooser_get_show_private (GtkRecentChooser* chooser);
// gboolean gtk_recent_chooser_get_show_private (::GtkRecentChooser* chooser);
bool base::RecentChooserBase::get_show_private () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_get_show_private;
  auto _temp_ret = call_wrap_v ((::GtkRecentChooser*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_recent_chooser_get_show_tips (GtkRecentChooser* chooser);
// gboolean gtk_recent_chooser_get_show_tips (::GtkRecentChooser* chooser);
bool base::RecentChooserBase::get_show_tips () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_get_show_tips;
  auto _temp_ret = call_wrap_v ((::GtkRecentChooser*) (gobj_()));
  return _temp_ret;
}

// GtkRecentSortType gtk_recent_chooser_get_sort_type (GtkRecentChooser* chooser);
// ::GtkRecentSortType gtk_recent_chooser_get_sort_type (::GtkRecentChooser* chooser);
Gtk::RecentSortType base::RecentChooserBase::get_sort_type () noexcept
{
  typedef ::GtkRecentSortType (*call_wrap_t) (::GtkRecentChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_get_sort_type;
  auto _temp_ret = call_wrap_v ((::GtkRecentChooser*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gchar** gtk_recent_chooser_get_uris (GtkRecentChooser* chooser, gsize* length);
// char** gtk_recent_chooser_get_uris (::GtkRecentChooser* chooser, gsize* length);
std::vector<std::string> base::RecentChooserBase::get_uris (gsize * length) noexcept
{
  typedef char** (*call_wrap_t) (::GtkRecentChooser* chooser, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_get_uris;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentChooser*) (gobj_()), (gsize*) (length ? &length_o : nullptr));
  if (length) *length = length_o;
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::tuple<std::vector<std::string>, gsize> base::RecentChooserBase::get_uris () noexcept
{
  typedef char** (*call_wrap_t) (::GtkRecentChooser* chooser, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_get_uris;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentChooser*) (gobj_()), (gsize*) (&length_o));
  return std::make_tuple (gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full), length_o);
}

// GSList* gtk_recent_chooser_list_filters (GtkRecentChooser* chooser);
// ::GSList* gtk_recent_chooser_list_filters (::GtkRecentChooser* chooser);
std::vector<Gtk::RecentFilter> base::RecentChooserBase::list_filters () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::GtkRecentChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_list_filters;
  auto _temp_ret = call_wrap_v ((::GtkRecentChooser*) (gobj_()));
  return gi::detail::wrap_list<Gtk::RecentFilter> (_temp_ret, gi::transfer_container);
}

// void gtk_recent_chooser_remove_filter (GtkRecentChooser* chooser, GtkRecentFilter* filter);
// void gtk_recent_chooser_remove_filter (::GtkRecentChooser* chooser, ::GtkRecentFilter* filter);
void base::RecentChooserBase::remove_filter (Gtk::RecentFilter filter) noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentChooser* chooser, ::GtkRecentFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_remove_filter;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkRecentChooser*) (gobj_()), (::GtkRecentFilter*) (filter_to_c));
}

// void gtk_recent_chooser_select_all (GtkRecentChooser* chooser);
// void gtk_recent_chooser_select_all (::GtkRecentChooser* chooser);
void base::RecentChooserBase::select_all () noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_select_all;
  call_wrap_v ((::GtkRecentChooser*) (gobj_()));
}

// gboolean gtk_recent_chooser_select_uri (GtkRecentChooser* chooser, const gchar* uri, GError ** error);
// gboolean gtk_recent_chooser_select_uri (::GtkRecentChooser* chooser, const char* uri, GError ** error);
bool base::RecentChooserBase::select_uri (const std::string & uri)
{
  typedef gboolean (*call_wrap_t) (::GtkRecentChooser* chooser, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_select_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkRecentChooser*) (gobj_()), (const char*) (uri_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::RecentChooserBase::select_uri (const std::string & uri, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentChooser* chooser, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_select_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentChooser*) (gobj_()), (const char*) (uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean gtk_recent_chooser_set_current_uri (GtkRecentChooser* chooser, const gchar* uri, GError ** error);
// gboolean gtk_recent_chooser_set_current_uri (::GtkRecentChooser* chooser, const char* uri, GError ** error);
bool base::RecentChooserBase::set_current_uri (const std::string & uri)
{
  typedef gboolean (*call_wrap_t) (::GtkRecentChooser* chooser, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_set_current_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkRecentChooser*) (gobj_()), (const char*) (uri_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::RecentChooserBase::set_current_uri (const std::string & uri, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentChooser* chooser, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_set_current_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentChooser*) (gobj_()), (const char*) (uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void gtk_recent_chooser_set_filter (GtkRecentChooser* chooser, GtkRecentFilter* filter);
// void gtk_recent_chooser_set_filter (::GtkRecentChooser* chooser, ::GtkRecentFilter* filter);
void base::RecentChooserBase::set_filter (Gtk::RecentFilter filter) noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentChooser* chooser, ::GtkRecentFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_set_filter;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkRecentChooser*) (gobj_()), (::GtkRecentFilter*) (filter_to_c));
}
void base::RecentChooserBase::set_filter () noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentChooser* chooser, ::GtkRecentFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_set_filter;
  auto filter_to_c = nullptr;
  call_wrap_v ((::GtkRecentChooser*) (gobj_()), (::GtkRecentFilter*) (filter_to_c));
}

// void gtk_recent_chooser_set_limit (GtkRecentChooser* chooser, gint limit);
// void gtk_recent_chooser_set_limit (::GtkRecentChooser* chooser, gint limit);
void base::RecentChooserBase::set_limit (gint limit) noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentChooser* chooser, gint limit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_set_limit;
  auto limit_to_c = limit;
  call_wrap_v ((::GtkRecentChooser*) (gobj_()), (gint) (limit_to_c));
}

// void gtk_recent_chooser_set_local_only (GtkRecentChooser* chooser, gboolean local_only);
// void gtk_recent_chooser_set_local_only (::GtkRecentChooser* chooser, gboolean local_only);
void base::RecentChooserBase::set_local_only (gboolean local_only) noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentChooser* chooser, gboolean local_only);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_set_local_only;
  auto local_only_to_c = local_only;
  call_wrap_v ((::GtkRecentChooser*) (gobj_()), (gboolean) (local_only_to_c));
}

// void gtk_recent_chooser_set_select_multiple (GtkRecentChooser* chooser, gboolean select_multiple);
// void gtk_recent_chooser_set_select_multiple (::GtkRecentChooser* chooser, gboolean select_multiple);
void base::RecentChooserBase::set_select_multiple (gboolean select_multiple) noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentChooser* chooser, gboolean select_multiple);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_set_select_multiple;
  auto select_multiple_to_c = select_multiple;
  call_wrap_v ((::GtkRecentChooser*) (gobj_()), (gboolean) (select_multiple_to_c));
}

// void gtk_recent_chooser_set_show_icons (GtkRecentChooser* chooser, gboolean show_icons);
// void gtk_recent_chooser_set_show_icons (::GtkRecentChooser* chooser, gboolean show_icons);
void base::RecentChooserBase::set_show_icons (gboolean show_icons) noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentChooser* chooser, gboolean show_icons);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_set_show_icons;
  auto show_icons_to_c = show_icons;
  call_wrap_v ((::GtkRecentChooser*) (gobj_()), (gboolean) (show_icons_to_c));
}

// void gtk_recent_chooser_set_show_not_found (GtkRecentChooser* chooser, gboolean show_not_found);
// void gtk_recent_chooser_set_show_not_found (::GtkRecentChooser* chooser, gboolean show_not_found);
void base::RecentChooserBase::set_show_not_found (gboolean show_not_found) noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentChooser* chooser, gboolean show_not_found);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_set_show_not_found;
  auto show_not_found_to_c = show_not_found;
  call_wrap_v ((::GtkRecentChooser*) (gobj_()), (gboolean) (show_not_found_to_c));
}

// void gtk_recent_chooser_set_show_private (GtkRecentChooser* chooser, gboolean show_private);
// void gtk_recent_chooser_set_show_private (::GtkRecentChooser* chooser, gboolean show_private);
void base::RecentChooserBase::set_show_private (gboolean show_private) noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentChooser* chooser, gboolean show_private);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_set_show_private;
  auto show_private_to_c = show_private;
  call_wrap_v ((::GtkRecentChooser*) (gobj_()), (gboolean) (show_private_to_c));
}

// void gtk_recent_chooser_set_show_tips (GtkRecentChooser* chooser, gboolean show_tips);
// void gtk_recent_chooser_set_show_tips (::GtkRecentChooser* chooser, gboolean show_tips);
void base::RecentChooserBase::set_show_tips (gboolean show_tips) noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentChooser* chooser, gboolean show_tips);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_set_show_tips;
  auto show_tips_to_c = show_tips;
  call_wrap_v ((::GtkRecentChooser*) (gobj_()), (gboolean) (show_tips_to_c));
}

// void gtk_recent_chooser_set_sort_func (GtkRecentChooser* chooser, GtkRecentSortFunc sort_func, gpointer sort_data, GDestroyNotify data_destroy);
// void gtk_recent_chooser_set_sort_func (::GtkRecentChooser* chooser, Gtk::RecentSortFunc::cfunction_type sort_func, void* sort_data, GLib::DestroyNotify::cfunction_type data_destroy);
void base::RecentChooserBase::set_sort_func (Gtk::RecentSortFunc sort_func) noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentChooser* chooser, Gtk::RecentSortFunc::cfunction_type sort_func, void* sort_data, GLib::DestroyNotify::cfunction_type data_destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_set_sort_func;
  auto sort_func_wrap_ = sort_func ? unwrap (std::move (sort_func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkRecentChooser*) (gobj_()), (Gtk::RecentSortFunc::cfunction_type) (sort_func_wrap_ ? &sort_func_wrap_->wrapper : nullptr), (void*) (sort_func_wrap_), (GLib::DestroyNotify::cfunction_type) (sort_func_wrap_ ? &sort_func_wrap_->destroy : nullptr));
}

// void gtk_recent_chooser_set_sort_type (GtkRecentChooser* chooser, GtkRecentSortType sort_type);
// void gtk_recent_chooser_set_sort_type (::GtkRecentChooser* chooser, ::GtkRecentSortType sort_type);
void base::RecentChooserBase::set_sort_type (Gtk::RecentSortType sort_type) noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentChooser* chooser, ::GtkRecentSortType sort_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_set_sort_type;
  auto sort_type_to_c = gi::unwrap (sort_type);
  call_wrap_v ((::GtkRecentChooser*) (gobj_()), (::GtkRecentSortType) (sort_type_to_c));
}

// void gtk_recent_chooser_unselect_all (GtkRecentChooser* chooser);
// void gtk_recent_chooser_unselect_all (::GtkRecentChooser* chooser);
void base::RecentChooserBase::unselect_all () noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_unselect_all;
  call_wrap_v ((::GtkRecentChooser*) (gobj_()));
}

// void gtk_recent_chooser_unselect_uri (GtkRecentChooser* chooser, const gchar* uri);
// void gtk_recent_chooser_unselect_uri (::GtkRecentChooser* chooser, const char* uri);
void base::RecentChooserBase::unselect_uri (const std::string & uri) noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentChooser* chooser, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_unselect_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkRecentChooser*) (gobj_()), (const char*) (uri_to_c));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/recentchooser_extra_def_impl.hpp>)
#include <gtk/recentchooser_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/recentchooser_extra_impl.hpp>)
#include <gtk/recentchooser_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void RecentChooserIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GtkRecentChooserIface *methods = (::GtkRecentChooserIface *) interface_struct;
  (void) methods;

  methods->add_filter = (decltype (methods->add_filter)) detail::method_wrapper<self, void (*) (Gtk::RecentFilter filter), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::add_filter_>;
  methods->get_current_uri = (decltype (methods->get_current_uri)) detail::method_wrapper<self, std::string (*) (), gi::transfer_full_t>::wrapper<&self::get_current_uri_>;
  methods->item_activated = (decltype (methods->item_activated)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::item_activated_>;
  methods->remove_filter = (decltype (methods->remove_filter)) detail::method_wrapper<self, void (*) (Gtk::RecentFilter filter), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::remove_filter_>;
  methods->select_all = (decltype (methods->select_all)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::select_all_>;
  methods->selection_changed = (decltype (methods->selection_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::selection_changed_>;
  methods->unselect_all = (decltype (methods->unselect_all)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::unselect_all_>;
  methods->unselect_uri = (decltype (methods->unselect_uri)) detail::method_wrapper<self, void (*) (const std::string & uri), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::unselect_uri_>;
}

// void RecentChooser::add_filter (GtkRecentChooser* chooser, GtkRecentFilter* filter);
// void RecentChooser::add_filter (::GtkRecentChooser* chooser, ::GtkRecentFilter* filter);
void RecentChooserIfaceClassImpl::add_filter_ (Gtk::RecentFilter filter) noexcept
{
  if (!get_struct_()->add_filter) return ;
  typedef void (*call_wrap_t) (::GtkRecentChooser* chooser, ::GtkRecentFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->add_filter;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkRecentChooser*) (gobj_()), (::GtkRecentFilter*) (filter_to_c));
}

// gchar* RecentChooser::get_current_uri (GtkRecentChooser* chooser);
// char* RecentChooser::get_current_uri (::GtkRecentChooser* chooser);
std::string RecentChooserIfaceClassImpl::get_current_uri_ () noexcept
{
  if (!get_struct_()->get_current_uri) return std::string{};
  typedef char* (*call_wrap_t) (::GtkRecentChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_current_uri;
  auto _temp_ret = call_wrap_v ((::GtkRecentChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GList* RecentChooser::get_items (GtkRecentChooser* chooser);
// ::GList* RecentChooser::get_items (::GtkRecentChooser* chooser);
// SKIP; container return not supported

// void RecentChooser::item_activated (GtkRecentChooser* chooser);
// void RecentChooser::item_activated (::GtkRecentChooser* chooser);
void RecentChooserIfaceClassImpl::item_activated_ () noexcept
{
  if (!get_struct_()->item_activated) return ;
  typedef void (*call_wrap_t) (::GtkRecentChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->item_activated;
  call_wrap_v ((::GtkRecentChooser*) (gobj_()));
}

// GSList* RecentChooser::list_filters (GtkRecentChooser* chooser);
// ::GSList* RecentChooser::list_filters (::GtkRecentChooser* chooser);
// SKIP; container return not supported

// void RecentChooser::remove_filter (GtkRecentChooser* chooser, GtkRecentFilter* filter);
// void RecentChooser::remove_filter (::GtkRecentChooser* chooser, ::GtkRecentFilter* filter);
void RecentChooserIfaceClassImpl::remove_filter_ (Gtk::RecentFilter filter) noexcept
{
  if (!get_struct_()->remove_filter) return ;
  typedef void (*call_wrap_t) (::GtkRecentChooser* chooser, ::GtkRecentFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->remove_filter;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkRecentChooser*) (gobj_()), (::GtkRecentFilter*) (filter_to_c));
}

// void RecentChooser::select_all (GtkRecentChooser* chooser);
// void RecentChooser::select_all (::GtkRecentChooser* chooser);
void RecentChooserIfaceClassImpl::select_all_ () noexcept
{
  if (!get_struct_()->select_all) return ;
  typedef void (*call_wrap_t) (::GtkRecentChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->select_all;
  call_wrap_v ((::GtkRecentChooser*) (gobj_()));
}

// gboolean RecentChooser::select_uri (GtkRecentChooser* chooser, const gchar* uri, GError ** error);
// gboolean RecentChooser::select_uri (::GtkRecentChooser* chooser, const char* uri, GError ** error);
// SKIP; callee GError not supported

// void RecentChooser::selection_changed (GtkRecentChooser* chooser);
// void RecentChooser::selection_changed (::GtkRecentChooser* chooser);
void RecentChooserIfaceClassImpl::selection_changed_ () noexcept
{
  if (!get_struct_()->selection_changed) return ;
  typedef void (*call_wrap_t) (::GtkRecentChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->selection_changed;
  call_wrap_v ((::GtkRecentChooser*) (gobj_()));
}

// gboolean RecentChooser::set_current_uri (GtkRecentChooser* chooser, const gchar* uri, GError ** error);
// gboolean RecentChooser::set_current_uri (::GtkRecentChooser* chooser, const char* uri, GError ** error);
// SKIP; callee GError not supported

// void RecentChooser::set_sort_func (GtkRecentChooser* chooser, GtkRecentSortFunc sort_func, gpointer sort_data, GDestroyNotify data_destroy);
// void RecentChooser::set_sort_func (::GtkRecentChooser* chooser, Gtk::RecentSortFunc::cfunction_type sort_func, void* sort_data, GLib::DestroyNotify::cfunction_type data_destroy);
// SKIP; virtual-method callback parameter not supported, virtual-method callback parameter not supported

// void RecentChooser::unselect_all (GtkRecentChooser* chooser);
// void RecentChooser::unselect_all (::GtkRecentChooser* chooser);
void RecentChooserIfaceClassImpl::unselect_all_ () noexcept
{
  if (!get_struct_()->unselect_all) return ;
  typedef void (*call_wrap_t) (::GtkRecentChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unselect_all;
  call_wrap_v ((::GtkRecentChooser*) (gobj_()));
}

// void RecentChooser::unselect_uri (GtkRecentChooser* chooser, const gchar* uri);
// void RecentChooser::unselect_uri (::GtkRecentChooser* chooser, const char* uri);
void RecentChooserIfaceClassImpl::unselect_uri_ (const std::string & uri) noexcept
{
  if (!get_struct_()->unselect_uri) return ;
  typedef void (*call_wrap_t) (::GtkRecentChooser* chooser, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unselect_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkRecentChooser*) (gobj_()), (const char*) (uri_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
