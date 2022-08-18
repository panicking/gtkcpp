// AUTO-GENERATED

#ifndef _GI_GTK_PRINTOPERATION_HPP_
#define _GI_GTK_PRINTOPERATION_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class PageSetup;
class PrintContext;
class PrintOperationPreview;
class PrintSettings;
class Widget;
class Window;

class PrintOperation;

namespace base {


#define GI_GTK_PRINTOPERATION_BASE base::PrintOperationBase
class PrintOperationBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkPrintOperation BaseObjectType;

PrintOperationBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_print_operation_get_type(); } 

GI_INLINE_DECL Gtk::PrintOperationPreview interface_ (gi::interface_tag<Gtk::PrintOperationPreview>);

GI_INLINE_DECL operator Gtk::PrintOperationPreview ();

// GtkPrintOperation* gtk_print_operation_new ();
// ::GtkPrintOperation* gtk_print_operation_new ();
static GI_INLINE_DECL Gtk::PrintOperation new_ () noexcept;

// void gtk_print_operation_cancel (GtkPrintOperation* op);
// void gtk_print_operation_cancel (::GtkPrintOperation* op);
GI_INLINE_DECL void cancel () noexcept;

// void gtk_print_operation_draw_page_finish (GtkPrintOperation* op);
// void gtk_print_operation_draw_page_finish (::GtkPrintOperation* op);
GI_INLINE_DECL void draw_page_finish () noexcept;

// GtkPageSetup* gtk_print_operation_get_default_page_setup (GtkPrintOperation* op);
// ::GtkPageSetup* gtk_print_operation_get_default_page_setup (::GtkPrintOperation* op);
GI_INLINE_DECL Gtk::PageSetup get_default_page_setup () noexcept;

// gboolean gtk_print_operation_get_embed_page_setup (GtkPrintOperation* op);
// gboolean gtk_print_operation_get_embed_page_setup (::GtkPrintOperation* op);
GI_INLINE_DECL bool get_embed_page_setup () noexcept;

// void gtk_print_operation_get_error (GtkPrintOperation* op, GError ** error);
// void gtk_print_operation_get_error (::GtkPrintOperation* op, GError ** error);
GI_INLINE_DECL void get_error ();
GI_INLINE_DECL void get_error (GLib::Error * _error) noexcept;

// gboolean gtk_print_operation_get_has_selection (GtkPrintOperation* op);
// gboolean gtk_print_operation_get_has_selection (::GtkPrintOperation* op);
GI_INLINE_DECL bool get_has_selection () noexcept;

// gint gtk_print_operation_get_n_pages_to_print (GtkPrintOperation* op);
// gint gtk_print_operation_get_n_pages_to_print (::GtkPrintOperation* op);
GI_INLINE_DECL gint get_n_pages_to_print () noexcept;

// GtkPrintSettings* gtk_print_operation_get_print_settings (GtkPrintOperation* op);
// ::GtkPrintSettings* gtk_print_operation_get_print_settings (::GtkPrintOperation* op);
GI_INLINE_DECL Gtk::PrintSettings get_print_settings () noexcept;

// GtkPrintStatus gtk_print_operation_get_status (GtkPrintOperation* op);
// ::GtkPrintStatus gtk_print_operation_get_status (::GtkPrintOperation* op);
GI_INLINE_DECL Gtk::PrintStatus get_status () noexcept;

// const gchar* gtk_print_operation_get_status_string (GtkPrintOperation* op);
// const char* gtk_print_operation_get_status_string (::GtkPrintOperation* op);
GI_INLINE_DECL std::string get_status_string () noexcept;

// gboolean gtk_print_operation_get_support_selection (GtkPrintOperation* op);
// gboolean gtk_print_operation_get_support_selection (::GtkPrintOperation* op);
GI_INLINE_DECL bool get_support_selection () noexcept;

// gboolean gtk_print_operation_is_finished (GtkPrintOperation* op);
// gboolean gtk_print_operation_is_finished (::GtkPrintOperation* op);
GI_INLINE_DECL bool is_finished () noexcept;

