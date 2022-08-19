// AUTO-GENERATED

#ifndef _GI_SOUP_LOGGER_HPP_
#define _GI_SOUP_LOGGER_HPP_


namespace gi {

namespace repository {

namespace Soup {

class Session;
class SessionFeature;

class Logger;

namespace base {


#define GI_SOUP_LOGGER_BASE base::LoggerBase
class LoggerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::SoupLogger BaseObjectType;

LoggerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_logger_get_type(); } 

GI_INLINE_DECL Soup::SessionFeature interface_ (gi::interface_tag<Soup::SessionFeature>);

GI_INLINE_DECL operator Soup::SessionFeature ();

// SoupLogger* soup_logger_new (SoupLoggerLogLevel level, int max_body_size);
// ::SoupLogger* soup_logger_new (::SoupLoggerLogLevel level, gint max_body_size);
static GI_INLINE_DECL Soup::Logger new_ (Soup::LoggerLogLevel level, gint max_body_size) noexcept;

// void soup_logger_attach (SoupLogger* logger, SoupSession* session);
// void soup_logger_attach (::SoupLogger* logger, ::SoupSession* session);
// IGNORE; deprecated

// void soup_logger_detach (SoupLogger* logger, SoupSession* session);
// void soup_logger_detach (::SoupLogger* logger, ::SoupSession* session);
// IGNORE; deprecated

// void soup_logger_set_printer (SoupLogger* logger, SoupLoggerPrinter printer, gpointer printer_data, GDestroyNotify destroy);
// void soup_logger_set_printer (::SoupLogger* logger, Soup::LoggerPrinter::cfunction_type printer, void* printer_data, GLib::DestroyNotify::cfunction_type destroy);
GI_INLINE_DECL void set_printer (Soup::LoggerPrinter printer) noexcept;

// void soup_logger_set_request_filter (SoupLogger* logger, SoupLoggerFilter request_filter, gpointer filter_data, GDestroyNotify destroy);
// void soup_logger_set_request_filter (::SoupLogger* logger, Soup::LoggerFilter::cfunction_type request_filter, void* filter_data, GLib::DestroyNotify::cfunction_type destroy);
GI_INLINE_DECL void set_request_filter (Soup::LoggerFilter request_filter) noexcept;

// void soup_logger_set_response_filter (SoupLogger* logger, SoupLoggerFilter response_filter, gpointer filter_data, GDestroyNotify destroy);
// void soup_logger_set_response_filter (::SoupLogger* logger, Soup::LoggerFilter::cfunction_type response_filter, void* filter_data, GLib::DestroyNotify::cfunction_type destroy);
GI_INLINE_DECL void set_response_filter (Soup::LoggerFilter response_filter) noexcept;

gi::property_proxy<Soup::LoggerLogLevel, base::LoggerBase> property_level()
{ return gi::property_proxy<Soup::LoggerLogLevel, base::LoggerBase> (*this, "level"); }
const gi::property_proxy<Soup::LoggerLogLevel, base::LoggerBase> property_level() const
{ return gi::property_proxy<Soup::LoggerLogLevel, base::LoggerBase> (*this, "level"); }

gi::property_proxy<gint, base::LoggerBase> property_max_body_size()
{ return gi::property_proxy<gint, base::LoggerBase> (*this, "max-body-size"); }
const gi::property_proxy<gint, base::LoggerBase> property_max_body_size() const
{ return gi::property_proxy<gint, base::LoggerBase> (*this, "max-body-size"); }

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/logger_extra_def.hpp>)
#include <soup/logger_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/logger_extra.hpp>)
#include <soup/logger_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class Logger : public GI_SOUP_LOGGER_BASE
{ typedef GI_SOUP_LOGGER_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupLogger>
{ typedef Soup::Logger type; }; 

} // namespace repository

} // namespace gi

#include "sessionfeature.hpp"

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class LoggerClassDef
{
typedef LoggerClassDef self;
public:
typedef Soup::Logger instance_type;
typedef ::SoupLoggerClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class LoggerClass: public detail::ClassTemplate<Soup::impl::internal::LoggerClassDef, GObject::impl::internal::ObjectClass, Soup::impl::internal::SessionFeatureInterfaceClassImpl>
{
typedef LoggerClass self;
typedef detail::ClassTemplate<Soup::impl::internal::LoggerClassDef, GObject::impl::internal::ObjectClass, Soup::impl::internal::SessionFeatureInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Soup::impl::internal::SessionFeatureInterfaceClassImpl SoupSessionFeatureInterface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using LoggerImpl = detail::ObjectImpl<Logger, internal::LoggerClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
