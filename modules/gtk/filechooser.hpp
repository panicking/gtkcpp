// AUTO-GENERATED

#ifndef _GI_GTK_FILECHOOSER_HPP_
#define _GI_GTK_FILECHOOSER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class FileFilter;
class Widget;

class FileChooser;

namespace base {


#define GI_GTK_FILECHOOSER_BASE base::FileChooserBase
class FileChooserBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkFileChooser BaseObjectType;

FileChooserBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_file_chooser_get_type(); } 

// void gtk_file_chooser_add_choice (GtkFileChooser* chooser, const char* id, const char* label, const char** options, const char** option_labels);
// void gtk_file_chooser_add_choice (::GtkFileChooser* chooser, const char* id, const char* label, const char** options, const char** option_labels);
GI_INLINE_DECL void add_choice (const std::string & id, const std::string & label, const std::vector<std::string> & options, const std::vector<std::string> & option_labels) noexcept;

// void gtk_file_chooser_add_filter (GtkFileChooser* chooser, GtkFileFilter* filter);
// void gtk_file_chooser_add_filter (::GtkFileChooser* chooser, ::GtkFileFilter* filter);
GI_INLINE_DECL void add_filter (Gtk::FileFilter filter) noexcept;

// gboolean gtk_file_chooser_add_shortcut_folder (GtkFileChooser* chooser, const char* folder, GError ** error);
// gboolean gtk_file_chooser_add_shortcut_folder (::GtkFileChooser* chooser, const char* folder, GError ** error);
GI_INLINE_DECL bool add_shortcut_folder (const std::string & folder);
GI_INLINE_DECL bool add_shortcut_folder (const std::string & folder, GLib::Error * _error) noexcept;

// gboolean gtk_file_chooser_add_shortcut_folder_uri (GtkFileChooser* chooser, const char* uri, GError ** error);
// gboolean gtk_file_chooser_add_shortcut_folder_uri (::GtkFileChooser* chooser, const char* uri, GError ** error);
GI_INLINE_DECL bool add_shortcut_folder_uri (const std::string & uri);
GI_INLINE_DECL bool add_shortcut_folder_uri (const std::string & uri, GLib::Error * _error) noexcept;

// GtkFileChooserAction gtk_file_chooser_get_action (GtkFileChooser* chooser);
// ::GtkFileChooserAction gtk_file_chooser_get_action (::GtkFileChooser* chooser);
GI_INLINE_DECL Gtk::FileChooserAction get_action () noexcept;

// const char* gtk_file_chooser_get_choice (GtkFileChooser* chooser, const char* id);
// const char* gtk_file_chooser_get_choice (::GtkFileChooser* chooser, const char* id);
GI_INLINE_DECL std::string get_choice (const std::string & id) noexcept;

// gboolean gtk_file_chooser_get_create_folders (GtkFileChooser* chooser);
// gboolean gtk_file_chooser_get_create_folders (::GtkFileChooser* chooser);
GI_INLINE_DECL bool get_create_folders () noexcept;

// gchar* gtk_file_chooser_get_current_folder (GtkFileChooser* chooser);
// char* gtk_file_chooser_get_current_folder (::GtkFileChooser* chooser);
GI_INLINE_DECL std::string get_current_folder () noexcept;

// GFile* gtk_file_chooser_get_current_folder_file (GtkFileChooser* chooser);
// ::GFile* gtk_file_chooser_get_current_folder_file (::GtkFileChooser* chooser);
GI_INLINE_DECL Gio::File get_current_folder_file () noexcept;

// gchar* gtk_file_chooser_get_current_folder_uri (GtkFileChooser* chooser);
// char* gtk_file_chooser_get_current_folder_uri (::GtkFileChooser* chooser);
GI_INLINE_DECL std::string get_current_folder_uri () noexcept;

// gchar* gtk_file_chooser_get_current_name (GtkFileChooser* chooser);
// char* gtk_file_chooser_get_current_name (::GtkFileChooser* chooser);
GI_INLINE_DECL std::string get_current_name () noexcept;

// gboolean gtk_file_chooser_get_do_overwrite_confirmation (GtkFileChooser* chooser);
// gboolean gtk_file_chooser_get_do_overwrite_confirmation (::GtkFileChooser* chooser);
GI_INLINE_DECL bool get_do_overwrite_confirmation () noexcept;

