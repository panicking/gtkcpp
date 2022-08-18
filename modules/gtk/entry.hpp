// AUTO-GENERATED

#ifndef _GI_GTK_ENTRY_HPP_
#define _GI_GTK_ENTRY_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;
class Border;
class CellEditable;
class Editable;
class EntryBuffer;
class EntryCompletion;
class TargetList;
class Widget;

class Entry;

namespace base {


#define GI_GTK_ENTRY_BASE base::EntryBase
class EntryBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkEntry BaseObjectType;

EntryBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_entry_get_type(); } 

GI_INLINE_DECL Gtk::CellEditable interface_ (gi::interface_tag<Gtk::CellEditable>);

GI_INLINE_DECL operator Gtk::CellEditable ();

GI_INLINE_DECL Gtk::Editable interface_ (gi::interface_tag<Gtk::Editable>);

GI_INLINE_DECL operator Gtk::Editable ();

// GtkWidget* gtk_entry_new ();
// ::GtkEntry* gtk_entry_new ();
static GI_INLINE_DECL Gtk::Entry new_ () noexcept;

// GtkWidget* gtk_entry_new_with_buffer (GtkEntryBuffer* buffer);
// ::GtkEntry* gtk_entry_new_with_buffer (::GtkEntryBuffer* buffer);
static GI_INLINE_DECL Gtk::Entry new_with_buffer (Gtk::EntryBuffer buffer) noexcept;

// gboolean gtk_entry_get_activates_default (GtkEntry* entry);
// gboolean gtk_entry_get_activates_default (::GtkEntry* entry);
GI_INLINE_DECL bool get_activates_default () noexcept;

// gfloat gtk_entry_get_alignment (GtkEntry* entry);
// gfloat gtk_entry_get_alignment (::GtkEntry* entry);
GI_INLINE_DECL gfloat get_alignment () noexcept;

// PangoAttrList* gtk_entry_get_attributes (GtkEntry* entry);
// ::PangoAttrList* gtk_entry_get_attributes (::GtkEntry* entry);
GI_INLINE_DECL Pango::AttrList get_attributes () noexcept;

// GtkEntryBuffer* gtk_entry_get_buffer (GtkEntry* entry);
// ::GtkEntryBuffer* gtk_entry_get_buffer (::GtkEntry* entry);
GI_INLINE_DECL Gtk::EntryBuffer get_buffer () noexcept;

// GtkEntryCompletion* gtk_entry_get_completion (GtkEntry* entry);
// ::GtkEntryCompletion* gtk_entry_get_completion (::GtkEntry* entry);
GI_INLINE_DECL Gtk::EntryCompletion get_completion () noexcept;

// gint gtk_entry_get_current_icon_drag_source (GtkEntry* entry);
// gint gtk_entry_get_current_icon_drag_source (::GtkEntry* entry);
GI_INLINE_DECL gint get_current_icon_drag_source () noexcept;

// GtkAdjustment* gtk_entry_get_cursor_hadjustment (GtkEntry* entry);
// ::GtkAdjustment* gtk_entry_get_cursor_hadjustment (::GtkEntry* entry);
GI_INLINE_DECL Gtk::Adjustment get_cursor_hadjustment () noexcept;

// gboolean gtk_entry_get_has_frame (GtkEntry* entry);
// gboolean gtk_entry_get_has_frame (::GtkEntry* entry);
GI_INLINE_DECL bool get_has_frame () noexcept;

// gboolean gtk_entry_get_icon_activatable (GtkEntry* entry, GtkEntryIconPosition icon_pos);
// gboolean gtk_entry_get_icon_activatable (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
GI_INLINE_DECL bool get_icon_activatable (Gtk::EntryIconPosition icon_pos) noexcept;

// void gtk_entry_get_icon_area (GtkEntry* entry, GtkEntryIconPosition icon_pos, GdkRectangle* icon_area);
// void gtk_entry_get_icon_area (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, ::GdkRectangle* icon_area);
GI_INLINE_DECL void get_icon_area (Gtk::EntryIconPosition icon_pos, Gdk::Rectangle & icon_area) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_icon_area (Gtk::EntryIconPosition icon_pos) noexcept;

// gint gtk_entry_get_icon_at_pos (GtkEntry* entry, gint x, gint y);
// gint gtk_entry_get_icon_at_pos (::GtkEntry* entry, gint x, gint y);
GI_INLINE_DECL gint get_icon_at_pos (gint x, gint y) noexcept;

// GIcon* gtk_entry_get_icon_gicon (GtkEntry* entry, GtkEntryIconPosition icon_pos);
// ::GIcon* gtk_entry_get_icon_gicon (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
GI_INLINE_DECL Gio::Icon get_icon_gicon (Gtk::EntryIconPosition icon_pos) noexcept;

// const gchar* gtk_entry_get_icon_name (GtkEntry* entry, GtkEntryIconPosition icon_pos);
// const char* gtk_entry_get_icon_name (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
GI_INLINE_DECL std::string get_icon_name (Gtk::EntryIconPosition icon_pos) noexcept;

// GdkPixbuf* gtk_entry_get_icon_pixbuf (GtkEntry* entry, GtkEntryIconPosition icon_pos);
// ::GdkPixbuf* gtk_entry_get_icon_pixbuf (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
GI_INLINE_DECL GdkPixbuf::Pixbuf get_icon_pixbuf (Gtk::EntryIconPosition icon_pos) noexcept;

// gboolean gtk_entry_get_icon_sensitive (GtkEntry* entry, GtkEntryIconPosition icon_pos);
// gboolean gtk_entry_get_icon_sensitive (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
GI_INLINE_DECL bool get_icon_sensitive (Gtk::EntryIconPosition icon_pos) noexcept;

// const gchar* gtk_entry_get_icon_stock (GtkEntry* entry, GtkEntryIconPosition icon_pos);
// const char* gtk_entry_get_icon_stock (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
// IGNORE; deprecated

// GtkImageType gtk_entry_get_icon_storage_type (GtkEntry* entry, GtkEntryIconPosition icon_pos);
// ::GtkImageType gtk_entry_get_icon_storage_type (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
GI_INLINE_DECL Gtk::ImageType get_icon_storage_type (Gtk::EntryIconPosition icon_pos) noexcept;

