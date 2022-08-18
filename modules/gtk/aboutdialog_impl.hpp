// AUTO-GENERATED

#ifndef _GI_GTK_ABOUTDIALOG_IMPL_HPP_
#define _GI_GTK_ABOUTDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_about_dialog_new ();
// ::GtkAboutDialog* gtk_about_dialog_new ();
Gtk::AboutDialog base::AboutDialogBase::new_ () noexcept
{
  typedef ::GtkAboutDialog* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_about_dialog_add_credit_section (GtkAboutDialog* about, const gchar* section_name, const gchar** people);
// void gtk_about_dialog_add_credit_section (::GtkAboutDialog* about, const char* section_name, const char** people);
void base::AboutDialogBase::add_credit_section (const std::string & section_name, const std::vector<std::string> & people) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* section_name, const char** people);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_add_credit_section;
  auto people_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (people);
  auto people_w = unwrap (people_i, gi::transfer_none, direction_in);
  auto people_to_c = people_w.gobj_(false);
  auto section_name_to_c = gi::unwrap (section_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (section_name_to_c), (const char**) (people_to_c));
}

// const gchar* const* gtk_about_dialog_get_artists (GtkAboutDialog* about);
// const char** gtk_about_dialog_get_artists (::GtkAboutDialog* about);
std::vector<std::string> base::AboutDialogBase::get_artists () noexcept
{
  typedef const char** (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_get_artists;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_none);
}

// const gchar* const* gtk_about_dialog_get_authors (GtkAboutDialog* about);
// const char** gtk_about_dialog_get_authors (::GtkAboutDialog* about);
std::vector<std::string> base::AboutDialogBase::get_authors () noexcept
{
  typedef const char** (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_get_authors;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_none);
}

// const gchar* gtk_about_dialog_get_comments (GtkAboutDialog* about);
// const char* gtk_about_dialog_get_comments (::GtkAboutDialog* about);
std::string base::AboutDialogBase::get_comments () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_get_comments;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_about_dialog_get_copyright (GtkAboutDialog* about);
// const char* gtk_about_dialog_get_copyright (::GtkAboutDialog* about);
std::string base::AboutDialogBase::get_copyright () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_get_copyright;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* const* gtk_about_dialog_get_documenters (GtkAboutDialog* about);
// const char** gtk_about_dialog_get_documenters (::GtkAboutDialog* about);
std::vector<std::string> base::AboutDialogBase::get_documenters () noexcept
{
  typedef const char** (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_get_documenters;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_none);
}

// const gchar* gtk_about_dialog_get_license (GtkAboutDialog* about);
// const char* gtk_about_dialog_get_license (::GtkAboutDialog* about);
std::string base::AboutDialogBase::get_license () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_get_license;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkLicense gtk_about_dialog_get_license_type (GtkAboutDialog* about);
// ::GtkLicense gtk_about_dialog_get_license_type (::GtkAboutDialog* about);
Gtk::License base::AboutDialogBase::get_license_type () noexcept
{
  typedef ::GtkLicense (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_get_license_type;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GdkPixbuf* gtk_about_dialog_get_logo (GtkAboutDialog* about);
// ::GdkPixbuf* gtk_about_dialog_get_logo (::GtkAboutDialog* about);
GdkPixbuf::Pixbuf base::AboutDialogBase::get_logo () noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_get_logo;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_about_dialog_get_logo_icon_name (GtkAboutDialog* about);
// const char* gtk_about_dialog_get_logo_icon_name (::GtkAboutDialog* about);
std::string base::AboutDialogBase::get_logo_icon_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_get_logo_icon_name;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_about_dialog_get_program_name (GtkAboutDialog* about);
// const char* gtk_about_dialog_get_program_name (::GtkAboutDialog* about);
std::string base::AboutDialogBase::get_program_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_get_program_name;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_about_dialog_get_translator_credits (GtkAboutDialog* about);
// const char* gtk_about_dialog_get_translator_credits (::GtkAboutDialog* about);
std::string base::AboutDialogBase::get_translator_credits () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_get_translator_credits;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_about_dialog_get_version (GtkAboutDialog* about);
// const char* gtk_about_dialog_get_version (::GtkAboutDialog* about);
std::string base::AboutDialogBase::get_version () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_get_version;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_about_dialog_get_website (GtkAboutDialog* about);
// const char* gtk_about_dialog_get_website (::GtkAboutDialog* about);
std::string base::AboutDialogBase::get_website () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_get_website;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_about_dialog_get_website_label (GtkAboutDialog* about);
// const char* gtk_about_dialog_get_website_label (::GtkAboutDialog* about);
std::string base::AboutDialogBase::get_website_label () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_get_website_label;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_about_dialog_get_wrap_license (GtkAboutDialog* about);
// gboolean gtk_about_dialog_get_wrap_license (::GtkAboutDialog* about);
bool base::AboutDialogBase::get_wrap_license () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_get_wrap_license;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return _temp_ret;
}

// void gtk_about_dialog_set_artists (GtkAboutDialog* about, const gchar** artists);
// void gtk_about_dialog_set_artists (::GtkAboutDialog* about, const char** artists);
void base::AboutDialogBase::set_artists (const std::vector<std::string> & artists) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char** artists);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_set_artists;
  auto artists_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (artists);
  auto artists_w = unwrap (artists_i, gi::transfer_none, direction_in);
  auto artists_to_c = artists_w.gobj_(false);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char**) (artists_to_c));
}