// GtkWidget* gtk_file_chooser_get_extra_widget (GtkFileChooser* chooser);
// ::GtkWidget* gtk_file_chooser_get_extra_widget (::GtkFileChooser* chooser);
GI_INLINE_DECL Gtk::Widget get_extra_widget () noexcept;

// GFile* gtk_file_chooser_get_file (GtkFileChooser* chooser);
// ::GFile* gtk_file_chooser_get_file (::GtkFileChooser* chooser);
GI_INLINE_DECL Gio::File get_file () noexcept;

// gchar* gtk_file_chooser_get_filename (GtkFileChooser* chooser);
// char* gtk_file_chooser_get_filename (::GtkFileChooser* chooser);
GI_INLINE_DECL std::string get_filename () noexcept;

// GSList* gtk_file_chooser_get_filenames (GtkFileChooser* chooser);
// ::GSList* gtk_file_chooser_get_filenames (::GtkFileChooser* chooser);
GI_INLINE_DECL std::vector<std::string> get_filenames () noexcept;

// GSList* gtk_file_chooser_get_files (GtkFileChooser* chooser);
// ::GSList* gtk_file_chooser_get_files (::GtkFileChooser* chooser);
GI_INLINE_DECL std::vector<Gio::File> get_files () noexcept;

// GtkFileFilter* gtk_file_chooser_get_filter (GtkFileChooser* chooser);
// ::GtkFileFilter* gtk_file_chooser_get_filter (::GtkFileChooser* chooser);
GI_INLINE_DECL Gtk::FileFilter get_filter () noexcept;

// gboolean gtk_file_chooser_get_local_only (GtkFileChooser* chooser);
// gboolean gtk_file_chooser_get_local_only (::GtkFileChooser* chooser);
GI_INLINE_DECL bool get_local_only () noexcept;

// GFile* gtk_file_chooser_get_preview_file (GtkFileChooser* chooser);
// ::GFile* gtk_file_chooser_get_preview_file (::GtkFileChooser* chooser);
GI_INLINE_DECL Gio::File get_preview_file () noexcept;

// char* gtk_file_chooser_get_preview_filename (GtkFileChooser* chooser);
// char* gtk_file_chooser_get_preview_filename (::GtkFileChooser* chooser);
GI_INLINE_DECL std::string get_preview_filename () noexcept;

// char* gtk_file_chooser_get_preview_uri (GtkFileChooser* chooser);
// char* gtk_file_chooser_get_preview_uri (::GtkFileChooser* chooser);
GI_INLINE_DECL std::string get_preview_uri () noexcept;

// GtkWidget* gtk_file_chooser_get_preview_widget (GtkFileChooser* chooser);
// ::GtkWidget* gtk_file_chooser_get_preview_widget (::GtkFileChooser* chooser);
GI_INLINE_DECL Gtk::Widget get_preview_widget () noexcept;

// gboolean gtk_file_chooser_get_preview_widget_active (GtkFileChooser* chooser);
// gboolean gtk_file_chooser_get_preview_widget_active (::GtkFileChooser* chooser);
GI_INLINE_DECL bool get_preview_widget_active () noexcept;

// gboolean gtk_file_chooser_get_select_multiple (GtkFileChooser* chooser);
// gboolean gtk_file_chooser_get_select_multiple (::GtkFileChooser* chooser);
GI_INLINE_DECL bool get_select_multiple () noexcept;

// gboolean gtk_file_chooser_get_show_hidden (GtkFileChooser* chooser);
// gboolean gtk_file_chooser_get_show_hidden (::GtkFileChooser* chooser);
GI_INLINE_DECL bool get_show_hidden () noexcept;

// gchar* gtk_file_chooser_get_uri (GtkFileChooser* chooser);
// char* gtk_file_chooser_get_uri (::GtkFileChooser* chooser);
GI_INLINE_DECL std::string get_uri () noexcept;

// GSList* gtk_file_chooser_get_uris (GtkFileChooser* chooser);
// ::GSList* gtk_file_chooser_get_uris (::GtkFileChooser* chooser);
GI_INLINE_DECL std::vector<std::string> get_uris () noexcept;

