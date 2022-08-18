// AUTO-GENERATED

#ifndef _GI_GIO_SRVTARGET_HPP_
#define _GI_GIO_SRVTARGET_HPP_


namespace gi {

namespace repository {

namespace Gio {


class SrvTarget;

namespace base {


#define GI_GIO_SRVTARGET_BASE base::SrvTargetBase
class SrvTargetBase : public gi::detail::GBoxedWrapper<SrvTargetBase, ::GSrvTarget>
{
typedef gi::detail::GBoxedWrapper<SrvTargetBase, ::GSrvTarget> super_type;
public:

SrvTargetBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_srv_target_get_type(); } 

// GSrvTarget* g_srv_target_new (const gchar* hostname, guint16 port, guint16 priority, guint16 weight);
// ::GSrvTarget* g_srv_target_new (const char* hostname, guint16 port, guint16 priority, guint16 weight);
static GI_INLINE_DECL Gio::SrvTarget new_ (const std::string & hostname, guint16 port, guint16 priority, guint16 weight) noexcept;

// GSrvTarget* g_srv_target_copy (GSrvTarget* target);
// ::GSrvTarget* g_srv_target_copy (::GSrvTarget* target);
GI_INLINE_DECL Gio::SrvTarget copy () noexcept;

// void g_srv_target_free (GSrvTarget* target);
// void g_srv_target_free (::GSrvTarget* target);
// IGNORE; marked ignore

// const gchar* g_srv_target_get_hostname (GSrvTarget* target);
// const char* g_srv_target_get_hostname (::GSrvTarget* target);
GI_INLINE_DECL std::string get_hostname () noexcept;

// guint16 g_srv_target_get_port (GSrvTarget* target);
// guint16 g_srv_target_get_port (::GSrvTarget* target);
GI_INLINE_DECL guint16 get_port () noexcept;

// guint16 g_srv_target_get_priority (GSrvTarget* target);
// guint16 g_srv_target_get_priority (::GSrvTarget* target);
GI_INLINE_DECL guint16 get_priority () noexcept;

// guint16 g_srv_target_get_weight (GSrvTarget* target);
// guint16 g_srv_target_get_weight (::GSrvTarget* target);
GI_INLINE_DECL guint16 get_weight () noexcept;

// GList* g_srv_target_list_sort (GList* targets);
// ::GList* g_srv_target_list_sort (::GList* targets);
static GI_INLINE_DECL std::vector<gpointer> list_sort (const std::vector<gpointer> & targets) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/srvtarget_extra_def.hpp>)
#include <gio/srvtarget_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/srvtarget_extra.hpp>)
#include <gio/srvtarget_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SrvTarget : public GI_GIO_SRVTARGET_BASE
{ typedef GI_GIO_SRVTARGET_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSrvTarget>
{ typedef Gio::SrvTarget type; }; 

} // namespace repository

} // namespace gi

#endif
