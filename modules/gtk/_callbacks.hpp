// AUTO-GENERATED

#ifndef _GI_GTK__CALLBACKS_HPP_
#define _GI_GTK__CALLBACKS_HPP_

namespace gi {

namespace repository {

namespace Gtk {

class AccelGroup;
class AccelKey;
class Builder;
class Calendar;
class CellLayout;
class CellRenderer;
class Clipboard;
class EntryCompletion;
class FileFilterInfo;
class FlowBox;
class FlowBoxChild;
class IconView;
class ListBox;
class ListBoxRow;
class Menu;
class PageSetup;
class RecentFilterInfo;
class RecentInfo;
class SelectionData;
class TextBuffer;
class TextIter;
class TextTag;
class TreeIter;
class TreeModel;
class TreePath;
class TreeSelection;
class TreeView;
class TreeViewColumn;
class Widget;

// typedef gboolean (*GtkAccelGroupActivate) (GtkAccelGroup* accel_group, GObject* acceleratable, guint keyval, GdkModifierType modifier);
// typedef gboolean (*GtkAccelGroupActivate) (::GtkAccelGroup* accel_group, ::GObject* acceleratable, guint keyval, ::GdkModifierType modifier);
// SKIP; not a callback since no user_data

// typedef gboolean (*GtkAccelGroupFindFunc) (GtkAccelKey* key, GClosure* closure, gpointer data);
// typedef gboolean (*GtkAccelGroupFindFunc) (::GtkAccelKey* key, ::GClosure* closure, void* data);
typedef gi::detail::callback<bool(Gtk::AccelKey key, GObject::Closure closure), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> AccelGroupFindFunc;

// typedef void (*GtkAccelMapForeach) (gpointer data, const gchar* accel_path, guint accel_key, GdkModifierType accel_mods, gboolean changed);
// typedef void (*GtkAccelMapForeach) (void* data, const char* accel_path, guint accel_key, ::GdkModifierType accel_mods, gboolean changed);
// SKIP; not a callback since no user_data

// typedef gint (*GtkAssistantPageFunc) (gint current_page, gpointer data);
// typedef gint (*GtkAssistantPageFunc) (gint current_page, void* data);
typedef gi::detail::callback<gint(gint current_page), gi::transfer_none_t, gi::transfer_none_t> AssistantPageFunc;

// typedef void (*GtkBuilderConnectFunc) (GtkBuilder* builder, GObject* object, const gchar* signal_name, const gchar* handler_name, GObject* connect_object, GConnectFlags flags, gpointer user_data);
// typedef void (*GtkBuilderConnectFunc) (::GtkBuilder* builder, ::GObject* object, const char* signal_name, const char* handler_name, ::GObject* connect_object, ::GConnectFlags flags, void* user_data);
typedef gi::detail::callback<void(Gtk::Builder builder, GObject::Object object, const std::string & signal_name, const std::string & handler_name, GObject::Object connect_object, GObject::ConnectFlags flags), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> BuilderConnectFunc;

// typedef gchar* (*GtkCalendarDetailFunc) (GtkCalendar* calendar, guint year, guint month, guint day, gpointer user_data);
// typedef char* (*GtkCalendarDetailFunc) (::GtkCalendar* calendar, guint year, guint month, guint day, void* user_data);
typedef gi::detail::callback<std::string(Gtk::Calendar calendar, guint year, guint month, guint day), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> CalendarDetailFunc;

// typedef void (*GtkCallback) (GtkWidget* widget, gpointer data);
// typedef void (*GtkCallback) (::GtkWidget* widget, void* data);
typedef gi::detail::callback<void(Gtk::Widget widget), gi::transfer_full_t, gi::transfer_none_t> Callback;

// typedef gboolean (*GtkCellAllocCallback) (GtkCellRenderer* renderer, const GdkRectangle* cell_area, const GdkRectangle* cell_background, gpointer data);
// typedef gboolean (*GtkCellAllocCallback) (::GtkCellRenderer* renderer, const ::GdkRectangle* cell_area, const ::GdkRectangle* cell_background, void* data);
typedef gi::detail::callback<bool(Gtk::CellRenderer renderer, const Gdk::Rectangle & cell_area, const Gdk::Rectangle & cell_background), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> CellAllocCallback;

// typedef gboolean (*GtkCellCallback) (GtkCellRenderer* renderer, gpointer data);
// typedef gboolean (*GtkCellCallback) (::GtkCellRenderer* renderer, void* data);
typedef gi::detail::callback<bool(Gtk::CellRenderer renderer), gi::transfer_none_t, gi::transfer_none_t> CellCallback;

// typedef void (*GtkCellLayoutDataFunc) (GtkCellLayout* cell_layout, GtkCellRenderer* cell, GtkTreeModel* tree_model, GtkTreeIter* iter, gpointer data);
// typedef void (*GtkCellLayoutDataFunc) (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, ::GtkTreeModel* tree_model, ::GtkTreeIter* iter, void* data);
typedef gi::detail::callback<void(Gtk::CellLayout cell_layout, Gtk::CellRenderer cell, Gtk::TreeModel tree_model, Gtk::TreeIter iter), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> CellLayoutDataFunc;

// typedef void (*GtkClipboardClearFunc) (GtkClipboard* clipboard, gpointer user_data_or_owner);
// typedef void (*GtkClipboardClearFunc) (::GtkClipboard* clipboard, void* user_data_or_owner);
// SKIP; not a callback since no user_data

// typedef void (*GtkClipboardGetFunc) (GtkClipboard* clipboard, GtkSelectionData* selection_data, guint info, gpointer user_data_or_owner);
// typedef void (*GtkClipboardGetFunc) (::GtkClipboard* clipboard, ::GtkSelectionData* selection_data, guint info, void* user_data_or_owner);
// SKIP; not a callback since no user_data

// typedef void (*GtkClipboardImageReceivedFunc) (GtkClipboard* clipboard, GdkPixbuf* pixbuf, gpointer data);
// typedef void (*GtkClipboardImageReceivedFunc) (::GtkClipboard* clipboard, ::GdkPixbuf* pixbuf, void* data);
typedef gi::detail::callback<void(Gtk::Clipboard clipboard, GdkPixbuf::Pixbuf pixbuf), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> ClipboardImageReceivedFunc;

// typedef void (*GtkClipboardReceivedFunc) (GtkClipboard* clipboard, GtkSelectionData* selection_data, gpointer data);
// typedef void (*GtkClipboardReceivedFunc) (::GtkClipboard* clipboard, ::GtkSelectionData* selection_data, void* data);
typedef gi::detail::callback<void(Gtk::Clipboard clipboard, Gtk::SelectionData selection_data), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> ClipboardReceivedFunc;

// typedef void (*GtkClipboardRichTextReceivedFunc) (GtkClipboard* clipboard, GdkAtom format, const guint8* text, gsize length, gpointer data);
// typedef void (*GtkClipboardRichTextReceivedFunc) (::GtkClipboard* clipboard,  format, const char* text, gsize length, void* data);
// SKIP; format type  not supported

// typedef void (*GtkClipboardTargetsReceivedFunc) (GtkClipboard* clipboard, gint n_atoms, gpointer data);
// typedef void (*GtkClipboardTargetsReceivedFunc) (::GtkClipboard* clipboard, gint n_atoms, void* data);
// SKIP; container element not supported

// typedef void (*GtkClipboardTextReceivedFunc) (GtkClipboard* clipboard, const gchar* text, gpointer data);
// typedef void (*GtkClipboardTextReceivedFunc) (::GtkClipboard* clipboard, const char* text, void* data);
typedef gi::detail::callback<void(Gtk::Clipboard clipboard, const std::string & text), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> ClipboardTextReceivedFunc;

// typedef void (*GtkClipboardURIReceivedFunc) (GtkClipboard* clipboard, gchar** uris, gpointer data);
// typedef void (*GtkClipboardURIReceivedFunc) (::GtkClipboard* clipboard, char** uris, void* data);
// SKIP; callback container parameter not supported

// typedef gboolean (*GtkEntryCompletionMatchFunc) (GtkEntryCompletion* completion, const gchar* key, GtkTreeIter* iter, gpointer user_data);
// typedef gboolean (*GtkEntryCompletionMatchFunc) (::GtkEntryCompletion* completion, const char* key, ::GtkTreeIter* iter, void* user_data);
typedef gi::detail::callback<bool(Gtk::EntryCompletion completion, const std::string & key, Gtk::TreeIter iter), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> EntryCompletionMatchFunc;

// typedef gboolean (*GtkFileFilterFunc) (const GtkFileFilterInfo* filter_info, gpointer data);
// typedef gboolean (*GtkFileFilterFunc) (const ::GtkFileFilterInfo* filter_info, void* data);
typedef gi::detail::callback<bool(const Gtk::FileFilterInfo & filter_info), gi::transfer_none_t, gi::transfer_none_t> FileFilterFunc;

// typedef GtkWidget* (*GtkFlowBoxCreateWidgetFunc) (gpointer item, gpointer user_data);
// typedef ::GtkWidget* (*GtkFlowBoxCreateWidgetFunc) (::GObject* item, void* user_data);
typedef gi::detail::callback<Gtk::Widget(GObject::Object item), gi::transfer_full_t, gi::transfer_none_t> FlowBoxCreateWidgetFunc;

// typedef gboolean (*GtkFlowBoxFilterFunc) (GtkFlowBoxChild* child, gpointer user_data);
// typedef gboolean (*GtkFlowBoxFilterFunc) (::GtkFlowBoxChild* child, void* user_data);
typedef gi::detail::callback<bool(Gtk::FlowBoxChild child), gi::transfer_none_t, gi::transfer_none_t> FlowBoxFilterFunc;

// typedef void (*GtkFlowBoxForeachFunc) (GtkFlowBox* box, GtkFlowBoxChild* child, gpointer user_data);
// typedef void (*GtkFlowBoxForeachFunc) (::GtkFlowBox* box, ::GtkFlowBoxChild* child, void* user_data);
typedef gi::detail::callback<void(Gtk::FlowBox box, Gtk::FlowBoxChild child), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> FlowBoxForeachFunc;

// typedef gint (*GtkFlowBoxSortFunc) (GtkFlowBoxChild* child1, GtkFlowBoxChild* child2, gpointer user_data);
// typedef gint (*GtkFlowBoxSortFunc) (::GtkFlowBoxChild* child1, ::GtkFlowBoxChild* child2, void* user_data);
typedef gi::detail::callback<gint(Gtk::FlowBoxChild child1, Gtk::FlowBoxChild child2), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> FlowBoxSortFunc;

// typedef gboolean (*GtkFontFilterFunc) (const PangoFontFamily* family, const PangoFontFace* face, gpointer data);
// typedef gboolean (*GtkFontFilterFunc) (const ::PangoFontFamily* family, const ::PangoFontFace* face, void* data);
typedef gi::detail::callback<bool(const Pango::FontFamily & family, const Pango::FontFace & face), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> FontFilterFunc;

// typedef void (*GtkIconViewForeachFunc) (GtkIconView* icon_view, GtkTreePath* path, gpointer data);
// typedef void (*GtkIconViewForeachFunc) (::GtkIconView* icon_view, ::GtkTreePath* path, void* data);
typedef gi::detail::callback<void(Gtk::IconView icon_view, Gtk::TreePath path), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> IconViewForeachFunc;

// typedef gint (*GtkKeySnoopFunc) (GtkWidget* grab_widget, GdkEventKey* event, gpointer func_data);
// typedef gint (*GtkKeySnoopFunc) (::GtkWidget* grab_widget, ::GdkEventKey* event, void* func_data);
typedef gi::detail::callback<gint(Gtk::Widget grab_widget, Gdk::EventKey event), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> KeySnoopFunc;

// typedef GtkWidget* (*GtkListBoxCreateWidgetFunc) (gpointer item, gpointer user_data);
// typedef ::GtkWidget* (*GtkListBoxCreateWidgetFunc) (::GObject* item, void* user_data);
typedef gi::detail::callback<Gtk::Widget(GObject::Object item), gi::transfer_full_t, gi::transfer_none_t> ListBoxCreateWidgetFunc;

// typedef gboolean (*GtkListBoxFilterFunc) (GtkListBoxRow* row, gpointer user_data);
// typedef gboolean (*GtkListBoxFilterFunc) (::GtkListBoxRow* row, void* user_data);
typedef gi::detail::callback<bool(Gtk::ListBoxRow row), gi::transfer_none_t, gi::transfer_none_t> ListBoxFilterFunc;

// typedef void (*GtkListBoxForeachFunc) (GtkListBox* box, GtkListBoxRow* row, gpointer user_data);
// typedef void (*GtkListBoxForeachFunc) (::GtkListBox* box, ::GtkListBoxRow* row, void* user_data);
typedef gi::detail::callback<void(Gtk::ListBox box, Gtk::ListBoxRow row), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> ListBoxForeachFunc;

// typedef gint (*GtkListBoxSortFunc) (GtkListBoxRow* row1, GtkListBoxRow* row2, gpointer user_data);
// typedef gint (*GtkListBoxSortFunc) (::GtkListBoxRow* row1, ::GtkListBoxRow* row2, void* user_data);
typedef gi::detail::callback<gint(Gtk::ListBoxRow row1, Gtk::ListBoxRow row2), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> ListBoxSortFunc;

// typedef void (*GtkListBoxUpdateHeaderFunc) (GtkListBoxRow* row, GtkListBoxRow* before, gpointer user_data);
// typedef void (*GtkListBoxUpdateHeaderFunc) (::GtkListBoxRow* row, ::GtkListBoxRow* before, void* user_data);
typedef gi::detail::callback<void(Gtk::ListBoxRow row, Gtk::ListBoxRow before), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> ListBoxUpdateHeaderFunc;

// typedef void (*GtkMenuDetachFunc) (GtkWidget* attach_widget, GtkMenu* menu);
// typedef void (*GtkMenuDetachFunc) (::GtkWidget* attach_widget, ::GtkMenu* menu);
// SKIP; not a callback since no user_data

// typedef void (*GtkMenuPositionFunc) (GtkMenu* menu, gint* x, gint* y, gboolean* push_in, gpointer user_data);
// typedef void (*GtkMenuPositionFunc) (::GtkMenu* menu, gint* x, gint* y, gboolean* push_in, void* user_data);
// SKIP; callback out parameter not supported, callback out parameter not supported, callback out parameter not supported

// typedef void (*GtkModuleDisplayInitFunc) (GdkDisplay* display);
// typedef void (*GtkModuleDisplayInitFunc) (::GdkDisplay* display);
// SKIP; not a callback since no user_data

// typedef void (*GtkModuleInitFunc) (gint* argc, gchar*** argv);
// typedef void (*GtkModuleInitFunc) (gint argc, char** argv);
// SKIP; callback container parameter not supported

// typedef void (*GtkPageSetupDoneFunc) (GtkPageSetup* page_setup, gpointer data);
// typedef void (*GtkPageSetupDoneFunc) (::GtkPageSetup* page_setup, void* data);
typedef gi::detail::callback<void(Gtk::PageSetup page_setup), gi::transfer_full_t, gi::transfer_none_t> PageSetupDoneFunc;

// typedef void (*GtkPrintSettingsFunc) (const gchar* key, const gchar* value, gpointer user_data);
// typedef void (*GtkPrintSettingsFunc) (const char* key, const char* value, void* user_data);
typedef gi::detail::callback<void(const std::string & key, const std::string & value), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> PrintSettingsFunc;

// typedef gboolean (*GtkRcPropertyParser) (const GParamSpec* pspec, const GString* rc_string, GValue* property_value);
// typedef gboolean (*GtkRcPropertyParser) (const ::GParamSpec* pspec, const ::GString* rc_string, ::GValue* property_value);
// SKIP; not a callback since no user_data

// typedef gboolean (*GtkRecentFilterFunc) (const GtkRecentFilterInfo* filter_info, gpointer user_data);
// typedef gboolean (*GtkRecentFilterFunc) (const ::GtkRecentFilterInfo* filter_info, void* user_data);
typedef gi::detail::callback<bool(const Gtk::RecentFilterInfo & filter_info), gi::transfer_none_t, gi::transfer_none_t> RecentFilterFunc;

// typedef gint (*GtkRecentSortFunc) (GtkRecentInfo* a, GtkRecentInfo* b, gpointer user_data);
// typedef gint (*GtkRecentSortFunc) (::GtkRecentInfo* a, ::GtkRecentInfo* b, void* user_data);
typedef gi::detail::callback<gint(Gtk::RecentInfo a, Gtk::RecentInfo b), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> RecentSortFunc;

// typedef gboolean (*GtkStylePropertyParser) (const gchar* string, GValue* value, GError ** error);
// typedef gboolean (*GtkStylePropertyParser) (const char* string, ::GValue* value, GError ** error);
// SKIP; callee GError not supported

// typedef gboolean (*GtkTextBufferDeserializeFunc) (GtkTextBuffer* register_buffer, GtkTextBuffer* content_buffer, GtkTextIter* iter, const guint8* data, gsize length, gboolean create_tags, gpointer user_data, GError ** error);
// typedef gboolean (*GtkTextBufferDeserializeFunc) (::GtkTextBuffer* register_buffer, ::GtkTextBuffer* content_buffer, ::GtkTextIter* iter, const guint8* data, gsize length, gboolean create_tags, void* user_data, GError ** error);
// SKIP; callback container parameter not supported, callee GError not supported

// typedef guint8* (*GtkTextBufferSerializeFunc) (GtkTextBuffer* register_buffer, GtkTextBuffer* content_buffer, const GtkTextIter* start, const GtkTextIter* end, gsize* length, gpointer user_data);
// typedef guint8 (*GtkTextBufferSerializeFunc) (::GtkTextBuffer* register_buffer, ::GtkTextBuffer* content_buffer, const ::GtkTextIter* start, const ::GtkTextIter* end, gsize length, void* user_data);
// SKIP; inconsistent in length pointer depth (1 vs 0), inconsistent return  pointer depth (1 vs 0)

// typedef gboolean (*GtkTextCharPredicate) (gunichar ch, gpointer user_data);
// typedef gboolean (*GtkTextCharPredicate) (gunichar ch, void* user_data);
typedef gi::detail::callback<bool(gunichar ch), gi::transfer_none_t, gi::transfer_none_t> TextCharPredicate;

// typedef void (*GtkTextTagTableForeach) (GtkTextTag* tag, gpointer data);
// typedef void (*GtkTextTagTableForeach) (::GtkTextTag* tag, void* data);
typedef gi::detail::callback<void(Gtk::TextTag tag), gi::transfer_full_t, gi::transfer_none_t> TextTagTableForeach;

// typedef gboolean (*GtkTickCallback) (GtkWidget* widget, GdkFrameClock* frame_clock, gpointer user_data);
// typedef gboolean (*GtkTickCallback) (::GtkWidget* widget, ::GdkFrameClock* frame_clock, void* user_data);
typedef gi::detail::callback<bool(Gtk::Widget widget, Gdk::FrameClock frame_clock), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> TickCallback;

// typedef void (*GtkTreeCellDataFunc) (GtkTreeViewColumn* tree_column, GtkCellRenderer* cell, GtkTreeModel* tree_model, GtkTreeIter* iter, gpointer data);
// typedef void (*GtkTreeCellDataFunc) (::GtkTreeViewColumn* tree_column, ::GtkCellRenderer* cell, ::GtkTreeModel* tree_model, ::GtkTreeIter* iter, void* data);
typedef gi::detail::callback<void(Gtk::TreeViewColumn tree_column, Gtk::CellRenderer cell, Gtk::TreeModel tree_model, Gtk::TreeIter iter), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> TreeCellDataFunc;

// typedef void (*GtkTreeDestroyCountFunc) (GtkTreeView* tree_view, GtkTreePath* path, gint children, gpointer user_data);
// typedef void (*GtkTreeDestroyCountFunc) (::GtkTreeView* tree_view, ::GtkTreePath* path, gint children, void* user_data);
typedef gi::detail::callback<void(Gtk::TreeView tree_view, Gtk::TreePath path, gint children), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> TreeDestroyCountFunc;

// typedef gint (*GtkTreeIterCompareFunc) (GtkTreeModel* model, GtkTreeIter* a, GtkTreeIter* b, gpointer user_data);
// typedef gint (*GtkTreeIterCompareFunc) (::GtkTreeModel* model, ::GtkTreeIter* a, ::GtkTreeIter* b, void* user_data);
typedef gi::detail::callback<gint(Gtk::TreeModel model, Gtk::TreeIter a, Gtk::TreeIter b), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> TreeIterCompareFunc;

// typedef void (*GtkTreeModelFilterModifyFunc) (GtkTreeModel* model, GtkTreeIter* iter, GValue* value, gint column, gpointer data);
// typedef void (*GtkTreeModelFilterModifyFunc) (::GtkTreeModel* model, ::GtkTreeIter* iter, ::GValue* value, gint column, void* data);
// SKIP; callback out parameter not supported

// typedef gboolean (*GtkTreeModelFilterVisibleFunc) (GtkTreeModel* model, GtkTreeIter* iter, gpointer data);
// typedef gboolean (*GtkTreeModelFilterVisibleFunc) (::GtkTreeModel* model, ::GtkTreeIter* iter, void* data);
typedef gi::detail::callback<bool(Gtk::TreeModel model, Gtk::TreeIter iter), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> TreeModelFilterVisibleFunc;

// typedef gboolean (*GtkTreeModelForeachFunc) (GtkTreeModel* model, GtkTreePath* path, GtkTreeIter* iter, gpointer data);
// typedef gboolean (*GtkTreeModelForeachFunc) (::GtkTreeModel* model, ::GtkTreePath* path, ::GtkTreeIter* iter, void* data);
typedef gi::detail::callback<bool(Gtk::TreeModel model, Gtk::TreePath path, Gtk::TreeIter iter), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> TreeModelForeachFunc;

// typedef void (*GtkTreeSelectionForeachFunc) (GtkTreeModel* model, GtkTreePath* path, GtkTreeIter* iter, gpointer data);
// typedef void (*GtkTreeSelectionForeachFunc) (::GtkTreeModel* model, ::GtkTreePath* path, ::GtkTreeIter* iter, void* data);
typedef gi::detail::callback<void(Gtk::TreeModel model, Gtk::TreePath path, Gtk::TreeIter iter), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> TreeSelectionForeachFunc;

// typedef gboolean (*GtkTreeSelectionFunc) (GtkTreeSelection* selection, GtkTreeModel* model, GtkTreePath* path, gboolean path_currently_selected, gpointer data);
// typedef gboolean (*GtkTreeSelectionFunc) (::GtkTreeSelection* selection, ::GtkTreeModel* model, ::GtkTreePath* path, gboolean path_currently_selected, void* data);
typedef gi::detail::callback<bool(Gtk::TreeSelection selection, Gtk::TreeModel model, Gtk::TreePath path, gboolean path_currently_selected), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> TreeSelectionFunc;

// typedef gboolean (*GtkTreeViewColumnDropFunc) (GtkTreeView* tree_view, GtkTreeViewColumn* column, GtkTreeViewColumn* prev_column, GtkTreeViewColumn* next_column, gpointer data);
// typedef gboolean (*GtkTreeViewColumnDropFunc) (::GtkTreeView* tree_view, ::GtkTreeViewColumn* column, ::GtkTreeViewColumn* prev_column, ::GtkTreeViewColumn* next_column, void* data);
typedef gi::detail::callback<bool(Gtk::TreeView tree_view, Gtk::TreeViewColumn column, Gtk::TreeViewColumn prev_column, Gtk::TreeViewColumn next_column), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> TreeViewColumnDropFunc;

// typedef void (*GtkTreeViewMappingFunc) (GtkTreeView* tree_view, GtkTreePath* path, gpointer user_data);
// typedef void (*GtkTreeViewMappingFunc) (::GtkTreeView* tree_view, ::GtkTreePath* path, void* user_data);
typedef gi::detail::callback<void(Gtk::TreeView tree_view, Gtk::TreePath path), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> TreeViewMappingFunc;

// typedef gboolean (*GtkTreeViewRowSeparatorFunc) (GtkTreeModel* model, GtkTreeIter* iter, gpointer data);
// typedef gboolean (*GtkTreeViewRowSeparatorFunc) (::GtkTreeModel* model, ::GtkTreeIter* iter, void* data);
typedef gi::detail::callback<bool(Gtk::TreeModel model, Gtk::TreeIter iter), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> TreeViewRowSeparatorFunc;

// typedef gboolean (*GtkTreeViewSearchEqualFunc) (GtkTreeModel* model, gint column, const gchar* key, GtkTreeIter* iter, gpointer search_data);
// typedef gboolean (*GtkTreeViewSearchEqualFunc) (::GtkTreeModel* model, gint column, const char* key, ::GtkTreeIter* iter, void* search_data);
typedef gi::detail::callback<bool(Gtk::TreeModel model, gint column, const std::string & key, Gtk::TreeIter iter), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> TreeViewSearchEqualFunc;

// typedef void (*GtkTreeViewSearchPositionFunc) (GtkTreeView* tree_view, GtkWidget* search_dialog, gpointer user_data);
// typedef void (*GtkTreeViewSearchPositionFunc) (::GtkTreeView* tree_view, ::GtkWidget* search_dialog, void* user_data);
typedef gi::detail::callback<void(Gtk::TreeView tree_view, Gtk::Widget search_dialog), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> TreeViewSearchPositionFunc;

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
