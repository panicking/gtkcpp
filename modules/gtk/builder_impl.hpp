// AUTO-GENERATED

#ifndef _GI_GTK_BUILDER_IMPL_HPP_
#define _GI_GTK_BUILDER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkBuilder* gtk_builder_new ();
// ::GtkBuilder* gtk_builder_new ();
Gtk::Builder base::BuilderBase::new_ () noexcept
{
  typedef ::GtkBuilder* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkBuilder* gtk_builder_new_from_file (const gchar* filename);
// ::GtkBuilder* gtk_builder_new_from_file (const char* filename);
Gtk::Builder base::BuilderBase::new_from_file (const std::string & filename) noexcept
{
  typedef ::GtkBuilder* (*call_wrap_t) (const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_new_from_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkBuilder* gtk_builder_new_from_resource (const gchar* resource_path);
// ::GtkBuilder* gtk_builder_new_from_resource (const char* resource_path);
Gtk::Builder base::BuilderBase::new_from_resource (const std::string & resource_path) noexcept
{
  typedef ::GtkBuilder* (*call_wrap_t) (const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_new_from_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (resource_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkBuilder* gtk_builder_new_from_string (const gchar* string, gssize length);
// ::GtkBuilder* gtk_builder_new_from_string (const char* string, gssize length);
Gtk::Builder base::BuilderBase::new_from_string (const std::string & string, gssize length) noexcept
{
  typedef ::GtkBuilder* (*call_wrap_t) (const char* string, gssize length);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_new_from_string;
  auto length_to_c = length;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (gssize) (length_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_builder_add_callback_symbol (GtkBuilder* builder, const gchar* callback_name, GCallback callback_symbol);
// void gtk_builder_add_callback_symbol (::GtkBuilder* builder, const char* callback_name,  callback_symbol);
// SKIP; callback_symbol type  not supported

// void gtk_builder_add_callback_symbols (GtkBuilder* builder, const gchar* first_callback_name, GCallback first_callback_symbol);
// void gtk_builder_add_callback_symbols (::GtkBuilder* builder, const char* first_callback_name,  first_callback_symbol);
// IGNORE; not introspectable, varargs not supported

// guint gtk_builder_add_from_file (GtkBuilder* builder, const gchar* filename, GError ** error);
// guint gtk_builder_add_from_file (::GtkBuilder* builder, const char* filename, GError ** error);
guint base::BuilderBase::add_from_file (const std::string & filename)
{
  typedef guint (*call_wrap_t) (::GtkBuilder* builder, const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_add_from_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (filename_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint base::BuilderBase::add_from_file (const std::string & filename, GLib::Error * _error) noexcept
{
  typedef guint (*call_wrap_t) (::GtkBuilder* builder, const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_add_from_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (filename_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// guint gtk_builder_add_from_resource (GtkBuilder* builder, const gchar* resource_path, GError ** error);
// guint gtk_builder_add_from_resource (::GtkBuilder* builder, const char* resource_path, GError ** error);
guint base::BuilderBase::add_from_resource (const std::string & resource_path)
{
  typedef guint (*call_wrap_t) (::GtkBuilder* builder, const char* resource_path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_add_from_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (resource_path_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint base::BuilderBase::add_from_resource (const std::string & resource_path, GLib::Error * _error) noexcept
{
  typedef guint (*call_wrap_t) (::GtkBuilder* builder, const char* resource_path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_add_from_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (resource_path_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// guint gtk_builder_add_from_string (GtkBuilder* builder, const gchar* buffer, gsize length, GError ** error);
// guint gtk_builder_add_from_string (::GtkBuilder* builder, const char* buffer, gsize length, GError ** error);
guint base::BuilderBase::add_from_string (const std::string & buffer, gsize length)
{
  typedef guint (*call_wrap_t) (::GtkBuilder* builder, const char* buffer, gsize length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_add_from_string;
  auto length_to_c = length;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (buffer_to_c), (gsize) (length_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint base::BuilderBase::add_from_string (const std::string & buffer, gsize length, GLib::Error * _error) noexcept
{
  typedef guint (*call_wrap_t) (::GtkBuilder* builder, const char* buffer, gsize length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_add_from_string;
  auto length_to_c = length;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (buffer_to_c), (gsize) (length_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// guint gtk_builder_add_objects_from_file (GtkBuilder* builder, const gchar* filename, gchar** object_ids, GError ** error);
// guint gtk_builder_add_objects_from_file (::GtkBuilder* builder, const char* filename, char** object_ids, GError ** error);
guint base::BuilderBase::add_objects_from_file (const std::string & filename, const std::vector<std::string> & object_ids)
{
  typedef guint (*call_wrap_t) (::GtkBuilder* builder, const char* filename, char** object_ids, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_add_objects_from_file;
  auto object_ids_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (object_ids);
  auto object_ids_w = unwrap (object_ids_i, gi::transfer_none, direction_in);
  auto object_ids_to_c = object_ids_w.gobj_(false);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (filename_to_c), (char**) (object_ids_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint base::BuilderBase::add_objects_from_file (const std::string & filename, const std::vector<std::string> & object_ids, GLib::Error * _error) noexcept
{
  typedef guint (*call_wrap_t) (::GtkBuilder* builder, const char* filename, char** object_ids, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_add_objects_from_file;
  auto object_ids_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (object_ids);
  auto object_ids_w = unwrap (object_ids_i, gi::transfer_none, direction_in);
  auto object_ids_to_c = object_ids_w.gobj_(false);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (filename_to_c), (char**) (object_ids_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// guint gtk_builder_add_objects_from_resource (GtkBuilder* builder, const gchar* resource_path, gchar** object_ids, GError ** error);
// guint gtk_builder_add_objects_from_resource (::GtkBuilder* builder, const char* resource_path, char** object_ids, GError ** error);
guint base::BuilderBase::add_objects_from_resource (const std::string & resource_path, const std::vector<std::string> & object_ids)
{
  typedef guint (*call_wrap_t) (::GtkBuilder* builder, const char* resource_path, char** object_ids, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_add_objects_from_resource;
  auto object_ids_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (object_ids);
  auto object_ids_w = unwrap (object_ids_i, gi::transfer_none, direction_in);
  auto object_ids_to_c = object_ids_w.gobj_(false);
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (resource_path_to_c), (char**) (object_ids_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint base::BuilderBase::add_objects_from_resource (const std::string & resource_path, const std::vector<std::string> & object_ids, GLib::Error * _error) noexcept
{
  typedef guint (*call_wrap_t) (::GtkBuilder* builder, const char* resource_path, char** object_ids, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_add_objects_from_resource;
  auto object_ids_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (object_ids);
  auto object_ids_w = unwrap (object_ids_i, gi::transfer_none, direction_in);
  auto object_ids_to_c = object_ids_w.gobj_(false);
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (resource_path_to_c), (char**) (object_ids_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// guint gtk_builder_add_objects_from_string (GtkBuilder* builder, const gchar* buffer, gsize length, gchar** object_ids, GError ** error);
// guint gtk_builder_add_objects_from_string (::GtkBuilder* builder, const char* buffer, gsize length, char** object_ids, GError ** error);
guint base::BuilderBase::add_objects_from_string (const std::string & buffer, gsize length, const std::vector<std::string> & object_ids)
{
  typedef guint (*call_wrap_t) (::GtkBuilder* builder, const char* buffer, gsize length, char** object_ids, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_add_objects_from_string;
  auto object_ids_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (object_ids);
  auto object_ids_w = unwrap (object_ids_i, gi::transfer_none, direction_in);
  auto object_ids_to_c = object_ids_w.gobj_(false);
  auto length_to_c = length;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (buffer_to_c), (gsize) (length_to_c), (char**) (object_ids_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint base::BuilderBase::add_objects_from_string (const std::string & buffer, gsize length, const std::vector<std::string> & object_ids, GLib::Error * _error) noexcept
{
  typedef guint (*call_wrap_t) (::GtkBuilder* builder, const char* buffer, gsize length, char** object_ids, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_add_objects_from_string;
  auto object_ids_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (object_ids);
  auto object_ids_w = unwrap (object_ids_i, gi::transfer_none, direction_in);
  auto object_ids_to_c = object_ids_w.gobj_(false);
  auto length_to_c = length;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (buffer_to_c), (gsize) (length_to_c), (char**) (object_ids_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void gtk_builder_connect_signals (GtkBuilder* builder, gpointer user_data);
// void gtk_builder_connect_signals (::GtkBuilder* builder, void* user_data);
void base::BuilderBase::connect_signals (void* user_data) noexcept
{
  typedef void (*call_wrap_t) (::GtkBuilder* builder, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_connect_signals;
  auto user_data_to_c = user_data;
  call_wrap_v ((::GtkBuilder*) (gobj_()), (void*) (user_data_to_c));
}

// void gtk_builder_connect_signals_full (GtkBuilder* builder, GtkBuilderConnectFunc func, gpointer user_data);
// void gtk_builder_connect_signals_full (::GtkBuilder* builder, Gtk::BuilderConnectFunc::cfunction_type func, void* user_data);
void base::BuilderBase::connect_signals_full (Gtk::BuilderConnectFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkBuilder* builder, Gtk::BuilderConnectFunc::cfunction_type func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_connect_signals_full;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  call_wrap_v ((::GtkBuilder*) (gobj_()), (Gtk::BuilderConnectFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// void gtk_builder_expose_object (GtkBuilder* builder, const gchar* name, GObject* object);
// void gtk_builder_expose_object (::GtkBuilder* builder, const char* name, ::GObject* object);
void base::BuilderBase::expose_object (const std::string & name, GObject::Object object) noexcept
{
  typedef void (*call_wrap_t) (::GtkBuilder* builder, const char* name, ::GObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_expose_object;
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (name_to_c), (::GObject*) (object_to_c));
}

// guint gtk_builder_extend_with_template (GtkBuilder* builder, GtkWidget* widget, GType template_type, const gchar* buffer, gsize length, GError ** error);
// guint gtk_builder_extend_with_template (::GtkBuilder* builder, ::GtkWidget* widget, GType template_type, const char* buffer, gsize length, GError ** error);
guint base::BuilderBase::extend_with_template (Gtk::Widget widget, GType template_type, const std::string & buffer, gsize length)
{
  typedef guint (*call_wrap_t) (::GtkBuilder* builder, ::GtkWidget* widget, GType template_type, const char* buffer, gsize length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_extend_with_template;
  auto length_to_c = length;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto template_type_to_c = template_type;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (::GtkWidget*) (widget_to_c), (GType) (template_type_to_c), (const char*) (buffer_to_c), (gsize) (length_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint base::BuilderBase::extend_with_template (Gtk::Widget widget, GType template_type, const std::string & buffer, gsize length, GLib::Error * _error) noexcept
{
  typedef guint (*call_wrap_t) (::GtkBuilder* builder, ::GtkWidget* widget, GType template_type, const char* buffer, gsize length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_extend_with_template;
  auto length_to_c = length;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto template_type_to_c = template_type;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (::GtkWidget*) (widget_to_c), (GType) (template_type_to_c), (const char*) (buffer_to_c), (gsize) (length_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// GtkApplication* gtk_builder_get_application (GtkBuilder* builder);
// ::GtkApplication* gtk_builder_get_application (::GtkBuilder* builder);
Gtk::Application base::BuilderBase::get_application () noexcept
{
  typedef ::GtkApplication* (*call_wrap_t) (::GtkBuilder* builder);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_get_application;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GObject* gtk_builder_get_object (GtkBuilder* builder, const gchar* name);
// ::GObject* gtk_builder_get_object (::GtkBuilder* builder, const char* name);
GObject::Object base::BuilderBase::get_object (const std::string & name) noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GtkBuilder* builder, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_get_object;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GSList* gtk_builder_get_objects (GtkBuilder* builder);
// ::GSList* gtk_builder_get_objects (::GtkBuilder* builder);
std::vector<GObject::Object> base::BuilderBase::get_objects () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::GtkBuilder* builder);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_get_objects;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()));
  return gi::detail::wrap_list<GObject::Object> (_temp_ret, gi::transfer_container);
}

// const gchar* gtk_builder_get_translation_domain (GtkBuilder* builder);
// const char* gtk_builder_get_translation_domain (::GtkBuilder* builder);
std::string base::BuilderBase::get_translation_domain () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkBuilder* builder);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_get_translation_domain;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GType gtk_builder_get_type_from_name (GtkBuilder* builder, const char* type_name);
// GType gtk_builder_get_type_from_name (::GtkBuilder* builder, const char* type_name);
GType base::BuilderBase::get_type_from_name (const std::string & type_name) noexcept
{
  typedef GType (*call_wrap_t) (::GtkBuilder* builder, const char* type_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_get_type_from_name;
  auto type_name_to_c = gi::unwrap (type_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (type_name_to_c));
  return _temp_ret;
}

// FAILURE on gtk_builder_lookup_callback_symbol; No such node (<xmlattr>.transfer-ownership)
// void gtk_builder_set_application (GtkBuilder* builder, GtkApplication* application);
// void gtk_builder_set_application (::GtkBuilder* builder, ::GtkApplication* application);
void base::BuilderBase::set_application (Gtk::Application application) noexcept
{
  typedef void (*call_wrap_t) (::GtkBuilder* builder, ::GtkApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_set_application;
  auto application_to_c = gi::unwrap (application, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBuilder*) (gobj_()), (::GtkApplication*) (application_to_c));
}

// void gtk_builder_set_translation_domain (GtkBuilder* builder, const gchar* domain);
// void gtk_builder_set_translation_domain (::GtkBuilder* builder, const char* domain);
void base::BuilderBase::set_translation_domain (const std::string & domain) noexcept
{
  typedef void (*call_wrap_t) (::GtkBuilder* builder, const char* domain);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_set_translation_domain;
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (domain_to_c));
}
void base::BuilderBase::set_translation_domain () noexcept
{
  typedef void (*call_wrap_t) (::GtkBuilder* builder, const char* domain);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_set_translation_domain;
  auto domain_to_c = nullptr;
  call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (domain_to_c));
}

// gboolean gtk_builder_value_from_string (GtkBuilder* builder, GParamSpec* pspec, const gchar* string, GValue* value, GError ** error);
// gboolean gtk_builder_value_from_string (::GtkBuilder* builder, ::GParamSpec* pspec, const char* string, ::GValue* value, GError ** error);
bool base::BuilderBase::value_from_string (GObject::ParamSpec pspec, const std::string & string, GObject::Value & value)
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, ::GParamSpec* pspec, const char* string, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_value_from_string;
  traits::unset_wrapper<GValue>::type value_c;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (::GParamSpec*) (pspec_to_c), (const char*) (string_to_c), (::GValue*) ((GValue*) &value_c), &error);
  value = gi::wrap ((GValue*) &value_c, gi::transfer_none, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BuilderBase::value_from_string (GObject::ParamSpec pspec, const std::string & string, GObject::Value & value, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, ::GParamSpec* pspec, const char* string, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_value_from_string;
  traits::unset_wrapper<GValue>::type value_c;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (::GParamSpec*) (pspec_to_c), (const char*) (string_to_c), (::GValue*) ((GValue*) &value_c), _error ? &_error_o : nullptr);
  value = gi::wrap ((GValue*) &value_c, gi::transfer_none, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GObject::Value> base::BuilderBase::value_from_string (GObject::ParamSpec pspec, const std::string & string)
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, ::GParamSpec* pspec, const char* string, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_value_from_string;
  traits::unset_wrapper<GValue>::type value_c;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (::GParamSpec*) (pspec_to_c), (const char*) (string_to_c), (::GValue*) ((GValue*) &value_c), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap ((GValue*) &value_c, gi::transfer_none, gi::direction_out));
}
std::tuple<bool, GObject::Value> base::BuilderBase::value_from_string (GObject::ParamSpec pspec, const std::string & string, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, ::GParamSpec* pspec, const char* string, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_value_from_string;
  traits::unset_wrapper<GValue>::type value_c;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (::GParamSpec*) (pspec_to_c), (const char*) (string_to_c), (::GValue*) ((GValue*) &value_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap ((GValue*) &value_c, gi::transfer_none, gi::direction_out));
}

// gboolean gtk_builder_value_from_string_type (GtkBuilder* builder, GType type, const gchar* string, GValue* value, GError ** error);
// gboolean gtk_builder_value_from_string_type (::GtkBuilder* builder, GType type, const char* string, ::GValue* value, GError ** error);
bool base::BuilderBase::value_from_string_type (GType type, const std::string & string, GObject::Value & value)
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, GType type, const char* string, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_value_from_string_type;
  traits::unset_wrapper<GValue>::type value_c;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto type_to_c = type;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (GType) (type_to_c), (const char*) (string_to_c), (::GValue*) ((GValue*) &value_c), &error);
  value = gi::wrap ((GValue*) &value_c, gi::transfer_none, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BuilderBase::value_from_string_type (GType type, const std::string & string, GObject::Value & value, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, GType type, const char* string, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_value_from_string_type;
  traits::unset_wrapper<GValue>::type value_c;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto type_to_c = type;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (GType) (type_to_c), (const char*) (string_to_c), (::GValue*) ((GValue*) &value_c), _error ? &_error_o : nullptr);
  value = gi::wrap ((GValue*) &value_c, gi::transfer_none, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GObject::Value> base::BuilderBase::value_from_string_type (GType type, const std::string & string)
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, GType type, const char* string, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_value_from_string_type;
  traits::unset_wrapper<GValue>::type value_c;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto type_to_c = type;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (GType) (type_to_c), (const char*) (string_to_c), (::GValue*) ((GValue*) &value_c), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap ((GValue*) &value_c, gi::transfer_none, gi::direction_out));
}
std::tuple<bool, GObject::Value> base::BuilderBase::value_from_string_type (GType type, const std::string & string, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, GType type, const char* string, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_value_from_string_type;
  traits::unset_wrapper<GValue>::type value_c;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto type_to_c = type;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (GType) (type_to_c), (const char*) (string_to_c), (::GValue*) ((GValue*) &value_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap ((GValue*) &value_c, gi::transfer_none, gi::direction_out));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/builder_extra_def_impl.hpp>)
#include <gtk/builder_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/builder_extra_impl.hpp>)
#include <gtk/builder_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void BuilderClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkBuilderClass *methods = (::GtkBuilderClass *) class_struct;
  (void) methods;

  methods->get_type_from_name = (decltype (methods->get_type_from_name)) detail::method_wrapper<self, GType (*) (const std::string & type_name), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_type_from_name_>;
}

// GType Builder::get_type_from_name (GtkBuilder* builder, const char* type_name);
// GType Builder::get_type_from_name (::GtkBuilder* builder, const char* type_name);
GType BuilderClass::get_type_from_name_ (const std::string & type_name) noexcept
{
  if (!get_struct_()->get_type_from_name) return GType{};
  typedef GType (*call_wrap_t) (::GtkBuilder* builder, const char* type_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_type_from_name;
  auto type_name_to_c = gi::unwrap (type_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (type_name_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
