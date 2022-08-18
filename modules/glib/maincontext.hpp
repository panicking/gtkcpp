// AUTO-GENERATED

#ifndef _GI_GLIB_MAINCONTEXT_HPP_
#define _GI_GLIB_MAINCONTEXT_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Cond;
class PollFD;
class Source;
class SourceFuncs;

class MainContext;

namespace base {


#define GI_GLIB_MAINCONTEXT_BASE base::MainContextBase
class MainContextBase : public gi::detail::GBoxedWrapper<MainContextBase, ::GMainContext>
{
typedef gi::detail::GBoxedWrapper<MainContextBase, ::GMainContext> super_type;
public:

MainContextBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_main_context_get_type(); } 

// GMainContext* g_main_context_new ();
// ::GMainContext* g_main_context_new ();
static GI_INLINE_DECL GLib::MainContext new_ () noexcept;

// GMainContext* g_main_context_new_with_flags (GMainContextFlags flags);
// ::GMainContext* g_main_context_new_with_flags (::GMainContextFlags flags);
static GI_INLINE_DECL GLib::MainContext new_with_flags (GLib::MainContextFlags flags) noexcept;

// gboolean g_main_context_acquire (GMainContext* context);
// gboolean g_main_context_acquire (::GMainContext* context);
GI_INLINE_DECL bool acquire () noexcept;

// void g_main_context_add_poll (GMainContext* context, GPollFD* fd, gint priority);
// void g_main_context_add_poll (::GMainContext* context, ::GPollFD* fd, gint priority);
GI_INLINE_DECL void add_poll (GLib::PollFD fd, gint priority) noexcept;

// gboolean g_main_context_check (GMainContext* context, gint max_priority, GPollFD* fds, gint n_fds);
// gboolean g_main_context_check (::GMainContext* context, gint max_priority, ::GPollFD** fds, gint n_fds);
// SKIP; inconsistent in fds pointer depth (1 vs 2)

// void g_main_context_dispatch (GMainContext* context);
// void g_main_context_dispatch (::GMainContext* context);
GI_INLINE_DECL void dispatch () noexcept;

// GSource* g_main_context_find_source_by_funcs_user_data (GMainContext* context, GSourceFuncs* funcs, gpointer user_data);
// ::GSource* g_main_context_find_source_by_funcs_user_data (::GMainContext* context, ::GSourceFuncs* funcs, void* user_data);
GI_INLINE_DECL GLib::Source find_source_by_funcs_user_data (GLib::SourceFuncs funcs, void* user_data) noexcept;

// GSource* g_main_context_find_source_by_id (GMainContext* context, guint source_id);
// ::GSource* g_main_context_find_source_by_id (::GMainContext* context, guint source_id);
GI_INLINE_DECL GLib::Source find_source_by_id (guint source_id) noexcept;

// GSource* g_main_context_find_source_by_user_data (GMainContext* context, gpointer user_data);
// ::GSource* g_main_context_find_source_by_user_data (::GMainContext* context, void* user_data);
GI_INLINE_DECL GLib::Source find_source_by_user_data (void* user_data) noexcept;

// FAILURE on g_main_context_get_poll_func; No such node (<xmlattr>.transfer-ownership)
// void g_main_context_invoke (GMainContext* context, GSourceFunc function, gpointer data);
// void g_main_context_invoke (::GMainContext* context, GLib::SourceFunc::cfunction_type function, void* data);
// IGNORE; not introspectable, callback misses scope info

// void g_main_context_invoke_full (GMainContext* context, gint priority, GSourceFunc function, gpointer data, GDestroyNotify notify);
// void g_main_context_invoke_full (::GMainContext* context, gint priority, GLib::SourceFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
GI_INLINE_DECL void invoke_full (gint priority, GLib::SourceFunc function) noexcept;

// gboolean g_main_context_is_owner (GMainContext* context);
// gboolean g_main_context_is_owner (::GMainContext* context);
GI_INLINE_DECL bool is_owner () noexcept;

// gboolean g_main_context_iteration (GMainContext* context, gboolean may_block);
// gboolean g_main_context_iteration (::GMainContext* context, gboolean may_block);
GI_INLINE_DECL bool iteration (gboolean may_block) noexcept;

// gboolean g_main_context_pending (GMainContext* context);
// gboolean g_main_context_pending (::GMainContext* context);
GI_INLINE_DECL bool pending () noexcept;

// void g_main_context_pop_thread_default (GMainContext* context);
// void g_main_context_pop_thread_default (::GMainContext* context);
GI_INLINE_DECL void pop_thread_default () noexcept;

// gboolean g_main_context_prepare (GMainContext* context, gint* priority);
// gboolean g_main_context_prepare (::GMainContext* context, gint* priority);
GI_INLINE_DECL bool prepare (gint * priority = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, gint> prepare () noexcept;

// void g_main_context_push_thread_default (GMainContext* context);
// void g_main_context_push_thread_default (::GMainContext* context);
GI_INLINE_DECL void push_thread_default () noexcept;

// gint g_main_context_query (GMainContext* context, gint max_priority, gint* timeout_, GPollFD* fds, gint n_fds);
// gint g_main_context_query (::GMainContext* context, gint max_priority, gint* timeout_, ::GPollFD** fds, gint n_fds);
// SKIP; inconsistent out fds pointer depth (1 vs 2)

// GMainContext* g_main_context_ref (GMainContext* context);
// ::GMainContext* g_main_context_ref (::GMainContext* context);
// IGNORE; marked ignore

// void g_main_context_release (GMainContext* context);
// void g_main_context_release (::GMainContext* context);
GI_INLINE_DECL void release () noexcept;

// void g_main_context_remove_poll (GMainContext* context, GPollFD* fd);
// void g_main_context_remove_poll (::GMainContext* context, ::GPollFD* fd);
GI_INLINE_DECL void remove_poll (GLib::PollFD fd) noexcept;

// void g_main_context_set_poll_func (GMainContext* context, GPollFunc func);
// void g_main_context_set_poll_func (::GMainContext* context,  func);
// IGNORE; not introspectable, func type  not supported

// void g_main_context_unref (GMainContext* context);
// void g_main_context_unref (::GMainContext* context);
// IGNORE; marked ignore

// gboolean g_main_context_wait (GMainContext* context, GCond* cond, GMutex* mutex);
// gboolean g_main_context_wait (::GMainContext* context, ::GCond* cond,  mutex);
// IGNORE; deprecated

// void g_main_context_wakeup (GMainContext* context);
// void g_main_context_wakeup (::GMainContext* context);
GI_INLINE_DECL void wakeup () noexcept;

// GMainContext* g_main_context_default ();
// ::GMainContext* g_main_context_default ();
static GI_INLINE_DECL GLib::MainContext default_ () noexcept;

// GMainContext* g_main_context_get_thread_default ();
// ::GMainContext* g_main_context_get_thread_default ();
static GI_INLINE_DECL GLib::MainContext get_thread_default () noexcept;

// GMainContext* g_main_context_ref_thread_default ();
// ::GMainContext* g_main_context_ref_thread_default ();
static GI_INLINE_DECL GLib::MainContext ref_thread_default () noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/maincontext_extra_def.hpp>)
#include <glib/maincontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/maincontext_extra.hpp>)
#include <glib/maincontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class MainContext : public GI_GLIB_MAINCONTEXT_BASE
{ typedef GI_GLIB_MAINCONTEXT_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GMainContext>
{ typedef GLib::MainContext type; }; 

} // namespace repository

} // namespace gi

#endif
