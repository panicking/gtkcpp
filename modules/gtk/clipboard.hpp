// AUTO-GENERATED

#ifndef _GI_GTK_CLIPBOARD_HPP_
#define _GI_GTK_CLIPBOARD_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class SelectionData;
class TargetEntry;
class TextBuffer;

class Clipboard;

namespace base {


#define GI_GTK_CLIPBOARD_BASE base::ClipboardBase
class ClipboardBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkClipboard BaseObjectType;

ClipboardBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_clipboard_get_type(); } 

// GtkClipboard* gtk_clipboard_get (GdkAtom selection);
// ::GtkClipboard* gtk_clipboard_get ( selection);
// SKIP; selection type  not supported

// GtkClipboard* gtk_clipboard_get_default (GdkDisplay* display);
// ::GtkClipboard* gtk_clipboard_get_default (::GdkDisplay* display);
static GI_INLINE_DECL Gtk::Clipboard get_default (Gdk::Display display) noexcept;

// GtkClipboard* gtk_clipboard_get_for_display (GdkDisplay* display, GdkAtom selection);
// ::GtkClipboard* gtk_clipboard_get_for_display (::GdkDisplay* display,  selection);
// SKIP; selection type  not supported

// void gtk_clipboard_clear (GtkClipboard* clipboard);
// void gtk_clipboard_clear (::GtkClipboard* clipboard);
GI_INLINE_DECL void clear () noexcept;

// GdkDisplay* gtk_clipboard_get_display (GtkClipboard* clipboard);
// ::GdkDisplay* gtk_clipboard_get_display (::GtkClipboard* clipboard);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// GObject* gtk_clipboard_get_owner (GtkClipboard* clipboard);
// ::GObject* gtk_clipboard_get_owner (::GtkClipboard* clipboard);
GI_INLINE_DECL GObject::Object get_owner () noexcept;

// FAILURE on gtk_clipboard_get_selection; No such node (<xmlattr>.transfer-ownership)
// void gtk_clipboard_request_contents (GtkClipboard* clipboard, GdkAtom target, GtkClipboardReceivedFunc callback, gpointer user_data);
// void gtk_clipboard_request_contents (::GtkClipboard* clipboard,  target, Gtk::ClipboardReceivedFunc::cfunction_type callback, void* user_data);
// SKIP; target type  not supported

// void gtk_clipboard_request_image (GtkClipboard* clipboard, GtkClipboardImageReceivedFunc callback, gpointer user_data);
// void gtk_clipboard_request_image (::GtkClipboard* clipboard, Gtk::ClipboardImageReceivedFunc::cfunction_type callback, void* user_data);
GI_INLINE_DECL void request_image (Gtk::ClipboardImageReceivedFunc callback) noexcept;

// void gtk_clipboard_request_rich_text (GtkClipboard* clipboard, GtkTextBuffer* buffer, GtkClipboardRichTextReceivedFunc callback, gpointer user_data);
// void gtk_clipboard_request_rich_text (::GtkClipboard* clipboard, ::GtkTextBuffer* buffer,  callback, void* user_data);
// SKIP; callback type  not supported

// void gtk_clipboard_request_targets (GtkClipboard* clipboard, GtkClipboardTargetsReceivedFunc callback, gpointer user_data);
// void gtk_clipboard_request_targets (::GtkClipboard* clipboard,  callback, void* user_data);
// SKIP; callback type  not supported

// void gtk_clipboard_request_text (GtkClipboard* clipboard, GtkClipboardTextReceivedFunc callback, gpointer user_data);
// void gtk_clipboard_request_text (::GtkClipboard* clipboard, Gtk::ClipboardTextReceivedFunc::cfunction_type callback, void* user_data);
GI_INLINE_DECL void request_text (Gtk::ClipboardTextReceivedFunc callback) noexcept;

// void gtk_clipboard_request_uris (GtkClipboard* clipboard, GtkClipboardURIReceivedFunc callback, gpointer user_data);
// void gtk_clipboard_request_uris (::GtkClipboard* clipboard,  callback, void* user_data);
// SKIP; callback type  not supported

// void gtk_clipboard_set_can_store (GtkClipboard* clipboard, const GtkTargetEntry* targets, gint n_targets);
// void gtk_clipboard_set_can_store (::GtkClipboard* clipboard, const ::GtkTargetEntry** targets, gint n_targets);
// SKIP; inconsistent in targets pointer depth (1 vs 2)

// void gtk_clipboard_set_image (GtkClipboard* clipboard, GdkPixbuf* pixbuf);
// void gtk_clipboard_set_image (::GtkClipboard* clipboard, ::GdkPixbuf* pixbuf);
GI_INLINE_DECL void set_image (GdkPixbuf::Pixbuf pixbuf) noexcept;

// void gtk_clipboard_set_text (GtkClipboard* clipboard, const gchar* text, gint len);
// void gtk_clipboard_set_text (::GtkClipboard* clipboard, const char* text, gint len);
GI_INLINE_DECL void set_text (const std::string & text, gint len) noexcept;

