// AUTO-GENERATED

#ifndef _GI_GIO_DBUSANNOTATIONINFO_HPP_
#define _GI_GIO_DBUSANNOTATIONINFO_HPP_


namespace gi {

namespace repository {

namespace Gio {


class DBusAnnotationInfo;

namespace base {


#define GI_GIO_DBUSANNOTATIONINFO_BASE base::DBusAnnotationInfoBase
class DBusAnnotationInfoBase : public gi::detail::GBoxedWrapper<DBusAnnotationInfoBase, ::GDBusAnnotationInfo>
{
typedef gi::detail::GBoxedWrapper<DBusAnnotationInfoBase, ::GDBusAnnotationInfo> super_type;
public:

DBusAnnotationInfoBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_dbus_annotation_info_get_type(); } 

// gint DBusAnnotationInfo::ref_count (const ::GDBusAnnotationInfo* obj);
// gint DBusAnnotationInfo::ref_count (const ::GDBusAnnotationInfo* obj);
GI_INLINE_DECL gint ref_count_ () const noexcept;

//  DBusAnnotationInfo::ref_count (::GDBusAnnotationInfo* obj, gint _value);
// void DBusAnnotationInfo::ref_count (::GDBusAnnotationInfo* obj, gint _value);
GI_INLINE_DECL void ref_count_ (gint _value) noexcept;

// char* DBusAnnotationInfo::key (const ::GDBusAnnotationInfo* obj);
// char* DBusAnnotationInfo::key (const ::GDBusAnnotationInfo* obj);
GI_INLINE_DECL std::string key_ () const noexcept;

// char* DBusAnnotationInfo::value (const ::GDBusAnnotationInfo* obj);
// char* DBusAnnotationInfo::value (const ::GDBusAnnotationInfo* obj);
GI_INLINE_DECL std::string value_ () const noexcept;

// GDBusAnnotationInfo* g_dbus_annotation_info_ref (GDBusAnnotationInfo* info);
// ::GDBusAnnotationInfo* g_dbus_annotation_info_ref (::GDBusAnnotationInfo* info);
// IGNORE; marked ignore

// void g_dbus_annotation_info_unref (GDBusAnnotationInfo* info);
// void g_dbus_annotation_info_unref (::GDBusAnnotationInfo* info);
// IGNORE; marked ignore

// const gchar* g_dbus_annotation_info_lookup (GDBusAnnotationInfo** annotations, const gchar* name);
// const char* g_dbus_annotation_info_lookup (::GDBusAnnotationInfo** annotations, const char* name);
static GI_INLINE_DECL std::string lookup (const std::vector<Gio::DBusAnnotationInfo> & annotations, const std::string & name) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusannotationinfo_extra_def.hpp>)
#include <gio/dbusannotationinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusannotationinfo_extra.hpp>)
#include <gio/dbusannotationinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusAnnotationInfo : public GI_GIO_DBUSANNOTATIONINFO_BASE
{ typedef GI_GIO_DBUSANNOTATIONINFO_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusAnnotationInfo>
{ typedef Gio::DBusAnnotationInfo type; }; 

} // namespace repository

} // namespace gi

#endif
