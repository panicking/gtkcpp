// AUTO-GENERATED

#ifndef _GI_GTK_CSSPROVIDER_IMPL_HPP_
#define _GI_GTK_CSSPROVIDER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::StyleProvider CssProviderBase::interface_ (gi::interface_tag<Gtk::StyleProvider>)
{ return gi::wrap ((Gtk::StyleProvider::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

CssProviderBase::operator Gtk::StyleProvider ()
{ return interface_ (gi::interface_tag<Gtk::StyleProvider>()); }

// GtkCssProvider* gtk_css_provider_new ();
// ::GtkCssProvider* gtk_css_provider_new ();
Gtk::CssProvider base::CssProviderBase::new_ () noexcept
{
  typedef ::GtkCssProvider* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_css_provider_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkCssProvider* gtk_css_provider_get_default ();
// ::GtkCssProvider* gtk_css_provider_get_default ();
// IGNORE; deprecated

// GtkCssProvider* gtk_css_provider_get_named (const gchar* name, const gchar* variant);
// ::GtkCssProvider* gtk_css_provider_get_named (const char* name, const char* variant);
Gtk::CssProvider base::CssProviderBase::get_named (const std::string & name, const std::string & variant) noexcept
{
  typedef ::GtkCssProvider* (*call_wrap_t) (const char* name, const char* variant);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_css_provider_get_named;
  auto variant_to_c = gi::unwrap (variant, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (variant_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::CssProvider base::CssProviderBase::get_named (const std::string & name) noexcept
{
  typedef ::GtkCssProvider* (*call_wrap_t) (const char* name, const char* variant);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_css_provider_get_named;
  auto variant_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (variant_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_css_provider_load_from_data (GtkCssProvider* css_provider, const gchar* data, gssize length, GError ** error);
// gboolean gtk_css_provider_load_from_data (::GtkCssProvider* css_provider, const guint8* data, gssize length, GError ** error);
bool base::CssProviderBase::load_from_data (guint8 * data, gssize length)
{
  typedef gboolean (*call_wrap_t) (::GtkCssProvider* css_provider, const guint8* data, gssize length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_css_provider_load_from_data;
  auto data_i = detail::make_list_unwrap_range (data, length, false);
  auto data_w = unwrap (data_i, gi::transfer_none, direction_in);
  auto data_to_c = data_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkCssProvider*) (gobj_()), (const guint8*) (data_to_c), (gssize) (data_w.size()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::CssProviderBase::load_from_data (guint8 * data, gssize length, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCssProvider* css_provider, const guint8* data, gssize length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_css_provider_load_from_data;
  auto data_i = detail::make_list_unwrap_range (data, length, false);
  auto data_w = unwrap (data_i, gi::transfer_none, direction_in);
  auto data_to_c = data_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkCssProvider*) (gobj_()), (const guint8*) (data_to_c), (gssize) (data_w.size()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean gtk_css_provider_load_from_file (GtkCssProvider* css_provider, GFile* file, GError ** error);
// gboolean gtk_css_provider_load_from_file (::GtkCssProvider* css_provider, ::GFile* file, GError ** error);
bool base::CssProviderBase::load_from_file (Gio::File file)
{
  typedef gboolean (*call_wrap_t) (::GtkCssProvider* css_provider, ::GFile* file, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_css_provider_load_from_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkCssProvider*) (gobj_()), (::GFile*) (file_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::CssProviderBase::load_from_file (Gio::File file, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCssProvider* css_provider, ::GFile* file, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_css_provider_load_from_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkCssProvider*) (gobj_()), (::GFile*) (file_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean gtk_css_provider_load_from_path (GtkCssProvider* css_provider, const gchar* path, GError ** error);
// gboolean gtk_css_provider_load_from_path (::GtkCssProvider* css_provider, const char* path, GError ** error);
bool base::CssProviderBase::load_from_path (const std::string & path)
{
  typedef gboolean (*call_wrap_t) (::GtkCssProvider* css_provider, const char* path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_css_provider_load_from_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkCssProvider*) (gobj_()), (const char*) (path_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::CssProviderBase::load_from_path (const std::string & path, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCssProvider* css_provider, const char* path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_css_provider_load_from_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkCssProvider*) (gobj_()), (const char*) (path_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void gtk_css_provider_load_from_resource (GtkCssProvider* css_provider, const gchar* resource_path);
// void gtk_css_provider_load_from_resource (::GtkCssProvider* css_provider, const char* resource_path);
void base::CssProviderBase::load_from_resource (const std::string & resource_path) noexcept
{
  typedef void (*call_wrap_t) (::GtkCssProvider* css_provider, const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_css_provider_load_from_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCssProvider*) (gobj_()), (const char*) (resource_path_to_c));
}

// char* gtk_css_provider_to_string (GtkCssProvider* provider);
// char* gtk_css_provider_to_string (::GtkCssProvider* provider);
std::string base::CssProviderBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::GtkCssProvider* provider);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_css_provider_to_string;
  auto _temp_ret = call_wrap_v ((::GtkCssProvider*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cssprovider_extra_def_impl.hpp>)
#include <gtk/cssprovider_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cssprovider_extra_impl.hpp>)
#include <gtk/cssprovider_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CssProviderClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkCssProviderClass *methods = (::GtkCssProviderClass *) class_struct;
  (void) methods;

  methods->parsing_error = (decltype (methods->parsing_error)) detail::method_wrapper<self, void (*) (Gtk::CssSection section, const GLib::Error & error), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::parsing_error_>;
}

// void CssProvider::parsing_error (GtkCssProvider* provider, GtkCssSection* section, const GError* error);
// void CssProvider::parsing_error (::GtkCssProvider* provider, ::GtkCssSection* section, const ::GError* error);
void CssProviderClass::parsing_error_ (Gtk::CssSection section, const GLib::Error & error) noexcept
{
  if (!get_struct_()->parsing_error) return ;
  typedef void (*call_wrap_t) (::GtkCssProvider* provider, ::GtkCssSection* section, const ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->parsing_error;
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  auto section_to_c = gi::unwrap (section, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCssProvider*) (gobj_()), (::GtkCssSection*) (section_to_c), (const ::GError*) (error_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
