// AUTO-GENERATED

#ifndef _GI_GST_URIHANDLER_HPP_
#define _GI_GST_URIHANDLER_HPP_


namespace gi {

namespace repository {

namespace Gst {


class URIHandler;

namespace base {


#define GI_GST_URIHANDLER_BASE base::URIHandlerBase
class URIHandlerBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GstURIHandler BaseObjectType;

URIHandlerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_uri_handler_get_type(); } 

// const gchar* const* gst_uri_handler_get_protocols (GstURIHandler* handler);
// const char** gst_uri_handler_get_protocols (::GstURIHandler* handler);
GI_INLINE_DECL std::vector<std::string> get_protocols () noexcept;

// gchar* gst_uri_handler_get_uri (GstURIHandler* handler);
// char* gst_uri_handler_get_uri (::GstURIHandler* handler);
GI_INLINE_DECL std::string get_uri () noexcept;

// GstURIType gst_uri_handler_get_uri_type (GstURIHandler* handler);
// ::GstURIType gst_uri_handler_get_uri_type (::GstURIHandler* handler);
GI_INLINE_DECL Gst::URIType get_uri_type () noexcept;

// gboolean gst_uri_handler_set_uri (GstURIHandler* handler, const gchar* uri, GError ** error);
// gboolean gst_uri_handler_set_uri (::GstURIHandler* handler, const char* uri, GError ** error);
GI_INLINE_DECL bool set_uri (const std::string & uri);
GI_INLINE_DECL bool set_uri (const std::string & uri, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/urihandler_extra_def.hpp>)
#include <gst/urihandler_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/urihandler_extra.hpp>)
#include <gst/urihandler_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class URIHandler : public GI_GST_URIHANDLER_BASE
{ typedef GI_GST_URIHANDLER_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstURIHandler>
{ typedef Gst::URIHandler type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class URIHandlerInterfaceDef
{
typedef URIHandlerInterfaceDef self;
public:
typedef Gst::URIHandler instance_type;
typedef ::GstURIHandlerInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gchar* URIHandler::get_uri (GstURIHandler* handler);
// char* URIHandler::get_uri (::GstURIHandler* handler);
virtual std::string get_uri_ () noexcept = 0;

// gboolean URIHandler::set_uri (GstURIHandler* handler, const gchar* uri, GError ** error);
// gboolean URIHandler::set_uri (::GstURIHandler* handler, const char* uri, GError ** error);
// SKIP; callee GError not supported


};

using URIHandlerImpl = detail::InterfaceImpl<URIHandlerInterfaceDef>;

class URIHandlerInterfaceClassImpl: public detail::InterfaceClassImpl<URIHandlerImpl>
{
typedef URIHandlerInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<URIHandlerImpl> super;

protected:
using super::super;

// gchar* URIHandler::get_uri (GstURIHandler* handler);
// char* URIHandler::get_uri (::GstURIHandler* handler);
GI_INLINE_DECL std::string get_uri_ () noexcept override;

// gboolean URIHandler::set_uri (GstURIHandler* handler, const gchar* uri, GError ** error);
// gboolean URIHandler::set_uri (::GstURIHandler* handler, const char* uri, GError ** error);
// SKIP; callee GError not supported


};

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