// gboolean gtk_file_chooser_get_use_preview_label (GtkFileChooser* chooser);
// gboolean gtk_file_chooser_get_use_preview_label (::GtkFileChooser* chooser);
GI_INLINE_DECL bool get_use_preview_label () noexcept;

// GSList* gtk_file_chooser_list_filters (GtkFileChooser* chooser);
// ::GSList* gtk_file_chooser_list_filters (::GtkFileChooser* chooser);
GI_INLINE_DECL std::vector<Gtk::FileFilter> list_filters () noexcept;

// GSList* gtk_file_chooser_list_shortcut_folder_uris (GtkFileChooser* chooser);
// ::GSList* gtk_file_chooser_list_shortcut_folder_uris (::GtkFileChooser* chooser);
GI_INLINE_DECL std::vector<std::string> list_shortcut_folder_uris () noexcept;

// GSList* gtk_file_chooser_list_shortcut_folders (GtkFileChooser* chooser);
// ::GSList* gtk_file_chooser_list_shortcut_folders (::GtkFileChooser* chooser);
GI_INLINE_DECL std::vector<std::string> list_shortcut_folders () noexcept;

// void gtk_file_chooser_remove_choice (GtkFileChooser* chooser, const char* id);
// void gtk_file_chooser_remove_choice (::GtkFileChooser* chooser, const char* id);
GI_INLINE_DECL void remove_choice (const std::string & id) noexcept;

// void gtk_file_chooser_remove_filter (GtkFileChooser* chooser, GtkFileFilter* filter);
// void gtk_file_chooser_remove_filter (::GtkFileChooser* chooser, ::GtkFileFilter* filter);
GI_INLINE_DECL void remove_filter (Gtk::FileFilter filter) noexcept;

// gboolean gtk_file_chooser_remove_shortcut_folder (GtkFileChooser* chooser, const char* folder, GError ** error);
// gboolean gtk_file_chooser_remove_shortcut_folder (::GtkFileChooser* chooser, const char* folder, GError ** error);
GI_INLINE_DECL bool remove_shortcut_folder (const std::string & folder);
GI_INLINE_DECL bool remove_shortcut_folder (const std::string & folder, GLib::Error * _error) noexcept;

// gboolean gtk_file_chooser_remove_shortcut_folder_uri (GtkFileChooser* chooser, const char* uri, GError ** error);
// gboolean gtk_file_chooser_remove_shortcut_folder_uri (::GtkFileChooser* chooser, const char* uri, GError ** error);
GI_INLINE_DECL bool remove_shortcut_folder_uri (const std::string & uri);
GI_INLINE_DECL bool remove_shortcut_folder_uri (const std::string & uri, GLib::Error * _error) noexcept;

// void gtk_file_chooser_select_all (GtkFileChooser* chooser);
// void gtk_file_chooser_select_all (::GtkFileChooser* chooser);
GI_INLINE_DECL void select_all () noexcept;

// gboolean gtk_file_chooser_select_file (GtkFileChooser* chooser, GFile* file, GError ** error);
// gboolean gtk_file_chooser_select_file (::GtkFileChooser* chooser, ::GFile* file, GError ** error);
GI_INLINE_DECL bool select_file (Gio::File file);
GI_INLINE_DECL bool select_file (Gio::File file, GLib::Error * _error) noexcept;

// gboolean gtk_file_chooser_select_filename (GtkFileChooser* chooser, const char* filename);
// gboolean gtk_file_chooser_select_filename (::GtkFileChooser* chooser, const char* filename);
GI_INLINE_DECL bool select_filename (const std::string & filename) noexcept;

// gboolean gtk_file_chooser_select_uri (GtkFileChooser* chooser, const char* uri);
// gboolean gtk_file_chooser_select_uri (::GtkFileChooser* chooser, const char* uri);
GI_INLINE_DECL bool select_uri (const std::string & uri) noexcept;

// void gtk_file_chooser_set_action (GtkFileChooser* chooser, GtkFileChooserAction action);
// void gtk_file_chooser_set_action (::GtkFileChooser* chooser, ::GtkFileChooserAction action);
GI_INLINE_DECL void set_action (Gtk::FileChooserAction action) noexcept;

