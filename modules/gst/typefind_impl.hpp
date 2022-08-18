// AUTO-GENERATED

#ifndef _GI_GST_TYPEFIND_IMPL_HPP_
#define _GI_GST_TYPEFIND_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// guint64 gst_type_find_get_length (GstTypeFind* find);
// guint64 gst_type_find_get_length (::GstTypeFind* find);
guint64 base::TypeFindBase::get_length () noexcept
{
  typedef guint64 (*call_wrap_t) (::GstTypeFind* find);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_type_find_get_length;
  auto _temp_ret = call_wrap_v ((::GstTypeFind*) (gobj_()));
  return _temp_ret;
}

// const guint8* gst_type_find_peek (GstTypeFind* find, gint64 offset, guint size);
// const guint8* gst_type_find_peek (::GstTypeFind* find, gint64 offset, guint size);
std::vector<guint8> base::TypeFindBase::peek (gint64 offset, guint size) noexcept
{
  typedef const guint8* (*call_wrap_t) (::GstTypeFind* find, gint64 offset, guint size);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_type_find_peek;
  auto offset_to_c = offset;
  std::vector<guint8> _temp_ret;
  auto _ret_o = call_wrap_v ((::GstTypeFind*) (gobj_()), (gint64) (offset_to_c), (guint) (size));
  _temp_ret.resize(size);
  detail::wrap_array (_ret_o, gi::transfer_none, size, _temp_ret.data());
  return _temp_ret;
}

// void gst_type_find_suggest (GstTypeFind* find, guint probability, GstCaps* caps);
// void gst_type_find_suggest (::GstTypeFind* find, guint probability, ::GstCaps* caps);
void base::TypeFindBase::suggest (guint probability, Gst::Caps caps) noexcept
{
  typedef void (*call_wrap_t) (::GstTypeFind* find, guint probability, ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_type_find_suggest;
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  auto probability_to_c = probability;
  call_wrap_v ((::GstTypeFind*) (gobj_()), (guint) (probability_to_c), (::GstCaps*) (caps_to_c));
}

// void gst_type_find_suggest_empty_simple (GstTypeFind* find, guint probability, const char* media_type);
// void gst_type_find_suggest_empty_simple (::GstTypeFind* find, guint probability, const char* media_type);
void base::TypeFindBase::suggest_empty_simple (guint probability, const std::string & media_type) noexcept
{
  typedef void (*call_wrap_t) (::GstTypeFind* find, guint probability, const char* media_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_type_find_suggest_empty_simple;
  auto media_type_to_c = gi::unwrap (media_type, gi::transfer_none, gi::direction_in);
  auto probability_to_c = probability;
  call_wrap_v ((::GstTypeFind*) (gobj_()), (guint) (probability_to_c), (const char*) (media_type_to_c));
}

// void gst_type_find_suggest_simple (GstTypeFind* find, guint probability, const char* media_type, const char* fieldname);
// void gst_type_find_suggest_simple (::GstTypeFind* find, guint probability, const char* media_type, const char* fieldname);
// IGNORE; not introspectable, varargs not supported

// gboolean gst_type_find_register (GstPlugin* plugin, const gchar* name, guint rank, GstTypeFindFunction func, const gchar* extensions, GstCaps* possible_caps, gpointer data, GDestroyNotify data_notify);
// gboolean gst_type_find_register (::GstPlugin* plugin, const char* name, guint rank, Gst::TypeFindFunction::cfunction_type func, const char* extensions, ::GstCaps* possible_caps, void* data, GLib::DestroyNotify::cfunction_type data_notify);
bool base::TypeFindBase::register_ (Gst::Plugin plugin, const std::string & name, guint rank, Gst::TypeFindFunction func, const std::string & extensions, Gst::Caps possible_caps) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPlugin* plugin, const char* name, guint rank, Gst::TypeFindFunction::cfunction_type func, const char* extensions, ::GstCaps* possible_caps, void* data, GLib::DestroyNotify::cfunction_type data_notify);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_type_find_register;
  auto possible_caps_to_c = gi::unwrap (possible_caps, gi::transfer_none, gi::direction_in);
  auto extensions_to_c = gi::unwrap (extensions, gi::transfer_none, gi::direction_in);
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  auto rank_to_c = rank;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto plugin_to_c = gi::unwrap (plugin, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPlugin*) (plugin_to_c), (const char*) (name_to_c), (guint) (rank_to_c), (Gst::TypeFindFunction::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (const char*) (extensions_to_c), (::GstCaps*) (possible_caps_to_c), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
  return _temp_ret;
}
bool base::TypeFindBase::register_ (const std::string & name, guint rank, Gst::TypeFindFunction func) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPlugin* plugin, const char* name, guint rank, Gst::TypeFindFunction::cfunction_type func, const char* extensions, ::GstCaps* possible_caps, void* data, GLib::DestroyNotify::cfunction_type data_notify);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_type_find_register;
  auto possible_caps_to_c = nullptr;
  auto extensions_to_c = nullptr;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  auto rank_to_c = rank;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto plugin_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstPlugin*) (plugin_to_c), (const char*) (name_to_c), (guint) (rank_to_c), (Gst::TypeFindFunction::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (const char*) (extensions_to_c), (::GstCaps*) (possible_caps_to_c), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
  return _temp_ret;
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/typefind_extra_def_impl.hpp>)
#include <gst/typefind_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/typefind_extra_impl.hpp>)
#include <gst/typefind_extra_impl.hpp>
#endif
#endif

#endif