// gchar* gtk_entry_get_icon_tooltip_markup (GtkEntry* entry, GtkEntryIconPosition icon_pos);
// char* gtk_entry_get_icon_tooltip_markup (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
GI_INLINE_DECL std::string get_icon_tooltip_markup (Gtk::EntryIconPosition icon_pos) noexcept;

// gchar* gtk_entry_get_icon_tooltip_text (GtkEntry* entry, GtkEntryIconPosition icon_pos);
// char* gtk_entry_get_icon_tooltip_text (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
GI_INLINE_DECL std::string get_icon_tooltip_text (Gtk::EntryIconPosition icon_pos) noexcept;

// const GtkBorder* gtk_entry_get_inner_border (GtkEntry* entry);
// const ::GtkBorder* gtk_entry_get_inner_border (::GtkEntry* entry);
// IGNORE; deprecated

// GtkInputHints gtk_entry_get_input_hints (GtkEntry* entry);
// ::GtkInputHints gtk_entry_get_input_hints (::GtkEntry* entry);
GI_INLINE_DECL Gtk::InputHints get_input_hints () noexcept;

// GtkInputPurpose gtk_entry_get_input_purpose (GtkEntry* entry);
// ::GtkInputPurpose gtk_entry_get_input_purpose (::GtkEntry* entry);
GI_INLINE_DECL Gtk::InputPurpose get_input_purpose () noexcept;

// gunichar gtk_entry_get_invisible_char (GtkEntry* entry);
// gunichar gtk_entry_get_invisible_char (::GtkEntry* entry);
GI_INLINE_DECL gunichar get_invisible_char () noexcept;

// PangoLayout* gtk_entry_get_layout (GtkEntry* entry);
// ::PangoLayout* gtk_entry_get_layout (::GtkEntry* entry);
GI_INLINE_DECL Pango::Layout get_layout () noexcept;

