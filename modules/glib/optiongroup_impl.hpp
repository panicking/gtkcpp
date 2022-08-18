// AUTO-GENERATED

#ifndef _GI_GLIB_OPTIONGROUP_IMPL_HPP_
#define _GI_GLIB_OPTIONGROUP_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GOptionGroup* g_option_group_new (const gchar* name, const gchar* description, const gchar* help_description, gpointer user_data, GDestroyNotify destroy);
// ::GOptionGroup* g_option_group_new (const char* name, const char* description, const char* help_description, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; callback misses closure info

// void g_option_group_add_entries (GOptionGroup* group, const GOptionEntry* entries);
// void g_option_group_add_entries (::GOptionGroup* group, const ::GOptionEntry** entries);
// SKIP; inconsistent in entries pointer depth (1 vs 2)

// void g_option_group_free (GOptionGroup* group);
// void g_option_group_free (::GOptionGroup* group);
// IGNORE; marked ignore

// GOptionGroup* g_option_group_ref (GOptionGroup* group);
// ::GOptionGroup* g_option_group_ref (::GOptionGroup* group);
// IGNORE; marked ignore

// void g_option_group_set_error_hook (GOptionGroup* group, GOptionErrorFunc error_func);
// void g_option_group_set_error_hook (::GOptionGroup* group,  error_func);
// IGNORE; not introspectable, error_func type  not supported

// void g_option_group_set_parse_hooks (GOptionGroup* group, GOptionParseFunc pre_parse_func, GOptionParseFunc post_parse_func);
// void g_option_group_set_parse_hooks (::GOptionGroup* group,  pre_parse_func,  post_parse_func);
// IGNORE; not introspectable, post_parse_func type  not supported, pre_parse_func type  not supported

// void g_option_group_set_translate_func (GOptionGroup* group, GTranslateFunc func, gpointer data, GDestroyNotify destroy_notify);
// void g_option_group_set_translate_func (::GOptionGroup* group,  func, void* data, GLib::DestroyNotify::cfunction_type destroy_notify);
// SKIP; func type  not supported

// void g_option_group_set_translation_domain (GOptionGroup* group, const gchar* domain);
// void g_option_group_set_translation_domain (::GOptionGroup* group, const char* domain);
void base::OptionGroupBase::set_translation_domain (const std::string & domain) noexcept
{
  typedef void (*call_wrap_t) (::GOptionGroup* group, const char* domain);
  call_wrap_t call_wrap_v = (call_wrap_t) g_option_group_set_translation_domain;
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GOptionGroup*) (gobj_()), (const char*) (domain_to_c));
}

// void g_option_group_unref (GOptionGroup* group);
// void g_option_group_unref (::GOptionGroup* group);
// IGNORE; marked ignore


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/optiongroup_extra_def_impl.hpp>)
#include <glib/optiongroup_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/optiongroup_extra_impl.hpp>)
#include <glib/optiongroup_extra_impl.hpp>
#endif
#endif

#endif
