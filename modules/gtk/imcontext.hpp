// AUTO-GENERATED

#ifndef _GI_GTK_IMCONTEXT_HPP_
#define _GI_GTK_IMCONTEXT_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class IMContext;

namespace base {


#define GI_GTK_IMCONTEXT_BASE base::IMContextBase
class IMContextBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkIMContext BaseObjectType;

IMContextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_im_context_get_type(); } 

// gboolean gtk_im_context_delete_surrounding (GtkIMContext* context, gint offset, gint n_chars);
// gboolean gtk_im_context_delete_surrounding (::GtkIMContext* context, gint offset, gint n_chars);
GI_INLINE_DECL bool delete_surrounding (gint offset, gint n_chars) noexcept;

// gboolean gtk_im_context_filter_keypress (GtkIMContext* context, GdkEventKey* event);
// gboolean gtk_im_context_filter_keypress (::GtkIMContext* context, ::GdkEventKey* event);
GI_INLINE_DECL bool filter_keypress (Gdk::EventKey event) noexcept;

// void gtk_im_context_focus_in (GtkIMContext* context);
// void gtk_im_context_focus_in (::GtkIMContext* context);
GI_INLINE_DECL void focus_in () noexcept;

// void gtk_im_context_focus_out (GtkIMContext* context);
// void gtk_im_context_focus_out (::GtkIMContext* context);
GI_INLINE_DECL void focus_out () noexcept;

// void gtk_im_context_get_preedit_string (GtkIMContext* context, gchar** str, PangoAttrList** attrs, gint* cursor_pos);
// void gtk_im_context_get_preedit_string (::GtkIMContext* context, char** str, ::PangoAttrList** attrs, gint* cursor_pos);
GI_INLINE_DECL void get_preedit_string (std::string & str, Pango::AttrList & attrs, gint & cursor_pos) noexcept;
GI_INLINE_DECL std::tuple<std::string, Pango::AttrList, gint> get_preedit_string () noexcept;

// gboolean gtk_im_context_get_surrounding (GtkIMContext* context, gchar** text, gint* cursor_index);
// gboolean gtk_im_context_get_surrounding (::GtkIMContext* context, char** text, gint* cursor_index);
GI_INLINE_DECL bool get_surrounding (std::string & text, gint & cursor_index) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string, gint> get_surrounding () noexcept;

// void gtk_im_context_reset (GtkIMContext* context);
// void gtk_im_context_reset (::GtkIMContext* context);
GI_INLINE_DECL void reset () noexcept;

// void gtk_im_context_set_client_window (GtkIMContext* context, GdkWindow* window);
// void gtk_im_context_set_client_window (::GtkIMContext* context, ::GdkWindow* window);
GI_INLINE_DECL void set_client_window (Gdk::Window window) noexcept;
GI_INLINE_DECL void set_client_window () noexcept;

// void gtk_im_context_set_cursor_location (GtkIMContext* context, const GdkRectangle* area);
// void gtk_im_context_set_cursor_location (::GtkIMContext* context, const ::GdkRectangle* area);
GI_INLINE_DECL void set_cursor_location (const Gdk::Rectangle & area) noexcept;

// void gtk_im_context_set_surrounding (GtkIMContext* context, const gchar* text, gint len, gint cursor_index);
// void gtk_im_context_set_surrounding (::GtkIMContext* context, const char* text, gint len, gint cursor_index);
GI_INLINE_DECL void set_surrounding (const std::string & text, gint len, gint cursor_index) noexcept;

// void gtk_im_context_set_use_preedit (GtkIMContext* context, gboolean use_preedit);
// void gtk_im_context_set_use_preedit (::GtkIMContext* context, gboolean use_preedit);
GI_INLINE_DECL void set_use_preedit (gboolean use_preedit) noexcept;

gi::property_proxy<Gtk::InputHints, base::IMContextBase> property_input_hints()
{ return gi::property_proxy<Gtk::InputHints, base::IMContextBase> (*this, "input-hints"); }
const gi::property_proxy<Gtk::InputHints, base::IMContextBase> property_input_hints() const
{ return gi::property_proxy<Gtk::InputHints, base::IMContextBase> (*this, "input-hints"); }

gi::property_proxy<Gtk::InputPurpose, base::IMContextBase> property_input_purpose()
{ return gi::property_proxy<Gtk::InputPurpose, base::IMContextBase> (*this, "input-purpose"); }
const gi::property_proxy<Gtk::InputPurpose, base::IMContextBase> property_input_purpose() const
{ return gi::property_proxy<Gtk::InputPurpose, base::IMContextBase> (*this, "input-purpose"); }

// signal commit
gi::signal_proxy<void(Gtk::IMContext, const std::string & str)> signal_commit()
{ return gi::signal_proxy<void(Gtk::IMContext, const std::string & str)> (*this, "commit"); }

