// AUTO-GENERATED

#ifndef _GI_GIO_INITABLE_HPP_
#define _GI_GIO_INITABLE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Cancellable;

class Initable;

namespace base {


#define GI_GIO_INITABLE_BASE base::InitableBase
class InitableBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GInitable BaseObjectType;

InitableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_initable_get_type(); } 

// gpointer g_initable_new (GType object_type, GCancellable* cancellable, GError** error, const gchar* first_property_name);
// ::GObject* g_initable_new (GType object_type, ::GCancellable* cancellable, ::GError* error, const char* first_property_name);
// IGNORE; not introspectable, varargs not supported

// GObject* g_initable_new_valist (GType object_type, const gchar* first_property_name, va_list var_args, GCancellable* cancellable, GError ** error);
// ::GObject* g_initable_new_valist (GType object_type, const char* first_property_name,  var_args, ::GCancellable* cancellable, GError ** error);
// IGNORE; not introspectable, var_args type  not supported

// gpointer g_initable_newv (GType object_type, guint n_parameters, GCancellable* cancellable, GError ** error);
// ::GObject* g_initable_newv (GType object_type, guint n_parameters, ::GCancellable* cancellable, GError ** error);
// IGNORE; deprecated, container element not supported

// gboolean g_initable_init (GInitable* initable, GCancellable* cancellable, GError ** error);
// gboolean g_initable_init (::GInitable* initable, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool init (Gio::Cancellable cancellable);
GI_INLINE_DECL bool init ();
GI_INLINE_DECL bool init (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool init (GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/initable_extra_def.hpp>)
#include <gio/initable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/initable_extra.hpp>)
#include <gio/initable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Initable : public GI_GIO_INITABLE_BASE
{ typedef GI_GIO_INITABLE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GInitable>
{ typedef Gio::Initable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class InitableIfaceDef
{
typedef InitableIfaceDef self;
public:
typedef Gio::Initable instance_type;
typedef ::GInitableIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Initable::init (GInitable* initable, GCancellable* cancellable, GError ** error);
// gboolean Initable::init (::GInitable* initable, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported


};

using InitableImpl = detail::InterfaceImpl<InitableIfaceDef>;

class InitableIfaceClassImpl: public detail::InterfaceClassImpl<InitableImpl>
{
typedef InitableIfaceClassImpl self;
typedef detail::InterfaceClassImpl<InitableImpl> super;

protected:
using super::super;

// gboolean Initable::init (GInitable* initable, GCancellable* cancellable, GError ** error);
// gboolean Initable::init (::GInitable* initable, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
