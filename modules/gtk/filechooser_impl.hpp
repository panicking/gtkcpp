// AUTO-GENERATED

#ifndef _GI_GTK_FILECHOOSER_IMPL_HPP_
#define _GI_GTK_FILECHOOSER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_file_chooser_add_choice (GtkFileChooser* chooser, const char* id, const char* label, const char** options, const char** option_labels);
// void gtk_file_chooser_add_choice (::GtkFileChooser* chooser, const char* id, const char* label, const char** options, const char** option_labels);
void base::FileChooserBase::add_choice (const std::string & id, const std::string & label, const std::vector<std::string> & options, const std::vector<std::string> & option_labels) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, const char* id, const char* label, const char** options, const char** option_labels);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_add_choice;
  auto option_labels_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (option_labels);
  auto option_labels_w = unwrap (option_labels_i, gi::transfer_none, direction_in);
  auto option_labels_to_c = option_labels_w.gobj_(false);
  auto options_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (options);
  auto options_w = unwrap (options_i, gi::transfer_none, direction_in);
  auto options_to_c = options_w.gobj_(false);
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto id_to_c = gi::unwrap (id, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (id_to_c), (const char*) (label_to_c), (const char**) (options_to_c), (const char**) (option_labels_to_c));
}

// void gtk_file_chooser_add_filter (GtkFileChooser* chooser, GtkFileFilter* filter);
// void gtk_file_chooser_add_filter (::GtkFileChooser* chooser, ::GtkFileFilter* filter);
void base::FileChooserBase::add_filter (Gtk::FileFilter filter) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, ::GtkFileFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_add_filter;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GtkFileFilter*) (filter_to_c));
}