// signal delete-surrounding
gi::signal_proxy<bool(Gtk::IMContext, gint offset, gint n_chars)> signal_delete_surrounding()
{ return gi::signal_proxy<bool(Gtk::IMContext, gint offset, gint n_chars)> (*this, "delete-surrounding"); }

// signal preedit-changed
gi::signal_proxy<void(Gtk::IMContext)> signal_preedit_changed()
{ return gi::signal_proxy<void(Gtk::IMContext)> (*this, "preedit-changed"); }

// signal preedit-end
gi::signal_proxy<void(Gtk::IMContext)> signal_preedit_end()
{ return gi::signal_proxy<void(Gtk::IMContext)> (*this, "preedit-end"); }

// signal preedit-start
gi::signal_proxy<void(Gtk::IMContext)> signal_preedit_start()
{ return gi::signal_proxy<void(Gtk::IMContext)> (*this, "preedit-start"); }

// signal retrieve-surrounding
gi::signal_proxy<bool(Gtk::IMContext)> signal_retrieve_surrounding()
{ return gi::signal_proxy<bool(Gtk::IMContext)> (*this, "retrieve-surrounding"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/imcontext_extra_def.hpp>)
#include <gtk/imcontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/imcontext_extra.hpp>)
#include <gtk/imcontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class IMContext : public GI_GTK_IMCONTEXT_BASE
{ typedef GI_GTK_IMCONTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkIMContext>
{ typedef Gtk::IMContext type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class IMContextClassDef
{
typedef IMContextClassDef self;
public:
typedef Gtk::IMContext instance_type;
typedef ::GtkIMContextClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void IMContext::commit (GtkIMContext* context, const gchar* str);
// void IMContext::commit (::GtkIMContext* context, const char* str);
virtual void commit_ (const std::string & str) noexcept = 0;

// gboolean IMContext::delete_surrounding (GtkIMContext* context, gint offset, gint n_chars);
// gboolean IMContext::delete_surrounding (::GtkIMContext* context, gint offset, gint n_chars);
virtual bool delete_surrounding_ (gint offset, gint n_chars) noexcept = 0;

// gboolean IMContext::filter_keypress (GtkIMContext* context, GdkEventKey* event);
// gboolean IMContext::filter_keypress (::GtkIMContext* context, ::GdkEventKey* event);
virtual bool filter_keypress_ (Gdk::EventKey event) noexcept = 0;

// void IMContext::focus_in (GtkIMContext* context);
// void IMContext::focus_in (::GtkIMContext* context);
virtual void focus_in_ () noexcept = 0;

// void IMContext::focus_out (GtkIMContext* context);
// void IMContext::focus_out (::GtkIMContext* context);
virtual void focus_out_ () noexcept = 0;

// void IMContext::get_preedit_string (GtkIMContext* context, gchar** str, PangoAttrList** attrs, gint* cursor_pos);
// void IMContext::get_preedit_string (::GtkIMContext* context, char** str, ::PangoAttrList** attrs, gint* cursor_pos);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported

// gboolean IMContext::get_surrounding (GtkIMContext* context, gchar** text, gint* cursor_index);
// gboolean IMContext::get_surrounding (::GtkIMContext* context, char** text, gint* cursor_index);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void IMContext::preedit_changed (GtkIMContext* context);
// void IMContext::preedit_changed (::GtkIMContext* context);
virtual void preedit_changed_ () noexcept = 0;

// void IMContext::preedit_end (GtkIMContext* context);
// void IMContext::preedit_end (::GtkIMContext* context);
virtual void preedit_end_ () noexcept = 0;

// void IMContext::preedit_start (GtkIMContext* context);
// void IMContext::preedit_start (::GtkIMContext* context);
virtual void preedit_start_ () noexcept = 0;

// void IMContext::reset (GtkIMContext* context);
// void IMContext::reset (::GtkIMContext* context);
virtual void reset_ () noexcept = 0;

// gboolean IMContext::retrieve_surrounding (GtkIMContext* context);
// gboolean IMContext::retrieve_surrounding (::GtkIMContext* context);
virtual bool retrieve_surrounding_ () noexcept = 0;

// void IMContext::set_client_window (GtkIMContext* context, GdkWindow* window);
// void IMContext::set_client_window (::GtkIMContext* context, ::GdkWindow* window);
virtual void set_client_window_ (Gdk::Window window) noexcept = 0;

// void IMContext::set_cursor_location (GtkIMContext* context, GdkRectangle* area);
// void IMContext::set_cursor_location (::GtkIMContext* context, ::GdkRectangle* area);
virtual void set_cursor_location_ (Gdk::Rectangle area) noexcept = 0;

// void IMContext::set_surrounding (GtkIMContext* context, const gchar* text, gint len, gint cursor_index);
// void IMContext::set_surrounding (::GtkIMContext* context, const char* text, gint len, gint cursor_index);
virtual void set_surrounding_ (const std::string & text, gint len, gint cursor_index) noexcept = 0;

// void IMContext::set_use_preedit (GtkIMContext* context, gboolean use_preedit);
// void IMContext::set_use_preedit (::GtkIMContext* context, gboolean use_preedit);
virtual void set_use_preedit_ (gboolean use_preedit) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class IMContextClass: public detail::ClassTemplate<Gtk::impl::internal::IMContextClassDef, GObject::impl::internal::ObjectClass>
{
typedef IMContextClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::IMContextClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void IMContext::commit (GtkIMContext* context, const gchar* str);
// void IMContext::commit (::GtkIMContext* context, const char* str);
GI_INLINE_DECL void commit_ (const std::string & str) noexcept override;

// gboolean IMContext::delete_surrounding (GtkIMContext* context, gint offset, gint n_chars);
// gboolean IMContext::delete_surrounding (::GtkIMContext* context, gint offset, gint n_chars);
GI_INLINE_DECL bool delete_surrounding_ (gint offset, gint n_chars) noexcept override;

// gboolean IMContext::filter_keypress (GtkIMContext* context, GdkEventKey* event);
// gboolean IMContext::filter_keypress (::GtkIMContext* context, ::GdkEventKey* event);
GI_INLINE_DECL bool filter_keypress_ (Gdk::EventKey event) noexcept override;

// void IMContext::focus_in (GtkIMContext* context);
// void IMContext::focus_in (::GtkIMContext* context);
GI_INLINE_DECL void focus_in_ () noexcept override;

// void IMContext::focus_out (GtkIMContext* context);
// void IMContext::focus_out (::GtkIMContext* context);
GI_INLINE_DECL void focus_out_ () noexcept override;

// void IMContext::get_preedit_string (GtkIMContext* context, gchar** str, PangoAttrList** attrs, gint* cursor_pos);
// void IMContext::get_preedit_string (::GtkIMContext* context, char** str, ::PangoAttrList** attrs, gint* cursor_pos);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported

// gboolean IMContext::get_surrounding (GtkIMContext* context, gchar** text, gint* cursor_index);
// gboolean IMContext::get_surrounding (::GtkIMContext* context, char** text, gint* cursor_index);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void IMContext::preedit_changed (GtkIMContext* context);
// void IMContext::preedit_changed (::GtkIMContext* context);
GI_INLINE_DECL void preedit_changed_ () noexcept override;

// void IMContext::preedit_end (GtkIMContext* context);
// void IMContext::preedit_end (::GtkIMContext* context);
GI_INLINE_DECL void preedit_end_ () noexcept override;

// void IMContext::preedit_start (GtkIMContext* context);
// void IMContext::preedit_start (::GtkIMContext* context);
GI_INLINE_DECL void preedit_start_ () noexcept override;

// void IMContext::reset (GtkIMContext* context);
// void IMContext::reset (::GtkIMContext* context);
GI_INLINE_DECL void reset_ () noexcept override;

// gboolean IMContext::retrieve_surrounding (GtkIMContext* context);
// gboolean IMContext::retrieve_surrounding (::GtkIMContext* context);
GI_INLINE_DECL bool retrieve_surrounding_ () noexcept override;

// void IMContext::set_client_window (GtkIMContext* context, GdkWindow* window);
// void IMContext::set_client_window (::GtkIMContext* context, ::GdkWindow* window);
GI_INLINE_DECL void set_client_window_ (Gdk::Window window) noexcept override;

// void IMContext::set_cursor_location (GtkIMContext* context, GdkRectangle* area);
// void IMContext::set_cursor_location (::GtkIMContext* context, ::GdkRectangle* area);
GI_INLINE_DECL void set_cursor_location_ (Gdk::Rectangle area) noexcept override;

// void IMContext::set_surrounding (GtkIMContext* context, const gchar* text, gint len, gint cursor_index);
// void IMContext::set_surrounding (::GtkIMContext* context, const char* text, gint len, gint cursor_index);
GI_INLINE_DECL void set_surrounding_ (const std::string & text, gint len, gint cursor_index) noexcept override;

// void IMContext::set_use_preedit (GtkIMContext* context, gboolean use_preedit);
// void IMContext::set_use_preedit (::GtkIMContext* context, gboolean use_preedit);
GI_INLINE_DECL void set_use_preedit_ (gboolean use_preedit) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using IMContextImpl = detail::ObjectImpl<IMContext, internal::IMContextClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
