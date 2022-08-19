// AUTO-GENERATED

#ifndef _GI_WEBKIT2_INPUTMETHODCONTEXT_HPP_
#define _GI_WEBKIT2_INPUTMETHODCONTEXT_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class InputMethodUnderline;

class InputMethodContext;

namespace base {


#define GI_WEBKIT2_INPUTMETHODCONTEXT_BASE base::InputMethodContextBase
class InputMethodContextBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitInputMethodContext BaseObjectType;

InputMethodContextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_input_method_context_get_type(); } 

// gboolean webkit_input_method_context_filter_key_event (WebKitInputMethodContext* context, GdkEventKey* key_event);
// gboolean webkit_input_method_context_filter_key_event (::WebKitInputMethodContext* context, ::GdkEventKey* key_event);
GI_INLINE_DECL bool filter_key_event (Gdk::EventKey key_event) noexcept;

// WebKitInputHints webkit_input_method_context_get_input_hints (WebKitInputMethodContext* context);
// ::WebKitInputHints webkit_input_method_context_get_input_hints (::WebKitInputMethodContext* context);
GI_INLINE_DECL WebKit2::InputHints get_input_hints () noexcept;

// WebKitInputPurpose webkit_input_method_context_get_input_purpose (WebKitInputMethodContext* context);
// ::WebKitInputPurpose webkit_input_method_context_get_input_purpose (::WebKitInputMethodContext* context);
GI_INLINE_DECL WebKit2::InputPurpose get_input_purpose () noexcept;

// void webkit_input_method_context_get_preedit (WebKitInputMethodContext* context, char** text, GList** underlines, guint* cursor_offset);
// void webkit_input_method_context_get_preedit (::WebKitInputMethodContext* context, char** text, ::GList** underlines, guint* cursor_offset);
GI_INLINE_DECL void get_preedit (std::string & text, std::vector<WebKit2::InputMethodUnderline> & underlines, guint & cursor_offset) noexcept;
GI_INLINE_DECL std::tuple<std::string, std::vector<WebKit2::InputMethodUnderline>, guint> get_preedit () noexcept;

// void webkit_input_method_context_notify_cursor_area (WebKitInputMethodContext* context, int x, int y, int width, int height);
// void webkit_input_method_context_notify_cursor_area (::WebKitInputMethodContext* context, gint x, gint y, gint width, gint height);
GI_INLINE_DECL void notify_cursor_area (gint x, gint y, gint width, gint height) noexcept;

// void webkit_input_method_context_notify_focus_in (WebKitInputMethodContext* context);
// void webkit_input_method_context_notify_focus_in (::WebKitInputMethodContext* context);
GI_INLINE_DECL void notify_focus_in () noexcept;

// void webkit_input_method_context_notify_focus_out (WebKitInputMethodContext* context);
// void webkit_input_method_context_notify_focus_out (::WebKitInputMethodContext* context);
GI_INLINE_DECL void notify_focus_out () noexcept;

// void webkit_input_method_context_notify_surrounding (WebKitInputMethodContext* context, const gchar* text, int length, guint cursor_index, guint selection_index);
// void webkit_input_method_context_notify_surrounding (::WebKitInputMethodContext* context, const char* text, gint length, guint cursor_index, guint selection_index);
GI_INLINE_DECL void notify_surrounding (const std::string & text, gint length, guint cursor_index, guint selection_index) noexcept;

// void webkit_input_method_context_reset (WebKitInputMethodContext* context);
// void webkit_input_method_context_reset (::WebKitInputMethodContext* context);
GI_INLINE_DECL void reset () noexcept;

// void webkit_input_method_context_set_enable_preedit (WebKitInputMethodContext* context, gboolean enabled);
// void webkit_input_method_context_set_enable_preedit (::WebKitInputMethodContext* context, gboolean enabled);
GI_INLINE_DECL void set_enable_preedit (gboolean enabled) noexcept;

// void webkit_input_method_context_set_input_hints (WebKitInputMethodContext* context, WebKitInputHints hints);
// void webkit_input_method_context_set_input_hints (::WebKitInputMethodContext* context, ::WebKitInputHints hints);
GI_INLINE_DECL void set_input_hints (WebKit2::InputHints hints) noexcept;

// void webkit_input_method_context_set_input_purpose (WebKitInputMethodContext* context, WebKitInputPurpose purpose);
// void webkit_input_method_context_set_input_purpose (::WebKitInputMethodContext* context, ::WebKitInputPurpose purpose);
GI_INLINE_DECL void set_input_purpose (WebKit2::InputPurpose purpose) noexcept;

gi::property_proxy<WebKit2::InputHints, base::InputMethodContextBase> property_input_hints()
{ return gi::property_proxy<WebKit2::InputHints, base::InputMethodContextBase> (*this, "input-hints"); }
const gi::property_proxy<WebKit2::InputHints, base::InputMethodContextBase> property_input_hints() const
{ return gi::property_proxy<WebKit2::InputHints, base::InputMethodContextBase> (*this, "input-hints"); }

