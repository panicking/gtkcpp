// AUTO-GENERATED

#ifndef _GI_GIO_DBUSMENUMODEL_HPP_
#define _GI_GIO_DBUSMENUMODEL_HPP_

#include "menumodel.hpp"

namespace gi {

namespace repository {

namespace Gio {

class DBusConnection;

class DBusMenuModel;

namespace base {


#define GI_GIO_DBUSMENUMODEL_BASE base::DBusMenuModelBase
class DBusMenuModelBase : public Gio::MenuModel
{
typedef Gio::MenuModel super_type;
public:
typedef ::GDBusMenuModel BaseObjectType;

DBusMenuModelBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_menu_model_get_type(); } 

// GDBusMenuModel* g_dbus_menu_model_get (GDBusConnection* connection, const gchar* bus_name, const gchar* object_path);
// ::GDBusMenuModel* g_dbus_menu_model_get (::GDBusConnection* connection, const char* bus_name, const char* object_path);
static GI_INLINE_DECL Gio::DBusMenuModel get (Gio::DBusConnection connection, const std::string & bus_name, const std::string & object_path) noexcept;
static GI_INLINE_DECL Gio::DBusMenuModel get (Gio::DBusConnection connection, const std::string & object_path) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusmenumodel_extra_def.hpp>)
#include <gio/dbusmenumodel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusmenumodel_extra.hpp>)
#include <gio/dbusmenumodel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusMenuModel : public GI_GIO_DBUSMENUMODEL_BASE
{ typedef GI_GIO_DBUSMENUMODEL_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusMenuModel>
{ typedef Gio::DBusMenuModel type; }; 

} // namespace repository

} // namespace gi

#endif
