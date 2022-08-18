// AUTO-GENERATED

#ifndef _GI_GLIB__CALLBACKS_HPP_
#define _GI_GLIB__CALLBACKS_HPP_

namespace gi {

namespace repository {

namespace GLib {

class Error;
class Hook;
class HookList;
class IOChannel;
class MatchInfo;
class Node;
class OptionGroup;
class PollFD;
class Scanner;
class Source;
class String;

// typedef void (*GChildWatchFunc) (GPid pid, gint wait_status, gpointer user_data);
// typedef void (*GChildWatchFunc) (::GPid pid, gint wait_status, void* user_data);
typedef gi::detail::callback<void(::GPid pid, gint wait_status), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> ChildWatchFunc;

// typedef void (*GClearHandleFunc) (guint handle_id);
// typedef void (*GClearHandleFunc) (guint handle_id);
// SKIP; not a callback since no user_data

// typedef gint (*GCompareDataFunc) (gconstpointer a, gconstpointer b, gpointer user_data);
// typedef gint (*GCompareDataFunc) (const void* a, const void* b, void* user_data);
typedef gi::detail::callback<gint(const void* a, const void* b), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> CompareDataFunc;

// typedef gint (*GCompareFunc) (gconstpointer a, gconstpointer b);
// typedef gint (*GCompareFunc) (const void* a, const void* b);
// SKIP; not a callback since no user_data

// typedef gpointer (*GCopyFunc) (gconstpointer src, gpointer data);
// typedef void* (*GCopyFunc) (const void* src, void* data);
// SKIP; not a callback since no user_data

// typedef void (*GDataForeachFunc) (GQuark key_id, gpointer data, gpointer user_data);
// typedef void (*GDataForeachFunc) (::GQuark key_id, void* data, void* user_data);
typedef gi::detail::callback<void(::GQuark key_id, void* data), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> DataForeachFunc;

// typedef gpointer (*GDuplicateFunc) (gpointer data, gpointer user_data);
// typedef void* (*GDuplicateFunc) (void* data, void* user_data);
typedef gi::detail::callback<gpointer(void* data), gi::transfer_none_t, gi::transfer_none_t> DuplicateFunc;

// typedef gboolean (*GEqualFunc) (gconstpointer a, gconstpointer b);
// typedef gboolean (*GEqualFunc) (const void* a, const void* b);
// SKIP; not a callback since no user_data

// typedef void (*GErrorClearFunc) (GError* error);
// typedef void (*GErrorClearFunc) (::GError* error);
// SKIP; not a callback since no user_data

// typedef void (*GErrorCopyFunc) (const GError* src_error, GError* dest_error);
// typedef void (*GErrorCopyFunc) (const ::GError* src_error, ::GError* dest_error);
// SKIP; not a callback since no user_data

// typedef void (*GErrorInitFunc) (GError* error);
// typedef void (*GErrorInitFunc) (::GError* error);
// SKIP; not a callback since no user_data

// typedef void (*GFreeFunc) (gpointer data);
// typedef void (*GFreeFunc) (void* data);
// SKIP; not a callback since no user_data

// typedef void (*GFunc) (gpointer data, gpointer user_data);
// typedef void (*GFunc) (void* data, void* user_data);
typedef gi::detail::callback<void(void* data), gi::transfer_full_t, gi::transfer_none_t> Func;

// typedef void (*GHFunc) (gpointer key, gpointer value, gpointer user_data);
// typedef void (*GHFunc) (void* key, void* value, void* user_data);
typedef gi::detail::callback<void(void* key, void* value), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> HFunc;

// typedef gboolean (*GHRFunc) (gpointer key, gpointer value, gpointer user_data);
// typedef gboolean (*GHRFunc) (void* key, void* value, void* user_data);
typedef gi::detail::callback<bool(void* key, void* value), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> HRFunc;

// typedef guint (*GHashFunc) (gconstpointer key);
// typedef guint (*GHashFunc) (const void* key);
// SKIP; not a callback since no user_data

// typedef gboolean (*GHookCheckFunc) (gpointer data);
// typedef gboolean (*GHookCheckFunc) (void* data);
// SKIP; not a callback since no user_data

// typedef gboolean (*GHookCheckMarshaller) (GHook* hook, gpointer marshal_data);
// typedef gboolean (*GHookCheckMarshaller) (::GHook* hook, void* marshal_data);
// SKIP; not a callback since no user_data

// typedef gint (*GHookCompareFunc) (GHook* new_hook, GHook* sibling);
// typedef gint (*GHookCompareFunc) (::GHook* new_hook, ::GHook* sibling);
// SKIP; not a callback since no user_data

// typedef void (*GHookFinalizeFunc) (GHookList* hook_list, GHook* hook);
// typedef void (*GHookFinalizeFunc) (::GHookList* hook_list, ::GHook* hook);
// SKIP; not a callback since no user_data

// typedef gboolean (*GHookFindFunc) (GHook* hook, gpointer data);
// typedef gboolean (*GHookFindFunc) (::GHook* hook, void* data);
// SKIP; not a callback since no user_data

// typedef void (*GHookFunc) (gpointer data);
// typedef void (*GHookFunc) (void* data);
// SKIP; not a callback since no user_data

// typedef void (*GHookMarshaller) (GHook* hook, gpointer marshal_data);
// typedef void (*GHookMarshaller) (::GHook* hook, void* marshal_data);
// SKIP; not a callback since no user_data

// typedef gboolean (*GIOFunc) (GIOChannel* source, GIOCondition condition, gpointer data);
// typedef gboolean (*GIOFunc) (::GIOChannel* source, ::GIOCondition condition, void* data);
// SKIP; not a callback since no user_data

// typedef void (*GLogFunc) (const gchar* log_domain, GLogLevelFlags log_level, const gchar* message, gpointer user_data);
// typedef void (*GLogFunc) (const char* log_domain, ::GLogLevelFlags log_level, const char* message, void* user_data);
typedef gi::detail::callback<void(const std::string & log_domain, GLib::LogLevelFlags log_level, const std::string & message), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> LogFunc;

// typedef GLogWriterOutput (*GLogWriterFunc) (GLogLevelFlags log_level, const GLogField* fields, gsize n_fields, gpointer user_data);
// typedef ::GLogWriterOutput (*GLogWriterFunc) (::GLogLevelFlags log_level, const ::GLogField** fields, gsize n_fields, void* user_data);
// SKIP; callback container parameter not supported

// typedef void (*GNodeForeachFunc) (GNode* node, gpointer data);
// typedef void (*GNodeForeachFunc) (::GNode* node, void* data);
// SKIP; not a callback since no user_data

// typedef gboolean (*GNodeTraverseFunc) (GNode* node, gpointer data);
// typedef gboolean (*GNodeTraverseFunc) (::GNode* node, void* data);
// SKIP; not a callback since no user_data

// typedef gboolean (*GOptionArgFunc) (const gchar* option_name, const gchar* value, gpointer data, GError ** error);
// typedef gboolean (*GOptionArgFunc) (const char* option_name, const char* value, void* data, GError ** error);
// SKIP; callee GError not supported

// typedef void (*GOptionErrorFunc) (GOptionContext* context, GOptionGroup* group, gpointer data, GError ** error);
// typedef void (*GOptionErrorFunc) ( context, ::GOptionGroup* group, void* data, GError ** error);
// SKIP; callee GError not supported

// typedef gboolean (*GOptionParseFunc) (GOptionContext* context, GOptionGroup* group, gpointer data, GError ** error);
// typedef gboolean (*GOptionParseFunc) ( context, ::GOptionGroup* group, void* data, GError ** error);
// SKIP; callee GError not supported

// typedef gint (*GPollFunc) (GPollFD* ufds, guint nfsd, gint timeout_);
// typedef gint (*GPollFunc) (::GPollFD* ufds, guint nfsd, gint timeout_);
// SKIP; not a callback since no user_data

// typedef void (*GPrintFunc) (const gchar* string);
// typedef void (*GPrintFunc) (const char* string);
// SKIP; not a callback since no user_data

// typedef gboolean (*GRegexEvalCallback) (const GMatchInfo* match_info, GString* result, gpointer user_data);
// typedef gboolean (*GRegexEvalCallback) (const ::GMatchInfo* match_info, ::GString* result, void* user_data);
typedef gi::detail::callback<bool(const GLib::MatchInfo & match_info, GLib::String result), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> RegexEvalCallback;

// typedef void (*GScannerMsgFunc) (GScanner* scanner, gchar* message, gboolean error);
// typedef void (*GScannerMsgFunc) (::GScanner* scanner, char* message, gboolean error);
// SKIP; not a callback since no user_data

// typedef gint (*GSequenceIterCompareFunc) (GSequenceIter* a, GSequenceIter* b, gpointer data);
// typedef gint (*GSequenceIterCompareFunc) ( a,  b, void* data);
// SKIP; b type  not supported, a type  not supported, not a callback since no user_data

// typedef void (*GSourceDisposeFunc) (GSource* source);
// typedef void (*GSourceDisposeFunc) (::GSource* source);
// SKIP; not a callback since no user_data

// typedef void (*GSourceDummyMarshal) ();
// typedef void (*GSourceDummyMarshal) ();
// SKIP; not a callback since no user_data

// typedef gboolean (*GSourceFunc) (gpointer user_data);
// typedef gboolean (*GSourceFunc) (void* user_data);
typedef gi::detail::callback<bool(), gi::transfer_none_t> SourceFunc;

// typedef void (*GSpawnChildSetupFunc) (gpointer user_data);
// typedef void (*GSpawnChildSetupFunc) (void* user_data);
typedef gi::detail::callback<void(), gi::transfer_full_t> SpawnChildSetupFunc;

// typedef void (*GTestDataFunc) (gconstpointer user_data);
// typedef void (*GTestDataFunc) (const void* user_data);
// SKIP; invalid type user_data, not a callback since no user_data

// typedef void (*GTestFixtureFunc) (gpointer fixture, gconstpointer user_data);
// typedef void (*GTestFixtureFunc) (void* fixture, const void* user_data);
// SKIP; invalid type user_data, not a callback since no user_data

// typedef void (*GTestFunc) ();
// typedef void (*GTestFunc) ();
// SKIP; not a callback since no user_data

// typedef gboolean (*GTestLogFatalFunc) (const gchar* log_domain, GLogLevelFlags log_level, const gchar* message, gpointer user_data);
// typedef gboolean (*GTestLogFatalFunc) (const char* log_domain, ::GLogLevelFlags log_level, const char* message, void* user_data);
typedef gi::detail::callback<bool(const std::string & log_domain, GLib::LogLevelFlags log_level, const std::string & message), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> TestLogFatalFunc;

// typedef gpointer (*GThreadFunc) (gpointer data);
// typedef void* (*GThreadFunc) (void* data);
// SKIP; not a callback since no user_data

// typedef const gchar* (*GTranslateFunc) (const gchar* str, gpointer data);
// typedef const char* (*GTranslateFunc) (const char* str, void* data);
// SKIP; invalid callback return transfer none

// typedef gboolean (*GTraverseFunc) (gpointer key, gpointer value, gpointer data);
// typedef gboolean (*GTraverseFunc) (void* key, void* value, void* data);
// SKIP; not a callback since no user_data

// typedef gboolean (*GTraverseNodeFunc) (GTreeNode* node, gpointer data);
// typedef gboolean (*GTraverseNodeFunc) ( node, void* data);
// SKIP; node type  not supported, not a callback since no user_data

// typedef gboolean (*GUnixFDSourceFunc) (gint fd, GIOCondition condition, gpointer user_data);
// typedef gboolean (*GUnixFDSourceFunc) (gint fd, ::GIOCondition condition, void* user_data);
typedef gi::detail::callback<bool(gint fd, GLib::IOCondition condition), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> UnixFDSourceFunc;

// typedef void (*GVoidFunc) ();
// typedef void (*GVoidFunc) ();
// SKIP; not a callback since no user_data

} // namespace GLib

} // namespace repository

} // namespace gi

#endif