// void gtk_entry_get_layout_offsets (GtkEntry* entry, gint* x, gint* y);
// void gtk_entry_get_layout_offsets (::GtkEntry* entry, gint* x, gint* y);
GI_INLINE_DECL void get_layout_offsets (gint * x = nullptr, gint * y = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_layout_offsets () noexcept;

// gint gtk_entry_get_max_length (GtkEntry* entry);
// gint gtk_entry_get_max_length (::GtkEntry* entry);
GI_INLINE_DECL gint get_max_length () noexcept;

// gint gtk_entry_get_max_width_chars (GtkEntry* entry);
// gint gtk_entry_get_max_width_chars (::GtkEntry* entry);
GI_INLINE_DECL gint get_max_width_chars () noexcept;

// gboolean gtk_entry_get_overwrite_mode (GtkEntry* entry);
// gboolean gtk_entry_get_overwrite_mode (::GtkEntry* entry);
GI_INLINE_DECL bool get_overwrite_mode () noexcept;

// const gchar* gtk_entry_get_placeholder_text (GtkEntry* entry);
// const char* gtk_entry_get_placeholder_text (::GtkEntry* entry);
GI_INLINE_DECL std::string get_placeholder_text () noexcept;

// gdouble gtk_entry_get_progress_fraction (GtkEntry* entry);
// gdouble gtk_entry_get_progress_fraction (::GtkEntry* entry);
GI_INLINE_DECL gdouble get_progress_fraction () noexcept;

// gdouble gtk_entry_get_progress_pulse_step (GtkEntry* entry);
// gdouble gtk_entry_get_progress_pulse_step (::GtkEntry* entry);
GI_INLINE_DECL gdouble get_progress_pulse_step () noexcept;

// PangoTabArray* gtk_entry_get_tabs (GtkEntry* entry);
// ::PangoTabArray* gtk_entry_get_tabs (::GtkEntry* entry);
GI_INLINE_DECL Pango::TabArray get_tabs () noexcept;

// const gchar* gtk_entry_get_text (GtkEntry* entry);
// const char* gtk_entry_get_text (::GtkEntry* entry);
GI_INLINE_DECL std::string get_text () noexcept;

// void gtk_entry_get_text_area (GtkEntry* entry, GdkRectangle* text_area);
// void gtk_entry_get_text_area (::GtkEntry* entry, ::GdkRectangle* text_area);
GI_INLINE_DECL void get_text_area (Gdk::Rectangle & text_area) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_text_area () noexcept;

// guint16 gtk_entry_get_text_length (GtkEntry* entry);
// guint16 gtk_entry_get_text_length (::GtkEntry* entry);
GI_INLINE_DECL guint16 get_text_length () noexcept;

// gboolean gtk_entry_get_visibility (GtkEntry* entry);
// gboolean gtk_entry_get_visibility (::GtkEntry* entry);
GI_INLINE_DECL bool get_visibility () noexcept;

// gint gtk_entry_get_width_chars (GtkEntry* entry);
// gint gtk_entry_get_width_chars (::GtkEntry* entry);
GI_INLINE_DECL gint get_width_chars () noexcept;

// void gtk_entry_grab_focus_without_selecting (GtkEntry* entry);
// void gtk_entry_grab_focus_without_selecting (::GtkEntry* entry);
GI_INLINE_DECL void grab_focus_without_selecting () noexcept;

// gboolean gtk_entry_im_context_filter_keypress (GtkEntry* entry, GdkEventKey* event);
// gboolean gtk_entry_im_context_filter_keypress (::GtkEntry* entry, ::GdkEventKey* event);
GI_INLINE_DECL bool im_context_filter_keypress (Gdk::EventKey event) noexcept;

// gint gtk_entry_layout_index_to_text_index (GtkEntry* entry, gint layout_index);
// gint gtk_entry_layout_index_to_text_index (::GtkEntry* entry, gint layout_index);
GI_INLINE_DECL gint layout_index_to_text_index (gint layout_index) noexcept;

// void gtk_entry_progress_pulse (GtkEntry* entry);
// void gtk_entry_progress_pulse (::GtkEntry* entry);
GI_INLINE_DECL void progress_pulse () noexcept;

// void gtk_entry_reset_im_context (GtkEntry* entry);
// void gtk_entry_reset_im_context (::GtkEntry* entry);
GI_INLINE_DECL void reset_im_context () noexcept;

// void gtk_entry_set_activates_default (GtkEntry* entry, gboolean setting);
// void gtk_entry_set_activates_default (::GtkEntry* entry, gboolean setting);
GI_INLINE_DECL void set_activates_default (gboolean setting) noexcept;

// void gtk_entry_set_alignment (GtkEntry* entry, gfloat xalign);
// void gtk_entry_set_alignment (::GtkEntry* entry, gfloat xalign);
GI_INLINE_DECL void set_alignment (gfloat xalign) noexcept;

// void gtk_entry_set_attributes (GtkEntry* entry, PangoAttrList* attrs);
// void gtk_entry_set_attributes (::GtkEntry* entry, ::PangoAttrList* attrs);
GI_INLINE_DECL void set_attributes (Pango::AttrList attrs) noexcept;

// void gtk_entry_set_buffer (GtkEntry* entry, GtkEntryBuffer* buffer);
// void gtk_entry_set_buffer (::GtkEntry* entry, ::GtkEntryBuffer* buffer);
GI_INLINE_DECL void set_buffer (Gtk::EntryBuffer buffer) noexcept;

// void gtk_entry_set_completion (GtkEntry* entry, GtkEntryCompletion* completion);
// void gtk_entry_set_completion (::GtkEntry* entry, ::GtkEntryCompletion* completion);
GI_INLINE_DECL void set_completion (Gtk::EntryCompletion completion) noexcept;
GI_INLINE_DECL void set_completion () noexcept;

// void gtk_entry_set_cursor_hadjustment (GtkEntry* entry, GtkAdjustment* adjustment);
// void gtk_entry_set_cursor_hadjustment (::GtkEntry* entry, ::GtkAdjustment* adjustment);
GI_INLINE_DECL void set_cursor_hadjustment (Gtk::Adjustment adjustment) noexcept;
GI_INLINE_DECL void set_cursor_hadjustment () noexcept;

// void gtk_entry_set_has_frame (GtkEntry* entry, gboolean setting);
// void gtk_entry_set_has_frame (::GtkEntry* entry, gboolean setting);
GI_INLINE_DECL void set_has_frame (gboolean setting) noexcept;

// void gtk_entry_set_icon_activatable (GtkEntry* entry, GtkEntryIconPosition icon_pos, gboolean activatable);
// void gtk_entry_set_icon_activatable (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, gboolean activatable);
GI_INLINE_DECL void set_icon_activatable (Gtk::EntryIconPosition icon_pos, gboolean activatable) noexcept;

// void gtk_entry_set_icon_drag_source (GtkEntry* entry, GtkEntryIconPosition icon_pos, GtkTargetList* target_list, GdkDragAction actions);
// void gtk_entry_set_icon_drag_source (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, ::GtkTargetList* target_list, ::GdkDragAction actions);
GI_INLINE_DECL void set_icon_drag_source (Gtk::EntryIconPosition icon_pos, Gtk::TargetList target_list, Gdk::DragAction actions) noexcept;

// void gtk_entry_set_icon_from_gicon (GtkEntry* entry, GtkEntryIconPosition icon_pos, GIcon* icon);
// void gtk_entry_set_icon_from_gicon (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, ::GIcon* icon);
GI_INLINE_DECL void set_icon_from_gicon (Gtk::EntryIconPosition icon_pos, Gio::Icon icon) noexcept;
GI_INLINE_DECL void set_icon_from_gicon (Gtk::EntryIconPosition icon_pos) noexcept;

// void gtk_entry_set_icon_from_icon_name (GtkEntry* entry, GtkEntryIconPosition icon_pos, const gchar* icon_name);
// void gtk_entry_set_icon_from_icon_name (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, const char* icon_name);
GI_INLINE_DECL void set_icon_from_icon_name (Gtk::EntryIconPosition icon_pos, const std::string & icon_name) noexcept;
GI_INLINE_DECL void set_icon_from_icon_name (Gtk::EntryIconPosition icon_pos) noexcept;

// void gtk_entry_set_icon_from_pixbuf (GtkEntry* entry, GtkEntryIconPosition icon_pos, GdkPixbuf* pixbuf);
// void gtk_entry_set_icon_from_pixbuf (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, ::GdkPixbuf* pixbuf);
GI_INLINE_DECL void set_icon_from_pixbuf (Gtk::EntryIconPosition icon_pos, GdkPixbuf::Pixbuf pixbuf) noexcept;
GI_INLINE_DECL void set_icon_from_pixbuf (Gtk::EntryIconPosition icon_pos) noexcept;

// void gtk_entry_set_icon_from_stock (GtkEntry* entry, GtkEntryIconPosition icon_pos, const gchar* stock_id);
// void gtk_entry_set_icon_from_stock (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, const char* stock_id);
// IGNORE; deprecated

// void gtk_entry_set_icon_sensitive (GtkEntry* entry, GtkEntryIconPosition icon_pos, gboolean sensitive);
// void gtk_entry_set_icon_sensitive (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, gboolean sensitive);
GI_INLINE_DECL void set_icon_sensitive (Gtk::EntryIconPosition icon_pos, gboolean sensitive) noexcept;

// void gtk_entry_set_icon_tooltip_markup (GtkEntry* entry, GtkEntryIconPosition icon_pos, const gchar* tooltip);
// void gtk_entry_set_icon_tooltip_markup (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, const char* tooltip);
GI_INLINE_DECL void set_icon_tooltip_markup (Gtk::EntryIconPosition icon_pos, const std::string & tooltip) noexcept;
GI_INLINE_DECL void set_icon_tooltip_markup (Gtk::EntryIconPosition icon_pos) noexcept;

// void gtk_entry_set_icon_tooltip_text (GtkEntry* entry, GtkEntryIconPosition icon_pos, const gchar* tooltip);
// void gtk_entry_set_icon_tooltip_text (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, const char* tooltip);
GI_INLINE_DECL void set_icon_tooltip_text (Gtk::EntryIconPosition icon_pos, const std::string & tooltip) noexcept;
GI_INLINE_DECL void set_icon_tooltip_text (Gtk::EntryIconPosition icon_pos) noexcept;

// void gtk_entry_set_inner_border (GtkEntry* entry, const GtkBorder* border);
// void gtk_entry_set_inner_border (::GtkEntry* entry, const ::GtkBorder* border);
// IGNORE; deprecated

// void gtk_entry_set_input_hints (GtkEntry* entry, GtkInputHints hints);
// void gtk_entry_set_input_hints (::GtkEntry* entry, ::GtkInputHints hints);
GI_INLINE_DECL void set_input_hints (Gtk::InputHints hints) noexcept;

// void gtk_entry_set_input_purpose (GtkEntry* entry, GtkInputPurpose purpose);
// void gtk_entry_set_input_purpose (::GtkEntry* entry, ::GtkInputPurpose purpose);
GI_INLINE_DECL void set_input_purpose (Gtk::InputPurpose purpose) noexcept;

// void gtk_entry_set_invisible_char (GtkEntry* entry, gunichar ch);
// void gtk_entry_set_invisible_char (::GtkEntry* entry, gunichar ch);
GI_INLINE_DECL void set_invisible_char (gunichar ch) noexcept;

// void gtk_entry_set_max_length (GtkEntry* entry, gint max);
// void gtk_entry_set_max_length (::GtkEntry* entry, gint max);
GI_INLINE_DECL void set_max_length (gint max) noexcept;

// void gtk_entry_set_max_width_chars (GtkEntry* entry, gint n_chars);
// void gtk_entry_set_max_width_chars (::GtkEntry* entry, gint n_chars);
GI_INLINE_DECL void set_max_width_chars (gint n_chars) noexcept;

// void gtk_entry_set_overwrite_mode (GtkEntry* entry, gboolean overwrite);
// void gtk_entry_set_overwrite_mode (::GtkEntry* entry, gboolean overwrite);
GI_INLINE_DECL void set_overwrite_mode (gboolean overwrite) noexcept;

// void gtk_entry_set_placeholder_text (GtkEntry* entry, const gchar* text);
// void gtk_entry_set_placeholder_text (::GtkEntry* entry, const char* text);
GI_INLINE_DECL void set_placeholder_text (const std::string & text) noexcept;
GI_INLINE_DECL void set_placeholder_text () noexcept;

// void gtk_entry_set_progress_fraction (GtkEntry* entry, gdouble fraction);
// void gtk_entry_set_progress_fraction (::GtkEntry* entry, gdouble fraction);
GI_INLINE_DECL void set_progress_fraction (gdouble fraction) noexcept;

// void gtk_entry_set_progress_pulse_step (GtkEntry* entry, gdouble fraction);
// void gtk_entry_set_progress_pulse_step (::GtkEntry* entry, gdouble fraction);
GI_INLINE_DECL void set_progress_pulse_step (gdouble fraction) noexcept;

// void gtk_entry_set_tabs (GtkEntry* entry, PangoTabArray* tabs);
// void gtk_entry_set_tabs (::GtkEntry* entry, ::PangoTabArray* tabs);
GI_INLINE_DECL void set_tabs (Pango::TabArray tabs) noexcept;

// void gtk_entry_set_text (GtkEntry* entry, const gchar* text);
// void gtk_entry_set_text (::GtkEntry* entry, const char* text);
GI_INLINE_DECL void set_text (const std::string & text) noexcept;

// void gtk_entry_set_visibility (GtkEntry* entry, gboolean visible);
// void gtk_entry_set_visibility (::GtkEntry* entry, gboolean visible);
GI_INLINE_DECL void set_visibility (gboolean visible) noexcept;

// void gtk_entry_set_width_chars (GtkEntry* entry, gint n_chars);
// void gtk_entry_set_width_chars (::GtkEntry* entry, gint n_chars);
GI_INLINE_DECL void set_width_chars (gint n_chars) noexcept;

// gint gtk_entry_text_index_to_layout_index (GtkEntry* entry, gint text_index);
// gint gtk_entry_text_index_to_layout_index (::GtkEntry* entry, gint text_index);
GI_INLINE_DECL gint text_index_to_layout_index (gint text_index) noexcept;

// void gtk_entry_unset_invisible_char (GtkEntry* entry);
// void gtk_entry_unset_invisible_char (::GtkEntry* entry);
GI_INLINE_DECL void unset_invisible_char () noexcept;

gi::property_proxy<bool, base::EntryBase> property_activates_default()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "activates-default"); }
const gi::property_proxy<bool, base::EntryBase> property_activates_default() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "activates-default"); }