// GtkPrintOperationResult gtk_print_operation_run (GtkPrintOperation* op, GtkPrintOperationAction action, GtkWindow* parent, GError ** error);
// ::GtkPrintOperationResult gtk_print_operation_run (::GtkPrintOperation* op, ::GtkPrintOperationAction action, ::GtkWindow* parent, GError ** error);
GI_INLINE_DECL Gtk::PrintOperationResult run (Gtk::PrintOperationAction action, Gtk::Window parent);
GI_INLINE_DECL Gtk::PrintOperationResult run (Gtk::PrintOperationAction action);
GI_INLINE_DECL Gtk::PrintOperationResult run (Gtk::PrintOperationAction action, Gtk::Window parent, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gtk::PrintOperationResult run (Gtk::PrintOperationAction action, GLib::Error * _error) noexcept;

// void gtk_print_operation_set_allow_async (GtkPrintOperation* op, gboolean allow_async);
// void gtk_print_operation_set_allow_async (::GtkPrintOperation* op, gboolean allow_async);
GI_INLINE_DECL void set_allow_async (gboolean allow_async) noexcept;

// void gtk_print_operation_set_current_page (GtkPrintOperation* op, gint current_page);
// void gtk_print_operation_set_current_page (::GtkPrintOperation* op, gint current_page);
GI_INLINE_DECL void set_current_page (gint current_page) noexcept;

// void gtk_print_operation_set_custom_tab_label (GtkPrintOperation* op, const gchar* label);
// void gtk_print_operation_set_custom_tab_label (::GtkPrintOperation* op, const char* label);
GI_INLINE_DECL void set_custom_tab_label (const std::string & label) noexcept;
GI_INLINE_DECL void set_custom_tab_label () noexcept;

// void gtk_print_operation_set_default_page_setup (GtkPrintOperation* op, GtkPageSetup* default_page_setup);
// void gtk_print_operation_set_default_page_setup (::GtkPrintOperation* op, ::GtkPageSetup* default_page_setup);
GI_INLINE_DECL void set_default_page_setup (Gtk::PageSetup default_page_setup) noexcept;
GI_INLINE_DECL void set_default_page_setup () noexcept;

// void gtk_print_operation_set_defer_drawing (GtkPrintOperation* op);
// void gtk_print_operation_set_defer_drawing (::GtkPrintOperation* op);
GI_INLINE_DECL void set_defer_drawing () noexcept;

// void gtk_print_operation_set_embed_page_setup (GtkPrintOperation* op, gboolean embed);
// void gtk_print_operation_set_embed_page_setup (::GtkPrintOperation* op, gboolean embed);
GI_INLINE_DECL void set_embed_page_setup (gboolean embed) noexcept;

// void gtk_print_operation_set_export_filename (GtkPrintOperation* op, const gchar* filename);
// void gtk_print_operation_set_export_filename (::GtkPrintOperation* op, const char* filename);
GI_INLINE_DECL void set_export_filename (const std::string & filename) noexcept;

// void gtk_print_operation_set_has_selection (GtkPrintOperation* op, gboolean has_selection);
// void gtk_print_operation_set_has_selection (::GtkPrintOperation* op, gboolean has_selection);
GI_INLINE_DECL void set_has_selection (gboolean has_selection) noexcept;

// void gtk_print_operation_set_job_name (GtkPrintOperation* op, const gchar* job_name);
// void gtk_print_operation_set_job_name (::GtkPrintOperation* op, const char* job_name);
GI_INLINE_DECL void set_job_name (const std::string & job_name) noexcept;

// void gtk_print_operation_set_n_pages (GtkPrintOperation* op, gint n_pages);
// void gtk_print_operation_set_n_pages (::GtkPrintOperation* op, gint n_pages);
GI_INLINE_DECL void set_n_pages (gint n_pages) noexcept;

// void gtk_print_operation_set_print_settings (GtkPrintOperation* op, GtkPrintSettings* print_settings);
// void gtk_print_operation_set_print_settings (::GtkPrintOperation* op, ::GtkPrintSettings* print_settings);
GI_INLINE_DECL void set_print_settings (Gtk::PrintSettings print_settings) noexcept;
GI_INLINE_DECL void set_print_settings () noexcept;

// void gtk_print_operation_set_show_progress (GtkPrintOperation* op, gboolean show_progress);
// void gtk_print_operation_set_show_progress (::GtkPrintOperation* op, gboolean show_progress);
GI_INLINE_DECL void set_show_progress (gboolean show_progress) noexcept;

// void gtk_print_operation_set_support_selection (GtkPrintOperation* op, gboolean support_selection);
// void gtk_print_operation_set_support_selection (::GtkPrintOperation* op, gboolean support_selection);
GI_INLINE_DECL void set_support_selection (gboolean support_selection) noexcept;

// void gtk_print_operation_set_track_print_status (GtkPrintOperation* op, gboolean track_status);
// void gtk_print_operation_set_track_print_status (::GtkPrintOperation* op, gboolean track_status);
GI_INLINE_DECL void set_track_print_status (gboolean track_status) noexcept;

// void gtk_print_operation_set_unit (GtkPrintOperation* op, GtkUnit unit);
// void gtk_print_operation_set_unit (::GtkPrintOperation* op, ::GtkUnit unit);
GI_INLINE_DECL void set_unit (Gtk::Unit unit) noexcept;

// void gtk_print_operation_set_use_full_page (GtkPrintOperation* op, gboolean full_page);
// void gtk_print_operation_set_use_full_page (::GtkPrintOperation* op, gboolean full_page);
GI_INLINE_DECL void set_use_full_page (gboolean full_page) noexcept;

gi::property_proxy<bool, base::PrintOperationBase> property_allow_async()
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "allow-async"); }
const gi::property_proxy<bool, base::PrintOperationBase> property_allow_async() const
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "allow-async"); }