gi::property_proxy<WebKit2::InputPurpose, base::InputMethodContextBase> property_input_purpose()
{ return gi::property_proxy<WebKit2::InputPurpose, base::InputMethodContextBase> (*this, "input-purpose"); }
const gi::property_proxy<WebKit2::InputPurpose, base::InputMethodContextBase> property_input_purpose() const
{ return gi::property_proxy<WebKit2::InputPurpose, base::InputMethodContextBase> (*this, "input-purpose"); }

// signal committed
gi::signal_proxy<void(WebKit2::InputMethodContext, const std::string & text)> signal_committed()
{ return gi::signal_proxy<void(WebKit2::InputMethodContext, const std::string & text)> (*this, "committed"); }

// signal delete-surrounding
gi::signal_proxy<void(WebKit2::InputMethodContext, gint offset, guint n_chars)> signal_delete_surrounding()
{ return gi::signal_proxy<void(WebKit2::InputMethodContext, gint offset, guint n_chars)> (*this, "delete-surrounding"); }

// signal preedit-changed
gi::signal_proxy<void(WebKit2::InputMethodContext)> signal_preedit_changed()
{ return gi::signal_proxy<void(WebKit2::InputMethodContext)> (*this, "preedit-changed"); }

// signal preedit-finished
gi::signal_proxy<void(WebKit2::InputMethodContext)> signal_preedit_finished()
{ return gi::signal_proxy<void(WebKit2::InputMethodContext)> (*this, "preedit-finished"); }