gi::property_proxy<Pango::AttrList, base::EntryBase> property_attributes()
{ return gi::property_proxy<Pango::AttrList, base::EntryBase> (*this, "attributes"); }
const gi::property_proxy<Pango::AttrList, base::EntryBase> property_attributes() const
{ return gi::property_proxy<Pango::AttrList, base::EntryBase> (*this, "attributes"); }

gi::property_proxy<Gtk::EntryBuffer, base::EntryBase> property_buffer()
{ return gi::property_proxy<Gtk::EntryBuffer, base::EntryBase> (*this, "buffer"); }
const gi::property_proxy<Gtk::EntryBuffer, base::EntryBase> property_buffer() const
{ return gi::property_proxy<Gtk::EntryBuffer, base::EntryBase> (*this, "buffer"); }

gi::property_proxy<bool, base::EntryBase> property_caps_lock_warning()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "caps-lock-warning"); }
const gi::property_proxy<bool, base::EntryBase> property_caps_lock_warning() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "caps-lock-warning"); }

gi::property_proxy<Gtk::EntryCompletion, base::EntryBase> property_completion()
{ return gi::property_proxy<Gtk::EntryCompletion, base::EntryBase> (*this, "completion"); }
const gi::property_proxy<Gtk::EntryCompletion, base::EntryBase> property_completion() const
{ return gi::property_proxy<Gtk::EntryCompletion, base::EntryBase> (*this, "completion"); }

gi::property_proxy<gint, base::EntryBase> property_cursor_position()
{ return gi::property_proxy<gint, base::EntryBase> (*this, "cursor-position"); }
const gi::property_proxy<gint, base::EntryBase> property_cursor_position() const
{ return gi::property_proxy<gint, base::EntryBase> (*this, "cursor-position"); }

gi::property_proxy<bool, base::EntryBase> property_editable()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "editable"); }
const gi::property_proxy<bool, base::EntryBase> property_editable() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "editable"); }

gi::property_proxy<bool, base::EntryBase> property_enable_emoji_completion()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "enable-emoji-completion"); }
const gi::property_proxy<bool, base::EntryBase> property_enable_emoji_completion() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "enable-emoji-completion"); }

gi::property_proxy<bool, base::EntryBase> property_has_frame()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "has-frame"); }
const gi::property_proxy<bool, base::EntryBase> property_has_frame() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "has-frame"); }