// gboolean gtk_file_chooser_add_shortcut_folder (GtkFileChooser* chooser, const char* folder, GError ** error);
// gboolean gtk_file_chooser_add_shortcut_folder (::GtkFileChooser* chooser, const char* folder, GError ** error);
bool base::FileChooserBase::add_shortcut_folder (const std::string & folder)
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, const char* folder, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_add_shortcut_folder;
  auto folder_to_c = gi::unwrap (folder, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (folder_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileChooserBase::add_shortcut_folder (const std::string & folder, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, const char* folder, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_add_shortcut_folder;
  auto folder_to_c = gi::unwrap (folder, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (folder_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean gtk_file_chooser_add_shortcut_folder_uri (GtkFileChooser* chooser, const char* uri, GError ** error);
// gboolean gtk_file_chooser_add_shortcut_folder_uri (::GtkFileChooser* chooser, const char* uri, GError ** error);
bool base::FileChooserBase::add_shortcut_folder_uri (const std::string & uri)
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_add_shortcut_folder_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (uri_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileChooserBase::add_shortcut_folder_uri (const std::string & uri, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_add_shortcut_folder_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// GtkFileChooserAction gtk_file_chooser_get_action (GtkFileChooser* chooser);
// ::GtkFileChooserAction gtk_file_chooser_get_action (::GtkFileChooser* chooser);
Gtk::FileChooserAction base::FileChooserBase::get_action () noexcept
{
  typedef ::GtkFileChooserAction (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_action;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const char* gtk_file_chooser_get_choice (GtkFileChooser* chooser, const char* id);
// const char* gtk_file_chooser_get_choice (::GtkFileChooser* chooser, const char* id);
std::string base::FileChooserBase::get_choice (const std::string & id) noexcept
{
  typedef const char* (*call_wrap_t) (::GtkFileChooser* chooser, const char* id);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_choice;
  auto id_to_c = gi::unwrap (id, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_file_chooser_get_create_folders (GtkFileChooser* chooser);
// gboolean gtk_file_chooser_get_create_folders (::GtkFileChooser* chooser);
bool base::FileChooserBase::get_create_folders () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_create_folders;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return _temp_ret;
}

// gchar* gtk_file_chooser_get_current_folder (GtkFileChooser* chooser);
// char* gtk_file_chooser_get_current_folder (::GtkFileChooser* chooser);
std::string base::FileChooserBase::get_current_folder () noexcept
{
  typedef char* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_current_folder;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFile* gtk_file_chooser_get_current_folder_file (GtkFileChooser* chooser);
// ::GFile* gtk_file_chooser_get_current_folder_file (::GtkFileChooser* chooser);
Gio::File base::FileChooserBase::get_current_folder_file () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_current_folder_file;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* gtk_file_chooser_get_current_folder_uri (GtkFileChooser* chooser);
// char* gtk_file_chooser_get_current_folder_uri (::GtkFileChooser* chooser);
std::string base::FileChooserBase::get_current_folder_uri () noexcept
{
  typedef char* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_current_folder_uri;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* gtk_file_chooser_get_current_name (GtkFileChooser* chooser);
// char* gtk_file_chooser_get_current_name (::GtkFileChooser* chooser);
std::string base::FileChooserBase::get_current_name () noexcept
{
  typedef char* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_current_name;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gtk_file_chooser_get_do_overwrite_confirmation (GtkFileChooser* chooser);
// gboolean gtk_file_chooser_get_do_overwrite_confirmation (::GtkFileChooser* chooser);
bool base::FileChooserBase::get_do_overwrite_confirmation () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_do_overwrite_confirmation;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* gtk_file_chooser_get_extra_widget (GtkFileChooser* chooser);
// ::GtkWidget* gtk_file_chooser_get_extra_widget (::GtkFileChooser* chooser);
Gtk::Widget base::FileChooserBase::get_extra_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_extra_widget;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GFile* gtk_file_chooser_get_file (GtkFileChooser* chooser);
// ::GFile* gtk_file_chooser_get_file (::GtkFileChooser* chooser);
Gio::File base::FileChooserBase::get_file () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_file;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* gtk_file_chooser_get_filename (GtkFileChooser* chooser);
// char* gtk_file_chooser_get_filename (::GtkFileChooser* chooser);
std::string base::FileChooserBase::get_filename () noexcept
{
  typedef char* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_filename;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSList* gtk_file_chooser_get_filenames (GtkFileChooser* chooser);
// ::GSList* gtk_file_chooser_get_filenames (::GtkFileChooser* chooser);
std::vector<std::string> base::FileChooserBase::get_filenames () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_filenames;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// GSList* gtk_file_chooser_get_files (GtkFileChooser* chooser);
// ::GSList* gtk_file_chooser_get_files (::GtkFileChooser* chooser);
std::vector<Gio::File> base::FileChooserBase::get_files () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_files;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::detail::wrap_list<Gio::File> (_temp_ret, gi::transfer_full);
}

// GtkFileFilter* gtk_file_chooser_get_filter (GtkFileChooser* chooser);
// ::GtkFileFilter* gtk_file_chooser_get_filter (::GtkFileChooser* chooser);
Gtk::FileFilter base::FileChooserBase::get_filter () noexcept
{
  typedef ::GtkFileFilter* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_filter;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_file_chooser_get_local_only (GtkFileChooser* chooser);
// gboolean gtk_file_chooser_get_local_only (::GtkFileChooser* chooser);
bool base::FileChooserBase::get_local_only () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_local_only;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return _temp_ret;
}

// GFile* gtk_file_chooser_get_preview_file (GtkFileChooser* chooser);
// ::GFile* gtk_file_chooser_get_preview_file (::GtkFileChooser* chooser);
Gio::File base::FileChooserBase::get_preview_file () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_preview_file;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* gtk_file_chooser_get_preview_filename (GtkFileChooser* chooser);
// char* gtk_file_chooser_get_preview_filename (::GtkFileChooser* chooser);
std::string base::FileChooserBase::get_preview_filename () noexcept
{
  typedef char* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_preview_filename;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* gtk_file_chooser_get_preview_uri (GtkFileChooser* chooser);
// char* gtk_file_chooser_get_preview_uri (::GtkFileChooser* chooser);
std::string base::FileChooserBase::get_preview_uri () noexcept
{
  typedef char* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_preview_uri;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkWidget* gtk_file_chooser_get_preview_widget (GtkFileChooser* chooser);
// ::GtkWidget* gtk_file_chooser_get_preview_widget (::GtkFileChooser* chooser);
Gtk::Widget base::FileChooserBase::get_preview_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_preview_widget;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_file_chooser_get_preview_widget_active (GtkFileChooser* chooser);
// gboolean gtk_file_chooser_get_preview_widget_active (::GtkFileChooser* chooser);
bool base::FileChooserBase::get_preview_widget_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_preview_widget_active;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_file_chooser_get_select_multiple (GtkFileChooser* chooser);
// gboolean gtk_file_chooser_get_select_multiple (::GtkFileChooser* chooser);
bool base::FileChooserBase::get_select_multiple () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_select_multiple;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_file_chooser_get_show_hidden (GtkFileChooser* chooser);
// gboolean gtk_file_chooser_get_show_hidden (::GtkFileChooser* chooser);
bool base::FileChooserBase::get_show_hidden () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_show_hidden;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return _temp_ret;
}

// gchar* gtk_file_chooser_get_uri (GtkFileChooser* chooser);
// char* gtk_file_chooser_get_uri (::GtkFileChooser* chooser);
std::string base::FileChooserBase::get_uri () noexcept
{
  typedef char* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_uri;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSList* gtk_file_chooser_get_uris (GtkFileChooser* chooser);
// ::GSList* gtk_file_chooser_get_uris (::GtkFileChooser* chooser);
std::vector<std::string> base::FileChooserBase::get_uris () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_uris;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// gboolean gtk_file_chooser_get_use_preview_label (GtkFileChooser* chooser);
// gboolean gtk_file_chooser_get_use_preview_label (::GtkFileChooser* chooser);
bool base::FileChooserBase::get_use_preview_label () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_get_use_preview_label;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return _temp_ret;
}

// GSList* gtk_file_chooser_list_filters (GtkFileChooser* chooser);
// ::GSList* gtk_file_chooser_list_filters (::GtkFileChooser* chooser);
std::vector<Gtk::FileFilter> base::FileChooserBase::list_filters () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_list_filters;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::detail::wrap_list<Gtk::FileFilter> (_temp_ret, gi::transfer_container);
}

// GSList* gtk_file_chooser_list_shortcut_folder_uris (GtkFileChooser* chooser);
// ::GSList* gtk_file_chooser_list_shortcut_folder_uris (::GtkFileChooser* chooser);
std::vector<std::string> base::FileChooserBase::list_shortcut_folder_uris () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_list_shortcut_folder_uris;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// GSList* gtk_file_chooser_list_shortcut_folders (GtkFileChooser* chooser);
// ::GSList* gtk_file_chooser_list_shortcut_folders (::GtkFileChooser* chooser);
std::vector<std::string> base::FileChooserBase::list_shortcut_folders () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_list_shortcut_folders;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// void gtk_file_chooser_remove_choice (GtkFileChooser* chooser, const char* id);
// void gtk_file_chooser_remove_choice (::GtkFileChooser* chooser, const char* id);
void base::FileChooserBase::remove_choice (const std::string & id) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, const char* id);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_remove_choice;
  auto id_to_c = gi::unwrap (id, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (id_to_c));
}

// void gtk_file_chooser_remove_filter (GtkFileChooser* chooser, GtkFileFilter* filter);
// void gtk_file_chooser_remove_filter (::GtkFileChooser* chooser, ::GtkFileFilter* filter);
void base::FileChooserBase::remove_filter (Gtk::FileFilter filter) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, ::GtkFileFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_remove_filter;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GtkFileFilter*) (filter_to_c));
}

// gboolean gtk_file_chooser_remove_shortcut_folder (GtkFileChooser* chooser, const char* folder, GError ** error);
// gboolean gtk_file_chooser_remove_shortcut_folder (::GtkFileChooser* chooser, const char* folder, GError ** error);
bool base::FileChooserBase::remove_shortcut_folder (const std::string & folder)
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, const char* folder, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_remove_shortcut_folder;
  auto folder_to_c = gi::unwrap (folder, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (folder_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileChooserBase::remove_shortcut_folder (const std::string & folder, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, const char* folder, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_remove_shortcut_folder;
  auto folder_to_c = gi::unwrap (folder, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (folder_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean gtk_file_chooser_remove_shortcut_folder_uri (GtkFileChooser* chooser, const char* uri, GError ** error);
// gboolean gtk_file_chooser_remove_shortcut_folder_uri (::GtkFileChooser* chooser, const char* uri, GError ** error);
bool base::FileChooserBase::remove_shortcut_folder_uri (const std::string & uri)
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_remove_shortcut_folder_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (uri_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileChooserBase::remove_shortcut_folder_uri (const std::string & uri, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_remove_shortcut_folder_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void gtk_file_chooser_select_all (GtkFileChooser* chooser);
// void gtk_file_chooser_select_all (::GtkFileChooser* chooser);
void base::FileChooserBase::select_all () noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_select_all;
  call_wrap_v ((::GtkFileChooser*) (gobj_()));
}

// gboolean gtk_file_chooser_select_file (GtkFileChooser* chooser, GFile* file, GError ** error);
// gboolean gtk_file_chooser_select_file (::GtkFileChooser* chooser, ::GFile* file, GError ** error);
bool base::FileChooserBase::select_file (Gio::File file)
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, ::GFile* file, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_select_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GFile*) (file_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileChooserBase::select_file (Gio::File file, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, ::GFile* file, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_select_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GFile*) (file_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean gtk_file_chooser_select_filename (GtkFileChooser* chooser, const char* filename);
// gboolean gtk_file_chooser_select_filename (::GtkFileChooser* chooser, const char* filename);
bool base::FileChooserBase::select_filename (const std::string & filename) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_select_filename;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (filename_to_c));
  return _temp_ret;
}

// gboolean gtk_file_chooser_select_uri (GtkFileChooser* chooser, const char* uri);
// gboolean gtk_file_chooser_select_uri (::GtkFileChooser* chooser, const char* uri);
bool base::FileChooserBase::select_uri (const std::string & uri) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_select_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (uri_to_c));
  return _temp_ret;
}

// void gtk_file_chooser_set_action (GtkFileChooser* chooser, GtkFileChooserAction action);
// void gtk_file_chooser_set_action (::GtkFileChooser* chooser, ::GtkFileChooserAction action);
void base::FileChooserBase::set_action (Gtk::FileChooserAction action) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, ::GtkFileChooserAction action);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_set_action;
  auto action_to_c = gi::unwrap (action);
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GtkFileChooserAction) (action_to_c));
}

// void gtk_file_chooser_set_choice (GtkFileChooser* chooser, const char* id, const char* option);
// void gtk_file_chooser_set_choice (::GtkFileChooser* chooser, const char* id, const char* option);
void base::FileChooserBase::set_choice (const std::string & id, const std::string & option) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, const char* id, const char* option);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_set_choice;
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto id_to_c = gi::unwrap (id, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (id_to_c), (const char*) (option_to_c));
}

// void gtk_file_chooser_set_create_folders (GtkFileChooser* chooser, gboolean create_folders);
// void gtk_file_chooser_set_create_folders (::GtkFileChooser* chooser, gboolean create_folders);
void base::FileChooserBase::set_create_folders (gboolean create_folders) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, gboolean create_folders);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_set_create_folders;
  auto create_folders_to_c = create_folders;
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (gboolean) (create_folders_to_c));
}

// gboolean gtk_file_chooser_set_current_folder (GtkFileChooser* chooser, const gchar* filename);
// gboolean gtk_file_chooser_set_current_folder (::GtkFileChooser* chooser, const char* filename);
bool base::FileChooserBase::set_current_folder (const std::string & filename) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_set_current_folder;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (filename_to_c));
  return _temp_ret;
}

