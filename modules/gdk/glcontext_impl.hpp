// AUTO-GENERATED

#ifndef _GI_GDK_GLCONTEXT_IMPL_HPP_
#define _GI_GDK_GLCONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// void gdk_gl_context_clear_current ();
// void gdk_gl_context_clear_current ();
void base::GLContextBase::clear_current () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_gl_context_clear_current;
  call_wrap_v ();
}

// GdkGLContext* gdk_gl_context_get_current ();
// ::GdkGLContext* gdk_gl_context_get_current ();
Gdk::GLContext base::GLContextBase::get_current () noexcept
{
  typedef ::GdkGLContext* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_gl_context_get_current;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gdk_gl_context_get_debug_enabled (GdkGLContext* context);
// gboolean gdk_gl_context_get_debug_enabled (::GdkGLContext* context);
bool base::GLContextBase::get_debug_enabled () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkGLContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_gl_context_get_debug_enabled;
  auto _temp_ret = call_wrap_v ((::GdkGLContext*) (gobj_()));
  return _temp_ret;
}

// GdkDisplay* gdk_gl_context_get_display (GdkGLContext* context);
// ::GdkDisplay* gdk_gl_context_get_display (::GdkGLContext* context);
Gdk::Display base::GLContextBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GdkGLContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_gl_context_get_display;
  auto _temp_ret = call_wrap_v ((::GdkGLContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gdk_gl_context_get_forward_compatible (GdkGLContext* context);
// gboolean gdk_gl_context_get_forward_compatible (::GdkGLContext* context);
bool base::GLContextBase::get_forward_compatible () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkGLContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_gl_context_get_forward_compatible;
  auto _temp_ret = call_wrap_v ((::GdkGLContext*) (gobj_()));
  return _temp_ret;
}

// void gdk_gl_context_get_required_version (GdkGLContext* context, int* major, int* minor);
// void gdk_gl_context_get_required_version (::GdkGLContext* context, gint* major, gint* minor);
void base::GLContextBase::get_required_version (gint & major, gint & minor) noexcept
{
  typedef void (*call_wrap_t) (::GdkGLContext* context, gint* major, gint* minor);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_gl_context_get_required_version;
  gint minor_o {};
  gint major_o {};
  call_wrap_v ((::GdkGLContext*) (gobj_()), (gint*) (&major_o), (gint*) (&minor_o));
  minor = minor_o;
  major = major_o;
}
std::tuple<gint, gint> base::GLContextBase::get_required_version () noexcept
{
  typedef void (*call_wrap_t) (::GdkGLContext* context, gint* major, gint* minor);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_gl_context_get_required_version;
  gint minor_o {};
  gint major_o {};
  call_wrap_v ((::GdkGLContext*) (gobj_()), (gint*) (&major_o), (gint*) (&minor_o));
  return std::make_tuple (major_o, minor_o);
}

// GdkGLContext* gdk_gl_context_get_shared_context (GdkGLContext* context);
// ::GdkGLContext* gdk_gl_context_get_shared_context (::GdkGLContext* context);
Gdk::GLContext base::GLContextBase::get_shared_context () noexcept
{
  typedef ::GdkGLContext* (*call_wrap_t) (::GdkGLContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_gl_context_get_shared_context;
  auto _temp_ret = call_wrap_v ((::GdkGLContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gdk_gl_context_get_use_es (GdkGLContext* context);
// gboolean gdk_gl_context_get_use_es (::GdkGLContext* context);
bool base::GLContextBase::get_use_es () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkGLContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_gl_context_get_use_es;
  auto _temp_ret = call_wrap_v ((::GdkGLContext*) (gobj_()));
  return _temp_ret;
}

// void gdk_gl_context_get_version (GdkGLContext* context, int* major, int* minor);
// void gdk_gl_context_get_version (::GdkGLContext* context, gint* major, gint* minor);
void base::GLContextBase::get_version (gint & major, gint & minor) noexcept
{
  typedef void (*call_wrap_t) (::GdkGLContext* context, gint* major, gint* minor);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_gl_context_get_version;
  gint minor_o {};
  gint major_o {};
  call_wrap_v ((::GdkGLContext*) (gobj_()), (gint*) (&major_o), (gint*) (&minor_o));
  minor = minor_o;
  major = major_o;
}
std::tuple<gint, gint> base::GLContextBase::get_version () noexcept
{
  typedef void (*call_wrap_t) (::GdkGLContext* context, gint* major, gint* minor);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_gl_context_get_version;
  gint minor_o {};
  gint major_o {};
  call_wrap_v ((::GdkGLContext*) (gobj_()), (gint*) (&major_o), (gint*) (&minor_o));
  return std::make_tuple (major_o, minor_o);
}

// GdkWindow* gdk_gl_context_get_window (GdkGLContext* context);
// ::GdkWindow* gdk_gl_context_get_window (::GdkGLContext* context);
Gdk::Window base::GLContextBase::get_window () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GdkGLContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_gl_context_get_window;
  auto _temp_ret = call_wrap_v ((::GdkGLContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gdk_gl_context_is_legacy (GdkGLContext* context);
// gboolean gdk_gl_context_is_legacy (::GdkGLContext* context);
bool base::GLContextBase::is_legacy () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkGLContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_gl_context_is_legacy;
  auto _temp_ret = call_wrap_v ((::GdkGLContext*) (gobj_()));
  return _temp_ret;
}

// void gdk_gl_context_make_current (GdkGLContext* context);
// void gdk_gl_context_make_current (::GdkGLContext* context);
void base::GLContextBase::make_current () noexcept
{
  typedef void (*call_wrap_t) (::GdkGLContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_gl_context_make_current;
  call_wrap_v ((::GdkGLContext*) (gobj_()));
}

// gboolean gdk_gl_context_realize (GdkGLContext* context, GError ** error);
// gboolean gdk_gl_context_realize (::GdkGLContext* context, GError ** error);
bool base::GLContextBase::realize ()
{
  typedef gboolean (*call_wrap_t) (::GdkGLContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_gl_context_realize;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkGLContext*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::GLContextBase::realize (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkGLContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_gl_context_realize;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkGLContext*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void gdk_gl_context_set_debug_enabled (GdkGLContext* context, gboolean enabled);
// void gdk_gl_context_set_debug_enabled (::GdkGLContext* context, gboolean enabled);
void base::GLContextBase::set_debug_enabled (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::GdkGLContext* context, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_gl_context_set_debug_enabled;
  auto enabled_to_c = enabled;
  call_wrap_v ((::GdkGLContext*) (gobj_()), (gboolean) (enabled_to_c));
}

// void gdk_gl_context_set_forward_compatible (GdkGLContext* context, gboolean compatible);
// void gdk_gl_context_set_forward_compatible (::GdkGLContext* context, gboolean compatible);
void base::GLContextBase::set_forward_compatible (gboolean compatible) noexcept
{
  typedef void (*call_wrap_t) (::GdkGLContext* context, gboolean compatible);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_gl_context_set_forward_compatible;
  auto compatible_to_c = compatible;
  call_wrap_v ((::GdkGLContext*) (gobj_()), (gboolean) (compatible_to_c));
}

// void gdk_gl_context_set_required_version (GdkGLContext* context, int major, int minor);
// void gdk_gl_context_set_required_version (::GdkGLContext* context, gint major, gint minor);
void base::GLContextBase::set_required_version (gint major, gint minor) noexcept
{
  typedef void (*call_wrap_t) (::GdkGLContext* context, gint major, gint minor);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_gl_context_set_required_version;
  auto minor_to_c = minor;
  auto major_to_c = major;
  call_wrap_v ((::GdkGLContext*) (gobj_()), (gint) (major_to_c), (gint) (minor_to_c));
}

// void gdk_gl_context_set_use_es (GdkGLContext* context, int use_es);
// void gdk_gl_context_set_use_es (::GdkGLContext* context, gint use_es);
void base::GLContextBase::set_use_es (gint use_es) noexcept
{
  typedef void (*call_wrap_t) (::GdkGLContext* context, gint use_es);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_gl_context_set_use_es;
  auto use_es_to_c = use_es;
  call_wrap_v ((::GdkGLContext*) (gobj_()), (gint) (use_es_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/glcontext_extra_def_impl.hpp>)
#include <gdk/glcontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/glcontext_extra_impl.hpp>)
#include <gdk/glcontext_extra_impl.hpp>
#endif
#endif

#endif