gi::property_proxy<std::string, base::EntryBase> property_im_module()
{ return gi::property_proxy<std::string, base::EntryBase> (*this, "im-module"); }
const gi::property_proxy<std::string, base::EntryBase> property_im_module() const
{ return gi::property_proxy<std::string, base::EntryBase> (*this, "im-module"); }

gi::property_proxy<Gtk::Border, base::EntryBase> property_inner_border()
{ return gi::property_proxy<Gtk::Border, base::EntryBase> (*this, "inner-border"); }
const gi::property_proxy<Gtk::Border, base::EntryBase> property_inner_border() const
{ return gi::property_proxy<Gtk::Border, base::EntryBase> (*this, "inner-border"); }

gi::property_proxy<Gtk::InputHints, base::EntryBase> property_input_hints()
{ return gi::property_proxy<Gtk::InputHints, base::EntryBase> (*this, "input-hints"); }
const gi::property_proxy<Gtk::InputHints, base::EntryBase> property_input_hints() const
{ return gi::property_proxy<Gtk::InputHints, base::EntryBase> (*this, "input-hints"); }

gi::property_proxy<Gtk::InputPurpose, base::EntryBase> property_input_purpose()
{ return gi::property_proxy<Gtk::InputPurpose, base::EntryBase> (*this, "input-purpose"); }
const gi::property_proxy<Gtk::InputPurpose, base::EntryBase> property_input_purpose() const
{ return gi::property_proxy<Gtk::InputPurpose, base::EntryBase> (*this, "input-purpose"); }

gi::property_proxy<guint, base::EntryBase> property_invisible_char()
{ return gi::property_proxy<guint, base::EntryBase> (*this, "invisible-char"); }
const gi::property_proxy<guint, base::EntryBase> property_invisible_char() const
{ return gi::property_proxy<guint, base::EntryBase> (*this, "invisible-char"); }

gi::property_proxy<bool, base::EntryBase> property_invisible_char_set()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "invisible-char-set"); }
const gi::property_proxy<bool, base::EntryBase> property_invisible_char_set() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "invisible-char-set"); }

gi::property_proxy<gint, base::EntryBase> property_max_length()
{ return gi::property_proxy<gint, base::EntryBase> (*this, "max-length"); }
const gi::property_proxy<gint, base::EntryBase> property_max_length() const
{ return gi::property_proxy<gint, base::EntryBase> (*this, "max-length"); }

gi::property_proxy<gint, base::EntryBase> property_max_width_chars()
{ return gi::property_proxy<gint, base::EntryBase> (*this, "max-width-chars"); }
const gi::property_proxy<gint, base::EntryBase> property_max_width_chars() const
{ return gi::property_proxy<gint, base::EntryBase> (*this, "max-width-chars"); }

gi::property_proxy<bool, base::EntryBase> property_overwrite_mode()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "overwrite-mode"); }
const gi::property_proxy<bool, base::EntryBase> property_overwrite_mode() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "overwrite-mode"); }

gi::property_proxy<std::string, base::EntryBase> property_placeholder_text()
{ return gi::property_proxy<std::string, base::EntryBase> (*this, "placeholder-text"); }
const gi::property_proxy<std::string, base::EntryBase> property_placeholder_text() const
{ return gi::property_proxy<std::string, base::EntryBase> (*this, "placeholder-text"); }

gi::property_proxy<bool, base::EntryBase> property_populate_all()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "populate-all"); }
const gi::property_proxy<bool, base::EntryBase> property_populate_all() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "populate-all"); }

gi::property_proxy<bool, base::EntryBase> property_primary_icon_activatable()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "primary-icon-activatable"); }
const gi::property_proxy<bool, base::EntryBase> property_primary_icon_activatable() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "primary-icon-activatable"); }

gi::property_proxy<Gio::Icon, base::EntryBase> property_primary_icon_gicon()
{ return gi::property_proxy<Gio::Icon, base::EntryBase> (*this, "primary-icon-gicon"); }
const gi::property_proxy<Gio::Icon, base::EntryBase> property_primary_icon_gicon() const
{ return gi::property_proxy<Gio::Icon, base::EntryBase> (*this, "primary-icon-gicon"); }

gi::property_proxy<std::string, base::EntryBase> property_primary_icon_name()
{ return gi::property_proxy<std::string, base::EntryBase> (*this, "primary-icon-name"); }
const gi::property_proxy<std::string, base::EntryBase> property_primary_icon_name() const
{ return gi::property_proxy<std::string, base::EntryBase> (*this, "primary-icon-name"); }

gi::property_proxy<GdkPixbuf::Pixbuf, base::EntryBase> property_primary_icon_pixbuf()
{ return gi::property_proxy<GdkPixbuf::Pixbuf, base::EntryBase> (*this, "primary-icon-pixbuf"); }
const gi::property_proxy<GdkPixbuf::Pixbuf, base::EntryBase> property_primary_icon_pixbuf() const
{ return gi::property_proxy<GdkPixbuf::Pixbuf, base::EntryBase> (*this, "primary-icon-pixbuf"); }

gi::property_proxy<bool, base::EntryBase> property_primary_icon_sensitive()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "primary-icon-sensitive"); }
const gi::property_proxy<bool, base::EntryBase> property_primary_icon_sensitive() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "primary-icon-sensitive"); }

gi::property_proxy<std::string, base::EntryBase> property_primary_icon_stock()
{ return gi::property_proxy<std::string, base::EntryBase> (*this, "primary-icon-stock"); }
const gi::property_proxy<std::string, base::EntryBase> property_primary_icon_stock() const
{ return gi::property_proxy<std::string, base::EntryBase> (*this, "primary-icon-stock"); }

gi::property_proxy<Gtk::ImageType, base::EntryBase> property_primary_icon_storage_type()
{ return gi::property_proxy<Gtk::ImageType, base::EntryBase> (*this, "primary-icon-storage-type"); }
const gi::property_proxy<Gtk::ImageType, base::EntryBase> property_primary_icon_storage_type() const
{ return gi::property_proxy<Gtk::ImageType, base::EntryBase> (*this, "primary-icon-storage-type"); }