// gboolean gtk_file_chooser_set_current_folder_file (GtkFileChooser* chooser, GFile* file, GError ** error);
// gboolean gtk_file_chooser_set_current_folder_file (::GtkFileChooser* chooser, ::GFile* file, GError ** error);
bool base::FileChooserBase::set_current_folder_file (Gio::File file)
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, ::GFile* file, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_set_current_folder_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GFile*) (file_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileChooserBase::set_current_folder_file (Gio::File file, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, ::GFile* file, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_set_current_folder_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GFile*) (file_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean gtk_file_chooser_set_current_folder_uri (GtkFileChooser* chooser, const gchar* uri);
// gboolean gtk_file_chooser_set_current_folder_uri (::GtkFileChooser* chooser, const char* uri);
bool base::FileChooserBase::set_current_folder_uri (const std::string & uri) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_set_current_folder_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (uri_to_c));
  return _temp_ret;
}

// void gtk_file_chooser_set_current_name (GtkFileChooser* chooser, const gchar* name);
// void gtk_file_chooser_set_current_name (::GtkFileChooser* chooser, const char* name);
void base::FileChooserBase::set_current_name (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_set_current_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (name_to_c));
}

// void gtk_file_chooser_set_do_overwrite_confirmation (GtkFileChooser* chooser, gboolean do_overwrite_confirmation);
// void gtk_file_chooser_set_do_overwrite_confirmation (::GtkFileChooser* chooser, gboolean do_overwrite_confirmation);
void base::FileChooserBase::set_do_overwrite_confirmation (gboolean do_overwrite_confirmation) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, gboolean do_overwrite_confirmation);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_set_do_overwrite_confirmation;
  auto do_overwrite_confirmation_to_c = do_overwrite_confirmation;
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (gboolean) (do_overwrite_confirmation_to_c));
}

