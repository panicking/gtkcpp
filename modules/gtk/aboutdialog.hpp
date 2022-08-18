// AUTO-GENERATED

#ifndef _GI_GTK_ABOUTDIALOG_HPP_
#define _GI_GTK_ABOUTDIALOG_HPP_

#include "dialog.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class AboutDialog;

namespace base {


#define GI_GTK_ABOUTDIALOG_BASE base::AboutDialogBase
class AboutDialogBase : public Gtk::Dialog
{
typedef Gtk::Dialog super_type;
public:
typedef ::GtkAboutDialog BaseObjectType;

AboutDialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_about_dialog_get_type(); } 

// GtkWidget* gtk_about_dialog_new ();
// ::GtkAboutDialog* gtk_about_dialog_new ();
static GI_INLINE_DECL Gtk::AboutDialog new_ () noexcept;

// void gtk_about_dialog_add_credit_section (GtkAboutDialog* about, const gchar* section_name, const gchar** people);
// void gtk_about_dialog_add_credit_section (::GtkAboutDialog* about, const char* section_name, const char** people);
GI_INLINE_DECL void add_credit_section (const std::string & section_name, const std::vector<std::string> & people) noexcept;

// const gchar* const* gtk_about_dialog_get_artists (GtkAboutDialog* about);
// const char** gtk_about_dialog_get_artists (::GtkAboutDialog* about);
GI_INLINE_DECL std::vector<std::string> get_artists () noexcept;

// const gchar* const* gtk_about_dialog_get_authors (GtkAboutDialog* about);
// const char** gtk_about_dialog_get_authors (::GtkAboutDialog* about);
GI_INLINE_DECL std::vector<std::string> get_authors () noexcept;

// const gchar* gtk_about_dialog_get_comments (GtkAboutDialog* about);
// const char* gtk_about_dialog_get_comments (::GtkAboutDialog* about);
GI_INLINE_DECL std::string get_comments () noexcept;

// const gchar* gtk_about_dialog_get_copyright (GtkAboutDialog* about);
// const char* gtk_about_dialog_get_copyright (::GtkAboutDialog* about);
GI_INLINE_DECL std::string get_copyright () noexcept;

// const gchar* const* gtk_about_dialog_get_documenters (GtkAboutDialog* about);
// const char** gtk_about_dialog_get_documenters (::GtkAboutDialog* about);
GI_INLINE_DECL std::vector<std::string> get_documenters () noexcept;

// const gchar* gtk_about_dialog_get_license (GtkAboutDialog* about);
// const char* gtk_about_dialog_get_license (::GtkAboutDialog* about);
GI_INLINE_DECL std::string get_license () noexcept;

// GtkLicense gtk_about_dialog_get_license_type (GtkAboutDialog* about);
// ::GtkLicense gtk_about_dialog_get_license_type (::GtkAboutDialog* about);
GI_INLINE_DECL Gtk::License get_license_type () noexcept;

// GdkPixbuf* gtk_about_dialog_get_logo (GtkAboutDialog* about);
// ::GdkPixbuf* gtk_about_dialog_get_logo (::GtkAboutDialog* about);
GI_INLINE_DECL GdkPixbuf::Pixbuf get_logo () noexcept;

// const gchar* gtk_about_dialog_get_logo_icon_name (GtkAboutDialog* about);
// const char* gtk_about_dialog_get_logo_icon_name (::GtkAboutDialog* about);
GI_INLINE_DECL std::string get_logo_icon_name () noexcept;

// const gchar* gtk_about_dialog_get_program_name (GtkAboutDialog* about);
// const char* gtk_about_dialog_get_program_name (::GtkAboutDialog* about);
GI_INLINE_DECL std::string get_program_name () noexcept;

// const gchar* gtk_about_dialog_get_translator_credits (GtkAboutDialog* about);
// const char* gtk_about_dialog_get_translator_credits (::GtkAboutDialog* about);
GI_INLINE_DECL std::string get_translator_credits () noexcept;

// const gchar* gtk_about_dialog_get_version (GtkAboutDialog* about);
// const char* gtk_about_dialog_get_version (::GtkAboutDialog* about);
GI_INLINE_DECL std::string get_version () noexcept;

// const gchar* gtk_about_dialog_get_website (GtkAboutDialog* about);
// const char* gtk_about_dialog_get_website (::GtkAboutDialog* about);
GI_INLINE_DECL std::string get_website () noexcept;

// const gchar* gtk_about_dialog_get_website_label (GtkAboutDialog* about);
// const char* gtk_about_dialog_get_website_label (::GtkAboutDialog* about);
GI_INLINE_DECL std::string get_website_label () noexcept;

// gboolean gtk_about_dialog_get_wrap_license (GtkAboutDialog* about);
// gboolean gtk_about_dialog_get_wrap_license (::GtkAboutDialog* about);
GI_INLINE_DECL bool get_wrap_license () noexcept;

// void gtk_about_dialog_set_artists (GtkAboutDialog* about, const gchar** artists);
// void gtk_about_dialog_set_artists (::GtkAboutDialog* about, const char** artists);
GI_INLINE_DECL void set_artists (const std::vector<std::string> & artists) noexcept;

// void gtk_about_dialog_set_authors (GtkAboutDialog* about, const gchar** authors);
// void gtk_about_dialog_set_authors (::GtkAboutDialog* about, const char** authors);
GI_INLINE_DECL void set_authors (const std::vector<std::string> & authors) noexcept;

// void gtk_about_dialog_set_comments (GtkAboutDialog* about, const gchar* comments);
// void gtk_about_dialog_set_comments (::GtkAboutDialog* about, const char* comments);
GI_INLINE_DECL void set_comments (const std::string & comments) noexcept;
GI_INLINE_DECL void set_comments () noexcept;

// void gtk_about_dialog_set_copyright (GtkAboutDialog* about, const gchar* copyright);
// void gtk_about_dialog_set_copyright (::GtkAboutDialog* about, const char* copyright);
GI_INLINE_DECL void set_copyright (const std::string & copyright) noexcept;
GI_INLINE_DECL void set_copyright () noexcept;

// void gtk_about_dialog_set_documenters (GtkAboutDialog* about, const gchar** documenters);
// void gtk_about_dialog_set_documenters (::GtkAboutDialog* about, const char** documenters);
GI_INLINE_DECL void set_documenters (const std::vector<std::string> & documenters) noexcept;

// void gtk_about_dialog_set_license (GtkAboutDialog* about, const gchar* license);
// void gtk_about_dialog_set_license (::GtkAboutDialog* about, const char* license);
GI_INLINE_DECL void set_license (const std::string & license) noexcept;
GI_INLINE_DECL void set_license () noexcept;

// void gtk_about_dialog_set_license_type (GtkAboutDialog* about, GtkLicense license_type);
// void gtk_about_dialog_set_license_type (::GtkAboutDialog* about, ::GtkLicense license_type);
GI_INLINE_DECL void set_license_type (Gtk::License license_type) noexcept;

// void gtk_about_dialog_set_logo (GtkAboutDialog* about, GdkPixbuf* logo);
// void gtk_about_dialog_set_logo (::GtkAboutDialog* about, ::GdkPixbuf* logo);
GI_INLINE_DECL void set_logo (GdkPixbuf::Pixbuf logo) noexcept;
GI_INLINE_DECL void set_logo () noexcept;

// void gtk_about_dialog_set_logo_icon_name (GtkAboutDialog* about, const gchar* icon_name);
// void gtk_about_dialog_set_logo_icon_name (::GtkAboutDialog* about, const char* icon_name);
GI_INLINE_DECL void set_logo_icon_name (const std::string & icon_name) noexcept;
GI_INLINE_DECL void set_logo_icon_name () noexcept;

// void gtk_about_dialog_set_program_name (GtkAboutDialog* about, const gchar* name);
// void gtk_about_dialog_set_program_name (::GtkAboutDialog* about, const char* name);
GI_INLINE_DECL void set_program_name (const std::string & name) noexcept;

// void gtk_about_dialog_set_translator_credits (GtkAboutDialog* about, const gchar* translator_credits);
// void gtk_about_dialog_set_translator_credits (::GtkAboutDialog* about, const char* translator_credits);
GI_INLINE_DECL void set_translator_credits (const std::string & translator_credits) noexcept;
GI_INLINE_DECL void set_translator_credits () noexcept;

// void gtk_about_dialog_set_version (GtkAboutDialog* about, const gchar* version);
// void gtk_about_dialog_set_version (::GtkAboutDialog* about, const char* version);
GI_INLINE_DECL void set_version (const std::string & version) noexcept;
GI_INLINE_DECL void set_version () noexcept;

// void gtk_about_dialog_set_website (GtkAboutDialog* about, const gchar* website);
// void gtk_about_dialog_set_website (::GtkAboutDialog* about, const char* website);
GI_INLINE_DECL void set_website (const std::string & website) noexcept;
GI_INLINE_DECL void set_website () noexcept;

// void gtk_about_dialog_set_website_label (GtkAboutDialog* about, const gchar* website_label);
// void gtk_about_dialog_set_website_label (::GtkAboutDialog* about, const char* website_label);
GI_INLINE_DECL void set_website_label (const std::string & website_label) noexcept;

// void gtk_about_dialog_set_wrap_license (GtkAboutDialog* about, gboolean wrap_license);
// void gtk_about_dialog_set_wrap_license (::GtkAboutDialog* about, gboolean wrap_license);
GI_INLINE_DECL void set_wrap_license (gboolean wrap_license) noexcept;

gi::property_proxy<std::string, base::AboutDialogBase> property_comments()
{ return gi::property_proxy<std::string, base::AboutDialogBase> (*this, "comments"); }
const gi::property_proxy<std::string, base::AboutDialogBase> property_comments() const
{ return gi::property_proxy<std::string, base::AboutDialogBase> (*this, "comments"); }

gi::property_proxy<std::string, base::AboutDialogBase> property_copyright()
{ return gi::property_proxy<std::string, base::AboutDialogBase> (*this, "copyright"); }
const gi::property_proxy<std::string, base::AboutDialogBase> property_copyright() const
{ return gi::property_proxy<std::string, base::AboutDialogBase> (*this, "copyright"); }

gi::property_proxy<std::string, base::AboutDialogBase> property_license()
{ return gi::property_proxy<std::string, base::AboutDialogBase> (*this, "license"); }
const gi::property_proxy<std::string, base::AboutDialogBase> property_license() const
{ return gi::property_proxy<std::string, base::AboutDialogBase> (*this, "license"); }

gi::property_proxy<Gtk::License, base::AboutDialogBase> property_license_type()
{ return gi::property_proxy<Gtk::License, base::AboutDialogBase> (*this, "license-type"); }
const gi::property_proxy<Gtk::License, base::AboutDialogBase> property_license_type() const
{ return gi::property_proxy<Gtk::License, base::AboutDialogBase> (*this, "license-type"); }

gi::property_proxy<GdkPixbuf::Pixbuf, base::AboutDialogBase> property_logo()
{ return gi::property_proxy<GdkPixbuf::Pixbuf, base::AboutDialogBase> (*this, "logo"); }
const gi::property_proxy<GdkPixbuf::Pixbuf, base::AboutDialogBase> property_logo() const
{ return gi::property_proxy<GdkPixbuf::Pixbuf, base::AboutDialogBase> (*this, "logo"); }

gi::property_proxy<std::string, base::AboutDialogBase> property_logo_icon_name()
{ return gi::property_proxy<std::string, base::AboutDialogBase> (*this, "logo-icon-name"); }
const gi::property_proxy<std::string, base::AboutDialogBase> property_logo_icon_name() const
{ return gi::property_proxy<std::string, base::AboutDialogBase> (*this, "logo-icon-name"); }

gi::property_proxy<std::string, base::AboutDialogBase> property_program_name()
{ return gi::property_proxy<std::string, base::AboutDialogBase> (*this, "program-name"); }
const gi::property_proxy<std::string, base::AboutDialogBase> property_program_name() const
{ return gi::property_proxy<std::string, base::AboutDialogBase> (*this, "program-name"); }

gi::property_proxy<std::string, base::AboutDialogBase> property_translator_credits()
{ return gi::property_proxy<std::string, base::AboutDialogBase> (*this, "translator-credits"); }
const gi::property_proxy<std::string, base::AboutDialogBase> property_translator_credits() const
{ return gi::property_proxy<std::string, base::AboutDialogBase> (*this, "translator-credits"); }

gi::property_proxy<std::string, base::AboutDialogBase> property_version()
{ return gi::property_proxy<std::string, base::AboutDialogBase> (*this, "version"); }
const gi::property_proxy<std::string, base::AboutDialogBase> property_version() const
{ return gi::property_proxy<std::string, base::AboutDialogBase> (*this, "version"); }

gi::property_proxy<std::string, base::AboutDialogBase> property_website()
{ return gi::property_proxy<std::string, base::AboutDialogBase> (*this, "website"); }
const gi::property_proxy<std::string, base::AboutDialogBase> property_website() const
{ return gi::property_proxy<std::string, base::AboutDialogBase> (*this, "website"); }

gi::property_proxy<std::string, base::AboutDialogBase> property_website_label()
{ return gi::property_proxy<std::string, base::AboutDialogBase> (*this, "website-label"); }
const gi::property_proxy<std::string, base::AboutDialogBase> property_website_label() const
{ return gi::property_proxy<std::string, base::AboutDialogBase> (*this, "website-label"); }

gi::property_proxy<bool, base::AboutDialogBase> property_wrap_license()
{ return gi::property_proxy<bool, base::AboutDialogBase> (*this, "wrap-license"); }
const gi::property_proxy<bool, base::AboutDialogBase> property_wrap_license() const
{ return gi::property_proxy<bool, base::AboutDialogBase> (*this, "wrap-license"); }

// signal activate-link
gi::signal_proxy<bool(Gtk::AboutDialog, const std::string & uri)> signal_activate_link()
{ return gi::signal_proxy<bool(Gtk::AboutDialog, const std::string & uri)> (*this, "activate-link"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/aboutdialog_extra_def.hpp>)
#include <gtk/aboutdialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/aboutdialog_extra.hpp>)
#include <gtk/aboutdialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AboutDialog : public GI_GTK_ABOUTDIALOG_BASE
{ typedef GI_GTK_ABOUTDIALOG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAboutDialog>
{ typedef Gtk::AboutDialog type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class AboutDialogClassDef
{
typedef AboutDialogClassDef self;
public:
typedef Gtk::AboutDialog instance_type;
typedef ::GtkAboutDialogClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean AboutDialog::activate_link (GtkAboutDialog* dialog, const gchar* uri);
// gboolean AboutDialog::activate_link (::GtkAboutDialog* dialog, const char* uri);
virtual bool activate_link_ (const std::string & uri) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class AboutDialogClass: public detail::ClassTemplate<Gtk::impl::internal::AboutDialogClassDef, Gtk::impl::internal::DialogClass>
{
typedef AboutDialogClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::AboutDialogClassDef, Gtk::impl::internal::DialogClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean AboutDialog::activate_link (GtkAboutDialog* dialog, const gchar* uri);
// gboolean AboutDialog::activate_link (::GtkAboutDialog* dialog, const char* uri);
GI_INLINE_DECL bool activate_link_ (const std::string & uri) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using AboutDialogImpl = detail::ObjectImpl<AboutDialog, internal::AboutDialogClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