gi::property_proxy<std::string, base::EntryBase> property_primary_icon_tooltip_markup()
{ return gi::property_proxy<std::string, base::EntryBase> (*this, "primary-icon-tooltip-markup"); }
const gi::property_proxy<std::string, base::EntryBase> property_primary_icon_tooltip_markup() const
{ return gi::property_proxy<std::string, base::EntryBase> (*this, "primary-icon-tooltip-markup"); }

gi::property_proxy<std::string, base::EntryBase> property_primary_icon_tooltip_text()
{ return gi::property_proxy<std::string, base::EntryBase> (*this, "primary-icon-tooltip-text"); }
const gi::property_proxy<std::string, base::EntryBase> property_primary_icon_tooltip_text() const
{ return gi::property_proxy<std::string, base::EntryBase> (*this, "primary-icon-tooltip-text"); }

gi::property_proxy<gdouble, base::EntryBase> property_progress_fraction()
{ return gi::property_proxy<gdouble, base::EntryBase> (*this, "progress-fraction"); }
const gi::property_proxy<gdouble, base::EntryBase> property_progress_fraction() const
{ return gi::property_proxy<gdouble, base::EntryBase> (*this, "progress-fraction"); }

gi::property_proxy<gdouble, base::EntryBase> property_progress_pulse_step()
{ return gi::property_proxy<gdouble, base::EntryBase> (*this, "progress-pulse-step"); }
const gi::property_proxy<gdouble, base::EntryBase> property_progress_pulse_step() const
{ return gi::property_proxy<gdouble, base::EntryBase> (*this, "progress-pulse-step"); }

gi::property_proxy<gint, base::EntryBase> property_scroll_offset()
{ return gi::property_proxy<gint, base::EntryBase> (*this, "scroll-offset"); }
const gi::property_proxy<gint, base::EntryBase> property_scroll_offset() const
{ return gi::property_proxy<gint, base::EntryBase> (*this, "scroll-offset"); }

gi::property_proxy<bool, base::EntryBase> property_secondary_icon_activatable()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "secondary-icon-activatable"); }
const gi::property_proxy<bool, base::EntryBase> property_secondary_icon_activatable() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "secondary-icon-activatable"); }

gi::property_proxy<Gio::Icon, base::EntryBase> property_secondary_icon_gicon()
{ return gi::property_proxy<Gio::Icon, base::EntryBase> (*this, "secondary-icon-gicon"); }
const gi::property_proxy<Gio::Icon, base::EntryBase> property_secondary_icon_gicon() const
{ return gi::property_proxy<Gio::Icon, base::EntryBase> (*this, "secondary-icon-gicon"); }

gi::property_proxy<std::string, base::EntryBase> property_secondary_icon_name()
{ return gi::property_proxy<std::string, base::EntryBase> (*this, "secondary-icon-name"); }
const gi::property_proxy<std::string, base::EntryBase> property_secondary_icon_name() const
{ return gi::property_proxy<std::string, base::EntryBase> (*this, "secondary-icon-name"); }

gi::property_proxy<GdkPixbuf::Pixbuf, base::EntryBase> property_secondary_icon_pixbuf()
{ return gi::property_proxy<GdkPixbuf::Pixbuf, base::EntryBase> (*this, "secondary-icon-pixbuf"); }
const gi::property_proxy<GdkPixbuf::Pixbuf, base::EntryBase> property_secondary_icon_pixbuf() const
{ return gi::property_proxy<GdkPixbuf::Pixbuf, base::EntryBase> (*this, "secondary-icon-pixbuf"); }

gi::property_proxy<bool, base::EntryBase> property_secondary_icon_sensitive()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "secondary-icon-sensitive"); }
const gi::property_proxy<bool, base::EntryBase> property_secondary_icon_sensitive() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "secondary-icon-sensitive"); }

gi::property_proxy<std::string, base::EntryBase> property_secondary_icon_stock()
{ return gi::property_proxy<std::string, base::EntryBase> (*this, "secondary-icon-stock"); }
const gi::property_proxy<std::string, base::EntryBase> property_secondary_icon_stock() const
{ return gi::property_proxy<std::string, base::EntryBase> (*this, "secondary-icon-stock"); }

gi::property_proxy<Gtk::ImageType, base::EntryBase> property_secondary_icon_storage_type()
{ return gi::property_proxy<Gtk::ImageType, base::EntryBase> (*this, "secondary-icon-storage-type"); }
const gi::property_proxy<Gtk::ImageType, base::EntryBase> property_secondary_icon_storage_type() const
{ return gi::property_proxy<Gtk::ImageType, base::EntryBase> (*this, "secondary-icon-storage-type"); }

gi::property_proxy<std::string, base::EntryBase> property_secondary_icon_tooltip_markup()
{ return gi::property_proxy<std::string, base::EntryBase> (*this, "secondary-icon-tooltip-markup"); }
const gi::property_proxy<std::string, base::EntryBase> property_secondary_icon_tooltip_markup() const
{ return gi::property_proxy<std::string, base::EntryBase> (*this, "secondary-icon-tooltip-markup"); }

gi::property_proxy<std::string, base::EntryBase> property_secondary_icon_tooltip_text()
{ return gi::property_proxy<std::string, base::EntryBase> (*this, "secondary-icon-tooltip-text"); }
const gi::property_proxy<std::string, base::EntryBase> property_secondary_icon_tooltip_text() const
{ return gi::property_proxy<std::string, base::EntryBase> (*this, "secondary-icon-tooltip-text"); }

gi::property_proxy<gint, base::EntryBase> property_selection_bound()
{ return gi::property_proxy<gint, base::EntryBase> (*this, "selection-bound"); }
const gi::property_proxy<gint, base::EntryBase> property_selection_bound() const
{ return gi::property_proxy<gint, base::EntryBase> (*this, "selection-bound"); }

gi::property_proxy<Gtk::ShadowType, base::EntryBase> property_shadow_type()
{ return gi::property_proxy<Gtk::ShadowType, base::EntryBase> (*this, "shadow-type"); }
const gi::property_proxy<Gtk::ShadowType, base::EntryBase> property_shadow_type() const
{ return gi::property_proxy<Gtk::ShadowType, base::EntryBase> (*this, "shadow-type"); }

gi::property_proxy<bool, base::EntryBase> property_show_emoji_icon()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "show-emoji-icon"); }
const gi::property_proxy<bool, base::EntryBase> property_show_emoji_icon() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "show-emoji-icon"); }

