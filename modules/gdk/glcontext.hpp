// AUTO-GENERATED

#ifndef _GI_GDK_GLCONTEXT_HPP_
#define _GI_GDK_GLCONTEXT_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Display;
class Window;

class GLContext;

namespace base {


#define GI_GDK_GLCONTEXT_BASE base::GLContextBase
class GLContextBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkGLContext BaseObjectType;

GLContextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_gl_context_get_type(); } 

// void gdk_gl_context_clear_current ();
// void gdk_gl_context_clear_current ();
static GI_INLINE_DECL void clear_current () noexcept;

// GdkGLContext* gdk_gl_context_get_current ();
// ::GdkGLContext* gdk_gl_context_get_current ();
static GI_INLINE_DECL Gdk::GLContext get_current () noexcept;

// gboolean gdk_gl_context_get_debug_enabled (GdkGLContext* context);
// gboolean gdk_gl_context_get_debug_enabled (::GdkGLContext* context);
GI_INLINE_DECL bool get_debug_enabled () noexcept;

// GdkDisplay* gdk_gl_context_get_display (GdkGLContext* context);
// ::GdkDisplay* gdk_gl_context_get_display (::GdkGLContext* context);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// gboolean gdk_gl_context_get_forward_compatible (GdkGLContext* context);
// gboolean gdk_gl_context_get_forward_compatible (::GdkGLContext* context);
GI_INLINE_DECL bool get_forward_compatible () noexcept;

// void gdk_gl_context_get_required_version (GdkGLContext* context, int* major, int* minor);
// void gdk_gl_context_get_required_version (::GdkGLContext* context, gint* major, gint* minor);
GI_INLINE_DECL void get_required_version (gint & major, gint & minor) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_required_version () noexcept;

// GdkGLContext* gdk_gl_context_get_shared_context (GdkGLContext* context);
// ::GdkGLContext* gdk_gl_context_get_shared_context (::GdkGLContext* context);
GI_INLINE_DECL Gdk::GLContext get_shared_context () noexcept;

// gboolean gdk_gl_context_get_use_es (GdkGLContext* context);
// gboolean gdk_gl_context_get_use_es (::GdkGLContext* context);
GI_INLINE_DECL bool get_use_es () noexcept;

// void gdk_gl_context_get_version (GdkGLContext* context, int* major, int* minor);
// void gdk_gl_context_get_version (::GdkGLContext* context, gint* major, gint* minor);
GI_INLINE_DECL void get_version (gint & major, gint & minor) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_version () noexcept;

// GdkWindow* gdk_gl_context_get_window (GdkGLContext* context);
// ::GdkWindow* gdk_gl_context_get_window (::GdkGLContext* context);
GI_INLINE_DECL Gdk::Window get_window () noexcept;

// gboolean gdk_gl_context_is_legacy (GdkGLContext* context);
// gboolean gdk_gl_context_is_legacy (::GdkGLContext* context);
GI_INLINE_DECL bool is_legacy () noexcept;

// void gdk_gl_context_make_current (GdkGLContext* context);
// void gdk_gl_context_make_current (::GdkGLContext* context);
GI_INLINE_DECL void make_current () noexcept;

// gboolean gdk_gl_context_realize (GdkGLContext* context, GError ** error);
// gboolean gdk_gl_context_realize (::GdkGLContext* context, GError ** error);
GI_INLINE_DECL bool realize ();
GI_INLINE_DECL bool realize (GLib::Error * _error) noexcept;

// void gdk_gl_context_set_debug_enabled (GdkGLContext* context, gboolean enabled);
// void gdk_gl_context_set_debug_enabled (::GdkGLContext* context, gboolean enabled);
GI_INLINE_DECL void set_debug_enabled (gboolean enabled) noexcept;

// void gdk_gl_context_set_forward_compatible (GdkGLContext* context, gboolean compatible);
// void gdk_gl_context_set_forward_compatible (::GdkGLContext* context, gboolean compatible);
GI_INLINE_DECL void set_forward_compatible (gboolean compatible) noexcept;

// void gdk_gl_context_set_required_version (GdkGLContext* context, int major, int minor);
// void gdk_gl_context_set_required_version (::GdkGLContext* context, gint major, gint minor);
GI_INLINE_DECL void set_required_version (gint major, gint minor) noexcept;

// void gdk_gl_context_set_use_es (GdkGLContext* context, int use_es);
// void gdk_gl_context_set_use_es (::GdkGLContext* context, gint use_es);
GI_INLINE_DECL void set_use_es (gint use_es) noexcept;

gi::property_proxy<Gdk::Display, base::GLContextBase> property_display()
{ return gi::property_proxy<Gdk::Display, base::GLContextBase> (*this, "display"); }
const gi::property_proxy<Gdk::Display, base::GLContextBase> property_display() const
{ return gi::property_proxy<Gdk::Display, base::GLContextBase> (*this, "display"); }

gi::property_proxy<Gdk::GLContext, base::GLContextBase> property_shared_context()
{ return gi::property_proxy<Gdk::GLContext, base::GLContextBase> (*this, "shared-context"); }
const gi::property_proxy<Gdk::GLContext, base::GLContextBase> property_shared_context() const
{ return gi::property_proxy<Gdk::GLContext, base::GLContextBase> (*this, "shared-context"); }

gi::property_proxy<Gdk::Window, base::GLContextBase> property_window()
{ return gi::property_proxy<Gdk::Window, base::GLContextBase> (*this, "window"); }
const gi::property_proxy<Gdk::Window, base::GLContextBase> property_window() const
{ return gi::property_proxy<Gdk::Window, base::GLContextBase> (*this, "window"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/glcontext_extra_def.hpp>)
#include <gdk/glcontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/glcontext_extra.hpp>)
#include <gdk/glcontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class GLContext : public GI_GDK_GLCONTEXT_BASE
{ typedef GI_GDK_GLCONTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkGLContext>
{ typedef Gdk::GLContext type; }; 

} // namespace repository

} // namespace gi

#endif