// void gtk_file_chooser_set_choice (GtkFileChooser* chooser, const char* id, const char* option);
// void gtk_file_chooser_set_choice (::GtkFileChooser* chooser, const char* id, const char* option);
GI_INLINE_DECL void set_choice (const std::string & id, const std::string & option) noexcept;

// void gtk_file_chooser_set_create_folders (GtkFileChooser* chooser, gboolean create_folders);
// void gtk_file_chooser_set_create_folders (::GtkFileChooser* chooser, gboolean create_folders);
GI_INLINE_DECL void set_create_folders (gboolean create_folders) noexcept;

// gboolean gtk_file_chooser_set_current_folder (GtkFileChooser* chooser, const gchar* filename);
// gboolean gtk_file_chooser_set_current_folder (::GtkFileChooser* chooser, const char* filename);
GI_INLINE_DECL bool set_current_folder (const std::string & filename) noexcept;

// gboolean gtk_file_chooser_set_current_folder_file (GtkFileChooser* chooser, GFile* file, GError ** error);
// gboolean gtk_file_chooser_set_current_folder_file (::GtkFileChooser* chooser, ::GFile* file, GError ** error);
GI_INLINE_DECL bool set_current_folder_file (Gio::File file);
GI_INLINE_DECL bool set_current_folder_file (Gio::File file, GLib::Error * _error) noexcept;

// gboolean gtk_file_chooser_set_current_folder_uri (GtkFileChooser* chooser, const gchar* uri);
// gboolean gtk_file_chooser_set_current_folder_uri (::GtkFileChooser* chooser, const char* uri);
GI_INLINE_DECL bool set_current_folder_uri (const std::string & uri) noexcept;

// void gtk_file_chooser_set_current_name (GtkFileChooser* chooser, const gchar* name);
// void gtk_file_chooser_set_current_name (::GtkFileChooser* chooser, const char* name);
GI_INLINE_DECL void set_current_name (const std::string & name) noexcept;

// void gtk_file_chooser_set_do_overwrite_confirmation (GtkFileChooser* chooser, gboolean do_overwrite_confirmation);
// void gtk_file_chooser_set_do_overwrite_confirmation (::GtkFileChooser* chooser, gboolean do_overwrite_confirmation);
GI_INLINE_DECL void set_do_overwrite_confirmation (gboolean do_overwrite_confirmation) noexcept;

// void gtk_file_chooser_set_extra_widget (GtkFileChooser* chooser, GtkWidget* extra_widget);
// void gtk_file_chooser_set_extra_widget (::GtkFileChooser* chooser, ::GtkWidget* extra_widget);
GI_INLINE_DECL void set_extra_widget (Gtk::Widget extra_widget) noexcept;

// gboolean gtk_file_chooser_set_file (GtkFileChooser* chooser, GFile* file, GError ** error);
// gboolean gtk_file_chooser_set_file (::GtkFileChooser* chooser, ::GFile* file, GError ** error);
GI_INLINE_DECL bool set_file (Gio::File file);
GI_INLINE_DECL bool set_file (Gio::File file, GLib::Error * _error) noexcept;

// gboolean gtk_file_chooser_set_filename (GtkFileChooser* chooser, const char* filename);
// gboolean gtk_file_chooser_set_filename (::GtkFileChooser* chooser, const char* filename);
GI_INLINE_DECL bool set_filename (const std::string & filename) noexcept;

// void gtk_file_chooser_set_filter (GtkFileChooser* chooser, GtkFileFilter* filter);
// void gtk_file_chooser_set_filter (::GtkFileChooser* chooser, ::GtkFileFilter* filter);
GI_INLINE_DECL void set_filter (Gtk::FileFilter filter) noexcept;

// void gtk_file_chooser_set_local_only (GtkFileChooser* chooser, gboolean local_only);
// void gtk_file_chooser_set_local_only (::GtkFileChooser* chooser, gboolean local_only);
GI_INLINE_DECL void set_local_only (gboolean local_only) noexcept;

// void gtk_file_chooser_set_preview_widget (GtkFileChooser* chooser, GtkWidget* preview_widget);
// void gtk_file_chooser_set_preview_widget (::GtkFileChooser* chooser, ::GtkWidget* preview_widget);
GI_INLINE_DECL void set_preview_widget (Gtk::Widget preview_widget) noexcept;

