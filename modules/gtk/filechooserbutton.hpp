// AUTO-GENERATED

#ifndef _GI_GTK_FILECHOOSERBUTTON_HPP_
#define _GI_GTK_FILECHOOSERBUTTON_HPP_

#include "box.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Dialog;
class FileChooser;

class FileChooserButton;

namespace base {


#define GI_GTK_FILECHOOSERBUTTON_BASE base::FileChooserButtonBase
class FileChooserButtonBase : public Gtk::Box
{
typedef Gtk::Box super_type;
public:
typedef ::GtkFileChooserButton BaseObjectType;

FileChooserButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_file_chooser_button_get_type(); } 

GI_INLINE_DECL Gtk::FileChooser interface_ (gi::interface_tag<Gtk::FileChooser>);

GI_INLINE_DECL operator Gtk::FileChooser ();

// GtkWidget* gtk_file_chooser_button_new (const gchar* title, GtkFileChooserAction action);
// ::GtkFileChooserButton* gtk_file_chooser_button_new (const char* title, ::GtkFileChooserAction action);
static GI_INLINE_DECL Gtk::FileChooserButton new_ (const std::string & title, Gtk::FileChooserAction action) noexcept;

// GtkWidget* gtk_file_chooser_button_new_with_dialog (GtkWidget* dialog);
// ::GtkFileChooserButton* gtk_file_chooser_button_new_with_dialog (::GtkDialog* dialog);
static GI_INLINE_DECL Gtk::FileChooserButton new_with_dialog (Gtk::Dialog dialog) noexcept;

// gboolean gtk_file_chooser_button_get_focus_on_click (GtkFileChooserButton* button);
// gboolean gtk_file_chooser_button_get_focus_on_click (::GtkFileChooserButton* button);
// IGNORE; deprecated

// const gchar* gtk_file_chooser_button_get_title (GtkFileChooserButton* button);
// const char* gtk_file_chooser_button_get_title (::GtkFileChooserButton* button);
GI_INLINE_DECL std::string get_title () noexcept;

// gint gtk_file_chooser_button_get_width_chars (GtkFileChooserButton* button);
// gint gtk_file_chooser_button_get_width_chars (::GtkFileChooserButton* button);
GI_INLINE_DECL gint get_width_chars () noexcept;

// void gtk_file_chooser_button_set_focus_on_click (GtkFileChooserButton* button, gboolean focus_on_click);
// void gtk_file_chooser_button_set_focus_on_click (::GtkFileChooserButton* button, gboolean focus_on_click);
// IGNORE; deprecated

// void gtk_file_chooser_button_set_title (GtkFileChooserButton* button, const gchar* title);
// void gtk_file_chooser_button_set_title (::GtkFileChooserButton* button, const char* title);
GI_INLINE_DECL void set_title (const std::string & title) noexcept;

// void gtk_file_chooser_button_set_width_chars (GtkFileChooserButton* button, gint n_chars);
// void gtk_file_chooser_button_set_width_chars (::GtkFileChooserButton* button, gint n_chars);
GI_INLINE_DECL void set_width_chars (gint n_chars) noexcept;

gi::property_proxy_write<Gtk::FileChooser, base::FileChooserButtonBase> property_dialog()
{ return gi::property_proxy_write<Gtk::FileChooser, base::FileChooserButtonBase> (*this, "dialog"); }

gi::property_proxy<std::string, base::FileChooserButtonBase> property_title()
{ return gi::property_proxy<std::string, base::FileChooserButtonBase> (*this, "title"); }
const gi::property_proxy<std::string, base::FileChooserButtonBase> property_title() const
{ return gi::property_proxy<std::string, base::FileChooserButtonBase> (*this, "title"); }

gi::property_proxy<gint, base::FileChooserButtonBase> property_width_chars()
{ return gi::property_proxy<gint, base::FileChooserButtonBase> (*this, "width-chars"); }
const gi::property_proxy<gint, base::FileChooserButtonBase> property_width_chars() const
{ return gi::property_proxy<gint, base::FileChooserButtonBase> (*this, "width-chars"); }

// signal file-set
gi::signal_proxy<void(Gtk::FileChooserButton)> signal_file_set()
{ return gi::signal_proxy<void(Gtk::FileChooserButton)> (*this, "file-set"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filechooserbutton_extra_def.hpp>)
#include <gtk/filechooserbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filechooserbutton_extra.hpp>)
#include <gtk/filechooserbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FileChooserButton : public GI_GTK_FILECHOOSERBUTTON_BASE
{ typedef GI_GTK_FILECHOOSERBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFileChooserButton>
{ typedef Gtk::FileChooserButton type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FileChooserButtonClassDef
{
typedef FileChooserButtonClassDef self;
public:
typedef Gtk::FileChooserButton instance_type;
typedef ::GtkFileChooserButtonClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void FileChooserButton::file_set (GtkFileChooserButton* fc);
// void FileChooserButton::file_set (::GtkFileChooserButton* fc);
virtual void file_set_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class FileChooserButtonClass: public detail::ClassTemplate<Gtk::impl::internal::FileChooserButtonClassDef, Gtk::impl::internal::BoxClass>
{
typedef FileChooserButtonClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::FileChooserButtonClassDef, Gtk::impl::internal::BoxClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void FileChooserButton::file_set (GtkFileChooserButton* fc);
// void FileChooserButton::file_set (::GtkFileChooserButton* fc);
GI_INLINE_DECL void file_set_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using FileChooserButtonImpl = detail::ObjectImpl<FileChooserButton, internal::FileChooserButtonClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