gi::property_proxy<Pango::TabArray, base::EntryBase> property_tabs()
{ return gi::property_proxy<Pango::TabArray, base::EntryBase> (*this, "tabs"); }
const gi::property_proxy<Pango::TabArray, base::EntryBase> property_tabs() const
{ return gi::property_proxy<Pango::TabArray, base::EntryBase> (*this, "tabs"); }

gi::property_proxy<std::string, base::EntryBase> property_text()
{ return gi::property_proxy<std::string, base::EntryBase> (*this, "text"); }
const gi::property_proxy<std::string, base::EntryBase> property_text() const
{ return gi::property_proxy<std::string, base::EntryBase> (*this, "text"); }

gi::property_proxy<guint, base::EntryBase> property_text_length()
{ return gi::property_proxy<guint, base::EntryBase> (*this, "text-length"); }
const gi::property_proxy<guint, base::EntryBase> property_text_length() const
{ return gi::property_proxy<guint, base::EntryBase> (*this, "text-length"); }

gi::property_proxy<bool, base::EntryBase> property_truncate_multiline()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "truncate-multiline"); }
const gi::property_proxy<bool, base::EntryBase> property_truncate_multiline() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "truncate-multiline"); }

gi::property_proxy<bool, base::EntryBase> property_visibility()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "visibility"); }
const gi::property_proxy<bool, base::EntryBase> property_visibility() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "visibility"); }

gi::property_proxy<gint, base::EntryBase> property_width_chars()
{ return gi::property_proxy<gint, base::EntryBase> (*this, "width-chars"); }
const gi::property_proxy<gint, base::EntryBase> property_width_chars() const
{ return gi::property_proxy<gint, base::EntryBase> (*this, "width-chars"); }

gi::property_proxy<gfloat, base::EntryBase> property_xalign()
{ return gi::property_proxy<gfloat, base::EntryBase> (*this, "xalign"); }
const gi::property_proxy<gfloat, base::EntryBase> property_xalign() const
{ return gi::property_proxy<gfloat, base::EntryBase> (*this, "xalign"); }

// signal activate
gi::signal_proxy<void(Gtk::Entry)> signal_activate()
{ return gi::signal_proxy<void(Gtk::Entry)> (*this, "activate"); }

// signal backspace
gi::signal_proxy<void(Gtk::Entry)> signal_backspace()
{ return gi::signal_proxy<void(Gtk::Entry)> (*this, "backspace"); }

// signal copy-clipboard
gi::signal_proxy<void(Gtk::Entry)> signal_copy_clipboard()
{ return gi::signal_proxy<void(Gtk::Entry)> (*this, "copy-clipboard"); }

// signal cut-clipboard
gi::signal_proxy<void(Gtk::Entry)> signal_cut_clipboard()
{ return gi::signal_proxy<void(Gtk::Entry)> (*this, "cut-clipboard"); }

// signal delete-from-cursor
gi::signal_proxy<void(Gtk::Entry, Gtk::DeleteType type, gint count)> signal_delete_from_cursor()
{ return gi::signal_proxy<void(Gtk::Entry, Gtk::DeleteType type, gint count)> (*this, "delete-from-cursor"); }

// signal icon-press
// SKIP; event type  not supported

// signal icon-release
// SKIP; event type  not supported

// signal insert-at-cursor
gi::signal_proxy<void(Gtk::Entry, const std::string & string)> signal_insert_at_cursor()
{ return gi::signal_proxy<void(Gtk::Entry, const std::string & string)> (*this, "insert-at-cursor"); }

// signal insert-emoji
gi::signal_proxy<void(Gtk::Entry)> signal_insert_emoji()
{ return gi::signal_proxy<void(Gtk::Entry)> (*this, "insert-emoji"); }

// signal move-cursor
gi::signal_proxy<void(Gtk::Entry, Gtk::MovementStep step, gint count, gboolean extend_selection)> signal_move_cursor()
{ return gi::signal_proxy<void(Gtk::Entry, Gtk::MovementStep step, gint count, gboolean extend_selection)> (*this, "move-cursor"); }

// signal paste-clipboard
gi::signal_proxy<void(Gtk::Entry)> signal_paste_clipboard()
{ return gi::signal_proxy<void(Gtk::Entry)> (*this, "paste-clipboard"); }

// signal populate-popup
gi::signal_proxy<void(Gtk::Entry, Gtk::Widget widget)> signal_populate_popup()
{ return gi::signal_proxy<void(Gtk::Entry, Gtk::Widget widget)> (*this, "populate-popup"); }

// signal preedit-changed
gi::signal_proxy<void(Gtk::Entry, const std::string & preedit)> signal_preedit_changed()
{ return gi::signal_proxy<void(Gtk::Entry, const std::string & preedit)> (*this, "preedit-changed"); }

// signal toggle-overwrite
gi::signal_proxy<void(Gtk::Entry)> signal_toggle_overwrite()
{ return gi::signal_proxy<void(Gtk::Entry)> (*this, "toggle-overwrite"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/entry_extra_def.hpp>)
#include <gtk/entry_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/entry_extra.hpp>)
#include <gtk/entry_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Entry : public GI_GTK_ENTRY_BASE
{ typedef GI_GTK_ENTRY_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkEntry>
{ typedef Gtk::Entry type; }; 

} // namespace repository

} // namespace gi