// void gtk_file_chooser_set_preview_widget_active (GtkFileChooser* chooser, gboolean active);
// void gtk_file_chooser_set_preview_widget_active (::GtkFileChooser* chooser, gboolean active);
GI_INLINE_DECL void set_preview_widget_active (gboolean active) noexcept;

// void gtk_file_chooser_set_select_multiple (GtkFileChooser* chooser, gboolean select_multiple);
// void gtk_file_chooser_set_select_multiple (::GtkFileChooser* chooser, gboolean select_multiple);
GI_INLINE_DECL void set_select_multiple (gboolean select_multiple) noexcept;

// void gtk_file_chooser_set_show_hidden (GtkFileChooser* chooser, gboolean show_hidden);
// void gtk_file_chooser_set_show_hidden (::GtkFileChooser* chooser, gboolean show_hidden);
GI_INLINE_DECL void set_show_hidden (gboolean show_hidden) noexcept;

// gboolean gtk_file_chooser_set_uri (GtkFileChooser* chooser, const char* uri);
// gboolean gtk_file_chooser_set_uri (::GtkFileChooser* chooser, const char* uri);
GI_INLINE_DECL bool set_uri (const std::string & uri) noexcept;

// void gtk_file_chooser_set_use_preview_label (GtkFileChooser* chooser, gboolean use_label);
// void gtk_file_chooser_set_use_preview_label (::GtkFileChooser* chooser, gboolean use_label);
GI_INLINE_DECL void set_use_preview_label (gboolean use_label) noexcept;

// void gtk_file_chooser_unselect_all (GtkFileChooser* chooser);
// void gtk_file_chooser_unselect_all (::GtkFileChooser* chooser);
GI_INLINE_DECL void unselect_all () noexcept;

// void gtk_file_chooser_unselect_file (GtkFileChooser* chooser, GFile* file);
// void gtk_file_chooser_unselect_file (::GtkFileChooser* chooser, ::GFile* file);
GI_INLINE_DECL void unselect_file (Gio::File file) noexcept;

// void gtk_file_chooser_unselect_filename (GtkFileChooser* chooser, const char* filename);
// void gtk_file_chooser_unselect_filename (::GtkFileChooser* chooser, const char* filename);
GI_INLINE_DECL void unselect_filename (const std::string & filename) noexcept;

// void gtk_file_chooser_unselect_uri (GtkFileChooser* chooser, const char* uri);
// void gtk_file_chooser_unselect_uri (::GtkFileChooser* chooser, const char* uri);
GI_INLINE_DECL void unselect_uri (const std::string & uri) noexcept;

gi::property_proxy<Gtk::FileChooserAction, base::FileChooserBase> property_action()
{ return gi::property_proxy<Gtk::FileChooserAction, base::FileChooserBase> (*this, "action"); }
const gi::property_proxy<Gtk::FileChooserAction, base::FileChooserBase> property_action() const
{ return gi::property_proxy<Gtk::FileChooserAction, base::FileChooserBase> (*this, "action"); }

gi::property_proxy<bool, base::FileChooserBase> property_create_folders()
{ return gi::property_proxy<bool, base::FileChooserBase> (*this, "create-folders"); }
const gi::property_proxy<bool, base::FileChooserBase> property_create_folders() const
{ return gi::property_proxy<bool, base::FileChooserBase> (*this, "create-folders"); }

gi::property_proxy<bool, base::FileChooserBase> property_do_overwrite_confirmation()
{ return gi::property_proxy<bool, base::FileChooserBase> (*this, "do-overwrite-confirmation"); }
const gi::property_proxy<bool, base::FileChooserBase> property_do_overwrite_confirmation() const
{ return gi::property_proxy<bool, base::FileChooserBase> (*this, "do-overwrite-confirmation"); }

gi::property_proxy<Gtk::Widget, base::FileChooserBase> property_extra_widget()
{ return gi::property_proxy<Gtk::Widget, base::FileChooserBase> (*this, "extra-widget"); }
const gi::property_proxy<Gtk::Widget, base::FileChooserBase> property_extra_widget() const
{ return gi::property_proxy<Gtk::Widget, base::FileChooserBase> (*this, "extra-widget"); }

