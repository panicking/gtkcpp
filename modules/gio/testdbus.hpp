// AUTO-GENERATED

#ifndef _GI_GIO_TESTDBUS_HPP_
#define _GI_GIO_TESTDBUS_HPP_


namespace gi {

namespace repository {

namespace Gio {


class TestDBus;

namespace base {


#define GI_GIO_TESTDBUS_BASE base::TestDBusBase
class TestDBusBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GTestDBus BaseObjectType;

TestDBusBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_test_dbus_get_type(); } 

// GTestDBus* g_test_dbus_new (GTestDBusFlags flags);
// ::GTestDBus* g_test_dbus_new (::GTestDBusFlags flags);
static GI_INLINE_DECL Gio::TestDBus new_ (Gio::TestDBusFlags flags) noexcept;

// void g_test_dbus_unset ();
// void g_test_dbus_unset ();
static GI_INLINE_DECL void unset () noexcept;

// void g_test_dbus_add_service_dir (GTestDBus* self, const gchar* path);
// void g_test_dbus_add_service_dir (::GTestDBus* self, const char* path);
GI_INLINE_DECL void add_service_dir (const std::string & path) noexcept;

// void g_test_dbus_down (GTestDBus* self);
// void g_test_dbus_down (::GTestDBus* self);
GI_INLINE_DECL void down () noexcept;

// const gchar* g_test_dbus_get_bus_address (GTestDBus* self);
// const char* g_test_dbus_get_bus_address (::GTestDBus* self);
GI_INLINE_DECL std::string get_bus_address () noexcept;

// GTestDBusFlags g_test_dbus_get_flags (GTestDBus* self);
// ::GTestDBusFlags g_test_dbus_get_flags (::GTestDBus* self);
GI_INLINE_DECL Gio::TestDBusFlags get_flags () noexcept;

// void g_test_dbus_stop (GTestDBus* self);
// void g_test_dbus_stop (::GTestDBus* self);
GI_INLINE_DECL void stop () noexcept;

// void g_test_dbus_up (GTestDBus* self);
// void g_test_dbus_up (::GTestDBus* self);
GI_INLINE_DECL void up () noexcept;

gi::property_proxy<Gio::TestDBusFlags, base::TestDBusBase> property_flags()
{ return gi::property_proxy<Gio::TestDBusFlags, base::TestDBusBase> (*this, "flags"); }
const gi::property_proxy<Gio::TestDBusFlags, base::TestDBusBase> property_flags() const
{ return gi::property_proxy<Gio::TestDBusFlags, base::TestDBusBase> (*this, "flags"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/testdbus_extra_def.hpp>)
#include <gio/testdbus_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/testdbus_extra.hpp>)
#include <gio/testdbus_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class TestDBus : public GI_GIO_TESTDBUS_BASE
{ typedef GI_GIO_TESTDBUS_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GTestDBus>
{ typedef Gio::TestDBus type; }; 

} // namespace repository

} // namespace gi

#endif
