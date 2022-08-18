// AUTO-GENERATED

#ifndef _GI_GST_TRACER_IMPL_HPP_
#define _GI_GST_TRACER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// gboolean gst_tracer_register (GstPlugin* plugin, const gchar* name, GType type);
// gboolean gst_tracer_register (::GstPlugin* plugin, const char* name, GType type);
bool base::TracerBase::register_ (Gst::Plugin plugin, const std::string & name, GType type) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPlugin* plugin, const char* name, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tracer_register;
  auto type_to_c = type;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto plugin_to_c = gi::unwrap (plugin, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPlugin*) (plugin_to_c), (const char*) (name_to_c), (GType) (type_to_c));
  return _temp_ret;
}
bool base::TracerBase::register_ (const std::string & name, GType type) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPlugin* plugin, const char* name, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tracer_register;
  auto type_to_c = type;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto plugin_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstPlugin*) (plugin_to_c), (const char*) (name_to_c), (GType) (type_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/tracer_extra_def_impl.hpp>)
#include <gst/tracer_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/tracer_extra_impl.hpp>)
#include <gst/tracer_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void TracerClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstTracerClass *methods = (::GstTracerClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