// void gtk_about_dialog_set_authors (GtkAboutDialog* about, const gchar** authors);
// void gtk_about_dialog_set_authors (::GtkAboutDialog* about, const char** authors);
void base::AboutDialogBase::set_authors (const std::vector<std::string> & authors) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char** authors);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_set_authors;
  auto authors_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (authors);
  auto authors_w = unwrap (authors_i, gi::transfer_none, direction_in);
  auto authors_to_c = authors_w.gobj_(false);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char**) (authors_to_c));
}

// void gtk_about_dialog_set_comments (GtkAboutDialog* about, const gchar* comments);
// void gtk_about_dialog_set_comments (::GtkAboutDialog* about, const char* comments);
void base::AboutDialogBase::set_comments (const std::string & comments) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* comments);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_set_comments;
  auto comments_to_c = gi::unwrap (comments, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (comments_to_c));
}
void base::AboutDialogBase::set_comments () noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* comments);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_set_comments;
  auto comments_to_c = nullptr;
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (comments_to_c));
}

// void gtk_about_dialog_set_copyright (GtkAboutDialog* about, const gchar* copyright);
// void gtk_about_dialog_set_copyright (::GtkAboutDialog* about, const char* copyright);
void base::AboutDialogBase::set_copyright (const std::string & copyright) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* copyright);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_set_copyright;
  auto copyright_to_c = gi::unwrap (copyright, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (copyright_to_c));
}
void base::AboutDialogBase::set_copyright () noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* copyright);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_set_copyright;
  auto copyright_to_c = nullptr;
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (copyright_to_c));
}

// void gtk_about_dialog_set_documenters (GtkAboutDialog* about, const gchar** documenters);
// void gtk_about_dialog_set_documenters (::GtkAboutDialog* about, const char** documenters);
void base::AboutDialogBase::set_documenters (const std::vector<std::string> & documenters) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char** documenters);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_set_documenters;
  auto documenters_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (documenters);
  auto documenters_w = unwrap (documenters_i, gi::transfer_none, direction_in);
  auto documenters_to_c = documenters_w.gobj_(false);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char**) (documenters_to_c));
}

// void gtk_about_dialog_set_license (GtkAboutDialog* about, const gchar* license);
// void gtk_about_dialog_set_license (::GtkAboutDialog* about, const char* license);
void base::AboutDialogBase::set_license (const std::string & license) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* license);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_set_license;
  auto license_to_c = gi::unwrap (license, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (license_to_c));
}
void base::AboutDialogBase::set_license () noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* license);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_set_license;
  auto license_to_c = nullptr;
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (license_to_c));
}

// void gtk_about_dialog_set_license_type (GtkAboutDialog* about, GtkLicense license_type);
// void gtk_about_dialog_set_license_type (::GtkAboutDialog* about, ::GtkLicense license_type);
void base::AboutDialogBase::set_license_type (Gtk::License license_type) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, ::GtkLicense license_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_set_license_type;
  auto license_type_to_c = gi::unwrap (license_type);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (::GtkLicense) (license_type_to_c));
}

