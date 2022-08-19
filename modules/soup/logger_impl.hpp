// AUTO-GENERATED

#ifndef _GI_SOUP_LOGGER_IMPL_HPP_
#define _GI_SOUP_LOGGER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

Soup::SessionFeature LoggerBase::interface_ (gi::interface_tag<Soup::SessionFeature>)
{ return gi::wrap ((Soup::SessionFeature::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

LoggerBase::operator Soup::SessionFeature ()
{ return interface_ (gi::interface_tag<Soup::SessionFeature>()); }

// SoupLogger* soup_logger_new (SoupLoggerLogLevel level, int max_body_size);
// ::SoupLogger* soup_logger_new (::SoupLoggerLogLevel level, gint max_body_size);
Soup::Logger base::LoggerBase::new_ (Soup::LoggerLogLevel level, gint max_body_size) noexcept
{
  typedef ::SoupLogger* (*call_wrap_t) (::SoupLoggerLogLevel level, gint max_body_size);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_logger_new;
  auto max_body_size_to_c = max_body_size;
  auto level_to_c = gi::unwrap (level);
  auto _temp_ret = call_wrap_v ((::SoupLoggerLogLevel) (level_to_c), (gint) (max_body_size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void soup_logger_attach (SoupLogger* logger, SoupSession* session);
// void soup_logger_attach (::SoupLogger* logger, ::SoupSession* session);
// IGNORE; deprecated

// void soup_logger_detach (SoupLogger* logger, SoupSession* session);
// void soup_logger_detach (::SoupLogger* logger, ::SoupSession* session);
// IGNORE; deprecated

// void soup_logger_set_printer (SoupLogger* logger, SoupLoggerPrinter printer, gpointer printer_data, GDestroyNotify destroy);
// void soup_logger_set_printer (::SoupLogger* logger, Soup::LoggerPrinter::cfunction_type printer, void* printer_data, GLib::DestroyNotify::cfunction_type destroy);
void base::LoggerBase::set_printer (Soup::LoggerPrinter printer) noexcept
{
  typedef void (*call_wrap_t) (::SoupLogger* logger, Soup::LoggerPrinter::cfunction_type printer, void* printer_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_logger_set_printer;
  auto printer_wrap_ = printer ? unwrap (std::move (printer), gi::scope_notified) : nullptr;
  call_wrap_v ((::SoupLogger*) (gobj_()), (Soup::LoggerPrinter::cfunction_type) (printer_wrap_ ? &printer_wrap_->wrapper : nullptr), (void*) (printer_wrap_), (GLib::DestroyNotify::cfunction_type) (printer_wrap_ ? &printer_wrap_->destroy : nullptr));
}

// void soup_logger_set_request_filter (SoupLogger* logger, SoupLoggerFilter request_filter, gpointer filter_data, GDestroyNotify destroy);
// void soup_logger_set_request_filter (::SoupLogger* logger, Soup::LoggerFilter::cfunction_type request_filter, void* filter_data, GLib::DestroyNotify::cfunction_type destroy);
void base::LoggerBase::set_request_filter (Soup::LoggerFilter request_filter) noexcept
{
  typedef void (*call_wrap_t) (::SoupLogger* logger, Soup::LoggerFilter::cfunction_type request_filter, void* filter_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_logger_set_request_filter;
  auto request_filter_wrap_ = request_filter ? unwrap (std::move (request_filter), gi::scope_notified) : nullptr;
  call_wrap_v ((::SoupLogger*) (gobj_()), (Soup::LoggerFilter::cfunction_type) (request_filter_wrap_ ? &request_filter_wrap_->wrapper : nullptr), (void*) (request_filter_wrap_), (GLib::DestroyNotify::cfunction_type) (request_filter_wrap_ ? &request_filter_wrap_->destroy : nullptr));
}

// void soup_logger_set_response_filter (SoupLogger* logger, SoupLoggerFilter response_filter, gpointer filter_data, GDestroyNotify destroy);
// void soup_logger_set_response_filter (::SoupLogger* logger, Soup::LoggerFilter::cfunction_type response_filter, void* filter_data, GLib::DestroyNotify::cfunction_type destroy);
void base::LoggerBase::set_response_filter (Soup::LoggerFilter response_filter) noexcept
{
  typedef void (*call_wrap_t) (::SoupLogger* logger, Soup::LoggerFilter::cfunction_type response_filter, void* filter_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_logger_set_response_filter;
  auto response_filter_wrap_ = response_filter ? unwrap (std::move (response_filter), gi::scope_notified) : nullptr;
  call_wrap_v ((::SoupLogger*) (gobj_()), (Soup::LoggerFilter::cfunction_type) (response_filter_wrap_ ? &response_filter_wrap_->wrapper : nullptr), (void*) (response_filter_wrap_), (GLib::DestroyNotify::cfunction_type) (response_filter_wrap_ ? &response_filter_wrap_->destroy : nullptr));
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/logger_extra_def_impl.hpp>)
#include <soup/logger_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/logger_extra_impl.hpp>)
#include <soup/logger_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void LoggerClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupLoggerClass *methods = (::SoupLoggerClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