// gboolean gtk_clipboard_set_with_data (GtkClipboard* clipboard, const GtkTargetEntry* targets, guint n_targets, GtkClipboardGetFunc get_func, GtkClipboardClearFunc clear_func, gpointer user_data);
// gboolean gtk_clipboard_set_with_data (::GtkClipboard* clipboard, const ::GtkTargetEntry** targets, guint n_targets,  get_func,  clear_func, void* user_data);
// IGNORE; not introspectable, clear_func type  not supported, get_func type  not supported, inconsistent in targets pointer depth (1 vs 2)

// gboolean gtk_clipboard_set_with_owner (GtkClipboard* clipboard, const GtkTargetEntry* targets, guint n_targets, GtkClipboardGetFunc get_func, GtkClipboardClearFunc clear_func, GObject* owner);
// gboolean gtk_clipboard_set_with_owner (::GtkClipboard* clipboard, const ::GtkTargetEntry** targets, guint n_targets,  get_func,  clear_func, ::GObject* owner);
// IGNORE; not introspectable, clear_func type  not supported, get_func type  not supported, inconsistent in targets pointer depth (1 vs 2)

// void gtk_clipboard_store (GtkClipboard* clipboard);
// void gtk_clipboard_store (::GtkClipboard* clipboard);
GI_INLINE_DECL void store () noexcept;

// GtkSelectionData* gtk_clipboard_wait_for_contents (GtkClipboard* clipboard, GdkAtom target);
// ::GtkSelectionData* gtk_clipboard_wait_for_contents (::GtkClipboard* clipboard,  target);
// SKIP; target type  not supported

// GdkPixbuf* gtk_clipboard_wait_for_image (GtkClipboard* clipboard);
// ::GdkPixbuf* gtk_clipboard_wait_for_image (::GtkClipboard* clipboard);
GI_INLINE_DECL GdkPixbuf::Pixbuf wait_for_image () noexcept;

// guint8* gtk_clipboard_wait_for_rich_text (GtkClipboard* clipboard, GtkTextBuffer* buffer, GdkAtom* format, gsize* length);
// guint8* gtk_clipboard_wait_for_rich_text (::GtkClipboard* clipboard, ::GtkTextBuffer* buffer,  format, gsize* length);
// SKIP; format type  not supported

// gboolean gtk_clipboard_wait_for_targets (GtkClipboard* clipboard, gint* n_targets);
// gboolean gtk_clipboard_wait_for_targets (::GtkClipboard* clipboard, gint* n_targets);
// SKIP; container element not supported

// gchar* gtk_clipboard_wait_for_text (GtkClipboard* clipboard);
// char* gtk_clipboard_wait_for_text (::GtkClipboard* clipboard);
GI_INLINE_DECL std::string wait_for_text () noexcept;

// gchar** gtk_clipboard_wait_for_uris (GtkClipboard* clipboard);
// char** gtk_clipboard_wait_for_uris (::GtkClipboard* clipboard);
GI_INLINE_DECL std::vector<std::string> wait_for_uris () noexcept;

// gboolean gtk_clipboard_wait_is_image_available (GtkClipboard* clipboard);
// gboolean gtk_clipboard_wait_is_image_available (::GtkClipboard* clipboard);
GI_INLINE_DECL bool wait_is_image_available () noexcept;

// gboolean gtk_clipboard_wait_is_rich_text_available (GtkClipboard* clipboard, GtkTextBuffer* buffer);
// gboolean gtk_clipboard_wait_is_rich_text_available (::GtkClipboard* clipboard, ::GtkTextBuffer* buffer);
GI_INLINE_DECL bool wait_is_rich_text_available (Gtk::TextBuffer buffer) noexcept;

// gboolean gtk_clipboard_wait_is_target_available (GtkClipboard* clipboard, GdkAtom target);
// gboolean gtk_clipboard_wait_is_target_available (::GtkClipboard* clipboard,  target);
// SKIP; target type  not supported

// gboolean gtk_clipboard_wait_is_text_available (GtkClipboard* clipboard);
// gboolean gtk_clipboard_wait_is_text_available (::GtkClipboard* clipboard);
GI_INLINE_DECL bool wait_is_text_available () noexcept;

// gboolean gtk_clipboard_wait_is_uris_available (GtkClipboard* clipboard);
// gboolean gtk_clipboard_wait_is_uris_available (::GtkClipboard* clipboard);
GI_INLINE_DECL bool wait_is_uris_available () noexcept;

// signal owner-change
gi::signal_proxy<void(Gtk::Clipboard, Gdk::EventOwnerChange event)> signal_owner_change()
{ return gi::signal_proxy<void(Gtk::Clipboard, Gdk::EventOwnerChange event)> (*this, "owner-change"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/clipboard_extra_def.hpp>)
#include <gtk/clipboard_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/clipboard_extra.hpp>)
#include <gtk/clipboard_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Clipboard : public GI_GTK_CLIPBOARD_BASE
{ typedef GI_GTK_CLIPBOARD_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkClipboard>
{ typedef Gtk::Clipboard type; }; 

} // namespace repository

} // namespace gi

#endif
