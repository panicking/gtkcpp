// AUTO-GENERATED

#ifndef _GI_GIO_IOMODULE_HPP_
#define _GI_GIO_IOMODULE_HPP_


namespace gi {

namespace repository {

namespace Gio {


class IOModule;

namespace base {


#define GI_GIO_IOMODULE_BASE base::IOModuleBase
class IOModuleBase : public GObject::TypeModule
{
typedef GObject::TypeModule super_type;
public:
typedef ::GIOModule BaseObjectType;

IOModuleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_io_module_get_type(); } 

// GIOModule* g_io_module_new (const gchar* filename);
// ::GIOModule* g_io_module_new (const char* filename);
static GI_INLINE_DECL Gio::IOModule new_ (const std::string & filename) noexcept;

// char** g_io_module_query ();
// char** g_io_module_query ();
// IGNORE; marked ignore

// void g_io_module_load (GIOModule* module);
// void g_io_module_load (::GIOModule* module);
// IGNORE; marked ignore

// void g_io_module_unload (GIOModule* module);
// void g_io_module_unload (::GIOModule* module);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/iomodule_extra_def.hpp>)
#include <gio/iomodule_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/iomodule_extra.hpp>)
#include <gio/iomodule_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class IOModule : public GI_GIO_IOMODULE_BASE
{ typedef GI_GIO_IOMODULE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GIOModule>
{ typedef Gio::IOModule type; }; 

} // namespace repository

} // namespace gi

#endif