// void gtk_about_dialog_set_logo (GtkAboutDialog* about, GdkPixbuf* logo);
// void gtk_about_dialog_set_logo (::GtkAboutDialog* about, ::GdkPixbuf* logo);
void base::AboutDialogBase::set_logo (GdkPixbuf::Pixbuf logo) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, ::GdkPixbuf* logo);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_set_logo;
  auto logo_to_c = gi::unwrap (logo, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (::GdkPixbuf*) (logo_to_c));
}
void base::AboutDialogBase::set_logo () noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, ::GdkPixbuf* logo);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_set_logo;
  auto logo_to_c = nullptr;
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (::GdkPixbuf*) (logo_to_c));
}

// void gtk_about_dialog_set_logo_icon_name (GtkAboutDialog* about, const gchar* icon_name);
// void gtk_about_dialog_set_logo_icon_name (::GtkAboutDialog* about, const char* icon_name);
void base::AboutDialogBase::set_logo_icon_name (const std::string & icon_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_set_logo_icon_name;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (icon_name_to_c));
}
void base::AboutDialogBase::set_logo_icon_name () noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_set_logo_icon_name;
  auto icon_name_to_c = nullptr;
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (icon_name_to_c));
}

// void gtk_about_dialog_set_program_name (GtkAboutDialog* about, const gchar* name);
// void gtk_about_dialog_set_program_name (::GtkAboutDialog* about, const char* name);
void base::AboutDialogBase::set_program_name (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_set_program_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (name_to_c));
}

// void gtk_about_dialog_set_translator_credits (GtkAboutDialog* about, const gchar* translator_credits);
// void gtk_about_dialog_set_translator_credits (::GtkAboutDialog* about, const char* translator_credits);
void base::AboutDialogBase::set_translator_credits (const std::string & translator_credits) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* translator_credits);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_set_translator_credits;
  auto translator_credits_to_c = gi::unwrap (translator_credits, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (translator_credits_to_c));
}
void base::AboutDialogBase::set_translator_credits () noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* translator_credits);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_set_translator_credits;
  auto translator_credits_to_c = nullptr;
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (translator_credits_to_c));
}

// void gtk_about_dialog_set_version (GtkAboutDialog* about, const gchar* version);
// void gtk_about_dialog_set_version (::GtkAboutDialog* about, const char* version);
void base::AboutDialogBase::set_version (const std::string & version) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* version);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_set_version;
  auto version_to_c = gi::unwrap (version, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (version_to_c));
}
void base::AboutDialogBase::set_version () noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* version);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_set_version;
  auto version_to_c = nullptr;
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (version_to_c));
}

// void gtk_about_dialog_set_website (GtkAboutDialog* about, const gchar* website);
// void gtk_about_dialog_set_website (::GtkAboutDialog* about, const char* website);
void base::AboutDialogBase::set_website (const std::string & website) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* website);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_set_website;
  auto website_to_c = gi::unwrap (website, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (website_to_c));
}
void base::AboutDialogBase::set_website () noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* website);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_set_website;
  auto website_to_c = nullptr;
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (website_to_c));
}

// void gtk_about_dialog_set_website_label (GtkAboutDialog* about, const gchar* website_label);
// void gtk_about_dialog_set_website_label (::GtkAboutDialog* about, const char* website_label);
void base::AboutDialogBase::set_website_label (const std::string & website_label) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* website_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_set_website_label;
  auto website_label_to_c = gi::unwrap (website_label, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (website_label_to_c));
}

// void gtk_about_dialog_set_wrap_license (GtkAboutDialog* about, gboolean wrap_license);
// void gtk_about_dialog_set_wrap_license (::GtkAboutDialog* about, gboolean wrap_license);
void base::AboutDialogBase::set_wrap_license (gboolean wrap_license) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, gboolean wrap_license);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_set_wrap_license;
  auto wrap_license_to_c = wrap_license;
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (gboolean) (wrap_license_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/aboutdialog_extra_def_impl.hpp>)
#include <gtk/aboutdialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/aboutdialog_extra_impl.hpp>)
#include <gtk/aboutdialog_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void AboutDialogClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkAboutDialogClass *methods = (::GtkAboutDialogClass *) class_struct;
  (void) methods;

  methods->activate_link = (decltype (methods->activate_link)) detail::method_wrapper<self, bool (*) (const std::string & uri), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::activate_link_>;
}

// gboolean AboutDialog::activate_link (GtkAboutDialog* dialog, const gchar* uri);
// gboolean AboutDialog::activate_link (::GtkAboutDialog* dialog, const char* uri);
bool AboutDialogClass::activate_link_ (const std::string & uri) noexcept
{
  if (!get_struct_()->activate_link) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkAboutDialog* dialog, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate_link;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (uri_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
