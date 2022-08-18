// AUTO-GENERATED

#ifndef _GI_GTK_FILECHOOSERNATIVE_HPP_
#define _GI_GTK_FILECHOOSERNATIVE_HPP_

#include "nativedialog.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class FileChooser;
class Window;

class FileChooserNative;

namespace base {


#define GI_GTK_FILECHOOSERNATIVE_BASE base::FileChooserNativeBase
class FileChooserNativeBase : public Gtk::NativeDialog
{
typedef Gtk::NativeDialog super_type;
public:
typedef ::GtkFileChooserNative BaseObjectType;

FileChooserNativeBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_file_chooser_native_get_type(); } 

GI_INLINE_DECL Gtk::FileChooser interface_ (gi::interface_tag<Gtk::FileChooser>);

GI_INLINE_DECL operator Gtk::FileChooser ();

// GtkFileChooserNative* gtk_file_chooser_native_new (const gchar* title, GtkWindow* parent, GtkFileChooserAction action, const gchar* accept_label, const gchar* cancel_label);
// ::GtkFileChooserNative* gtk_file_chooser_native_new (const char* title, ::GtkWindow* parent, ::GtkFileChooserAction action, const char* accept_label, const char* cancel_label);
static GI_INLINE_DECL Gtk::FileChooserNative new_ (const std::string & title, Gtk::Window parent, Gtk::FileChooserAction action, const std::string & accept_label, const std::string & cancel_label) noexcept;
static GI_INLINE_DECL Gtk::FileChooserNative new_ (Gtk::FileChooserAction action) noexcept;

// const char* gtk_file_chooser_native_get_accept_label (GtkFileChooserNative* self);
// const char* gtk_file_chooser_native_get_accept_label (::GtkFileChooserNative* self);
GI_INLINE_DECL std::string get_accept_label () noexcept;

// const char* gtk_file_chooser_native_get_cancel_label (GtkFileChooserNative* self);
// const char* gtk_file_chooser_native_get_cancel_label (::GtkFileChooserNative* self);
GI_INLINE_DECL std::string get_cancel_label () noexcept;

// void gtk_file_chooser_native_set_accept_label (GtkFileChooserNative* self, const char* accept_label);
// void gtk_file_chooser_native_set_accept_label (::GtkFileChooserNative* self, const char* accept_label);
GI_INLINE_DECL void set_accept_label (const std::string & accept_label) noexcept;
GI_INLINE_DECL void set_accept_label () noexcept;

// void gtk_file_chooser_native_set_cancel_label (GtkFileChooserNative* self, const char* cancel_label);
// void gtk_file_chooser_native_set_cancel_label (::GtkFileChooserNative* self, const char* cancel_label);
GI_INLINE_DECL void set_cancel_label (const std::string & cancel_label) noexcept;
GI_INLINE_DECL void set_cancel_label () noexcept;

gi::property_proxy<std::string, base::FileChooserNativeBase> property_accept_label()
{ return gi::property_proxy<std::string, base::FileChooserNativeBase> (*this, "accept-label"); }
const gi::property_proxy<std::string, base::FileChooserNativeBase> property_accept_label() const
{ return gi::property_proxy<std::string, base::FileChooserNativeBase> (*this, "accept-label"); }

gi::property_proxy<std::string, base::FileChooserNativeBase> property_cancel_label()
{ return gi::property_proxy<std::string, base::FileChooserNativeBase> (*this, "cancel-label"); }
const gi::property_proxy<std::string, base::FileChooserNativeBase> property_cancel_label() const
{ return gi::property_proxy<std::string, base::FileChooserNativeBase> (*this, "cancel-label"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filechoosernative_extra_def.hpp>)
#include <gtk/filechoosernative_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filechoosernative_extra.hpp>)
#include <gtk/filechoosernative_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FileChooserNative : public GI_GTK_FILECHOOSERNATIVE_BASE
{ typedef GI_GTK_FILECHOOSERNATIVE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFileChooserNative>
{ typedef Gtk::FileChooserNative type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FileChooserNativeClassDef
{
typedef FileChooserNativeClassDef self;
public:
typedef Gtk::FileChooserNative instance_type;
typedef ::GtkFileChooserNativeClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FileChooserNativeClass: public detail::ClassTemplate<Gtk::impl::internal::FileChooserNativeClassDef, Gtk::impl::internal::NativeDialogClass>
{
typedef FileChooserNativeClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::FileChooserNativeClassDef, Gtk::impl::internal::NativeDialogClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using FileChooserNativeImpl = detail::ObjectImpl<FileChooserNative, internal::FileChooserNativeClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