// signal preedit-started
gi::signal_proxy<void(WebKit2::InputMethodContext)> signal_preedit_started()
{ return gi::signal_proxy<void(WebKit2::InputMethodContext)> (*this, "preedit-started"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/inputmethodcontext_extra_def.hpp>)
#include <webkit2/inputmethodcontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/inputmethodcontext_extra.hpp>)
#include <webkit2/inputmethodcontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class InputMethodContext : public GI_WEBKIT2_INPUTMETHODCONTEXT_BASE
{ typedef GI_WEBKIT2_INPUTMETHODCONTEXT_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitInputMethodContext>
{ typedef WebKit2::InputMethodContext type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class InputMethodContextClassDef
{
typedef InputMethodContextClassDef self;
public:
typedef WebKit2::InputMethodContext instance_type;
typedef ::WebKitInputMethodContextClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void InputMethodContext::committed (WebKitInputMethodContext* context, const char* text);
// void InputMethodContext::committed (::WebKitInputMethodContext* context, const char* text);
virtual void committed_ (const std::string & text) noexcept = 0;

// void InputMethodContext::delete_surrounding (WebKitInputMethodContext* context, int offset, guint n_chars);
// void InputMethodContext::delete_surrounding (::WebKitInputMethodContext* context, gint offset, guint n_chars);
virtual void delete_surrounding_ (gint offset, guint n_chars) noexcept = 0;

// gboolean InputMethodContext::filter_key_event (WebKitInputMethodContext* context, GdkEventKey* key_event);
// gboolean InputMethodContext::filter_key_event (::WebKitInputMethodContext* context, ::GdkEventKey* key_event);
virtual bool filter_key_event_ (Gdk::EventKey key_event) noexcept = 0;

// void InputMethodContext::get_preedit (WebKitInputMethodContext* context, gchar** text, GList** underlines, guint* cursor_offset);
// void InputMethodContext::get_preedit (::WebKitInputMethodContext* context, char** text, ::GList** underlines, guint* cursor_offset);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported

// void InputMethodContext::notify_cursor_area (WebKitInputMethodContext* context, int x, int y, int width, int height);
// void InputMethodContext::notify_cursor_area (::WebKitInputMethodContext* context, gint x, gint y, gint width, gint height);
virtual void notify_cursor_area_ (gint x, gint y, gint width, gint height) noexcept = 0;

// void InputMethodContext::notify_focus_in (WebKitInputMethodContext* context);
// void InputMethodContext::notify_focus_in (::WebKitInputMethodContext* context);
virtual void notify_focus_in_ () noexcept = 0;

// void InputMethodContext::notify_focus_out (WebKitInputMethodContext* context);
// void InputMethodContext::notify_focus_out (::WebKitInputMethodContext* context);
virtual void notify_focus_out_ () noexcept = 0;

// void InputMethodContext::notify_surrounding (WebKitInputMethodContext* context, const gchar* text, guint length, guint cursor_index, guint selection_index);
// void InputMethodContext::notify_surrounding (::WebKitInputMethodContext* context, const char* text, guint length, guint cursor_index, guint selection_index);
virtual void notify_surrounding_ (const std::string & text, guint length, guint cursor_index, guint selection_index) noexcept = 0;

// void InputMethodContext::preedit_changed (WebKitInputMethodContext* context);
// void InputMethodContext::preedit_changed (::WebKitInputMethodContext* context);
virtual void preedit_changed_ () noexcept = 0;

// void InputMethodContext::preedit_finished (WebKitInputMethodContext* context);
// void InputMethodContext::preedit_finished (::WebKitInputMethodContext* context);
virtual void preedit_finished_ () noexcept = 0;

// void InputMethodContext::preedit_started (WebKitInputMethodContext* context);
// void InputMethodContext::preedit_started (::WebKitInputMethodContext* context);
virtual void preedit_started_ () noexcept = 0;

// void InputMethodContext::reset (WebKitInputMethodContext* context);
// void InputMethodContext::reset (::WebKitInputMethodContext* context);
virtual void reset_ () noexcept = 0;

// void InputMethodContext::set_enable_preedit (WebKitInputMethodContext* context, gboolean enabled);
// void InputMethodContext::set_enable_preedit (::WebKitInputMethodContext* context, gboolean enabled);
virtual void set_enable_preedit_ (gboolean enabled) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class InputMethodContextClass: public detail::ClassTemplate<WebKit2::impl::internal::InputMethodContextClassDef, GObject::impl::internal::ObjectClass>
{
typedef InputMethodContextClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::InputMethodContextClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void InputMethodContext::committed (WebKitInputMethodContext* context, const char* text);
// void InputMethodContext::committed (::WebKitInputMethodContext* context, const char* text);
GI_INLINE_DECL void committed_ (const std::string & text) noexcept override;

// void InputMethodContext::delete_surrounding (WebKitInputMethodContext* context, int offset, guint n_chars);
// void InputMethodContext::delete_surrounding (::WebKitInputMethodContext* context, gint offset, guint n_chars);
GI_INLINE_DECL void delete_surrounding_ (gint offset, guint n_chars) noexcept override;

// gboolean InputMethodContext::filter_key_event (WebKitInputMethodContext* context, GdkEventKey* key_event);
// gboolean InputMethodContext::filter_key_event (::WebKitInputMethodContext* context, ::GdkEventKey* key_event);
GI_INLINE_DECL bool filter_key_event_ (Gdk::EventKey key_event) noexcept override;

// void InputMethodContext::get_preedit (WebKitInputMethodContext* context, gchar** text, GList** underlines, guint* cursor_offset);
// void InputMethodContext::get_preedit (::WebKitInputMethodContext* context, char** text, ::GList** underlines, guint* cursor_offset);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported

// void InputMethodContext::notify_cursor_area (WebKitInputMethodContext* context, int x, int y, int width, int height);
// void InputMethodContext::notify_cursor_area (::WebKitInputMethodContext* context, gint x, gint y, gint width, gint height);
GI_INLINE_DECL void notify_cursor_area_ (gint x, gint y, gint width, gint height) noexcept override;

// void InputMethodContext::notify_focus_in (WebKitInputMethodContext* context);
// void InputMethodContext::notify_focus_in (::WebKitInputMethodContext* context);
GI_INLINE_DECL void notify_focus_in_ () noexcept override;

// void InputMethodContext::notify_focus_out (WebKitInputMethodContext* context);
// void InputMethodContext::notify_focus_out (::WebKitInputMethodContext* context);
GI_INLINE_DECL void notify_focus_out_ () noexcept override;

// void InputMethodContext::notify_surrounding (WebKitInputMethodContext* context, const gchar* text, guint length, guint cursor_index, guint selection_index);
// void InputMethodContext::notify_surrounding (::WebKitInputMethodContext* context, const char* text, guint length, guint cursor_index, guint selection_index);
GI_INLINE_DECL void notify_surrounding_ (const std::string & text, guint length, guint cursor_index, guint selection_index) noexcept override;

// void InputMethodContext::preedit_changed (WebKitInputMethodContext* context);
// void InputMethodContext::preedit_changed (::WebKitInputMethodContext* context);
GI_INLINE_DECL void preedit_changed_ () noexcept override;

// void InputMethodContext::preedit_finished (WebKitInputMethodContext* context);
// void InputMethodContext::preedit_finished (::WebKitInputMethodContext* context);
GI_INLINE_DECL void preedit_finished_ () noexcept override;

// void InputMethodContext::preedit_started (WebKitInputMethodContext* context);
// void InputMethodContext::preedit_started (::WebKitInputMethodContext* context);
GI_INLINE_DECL void preedit_started_ () noexcept override;

// void InputMethodContext::reset (WebKitInputMethodContext* context);
// void InputMethodContext::reset (::WebKitInputMethodContext* context);
GI_INLINE_DECL void reset_ () noexcept override;

// void InputMethodContext::set_enable_preedit (WebKitInputMethodContext* context, gboolean enabled);
// void InputMethodContext::set_enable_preedit (::WebKitInputMethodContext* context, gboolean enabled);
GI_INLINE_DECL void set_enable_preedit_ (gboolean enabled) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using InputMethodContextImpl = detail::ObjectImpl<InputMethodContext, internal::InputMethodContextClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