gi::property_proxy<gint, base::PrintOperationBase> property_current_page()
{ return gi::property_proxy<gint, base::PrintOperationBase> (*this, "current-page"); }
const gi::property_proxy<gint, base::PrintOperationBase> property_current_page() const
{ return gi::property_proxy<gint, base::PrintOperationBase> (*this, "current-page"); }

gi::property_proxy<std::string, base::PrintOperationBase> property_custom_tab_label()
{ return gi::property_proxy<std::string, base::PrintOperationBase> (*this, "custom-tab-label"); }
const gi::property_proxy<std::string, base::PrintOperationBase> property_custom_tab_label() const
{ return gi::property_proxy<std::string, base::PrintOperationBase> (*this, "custom-tab-label"); }

gi::property_proxy<Gtk::PageSetup, base::PrintOperationBase> property_default_page_setup()
{ return gi::property_proxy<Gtk::PageSetup, base::PrintOperationBase> (*this, "default-page-setup"); }
const gi::property_proxy<Gtk::PageSetup, base::PrintOperationBase> property_default_page_setup() const
{ return gi::property_proxy<Gtk::PageSetup, base::PrintOperationBase> (*this, "default-page-setup"); }

gi::property_proxy<bool, base::PrintOperationBase> property_embed_page_setup()
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "embed-page-setup"); }
const gi::property_proxy<bool, base::PrintOperationBase> property_embed_page_setup() const
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "embed-page-setup"); }

gi::property_proxy<std::string, base::PrintOperationBase> property_export_filename()
{ return gi::property_proxy<std::string, base::PrintOperationBase> (*this, "export-filename"); }
const gi::property_proxy<std::string, base::PrintOperationBase> property_export_filename() const
{ return gi::property_proxy<std::string, base::PrintOperationBase> (*this, "export-filename"); }

gi::property_proxy<bool, base::PrintOperationBase> property_has_selection()
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "has-selection"); }
const gi::property_proxy<bool, base::PrintOperationBase> property_has_selection() const
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "has-selection"); }

gi::property_proxy<std::string, base::PrintOperationBase> property_job_name()
{ return gi::property_proxy<std::string, base::PrintOperationBase> (*this, "job-name"); }
const gi::property_proxy<std::string, base::PrintOperationBase> property_job_name() const
{ return gi::property_proxy<std::string, base::PrintOperationBase> (*this, "job-name"); }

gi::property_proxy<gint, base::PrintOperationBase> property_n_pages()
{ return gi::property_proxy<gint, base::PrintOperationBase> (*this, "n-pages"); }
const gi::property_proxy<gint, base::PrintOperationBase> property_n_pages() const
{ return gi::property_proxy<gint, base::PrintOperationBase> (*this, "n-pages"); }

gi::property_proxy<gint, base::PrintOperationBase> property_n_pages_to_print()
{ return gi::property_proxy<gint, base::PrintOperationBase> (*this, "n-pages-to-print"); }
const gi::property_proxy<gint, base::PrintOperationBase> property_n_pages_to_print() const
{ return gi::property_proxy<gint, base::PrintOperationBase> (*this, "n-pages-to-print"); }

gi::property_proxy<Gtk::PrintSettings, base::PrintOperationBase> property_print_settings()
{ return gi::property_proxy<Gtk::PrintSettings, base::PrintOperationBase> (*this, "print-settings"); }
const gi::property_proxy<Gtk::PrintSettings, base::PrintOperationBase> property_print_settings() const
{ return gi::property_proxy<Gtk::PrintSettings, base::PrintOperationBase> (*this, "print-settings"); }

