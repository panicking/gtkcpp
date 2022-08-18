// AUTO-GENERATED

#ifndef _GI_GTK_ASSISTANT_HPP_
#define _GI_GTK_ASSISTANT_HPP_

#include "window.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class Assistant;

namespace base {


#define GI_GTK_ASSISTANT_BASE base::AssistantBase
class AssistantBase : public Gtk::Window
{
typedef Gtk::Window super_type;
public:
typedef ::GtkAssistant BaseObjectType;

AssistantBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_assistant_get_type(); } 

// GtkWidget* gtk_assistant_new ();
// ::GtkAssistant* gtk_assistant_new ();
static GI_INLINE_DECL Gtk::Assistant new_ () noexcept;

// void gtk_assistant_add_action_widget (GtkAssistant* assistant, GtkWidget* child);
// void gtk_assistant_add_action_widget (::GtkAssistant* assistant, ::GtkWidget* child);
GI_INLINE_DECL void add_action_widget (Gtk::Widget child) noexcept;

// gint gtk_assistant_append_page (GtkAssistant* assistant, GtkWidget* page);
// gint gtk_assistant_append_page (::GtkAssistant* assistant, ::GtkWidget* page);
GI_INLINE_DECL gint append_page (Gtk::Widget page) noexcept;

// void gtk_assistant_commit (GtkAssistant* assistant);
// void gtk_assistant_commit (::GtkAssistant* assistant);
GI_INLINE_DECL void commit () noexcept;

// gint gtk_assistant_get_current_page (GtkAssistant* assistant);
// gint gtk_assistant_get_current_page (::GtkAssistant* assistant);
GI_INLINE_DECL gint get_current_page () noexcept;

// gint gtk_assistant_get_n_pages (GtkAssistant* assistant);
// gint gtk_assistant_get_n_pages (::GtkAssistant* assistant);
GI_INLINE_DECL gint get_n_pages () noexcept;

// GtkWidget* gtk_assistant_get_nth_page (GtkAssistant* assistant, gint page_num);
// ::GtkWidget* gtk_assistant_get_nth_page (::GtkAssistant* assistant, gint page_num);
GI_INLINE_DECL Gtk::Widget get_nth_page (gint page_num) noexcept;

// gboolean gtk_assistant_get_page_complete (GtkAssistant* assistant, GtkWidget* page);
// gboolean gtk_assistant_get_page_complete (::GtkAssistant* assistant, ::GtkWidget* page);
GI_INLINE_DECL bool get_page_complete (Gtk::Widget page) noexcept;

// gboolean gtk_assistant_get_page_has_padding (GtkAssistant* assistant, GtkWidget* page);
// gboolean gtk_assistant_get_page_has_padding (::GtkAssistant* assistant, ::GtkWidget* page);
GI_INLINE_DECL bool get_page_has_padding (Gtk::Widget page) noexcept;

// GdkPixbuf* gtk_assistant_get_page_header_image (GtkAssistant* assistant, GtkWidget* page);
// ::GdkPixbuf* gtk_assistant_get_page_header_image (::GtkAssistant* assistant, ::GtkWidget* page);
// IGNORE; deprecated

// GdkPixbuf* gtk_assistant_get_page_side_image (GtkAssistant* assistant, GtkWidget* page);
// ::GdkPixbuf* gtk_assistant_get_page_side_image (::GtkAssistant* assistant, ::GtkWidget* page);
// IGNORE; deprecated

// const gchar* gtk_assistant_get_page_title (GtkAssistant* assistant, GtkWidget* page);
// const char* gtk_assistant_get_page_title (::GtkAssistant* assistant, ::GtkWidget* page);
GI_INLINE_DECL std::string get_page_title (Gtk::Widget page) noexcept;

// GtkAssistantPageType gtk_assistant_get_page_type (GtkAssistant* assistant, GtkWidget* page);
// ::GtkAssistantPageType gtk_assistant_get_page_type (::GtkAssistant* assistant, ::GtkWidget* page);
GI_INLINE_DECL Gtk::AssistantPageType get_page_type (Gtk::Widget page) noexcept;

// gint gtk_assistant_insert_page (GtkAssistant* assistant, GtkWidget* page, gint position);
// gint gtk_assistant_insert_page (::GtkAssistant* assistant, ::GtkWidget* page, gint position);
GI_INLINE_DECL gint insert_page (Gtk::Widget page, gint position) noexcept;

// void gtk_assistant_next_page (GtkAssistant* assistant);
// void gtk_assistant_next_page (::GtkAssistant* assistant);
GI_INLINE_DECL void next_page () noexcept;

// gint gtk_assistant_prepend_page (GtkAssistant* assistant, GtkWidget* page);
// gint gtk_assistant_prepend_page (::GtkAssistant* assistant, ::GtkWidget* page);
GI_INLINE_DECL gint prepend_page (Gtk::Widget page) noexcept;

// void gtk_assistant_previous_page (GtkAssistant* assistant);
// void gtk_assistant_previous_page (::GtkAssistant* assistant);
GI_INLINE_DECL void previous_page () noexcept;

// void gtk_assistant_remove_action_widget (GtkAssistant* assistant, GtkWidget* child);
// void gtk_assistant_remove_action_widget (::GtkAssistant* assistant, ::GtkWidget* child);
GI_INLINE_DECL void remove_action_widget (Gtk::Widget child) noexcept;

// void gtk_assistant_remove_page (GtkAssistant* assistant, gint page_num);
// void gtk_assistant_remove_page (::GtkAssistant* assistant, gint page_num);
GI_INLINE_DECL void remove_page (gint page_num) noexcept;

// void gtk_assistant_set_current_page (GtkAssistant* assistant, gint page_num);
// void gtk_assistant_set_current_page (::GtkAssistant* assistant, gint page_num);
GI_INLINE_DECL void set_current_page (gint page_num) noexcept;

// void gtk_assistant_set_forward_page_func (GtkAssistant* assistant, GtkAssistantPageFunc page_func, gpointer data, GDestroyNotify destroy);
// void gtk_assistant_set_forward_page_func (::GtkAssistant* assistant, Gtk::AssistantPageFunc::cfunction_type page_func, void* data, GLib::DestroyNotify::cfunction_type destroy);
GI_INLINE_DECL void set_forward_page_func (Gtk::AssistantPageFunc page_func) noexcept;

// void gtk_assistant_set_page_complete (GtkAssistant* assistant, GtkWidget* page, gboolean complete);
// void gtk_assistant_set_page_complete (::GtkAssistant* assistant, ::GtkWidget* page, gboolean complete);
GI_INLINE_DECL void set_page_complete (Gtk::Widget page, gboolean complete) noexcept;

// void gtk_assistant_set_page_has_padding (GtkAssistant* assistant, GtkWidget* page, gboolean has_padding);
// void gtk_assistant_set_page_has_padding (::GtkAssistant* assistant, ::GtkWidget* page, gboolean has_padding);
GI_INLINE_DECL void set_page_has_padding (Gtk::Widget page, gboolean has_padding) noexcept;

// void gtk_assistant_set_page_header_image (GtkAssistant* assistant, GtkWidget* page, GdkPixbuf* pixbuf);
// void gtk_assistant_set_page_header_image (::GtkAssistant* assistant, ::GtkWidget* page, ::GdkPixbuf* pixbuf);
// IGNORE; deprecated

// void gtk_assistant_set_page_side_image (GtkAssistant* assistant, GtkWidget* page, GdkPixbuf* pixbuf);
// void gtk_assistant_set_page_side_image (::GtkAssistant* assistant, ::GtkWidget* page, ::GdkPixbuf* pixbuf);
// IGNORE; deprecated

// void gtk_assistant_set_page_title (GtkAssistant* assistant, GtkWidget* page, const gchar* title);
// void gtk_assistant_set_page_title (::GtkAssistant* assistant, ::GtkWidget* page, const char* title);
GI_INLINE_DECL void set_page_title (Gtk::Widget page, const std::string & title) noexcept;

// void gtk_assistant_set_page_type (GtkAssistant* assistant, GtkWidget* page, GtkAssistantPageType type);
// void gtk_assistant_set_page_type (::GtkAssistant* assistant, ::GtkWidget* page, ::GtkAssistantPageType type);
GI_INLINE_DECL void set_page_type (Gtk::Widget page, Gtk::AssistantPageType type) noexcept;

// void gtk_assistant_update_buttons_state (GtkAssistant* assistant);
// void gtk_assistant_update_buttons_state (::GtkAssistant* assistant);
GI_INLINE_DECL void update_buttons_state () noexcept;

gi::property_proxy<gint, base::AssistantBase> property_use_header_bar()
{ return gi::property_proxy<gint, base::AssistantBase> (*this, "use-header-bar"); }
const gi::property_proxy<gint, base::AssistantBase> property_use_header_bar() const
{ return gi::property_proxy<gint, base::AssistantBase> (*this, "use-header-bar"); }

// signal apply
gi::signal_proxy<void(Gtk::Assistant)> signal_apply()
{ return gi::signal_proxy<void(Gtk::Assistant)> (*this, "apply"); }

// signal cancel
gi::signal_proxy<void(Gtk::Assistant)> signal_cancel()
{ return gi::signal_proxy<void(Gtk::Assistant)> (*this, "cancel"); }

// signal close
gi::signal_proxy<void(Gtk::Assistant)> signal_close()
{ return gi::signal_proxy<void(Gtk::Assistant)> (*this, "close"); }

// signal escape
gi::signal_proxy<void(Gtk::Assistant)> signal_escape()
{ return gi::signal_proxy<void(Gtk::Assistant)> (*this, "escape"); }

// signal prepare
gi::signal_proxy<void(Gtk::Assistant, Gtk::Widget page)> signal_prepare()
{ return gi::signal_proxy<void(Gtk::Assistant, Gtk::Widget page)> (*this, "prepare"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/assistant_extra_def.hpp>)
#include <gtk/assistant_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/assistant_extra.hpp>)
#include <gtk/assistant_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Assistant : public GI_GTK_ASSISTANT_BASE
{ typedef GI_GTK_ASSISTANT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAssistant>
{ typedef Gtk::Assistant type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class AssistantClassDef
{
typedef AssistantClassDef self;
public:
typedef Gtk::Assistant instance_type;
typedef ::GtkAssistantClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Assistant::apply (GtkAssistant* assistant);
// void Assistant::apply (::GtkAssistant* assistant);
virtual void apply_ () noexcept = 0;

// void Assistant::cancel (GtkAssistant* assistant);
// void Assistant::cancel (::GtkAssistant* assistant);
virtual void cancel_ () noexcept = 0;

// void Assistant::close (GtkAssistant* assistant);
// void Assistant::close (::GtkAssistant* assistant);
virtual void close_ () noexcept = 0;

// void Assistant::prepare (GtkAssistant* assistant, GtkWidget* page);
// void Assistant::prepare (::GtkAssistant* assistant, ::GtkWidget* page);
virtual void prepare_ (Gtk::Widget page) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class AssistantClass: public detail::ClassTemplate<Gtk::impl::internal::AssistantClassDef, Gtk::impl::internal::WindowClass>
{
typedef AssistantClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::AssistantClassDef, Gtk::impl::internal::WindowClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Assistant::apply (GtkAssistant* assistant);
// void Assistant::apply (::GtkAssistant* assistant);
GI_INLINE_DECL void apply_ () noexcept override;

// void Assistant::cancel (GtkAssistant* assistant);
// void Assistant::cancel (::GtkAssistant* assistant);
GI_INLINE_DECL void cancel_ () noexcept override;

// void Assistant::close (GtkAssistant* assistant);
// void Assistant::close (::GtkAssistant* assistant);
GI_INLINE_DECL void close_ () noexcept override;

// void Assistant::prepare (GtkAssistant* assistant, GtkWidget* page);
// void Assistant::prepare (::GtkAssistant* assistant, ::GtkWidget* page);
GI_INLINE_DECL void prepare_ (Gtk::Widget page) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using AssistantImpl = detail::ObjectImpl<Assistant, internal::AssistantClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