// void gtk_file_chooser_set_extra_widget (GtkFileChooser* chooser, GtkWidget* extra_widget);
// void gtk_file_chooser_set_extra_widget (::GtkFileChooser* chooser, ::GtkWidget* extra_widget);
void base::FileChooserBase::set_extra_widget (Gtk::Widget extra_widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, ::GtkWidget* extra_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_set_extra_widget;
  auto extra_widget_to_c = gi::unwrap (extra_widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GtkWidget*) (extra_widget_to_c));
}

// gboolean gtk_file_chooser_set_file (GtkFileChooser* chooser, GFile* file, GError ** error);
// gboolean gtk_file_chooser_set_file (::GtkFileChooser* chooser, ::GFile* file, GError ** error);
bool base::FileChooserBase::set_file (Gio::File file)
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, ::GFile* file, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_set_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GFile*) (file_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileChooserBase::set_file (Gio::File file, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, ::GFile* file, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_set_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GFile*) (file_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean gtk_file_chooser_set_filename (GtkFileChooser* chooser, const char* filename);
// gboolean gtk_file_chooser_set_filename (::GtkFileChooser* chooser, const char* filename);
bool base::FileChooserBase::set_filename (const std::string & filename) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_set_filename;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (filename_to_c));
  return _temp_ret;
}

