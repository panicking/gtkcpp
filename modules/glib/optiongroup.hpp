// AUTO-GENERATED

#ifndef _GI_GLIB_OPTIONGROUP_HPP_
#define _GI_GLIB_OPTIONGROUP_HPP_


namespace gi {

namespace repository {

namespace GLib {

class OptionEntry;

class OptionGroup;

namespace base {


#define GI_GLIB_OPTIONGROUP_BASE base::OptionGroupBase
class OptionGroupBase : public gi::detail::GBoxedWrapper<OptionGroupBase, ::GOptionGroup>
{
typedef gi::detail::GBoxedWrapper<OptionGroupBase, ::GOptionGroup> super_type;
public:

OptionGroupBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_option_group_get_type(); } 

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
GI_INLINE_DECL void set_translation_domain (const std::string & domain) noexcept;

// void g_option_group_unref (GOptionGroup* group);
// void g_option_group_unref (::GOptionGroup* group);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/optiongroup_extra_def.hpp>)
#include <glib/optiongroup_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/optiongroup_extra.hpp>)
#include <glib/optiongroup_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class OptionGroup : public GI_GLIB_OPTIONGROUP_BASE
{ typedef GI_GLIB_OPTIONGROUP_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GOptionGroup>
{ typedef GLib::OptionGroup type; }; 

} // namespace repository

} // namespace gi

#endif
