// AUTO-GENERATED

#ifndef _GI_GLIB_MAINLOOP_HPP_
#define _GI_GLIB_MAINLOOP_HPP_


namespace gi {

namespace repository {

namespace GLib {

class MainContext;

class MainLoop;

namespace base {


#define GI_GLIB_MAINLOOP_BASE base::MainLoopBase
class MainLoopBase : public gi::detail::GBoxedWrapper<MainLoopBase, ::GMainLoop>
{
typedef gi::detail::GBoxedWrapper<MainLoopBase, ::GMainLoop> super_type;
public:

MainLoopBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_main_loop_get_type(); } 

// GMainLoop* g_main_loop_new (GMainContext* context, gboolean is_running);
// ::GMainLoop* g_main_loop_new (::GMainContext* context, gboolean is_running);
static GI_INLINE_DECL GLib::MainLoop new_ (GLib::MainContext context, gboolean is_running) noexcept;
static GI_INLINE_DECL GLib::MainLoop new_ (gboolean is_running) noexcept;

// GMainContext* g_main_loop_get_context (GMainLoop* loop);
// ::GMainContext* g_main_loop_get_context (::GMainLoop* loop);
GI_INLINE_DECL GLib::MainContext get_context () noexcept;

// gboolean g_main_loop_is_running (GMainLoop* loop);
// gboolean g_main_loop_is_running (::GMainLoop* loop);
GI_INLINE_DECL bool is_running () noexcept;

// void g_main_loop_quit (GMainLoop* loop);
// void g_main_loop_quit (::GMainLoop* loop);
GI_INLINE_DECL void quit () noexcept;

// GMainLoop* g_main_loop_ref (GMainLoop* loop);
// ::GMainLoop* g_main_loop_ref (::GMainLoop* loop);
// IGNORE; marked ignore

// void g_main_loop_run (GMainLoop* loop);
// void g_main_loop_run (::GMainLoop* loop);
GI_INLINE_DECL void run () noexcept;

// void g_main_loop_unref (GMainLoop* loop);
// void g_main_loop_unref (::GMainLoop* loop);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/mainloop_extra_def.hpp>)
#include <glib/mainloop_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/mainloop_extra.hpp>)
#include <glib/mainloop_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class MainLoop : public GI_GLIB_MAINLOOP_BASE
{ typedef GI_GLIB_MAINLOOP_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GMainLoop>
{ typedef GLib::MainLoop type; }; 

} // namespace repository

} // namespace gi

#endif
