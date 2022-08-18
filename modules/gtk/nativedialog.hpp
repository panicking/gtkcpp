// AUTO-GENERATED

#ifndef _GI_GTK_NATIVEDIALOG_HPP_
#define _GI_GTK_NATIVEDIALOG_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Window;

class NativeDialog;

namespace base {


#define GI_GTK_NATIVEDIALOG_BASE base::NativeDialogBase
class NativeDialogBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkNativeDialog BaseObjectType;

NativeDialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_native_dialog_get_type(); } 

// void gtk_native_dialog_destroy (GtkNativeDialog* self);
// void gtk_native_dialog_destroy (::GtkNativeDialog* self);
GI_INLINE_DECL void destroy () noexcept;

// gboolean gtk_native_dialog_get_modal (GtkNativeDialog* self);
// gboolean gtk_native_dialog_get_modal (::GtkNativeDialog* self);
GI_INLINE_DECL bool get_modal () noexcept;

// const char* gtk_native_dialog_get_title (GtkNativeDialog* self);
// const char* gtk_native_dialog_get_title (::GtkNativeDialog* self);
GI_INLINE_DECL std::string get_title () noexcept;

// GtkWindow* gtk_native_dialog_get_transient_for (GtkNativeDialog* self);
// ::GtkWindow* gtk_native_dialog_get_transient_for (::GtkNativeDialog* self);
GI_INLINE_DECL Gtk::Window get_transient_for () noexcept;

// gboolean gtk_native_dialog_get_visible (GtkNativeDialog* self);
// gboolean gtk_native_dialog_get_visible (::GtkNativeDialog* self);
GI_INLINE_DECL bool get_visible () noexcept;

// void gtk_native_dialog_hide (GtkNativeDialog* self);
// void gtk_native_dialog_hide (::GtkNativeDialog* self);
GI_INLINE_DECL void hide () noexcept;

// gint gtk_native_dialog_run (GtkNativeDialog* self);
// gint gtk_native_dialog_run (::GtkNativeDialog* self);
GI_INLINE_DECL gint run () noexcept;

// void gtk_native_dialog_set_modal (GtkNativeDialog* self, gboolean modal);
// void gtk_native_dialog_set_modal (::GtkNativeDialog* self, gboolean modal);
GI_INLINE_DECL void set_modal (gboolean modal) noexcept;

// void gtk_native_dialog_set_title (GtkNativeDialog* self, const char* title);
// void gtk_native_dialog_set_title (::GtkNativeDialog* self, const char* title);
GI_INLINE_DECL void set_title (const std::string & title) noexcept;

// void gtk_native_dialog_set_transient_for (GtkNativeDialog* self, GtkWindow* parent);
// void gtk_native_dialog_set_transient_for (::GtkNativeDialog* self, ::GtkWindow* parent);
GI_INLINE_DECL void set_transient_for (Gtk::Window parent) noexcept;
GI_INLINE_DECL void set_transient_for () noexcept;

// void gtk_native_dialog_show (GtkNativeDialog* self);
// void gtk_native_dialog_show (::GtkNativeDialog* self);
GI_INLINE_DECL void show () noexcept;

gi::property_proxy<bool, base::NativeDialogBase> property_modal()
{ return gi::property_proxy<bool, base::NativeDialogBase> (*this, "modal"); }
const gi::property_proxy<bool, base::NativeDialogBase> property_modal() const
{ return gi::property_proxy<bool, base::NativeDialogBase> (*this, "modal"); }

gi::property_proxy<std::string, base::NativeDialogBase> property_title()
{ return gi::property_proxy<std::string, base::NativeDialogBase> (*this, "title"); }
const gi::property_proxy<std::string, base::NativeDialogBase> property_title() const
{ return gi::property_proxy<std::string, base::NativeDialogBase> (*this, "title"); }

gi::property_proxy<Gtk::Window, base::NativeDialogBase> property_transient_for()
{ return gi::property_proxy<Gtk::Window, base::NativeDialogBase> (*this, "transient-for"); }
const gi::property_proxy<Gtk::Window, base::NativeDialogBase> property_transient_for() const
{ return gi::property_proxy<Gtk::Window, base::NativeDialogBase> (*this, "transient-for"); }

gi::property_proxy<bool, base::NativeDialogBase> property_visible()
{ return gi::property_proxy<bool, base::NativeDialogBase> (*this, "visible"); }
const gi::property_proxy<bool, base::NativeDialogBase> property_visible() const
{ return gi::property_proxy<bool, base::NativeDialogBase> (*this, "visible"); }

// signal response
gi::signal_proxy<void(Gtk::NativeDialog, gint response_id)> signal_response()
{ return gi::signal_proxy<void(Gtk::NativeDialog, gint response_id)> (*this, "response"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/nativedialog_extra_def.hpp>)
#include <gtk/nativedialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/nativedialog_extra.hpp>)
#include <gtk/nativedialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class NativeDialog : public GI_GTK_NATIVEDIALOG_BASE
{ typedef GI_GTK_NATIVEDIALOG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkNativeDialog>
{ typedef Gtk::NativeDialog type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class NativeDialogClassDef
{
typedef NativeDialogClassDef self;
public:
typedef Gtk::NativeDialog instance_type;
typedef ::GtkNativeDialogClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void NativeDialog::hide (GtkNativeDialog* self);
// void NativeDialog::hide (::GtkNativeDialog* self);
virtual void hide_ () noexcept = 0;

// void NativeDialog::response (GtkNativeDialog* self, gint response_id);
// void NativeDialog::response (::GtkNativeDialog* self, gint response_id);
virtual void response_ (gint response_id) noexcept = 0;

// void NativeDialog::show (GtkNativeDialog* self);
// void NativeDialog::show (::GtkNativeDialog* self);
virtual void show_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class NativeDialogClass: public detail::ClassTemplate<Gtk::impl::internal::NativeDialogClassDef, GObject::impl::internal::ObjectClass>
{
typedef NativeDialogClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::NativeDialogClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void NativeDialog::hide (GtkNativeDialog* self);
// void NativeDialog::hide (::GtkNativeDialog* self);
GI_INLINE_DECL void hide_ () noexcept override;

// void NativeDialog::response (GtkNativeDialog* self, gint response_id);
// void NativeDialog::response (::GtkNativeDialog* self, gint response_id);
GI_INLINE_DECL void response_ (gint response_id) noexcept override;

// void NativeDialog::show (GtkNativeDialog* self);
// void NativeDialog::show (::GtkNativeDialog* self);
GI_INLINE_DECL void show_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using NativeDialogImpl = detail::ObjectImpl<NativeDialog, internal::NativeDialogClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
