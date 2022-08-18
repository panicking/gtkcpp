// AUTO-GENERATED

#ifndef _GI_GLIB_SOURCE_HPP_
#define _GI_GLIB_SOURCE_HPP_


namespace gi {

namespace repository {

namespace GLib {

class MainContext;
class PollFD;
class SourceCallbackFuncs;
class SourceFuncs;

class Source;

namespace base {


#define GI_GLIB_SOURCE_BASE base::SourceBase
class SourceBase : public gi::detail::GBoxedWrapper<SourceBase, ::GSource>
{
typedef gi::detail::GBoxedWrapper<SourceBase, ::GSource> super_type;
public:

SourceBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_source_get_type(); } 

// GSource* g_source_new (GSourceFuncs* source_funcs, guint struct_size);
// ::GSource* g_source_new (::GSourceFuncs* source_funcs, guint struct_size);
static GI_INLINE_DECL GLib::Source new_ (GLib::SourceFuncs source_funcs, guint struct_size) noexcept;

// void g_source_add_child_source (GSource* source, GSource* child_source);
// void g_source_add_child_source (::GSource* source, ::GSource* child_source);
GI_INLINE_DECL void add_child_source (GLib::Source child_source) noexcept;

// void g_source_add_poll (GSource* source, GPollFD* fd);
// void g_source_add_poll (::GSource* source, ::GPollFD* fd);
GI_INLINE_DECL void add_poll (GLib::PollFD fd) noexcept;

// gpointer g_source_add_unix_fd (GSource* source, gint fd, GIOCondition events);
// void* g_source_add_unix_fd (::GSource* source, gint fd, ::GIOCondition events);
GI_INLINE_DECL gpointer add_unix_fd (gint fd, GLib::IOCondition events) noexcept;

// guint g_source_attach (GSource* source, GMainContext* context);
// guint g_source_attach (::GSource* source, ::GMainContext* context);
GI_INLINE_DECL guint attach (GLib::MainContext context) noexcept;
GI_INLINE_DECL guint attach () noexcept;

// void g_source_destroy (GSource* source);
// void g_source_destroy (::GSource* source);
GI_INLINE_DECL void destroy () noexcept;

// gboolean g_source_get_can_recurse (GSource* source);
// gboolean g_source_get_can_recurse (::GSource* source);
GI_INLINE_DECL bool get_can_recurse () noexcept;

// GMainContext* g_source_get_context (GSource* source);
// ::GMainContext* g_source_get_context (::GSource* source);
GI_INLINE_DECL GLib::MainContext get_context () noexcept;

// void g_source_get_current_time (GSource* source, GTimeVal* timeval);
// void g_source_get_current_time (::GSource* source,  timeval);
// IGNORE; deprecated

// guint g_source_get_id (GSource* source);
// guint g_source_get_id (::GSource* source);
GI_INLINE_DECL guint get_id () noexcept;

// const char* g_source_get_name (GSource* source);
// const char* g_source_get_name (::GSource* source);
GI_INLINE_DECL std::string get_name () noexcept;

// gint g_source_get_priority (GSource* source);
// gint g_source_get_priority (::GSource* source);
GI_INLINE_DECL gint get_priority () noexcept;

// gint64 g_source_get_ready_time (GSource* source);
// gint64 g_source_get_ready_time (::GSource* source);
GI_INLINE_DECL gint64 get_ready_time () noexcept;

// gint64 g_source_get_time (GSource* source);
// gint64 g_source_get_time (::GSource* source);
GI_INLINE_DECL gint64 get_time () noexcept;

// gboolean g_source_is_destroyed (GSource* source);
// gboolean g_source_is_destroyed (::GSource* source);
GI_INLINE_DECL bool is_destroyed () noexcept;

// void g_source_modify_unix_fd (GSource* source, gpointer tag, GIOCondition new_events);
// void g_source_modify_unix_fd (::GSource* source, void* tag, ::GIOCondition new_events);
GI_INLINE_DECL void modify_unix_fd (void* tag, GLib::IOCondition new_events) noexcept;

// GIOCondition g_source_query_unix_fd (GSource* source, gpointer tag);
// ::GIOCondition g_source_query_unix_fd (::GSource* source, void* tag);
GI_INLINE_DECL GLib::IOCondition query_unix_fd (void* tag) noexcept;

// GSource* g_source_ref (GSource* source);
// ::GSource* g_source_ref (::GSource* source);
// IGNORE; marked ignore

// void g_source_remove_child_source (GSource* source, GSource* child_source);
// void g_source_remove_child_source (::GSource* source, ::GSource* child_source);
GI_INLINE_DECL void remove_child_source (GLib::Source child_source) noexcept;

// void g_source_remove_poll (GSource* source, GPollFD* fd);
// void g_source_remove_poll (::GSource* source, ::GPollFD* fd);
GI_INLINE_DECL void remove_poll (GLib::PollFD fd) noexcept;

// void g_source_remove_unix_fd (GSource* source, gpointer tag);
// void g_source_remove_unix_fd (::GSource* source, void* tag);
GI_INLINE_DECL void remove_unix_fd (void* tag) noexcept;

// void g_source_set_callback (GSource* source, GSourceFunc func, gpointer data, GDestroyNotify notify);
// void g_source_set_callback (::GSource* source, GLib::SourceFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type notify);
// IGNORE; marked ignore

// void g_source_set_callback_indirect (GSource* source, gpointer callback_data, GSourceCallbackFuncs* callback_funcs);
// void g_source_set_callback_indirect (::GSource* source, void* callback_data, ::GSourceCallbackFuncs* callback_funcs);
// IGNORE; marked ignore

// void g_source_set_can_recurse (GSource* source, gboolean can_recurse);
// void g_source_set_can_recurse (::GSource* source, gboolean can_recurse);
GI_INLINE_DECL void set_can_recurse (gboolean can_recurse) noexcept;

// void g_source_set_dispose_function (GSource* source, GSourceDisposeFunc dispose);
// void g_source_set_dispose_function (::GSource* source,  dispose);
// IGNORE; not introspectable, dispose type  not supported

// void g_source_set_funcs (GSource* source, GSourceFuncs* funcs);
// void g_source_set_funcs (::GSource* source, ::GSourceFuncs* funcs);
GI_INLINE_DECL void set_funcs (GLib::SourceFuncs funcs) noexcept;

// void g_source_set_name (GSource* source, const char* name);
// void g_source_set_name (::GSource* source, const char* name);
GI_INLINE_DECL void set_name (const std::string & name) noexcept;

// void g_source_set_priority (GSource* source, gint priority);
// void g_source_set_priority (::GSource* source, gint priority);
GI_INLINE_DECL void set_priority (gint priority) noexcept;

// void g_source_set_ready_time (GSource* source, gint64 ready_time);
// void g_source_set_ready_time (::GSource* source, gint64 ready_time);
GI_INLINE_DECL void set_ready_time (gint64 ready_time) noexcept;

// void g_source_set_static_name (GSource* source, const char* name);
// void g_source_set_static_name (::GSource* source, const char* name);
GI_INLINE_DECL void set_static_name (const std::string & name) noexcept;

// void g_source_unref (GSource* source);
// void g_source_unref (::GSource* source);
// IGNORE; marked ignore

// gboolean g_source_remove (guint tag);
// gboolean g_source_remove (guint tag);
static GI_INLINE_DECL bool remove (guint tag) noexcept;

// gboolean g_source_remove_by_funcs_user_data (GSourceFuncs* funcs, gpointer user_data);
// gboolean g_source_remove_by_funcs_user_data (::GSourceFuncs* funcs, void* user_data);
static GI_INLINE_DECL bool remove_by_funcs_user_data (GLib::SourceFuncs funcs, void* user_data) noexcept;

// gboolean g_source_remove_by_user_data (gpointer user_data);
// gboolean g_source_remove_by_user_data (void* user_data);
static GI_INLINE_DECL bool remove_by_user_data (void* user_data) noexcept;

// void g_source_set_name_by_id (guint tag, const char* name);
// void g_source_set_name_by_id (guint tag, const char* name);
static GI_INLINE_DECL void set_name_by_id (guint tag, const std::string & name) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/source_extra_def.hpp>)
#include <glib/source_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/source_extra.hpp>)
#include <glib/source_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Source : public GI_GLIB_SOURCE_BASE
{ typedef GI_GLIB_SOURCE_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GSource>
{ typedef GLib::Source type; }; 

} // namespace repository

} // namespace gi

#endif