#include "celleditable.hpp"
#include "editable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class EntryClassDef
{
typedef EntryClassDef self;
public:
typedef Gtk::Entry instance_type;
typedef ::GtkEntryClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Entry::activate (GtkEntry* entry);
// void Entry::activate (::GtkEntry* entry);
virtual void activate_ () noexcept = 0;

// void Entry::backspace (GtkEntry* entry);
// void Entry::backspace (::GtkEntry* entry);
virtual void backspace_ () noexcept = 0;

// void Entry::copy_clipboard (GtkEntry* entry);
// void Entry::copy_clipboard (::GtkEntry* entry);
virtual void copy_clipboard_ () noexcept = 0;

// void Entry::cut_clipboard (GtkEntry* entry);
// void Entry::cut_clipboard (::GtkEntry* entry);
virtual void cut_clipboard_ () noexcept = 0;

// void Entry::delete_from_cursor (GtkEntry* entry, GtkDeleteType type, gint count);
// void Entry::delete_from_cursor (::GtkEntry* entry, ::GtkDeleteType type, gint count);
virtual void delete_from_cursor_ (Gtk::DeleteType type, gint count) noexcept = 0;

// void Entry::get_frame_size (GtkEntry* entry, gint* x, gint* y, gint* width, gint* height);
// void Entry::get_frame_size (::GtkEntry* entry, gint x, gint y, gint width, gint height);
// SKIP; inconsistent in height pointer depth (1 vs 0), inconsistent in width pointer depth (1 vs 0), inconsistent in y pointer depth (1 vs 0), inconsistent in x pointer depth (1 vs 0)

// void Entry::get_text_area_size (GtkEntry* entry, gint* x, gint* y, gint* width, gint* height);
// void Entry::get_text_area_size (::GtkEntry* entry, gint x, gint y, gint width, gint height);
// SKIP; inconsistent in height pointer depth (1 vs 0), inconsistent in width pointer depth (1 vs 0), inconsistent in y pointer depth (1 vs 0), inconsistent in x pointer depth (1 vs 0)

// void Entry::insert_at_cursor (GtkEntry* entry, const gchar* str);
// void Entry::insert_at_cursor (::GtkEntry* entry, const char* str);
virtual void insert_at_cursor_ (const std::string & str) noexcept = 0;

// void Entry::insert_emoji (GtkEntry* entry);
// void Entry::insert_emoji (::GtkEntry* entry);
virtual void insert_emoji_ () noexcept = 0;

// void Entry::move_cursor (GtkEntry* entry, GtkMovementStep step, gint count, gboolean extend_selection);
// void Entry::move_cursor (::GtkEntry* entry, ::GtkMovementStep step, gint count, gboolean extend_selection);
virtual void move_cursor_ (Gtk::MovementStep step, gint count, gboolean extend_selection) noexcept = 0;

// void Entry::paste_clipboard (GtkEntry* entry);
// void Entry::paste_clipboard (::GtkEntry* entry);
virtual void paste_clipboard_ () noexcept = 0;

// void Entry::populate_popup (GtkEntry* entry, GtkWidget* popup);
// void Entry::populate_popup (::GtkEntry* entry, ::GtkWidget* popup);
virtual void populate_popup_ (Gtk::Widget popup) noexcept = 0;

// void Entry::toggle_overwrite (GtkEntry* entry);
// void Entry::toggle_overwrite (::GtkEntry* entry);
virtual void toggle_overwrite_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class EntryClass: public detail::ClassTemplate<Gtk::impl::internal::EntryClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::CellEditableIfaceClassImpl, Gtk::impl::internal::EditableInterfaceClassImpl>
{
typedef EntryClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::EntryClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::CellEditableIfaceClassImpl, Gtk::impl::internal::EditableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::CellEditableIfaceClassImpl GtkCellEditableIface_type;
typedef Gtk::impl::internal::EditableInterfaceClassImpl GtkEditableInterface_type;


// void Entry::activate (GtkEntry* entry);
// void Entry::activate (::GtkEntry* entry);
GI_INLINE_DECL void activate_ () noexcept override;

// void Entry::backspace (GtkEntry* entry);
// void Entry::backspace (::GtkEntry* entry);
GI_INLINE_DECL void backspace_ () noexcept override;

// void Entry::copy_clipboard (GtkEntry* entry);
// void Entry::copy_clipboard (::GtkEntry* entry);
GI_INLINE_DECL void copy_clipboard_ () noexcept override;

// void Entry::cut_clipboard (GtkEntry* entry);
// void Entry::cut_clipboard (::GtkEntry* entry);
GI_INLINE_DECL void cut_clipboard_ () noexcept override;

// void Entry::delete_from_cursor (GtkEntry* entry, GtkDeleteType type, gint count);
// void Entry::delete_from_cursor (::GtkEntry* entry, ::GtkDeleteType type, gint count);
GI_INLINE_DECL void delete_from_cursor_ (Gtk::DeleteType type, gint count) noexcept override;

// void Entry::get_frame_size (GtkEntry* entry, gint* x, gint* y, gint* width, gint* height);
// void Entry::get_frame_size (::GtkEntry* entry, gint x, gint y, gint width, gint height);
// SKIP; inconsistent in height pointer depth (1 vs 0), inconsistent in width pointer depth (1 vs 0), inconsistent in y pointer depth (1 vs 0), inconsistent in x pointer depth (1 vs 0)

// void Entry::get_text_area_size (GtkEntry* entry, gint* x, gint* y, gint* width, gint* height);
// void Entry::get_text_area_size (::GtkEntry* entry, gint x, gint y, gint width, gint height);
// SKIP; inconsistent in height pointer depth (1 vs 0), inconsistent in width pointer depth (1 vs 0), inconsistent in y pointer depth (1 vs 0), inconsistent in x pointer depth (1 vs 0)

// void Entry::insert_at_cursor (GtkEntry* entry, const gchar* str);
// void Entry::insert_at_cursor (::GtkEntry* entry, const char* str);
GI_INLINE_DECL void insert_at_cursor_ (const std::string & str) noexcept override;

// void Entry::insert_emoji (GtkEntry* entry);
// void Entry::insert_emoji (::GtkEntry* entry);
GI_INLINE_DECL void insert_emoji_ () noexcept override;

// void Entry::move_cursor (GtkEntry* entry, GtkMovementStep step, gint count, gboolean extend_selection);
// void Entry::move_cursor (::GtkEntry* entry, ::GtkMovementStep step, gint count, gboolean extend_selection);
GI_INLINE_DECL void move_cursor_ (Gtk::MovementStep step, gint count, gboolean extend_selection) noexcept override;

// void Entry::paste_clipboard (GtkEntry* entry);
// void Entry::paste_clipboard (::GtkEntry* entry);
GI_INLINE_DECL void paste_clipboard_ () noexcept override;

// void Entry::populate_popup (GtkEntry* entry, GtkWidget* popup);
// void Entry::populate_popup (::GtkEntry* entry, ::GtkWidget* popup);
GI_INLINE_DECL void populate_popup_ (Gtk::Widget popup) noexcept override;

// void Entry::toggle_overwrite (GtkEntry* entry);
// void Entry::toggle_overwrite (::GtkEntry* entry);
GI_INLINE_DECL void toggle_overwrite_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using EntryImpl = detail::ObjectImpl<Entry, internal::EntryClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
