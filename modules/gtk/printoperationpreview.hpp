// AUTO-GENERATED

#ifndef _GI_GTK_PRINTOPERATIONPREVIEW_HPP_
#define _GI_GTK_PRINTOPERATIONPREVIEW_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class PageSetup;
class PrintContext;

class PrintOperationPreview;

namespace base {


#define GI_GTK_PRINTOPERATIONPREVIEW_BASE base::PrintOperationPreviewBase
class PrintOperationPreviewBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkPrintOperationPreview BaseObjectType;

PrintOperationPreviewBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_print_operation_preview_get_type(); } 

// void gtk_print_operation_preview_end_preview (GtkPrintOperationPreview* preview);
// void gtk_print_operation_preview_end_preview (::GtkPrintOperationPreview* preview);
GI_INLINE_DECL void end_preview () noexcept;

// gboolean gtk_print_operation_preview_is_selected (GtkPrintOperationPreview* preview, gint page_nr);
// gboolean gtk_print_operation_preview_is_selected (::GtkPrintOperationPreview* preview, gint page_nr);
GI_INLINE_DECL bool is_selected (gint page_nr) noexcept;

// void gtk_print_operation_preview_render_page (GtkPrintOperationPreview* preview, gint page_nr);
// void gtk_print_operation_preview_render_page (::GtkPrintOperationPreview* preview, gint page_nr);
GI_INLINE_DECL void render_page (gint page_nr) noexcept;

// signal got-page-size
gi::signal_proxy<void(Gtk::PrintOperationPreview, Gtk::PrintContext context, Gtk::PageSetup page_setup)> signal_got_page_size()
{ return gi::signal_proxy<void(Gtk::PrintOperationPreview, Gtk::PrintContext context, Gtk::PageSetup page_setup)> (*this, "got-page-size"); }

// signal ready
gi::signal_proxy<void(Gtk::PrintOperationPreview, Gtk::PrintContext context)> signal_ready()
{ return gi::signal_proxy<void(Gtk::PrintOperationPreview, Gtk::PrintContext context)> (*this, "ready"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/printoperationpreview_extra_def.hpp>)
#include <gtk/printoperationpreview_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/printoperationpreview_extra.hpp>)
#include <gtk/printoperationpreview_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PrintOperationPreview : public GI_GTK_PRINTOPERATIONPREVIEW_BASE
{ typedef GI_GTK_PRINTOPERATIONPREVIEW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPrintOperationPreview>
{ typedef Gtk::PrintOperationPreview type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class PrintOperationPreviewIfaceDef
{
typedef PrintOperationPreviewIfaceDef self;
public:
typedef Gtk::PrintOperationPreview instance_type;
typedef ::GtkPrintOperationPreviewIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void PrintOperationPreview::end_preview (GtkPrintOperationPreview* preview);
// void PrintOperationPreview::end_preview (::GtkPrintOperationPreview* preview);
virtual void end_preview_ () noexcept = 0;

// void PrintOperationPreview::got_page_size (GtkPrintOperationPreview* preview, GtkPrintContext* context, GtkPageSetup* page_setup);
// void PrintOperationPreview::got_page_size (::GtkPrintOperationPreview* preview, ::GtkPrintContext* context, ::GtkPageSetup* page_setup);
virtual void got_page_size_ (Gtk::PrintContext context, Gtk::PageSetup page_setup) noexcept = 0;

// gboolean PrintOperationPreview::is_selected (GtkPrintOperationPreview* preview, gint page_nr);
// gboolean PrintOperationPreview::is_selected (::GtkPrintOperationPreview* preview, gint page_nr);
virtual bool is_selected_ (gint page_nr) noexcept = 0;

// void PrintOperationPreview::ready (GtkPrintOperationPreview* preview, GtkPrintContext* context);
// void PrintOperationPreview::ready (::GtkPrintOperationPreview* preview, ::GtkPrintContext* context);
virtual void ready_ (Gtk::PrintContext context) noexcept = 0;

// void PrintOperationPreview::render_page (GtkPrintOperationPreview* preview, gint page_nr);
// void PrintOperationPreview::render_page (::GtkPrintOperationPreview* preview, gint page_nr);
virtual void render_page_ (gint page_nr) noexcept = 0;


};

using PrintOperationPreviewImpl = detail::InterfaceImpl<PrintOperationPreviewIfaceDef>;

class PrintOperationPreviewIfaceClassImpl: public detail::InterfaceClassImpl<PrintOperationPreviewImpl>
{
typedef PrintOperationPreviewIfaceClassImpl self;
typedef detail::InterfaceClassImpl<PrintOperationPreviewImpl> super;

protected:
using super::super;

// void PrintOperationPreview::end_preview (GtkPrintOperationPreview* preview);
// void PrintOperationPreview::end_preview (::GtkPrintOperationPreview* preview);
GI_INLINE_DECL void end_preview_ () noexcept override;

// void PrintOperationPreview::got_page_size (GtkPrintOperationPreview* preview, GtkPrintContext* context, GtkPageSetup* page_setup);
// void PrintOperationPreview::got_page_size (::GtkPrintOperationPreview* preview, ::GtkPrintContext* context, ::GtkPageSetup* page_setup);
GI_INLINE_DECL void got_page_size_ (Gtk::PrintContext context, Gtk::PageSetup page_setup) noexcept override;

// gboolean PrintOperationPreview::is_selected (GtkPrintOperationPreview* preview, gint page_nr);
// gboolean PrintOperationPreview::is_selected (::GtkPrintOperationPreview* preview, gint page_nr);
GI_INLINE_DECL bool is_selected_ (gint page_nr) noexcept override;

// void PrintOperationPreview::ready (GtkPrintOperationPreview* preview, GtkPrintContext* context);
// void PrintOperationPreview::ready (::GtkPrintOperationPreview* preview, ::GtkPrintContext* context);
GI_INLINE_DECL void ready_ (Gtk::PrintContext context) noexcept override;

// void PrintOperationPreview::render_page (GtkPrintOperationPreview* preview, gint page_nr);
// void PrintOperationPreview::render_page (::GtkPrintOperationPreview* preview, gint page_nr);
GI_INLINE_DECL void render_page_ (gint page_nr) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