gi::property_proxy<bool, base::PrintOperationBase> property_show_progress()
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "show-progress"); }
const gi::property_proxy<bool, base::PrintOperationBase> property_show_progress() const
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "show-progress"); }

gi::property_proxy<Gtk::PrintStatus, base::PrintOperationBase> property_status()
{ return gi::property_proxy<Gtk::PrintStatus, base::PrintOperationBase> (*this, "status"); }
const gi::property_proxy<Gtk::PrintStatus, base::PrintOperationBase> property_status() const
{ return gi::property_proxy<Gtk::PrintStatus, base::PrintOperationBase> (*this, "status"); }

gi::property_proxy<std::string, base::PrintOperationBase> property_status_string()
{ return gi::property_proxy<std::string, base::PrintOperationBase> (*this, "status-string"); }
const gi::property_proxy<std::string, base::PrintOperationBase> property_status_string() const
{ return gi::property_proxy<std::string, base::PrintOperationBase> (*this, "status-string"); }

gi::property_proxy<bool, base::PrintOperationBase> property_support_selection()
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "support-selection"); }
const gi::property_proxy<bool, base::PrintOperationBase> property_support_selection() const
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "support-selection"); }

gi::property_proxy<bool, base::PrintOperationBase> property_track_print_status()
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "track-print-status"); }
const gi::property_proxy<bool, base::PrintOperationBase> property_track_print_status() const
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "track-print-status"); }

gi::property_proxy<Gtk::Unit, base::PrintOperationBase> property_unit()
{ return gi::property_proxy<Gtk::Unit, base::PrintOperationBase> (*this, "unit"); }
const gi::property_proxy<Gtk::Unit, base::PrintOperationBase> property_unit() const
{ return gi::property_proxy<Gtk::Unit, base::PrintOperationBase> (*this, "unit"); }

gi::property_proxy<bool, base::PrintOperationBase> property_use_full_page()
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "use-full-page"); }
const gi::property_proxy<bool, base::PrintOperationBase> property_use_full_page() const
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "use-full-page"); }

// signal begin-print
gi::signal_proxy<void(Gtk::PrintOperation, Gtk::PrintContext context)> signal_begin_print()
{ return gi::signal_proxy<void(Gtk::PrintOperation, Gtk::PrintContext context)> (*this, "begin-print"); }

// signal create-custom-widget
gi::signal_proxy<GObject::Object(Gtk::PrintOperation)> signal_create_custom_widget()
{ return gi::signal_proxy<GObject::Object(Gtk::PrintOperation)> (*this, "create-custom-widget"); }

// signal custom-widget-apply
gi::signal_proxy<void(Gtk::PrintOperation, Gtk::Widget widget)> signal_custom_widget_apply()
{ return gi::signal_proxy<void(Gtk::PrintOperation, Gtk::Widget widget)> (*this, "custom-widget-apply"); }

// signal done
gi::signal_proxy<void(Gtk::PrintOperation, Gtk::PrintOperationResult result)> signal_done()
{ return gi::signal_proxy<void(Gtk::PrintOperation, Gtk::PrintOperationResult result)> (*this, "done"); }

// signal draw-page
gi::signal_proxy<void(Gtk::PrintOperation, Gtk::PrintContext context, gint page_nr)> signal_draw_page()
{ return gi::signal_proxy<void(Gtk::PrintOperation, Gtk::PrintContext context, gint page_nr)> (*this, "draw-page"); }

// signal end-print
gi::signal_proxy<void(Gtk::PrintOperation, Gtk::PrintContext context)> signal_end_print()
{ return gi::signal_proxy<void(Gtk::PrintOperation, Gtk::PrintContext context)> (*this, "end-print"); }

// signal paginate
gi::signal_proxy<bool(Gtk::PrintOperation, Gtk::PrintContext context)> signal_paginate()
{ return gi::signal_proxy<bool(Gtk::PrintOperation, Gtk::PrintContext context)> (*this, "paginate"); }

// signal preview
gi::signal_proxy<bool(Gtk::PrintOperation, Gtk::PrintOperationPreview preview, Gtk::PrintContext context, Gtk::Window parent)> signal_preview()
{ return gi::signal_proxy<bool(Gtk::PrintOperation, Gtk::PrintOperationPreview preview, Gtk::PrintContext context, Gtk::Window parent)> (*this, "preview"); }