// void gtk_file_chooser_set_filter (GtkFileChooser* chooser, GtkFileFilter* filter);
// void gtk_file_chooser_set_filter (::GtkFileChooser* chooser, ::GtkFileFilter* filter);
void base::FileChooserBase::set_filter (Gtk::FileFilter filter) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, ::GtkFileFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_set_filter;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GtkFileFilter*) (filter_to_c));
}

// void gtk_file_chooser_set_local_only (GtkFileChooser* chooser, gboolean local_only);
// void gtk_file_chooser_set_local_only (::GtkFileChooser* chooser, gboolean local_only);
void base::FileChooserBase::set_local_only (gboolean local_only) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, gboolean local_only);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_set_local_only;
  auto local_only_to_c = local_only;
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (gboolean) (local_only_to_c));
}

// void gtk_file_chooser_set_preview_widget (GtkFileChooser* chooser, GtkWidget* preview_widget);
// void gtk_file_chooser_set_preview_widget (::GtkFileChooser* chooser, ::GtkWidget* preview_widget);
void base::FileChooserBase::set_preview_widget (Gtk::Widget preview_widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, ::GtkWidget* preview_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_set_preview_widget;
  auto preview_widget_to_c = gi::unwrap (preview_widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GtkWidget*) (preview_widget_to_c));
}