gi::property_proxy<Gtk::FileFilter, base::FileChooserBase> property_filter()
{ return gi::property_proxy<Gtk::FileFilter, base::FileChooserBase> (*this, "filter"); }
const gi::property_proxy<Gtk::FileFilter, base::FileChooserBase> property_filter() const
{ return gi::property_proxy<Gtk::FileFilter, base::FileChooserBase> (*this, "filter"); }

gi::property_proxy<bool, base::FileChooserBase> property_local_only()
{ return gi::property_proxy<bool, base::FileChooserBase> (*this, "local-only"); }
const gi::property_proxy<bool, base::FileChooserBase> property_local_only() const
{ return gi::property_proxy<bool, base::FileChooserBase> (*this, "local-only"); }

gi::property_proxy<Gtk::Widget, base::FileChooserBase> property_preview_widget()
{ return gi::property_proxy<Gtk::Widget, base::FileChooserBase> (*this, "preview-widget"); }
const gi::property_proxy<Gtk::Widget, base::FileChooserBase> property_preview_widget() const
{ return gi::property_proxy<Gtk::Widget, base::FileChooserBase> (*this, "preview-widget"); }

gi::property_proxy<bool, base::FileChooserBase> property_preview_widget_active()
{ return gi::property_proxy<bool, base::FileChooserBase> (*this, "preview-widget-active"); }
const gi::property_proxy<bool, base::FileChooserBase> property_preview_widget_active() const
{ return gi::property_proxy<bool, base::FileChooserBase> (*this, "preview-widget-active"); }

gi::property_proxy<bool, base::FileChooserBase> property_select_multiple()
{ return gi::property_proxy<bool, base::FileChooserBase> (*this, "select-multiple"); }
const gi::property_proxy<bool, base::FileChooserBase> property_select_multiple() const
{ return gi::property_proxy<bool, base::FileChooserBase> (*this, "select-multiple"); }

gi::property_proxy<bool, base::FileChooserBase> property_show_hidden()
{ return gi::property_proxy<bool, base::FileChooserBase> (*this, "show-hidden"); }
const gi::property_proxy<bool, base::FileChooserBase> property_show_hidden() const
{ return gi::property_proxy<bool, base::FileChooserBase> (*this, "show-hidden"); }

gi::property_proxy<bool, base::FileChooserBase> property_use_preview_label()
{ return gi::property_proxy<bool, base::FileChooserBase> (*this, "use-preview-label"); }
const gi::property_proxy<bool, base::FileChooserBase> property_use_preview_label() const
{ return gi::property_proxy<bool, base::FileChooserBase> (*this, "use-preview-label"); }

// signal confirm-overwrite
gi::signal_proxy<Gtk::FileChooserConfirmation(Gtk::FileChooser)> signal_confirm_overwrite()
{ return gi::signal_proxy<Gtk::FileChooserConfirmation(Gtk::FileChooser)> (*this, "confirm-overwrite"); }

// signal current-folder-changed
gi::signal_proxy<void(Gtk::FileChooser)> signal_current_folder_changed()
{ return gi::signal_proxy<void(Gtk::FileChooser)> (*this, "current-folder-changed"); }

// signal file-activated
gi::signal_proxy<void(Gtk::FileChooser)> signal_file_activated()
{ return gi::signal_proxy<void(Gtk::FileChooser)> (*this, "file-activated"); }

// signal selection-changed
gi::signal_proxy<void(Gtk::FileChooser)> signal_selection_changed()
{ return gi::signal_proxy<void(Gtk::FileChooser)> (*this, "selection-changed"); }

// signal update-preview
gi::signal_proxy<void(Gtk::FileChooser)> signal_update_preview()
{ return gi::signal_proxy<void(Gtk::FileChooser)> (*this, "update-preview"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filechooser_extra_def.hpp>)
#include <gtk/filechooser_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filechooser_extra.hpp>)
#include <gtk/filechooser_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FileChooser : public GI_GTK_FILECHOOSER_BASE
{ typedef GI_GTK_FILECHOOSER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFileChooser>
{ typedef Gtk::FileChooser type; }; 

} // namespace repository

} // namespace gi

#endif