// signal request-page-setup
gi::signal_proxy<void(Gtk::PrintOperation, Gtk::PrintContext context, gint page_nr, Gtk::PageSetup setup)> signal_request_page_setup()
{ return gi::signal_proxy<void(Gtk::PrintOperation, Gtk::PrintContext context, gint page_nr, Gtk::PageSetup setup)> (*this, "request-page-setup"); }

// signal status-changed
gi::signal_proxy<void(Gtk::PrintOperation)> signal_status_changed()
{ return gi::signal_proxy<void(Gtk::PrintOperation)> (*this, "status-changed"); }

// signal update-custom-widget
gi::signal_proxy<void(Gtk::PrintOperation, Gtk::Widget widget, Gtk::PageSetup setup, Gtk::PrintSettings settings)> signal_update_custom_widget()
{ return gi::signal_proxy<void(Gtk::PrintOperation, Gtk::Widget widget, Gtk::PageSetup setup, Gtk::PrintSettings settings)> (*this, "update-custom-widget"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/printoperation_extra_def.hpp>)
#include <gtk/printoperation_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/printoperation_extra.hpp>)
#include <gtk/printoperation_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PrintOperation : public GI_GTK_PRINTOPERATION_BASE
{ typedef GI_GTK_PRINTOPERATION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPrintOperation>
{ typedef Gtk::PrintOperation type; }; 

} // namespace repository

} // namespace gi