// void gtk_file_chooser_set_preview_widget_active (GtkFileChooser* chooser, gboolean active);
// void gtk_file_chooser_set_preview_widget_active (::GtkFileChooser* chooser, gboolean active);
void base::FileChooserBase::set_preview_widget_active (gboolean active) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, gboolean active);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_set_preview_widget_active;
  auto active_to_c = active;
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (gboolean) (active_to_c));
}

// void gtk_file_chooser_set_select_multiple (GtkFileChooser* chooser, gboolean select_multiple);
// void gtk_file_chooser_set_select_multiple (::GtkFileChooser* chooser, gboolean select_multiple);
void base::FileChooserBase::set_select_multiple (gboolean select_multiple) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, gboolean select_multiple);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_set_select_multiple;
  auto select_multiple_to_c = select_multiple;
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (gboolean) (select_multiple_to_c));
}

// void gtk_file_chooser_set_show_hidden (GtkFileChooser* chooser, gboolean show_hidden);
// void gtk_file_chooser_set_show_hidden (::GtkFileChooser* chooser, gboolean show_hidden);
void base::FileChooserBase::set_show_hidden (gboolean show_hidden) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, gboolean show_hidden);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_set_show_hidden;
  auto show_hidden_to_c = show_hidden;
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (gboolean) (show_hidden_to_c));
}

// gboolean gtk_file_chooser_set_uri (GtkFileChooser* chooser, const char* uri);
// gboolean gtk_file_chooser_set_uri (::GtkFileChooser* chooser, const char* uri);
bool base::FileChooserBase::set_uri (const std::string & uri) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileChooser* chooser, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_set_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (uri_to_c));
  return _temp_ret;
}

// void gtk_file_chooser_set_use_preview_label (GtkFileChooser* chooser, gboolean use_label);
// void gtk_file_chooser_set_use_preview_label (::GtkFileChooser* chooser, gboolean use_label);
void base::FileChooserBase::set_use_preview_label (gboolean use_label) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, gboolean use_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_set_use_preview_label;
  auto use_label_to_c = use_label;
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (gboolean) (use_label_to_c));
}

// void gtk_file_chooser_unselect_all (GtkFileChooser* chooser);
// void gtk_file_chooser_unselect_all (::GtkFileChooser* chooser);
void base::FileChooserBase::unselect_all () noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_unselect_all;
  call_wrap_v ((::GtkFileChooser*) (gobj_()));
}

// void gtk_file_chooser_unselect_file (GtkFileChooser* chooser, GFile* file);
// void gtk_file_chooser_unselect_file (::GtkFileChooser* chooser, ::GFile* file);
void base::FileChooserBase::unselect_file (Gio::File file) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, ::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_unselect_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (::GFile*) (file_to_c));
}

// void gtk_file_chooser_unselect_filename (GtkFileChooser* chooser, const char* filename);
// void gtk_file_chooser_unselect_filename (::GtkFileChooser* chooser, const char* filename);
void base::FileChooserBase::unselect_filename (const std::string & filename) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_unselect_filename;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (filename_to_c));
}

// void gtk_file_chooser_unselect_uri (GtkFileChooser* chooser, const char* uri);
// void gtk_file_chooser_unselect_uri (::GtkFileChooser* chooser, const char* uri);
void base::FileChooserBase::unselect_uri (const std::string & uri) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooser* chooser, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_unselect_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFileChooser*) (gobj_()), (const char*) (uri_to_c));
}







} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filechooser_extra_def_impl.hpp>)
#include <gtk/filechooser_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filechooser_extra_impl.hpp>)
#include <gtk/filechooser_extra_impl.hpp>
#endif
#endif

#endif