#include "printoperationpreview.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class PrintOperationClassDef
{
typedef PrintOperationClassDef self;
public:
typedef Gtk::PrintOperation instance_type;
typedef ::GtkPrintOperationClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void PrintOperation::begin_print (GtkPrintOperation* operation, GtkPrintContext* context);
// void PrintOperation::begin_print (::GtkPrintOperation* operation, ::GtkPrintContext* context);
virtual void begin_print_ (Gtk::PrintContext context) noexcept = 0;

// void PrintOperation::custom_widget_apply (GtkPrintOperation* operation, GtkWidget* widget);
// void PrintOperation::custom_widget_apply (::GtkPrintOperation* operation, ::GtkWidget* widget);
virtual void custom_widget_apply_ (Gtk::Widget widget) noexcept = 0;

// void PrintOperation::done (GtkPrintOperation* operation, GtkPrintOperationResult result);
// void PrintOperation::done (::GtkPrintOperation* operation, ::GtkPrintOperationResult result);
virtual void done_ (Gtk::PrintOperationResult result) noexcept = 0;

// void PrintOperation::draw_page (GtkPrintOperation* operation, GtkPrintContext* context, gint page_nr);
// void PrintOperation::draw_page (::GtkPrintOperation* operation, ::GtkPrintContext* context, gint page_nr);
virtual void draw_page_ (Gtk::PrintContext context, gint page_nr) noexcept = 0;

// void PrintOperation::end_print (GtkPrintOperation* operation, GtkPrintContext* context);
// void PrintOperation::end_print (::GtkPrintOperation* operation, ::GtkPrintContext* context);
virtual void end_print_ (Gtk::PrintContext context) noexcept = 0;

// gboolean PrintOperation::paginate (GtkPrintOperation* operation, GtkPrintContext* context);
// gboolean PrintOperation::paginate (::GtkPrintOperation* operation, ::GtkPrintContext* context);
virtual bool paginate_ (Gtk::PrintContext context) noexcept = 0;

// gboolean PrintOperation::preview (GtkPrintOperation* operation, GtkPrintOperationPreview* preview, GtkPrintContext* context, GtkWindow* parent);
// gboolean PrintOperation::preview (::GtkPrintOperation* operation, ::GtkPrintOperationPreview* preview, ::GtkPrintContext* context, ::GtkWindow* parent);
virtual bool preview_ (Gtk::PrintOperationPreview preview, Gtk::PrintContext context, Gtk::Window parent) noexcept = 0;

// void PrintOperation::request_page_setup (GtkPrintOperation* operation, GtkPrintContext* context, gint page_nr, GtkPageSetup* setup);
// void PrintOperation::request_page_setup (::GtkPrintOperation* operation, ::GtkPrintContext* context, gint page_nr, ::GtkPageSetup* setup);
virtual void request_page_setup_ (Gtk::PrintContext context, gint page_nr, Gtk::PageSetup setup) noexcept = 0;

// void PrintOperation::status_changed (GtkPrintOperation* operation);
// void PrintOperation::status_changed (::GtkPrintOperation* operation);
virtual void status_changed_ () noexcept = 0;

// void PrintOperation::update_custom_widget (GtkPrintOperation* operation, GtkWidget* widget, GtkPageSetup* setup, GtkPrintSettings* settings);
// void PrintOperation::update_custom_widget (::GtkPrintOperation* operation, ::GtkWidget* widget, ::GtkPageSetup* setup, ::GtkPrintSettings* settings);
virtual void update_custom_widget_ (Gtk::Widget widget, Gtk::PageSetup setup, Gtk::PrintSettings settings) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class PrintOperationClass: public detail::ClassTemplate<Gtk::impl::internal::PrintOperationClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::PrintOperationPreviewIfaceClassImpl>
{
typedef PrintOperationClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::PrintOperationClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::PrintOperationPreviewIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::PrintOperationPreviewIfaceClassImpl GtkPrintOperationPreviewIface_type;


// void PrintOperation::begin_print (GtkPrintOperation* operation, GtkPrintContext* context);
// void PrintOperation::begin_print (::GtkPrintOperation* operation, ::GtkPrintContext* context);
GI_INLINE_DECL void begin_print_ (Gtk::PrintContext context) noexcept override;

// void PrintOperation::custom_widget_apply (GtkPrintOperation* operation, GtkWidget* widget);
// void PrintOperation::custom_widget_apply (::GtkPrintOperation* operation, ::GtkWidget* widget);
GI_INLINE_DECL void custom_widget_apply_ (Gtk::Widget widget) noexcept override;

// void PrintOperation::done (GtkPrintOperation* operation, GtkPrintOperationResult result);
// void PrintOperation::done (::GtkPrintOperation* operation, ::GtkPrintOperationResult result);
GI_INLINE_DECL void done_ (Gtk::PrintOperationResult result) noexcept override;

// void PrintOperation::draw_page (GtkPrintOperation* operation, GtkPrintContext* context, gint page_nr);
// void PrintOperation::draw_page (::GtkPrintOperation* operation, ::GtkPrintContext* context, gint page_nr);
GI_INLINE_DECL void draw_page_ (Gtk::PrintContext context, gint page_nr) noexcept override;

// void PrintOperation::end_print (GtkPrintOperation* operation, GtkPrintContext* context);
// void PrintOperation::end_print (::GtkPrintOperation* operation, ::GtkPrintContext* context);
GI_INLINE_DECL void end_print_ (Gtk::PrintContext context) noexcept override;

// gboolean PrintOperation::paginate (GtkPrintOperation* operation, GtkPrintContext* context);
// gboolean PrintOperation::paginate (::GtkPrintOperation* operation, ::GtkPrintContext* context);
GI_INLINE_DECL bool paginate_ (Gtk::PrintContext context) noexcept override;

// gboolean PrintOperation::preview (GtkPrintOperation* operation, GtkPrintOperationPreview* preview, GtkPrintContext* context, GtkWindow* parent);
// gboolean PrintOperation::preview (::GtkPrintOperation* operation, ::GtkPrintOperationPreview* preview, ::GtkPrintContext* context, ::GtkWindow* parent);
GI_INLINE_DECL bool preview_ (Gtk::PrintOperationPreview preview, Gtk::PrintContext context, Gtk::Window parent) noexcept override;

// void PrintOperation::request_page_setup (GtkPrintOperation* operation, GtkPrintContext* context, gint page_nr, GtkPageSetup* setup);
// void PrintOperation::request_page_setup (::GtkPrintOperation* operation, ::GtkPrintContext* context, gint page_nr, ::GtkPageSetup* setup);
GI_INLINE_DECL void request_page_setup_ (Gtk::PrintContext context, gint page_nr, Gtk::PageSetup setup) noexcept override;

// void PrintOperation::status_changed (GtkPrintOperation* operation);
// void PrintOperation::status_changed (::GtkPrintOperation* operation);
GI_INLINE_DECL void status_changed_ () noexcept override;

// void PrintOperation::update_custom_widget (GtkPrintOperation* operation, GtkWidget* widget, GtkPageSetup* setup, GtkPrintSettings* settings);
// void PrintOperation::update_custom_widget (::GtkPrintOperation* operation, ::GtkWidget* widget, ::GtkPageSetup* setup, ::GtkPrintSettings* settings);
GI_INLINE_DECL void update_custom_widget_ (Gtk::Widget widget, Gtk::PageSetup setup, Gtk::PrintSettings settings) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using PrintOperationImpl = detail::ObjectImpl<PrintOperation, internal::PrintOperationClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
