// AUTO-GENERATED

#ifndef _GI_WEBKIT2_MEMORYPRESSURESETTINGS_HPP_
#define _GI_WEBKIT2_MEMORYPRESSURESETTINGS_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class MemoryPressureSettings;

namespace base {


#define GI_WEBKIT2_MEMORYPRESSURESETTINGS_BASE base::MemoryPressureSettingsBase
class MemoryPressureSettingsBase : public gi::detail::GBoxedWrapper<MemoryPressureSettingsBase, ::WebKitMemoryPressureSettings>
{
typedef gi::detail::GBoxedWrapper<MemoryPressureSettingsBase, ::WebKitMemoryPressureSettings> super_type;
public:

MemoryPressureSettingsBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return webkit_memory_pressure_settings_get_type(); } 

// WebKitMemoryPressureSettings* webkit_memory_pressure_settings_new ();
// ::WebKitMemoryPressureSettings* webkit_memory_pressure_settings_new ();
static GI_INLINE_DECL WebKit2::MemoryPressureSettings new_ () noexcept;

// WebKitMemoryPressureSettings* webkit_memory_pressure_settings_copy (WebKitMemoryPressureSettings* settings);
// ::WebKitMemoryPressureSettings* webkit_memory_pressure_settings_copy (::WebKitMemoryPressureSettings* settings);
GI_INLINE_DECL WebKit2::MemoryPressureSettings copy () noexcept;

// void webkit_memory_pressure_settings_free (WebKitMemoryPressureSettings* settings);
// void webkit_memory_pressure_settings_free (::WebKitMemoryPressureSettings* settings);
// IGNORE; marked ignore

// gdouble webkit_memory_pressure_settings_get_conservative_threshold (WebKitMemoryPressureSettings* settings);
// gdouble webkit_memory_pressure_settings_get_conservative_threshold (::WebKitMemoryPressureSettings* settings);
GI_INLINE_DECL gdouble get_conservative_threshold () noexcept;

// gdouble webkit_memory_pressure_settings_get_kill_threshold (WebKitMemoryPressureSettings* settings);
// gdouble webkit_memory_pressure_settings_get_kill_threshold (::WebKitMemoryPressureSettings* settings);
GI_INLINE_DECL gdouble get_kill_threshold () noexcept;

// guint webkit_memory_pressure_settings_get_memory_limit (WebKitMemoryPressureSettings* settings);
// guint webkit_memory_pressure_settings_get_memory_limit (::WebKitMemoryPressureSettings* settings);
GI_INLINE_DECL guint get_memory_limit () noexcept;

// gdouble webkit_memory_pressure_settings_get_poll_interval (WebKitMemoryPressureSettings* settings);
// gdouble webkit_memory_pressure_settings_get_poll_interval (::WebKitMemoryPressureSettings* settings);
GI_INLINE_DECL gdouble get_poll_interval () noexcept;

// gdouble webkit_memory_pressure_settings_get_strict_threshold (WebKitMemoryPressureSettings* settings);
// gdouble webkit_memory_pressure_settings_get_strict_threshold (::WebKitMemoryPressureSettings* settings);
GI_INLINE_DECL gdouble get_strict_threshold () noexcept;

// void webkit_memory_pressure_settings_set_conservative_threshold (WebKitMemoryPressureSettings* settings, gdouble value);
// void webkit_memory_pressure_settings_set_conservative_threshold (::WebKitMemoryPressureSettings* settings, gdouble value);
GI_INLINE_DECL void set_conservative_threshold (gdouble value) noexcept;

// void webkit_memory_pressure_settings_set_kill_threshold (WebKitMemoryPressureSettings* settings, gdouble value);
// void webkit_memory_pressure_settings_set_kill_threshold (::WebKitMemoryPressureSettings* settings, gdouble value);
GI_INLINE_DECL void set_kill_threshold (gdouble value) noexcept;

// void webkit_memory_pressure_settings_set_memory_limit (WebKitMemoryPressureSettings* settings, guint memory_limit);
// void webkit_memory_pressure_settings_set_memory_limit (::WebKitMemoryPressureSettings* settings, guint memory_limit);
GI_INLINE_DECL void set_memory_limit (guint memory_limit) noexcept;

// void webkit_memory_pressure_settings_set_poll_interval (WebKitMemoryPressureSettings* settings, gdouble value);
// void webkit_memory_pressure_settings_set_poll_interval (::WebKitMemoryPressureSettings* settings, gdouble value);
GI_INLINE_DECL void set_poll_interval (gdouble value) noexcept;

// void webkit_memory_pressure_settings_set_strict_threshold (WebKitMemoryPressureSettings* settings, gdouble value);
// void webkit_memory_pressure_settings_set_strict_threshold (::WebKitMemoryPressureSettings* settings, gdouble value);
GI_INLINE_DECL void set_strict_threshold (gdouble value) noexcept;

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/memorypressuresettings_extra_def.hpp>)
#include <webkit2/memorypressuresettings_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/memorypressuresettings_extra.hpp>)
#include <webkit2/memorypressuresettings_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class MemoryPressureSettings : public GI_WEBKIT2_MEMORYPRESSURESETTINGS_BASE
{ typedef GI_WEBKIT2_MEMORYPRESSURESETTINGS_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitMemoryPressureSettings>
{ typedef WebKit2::MemoryPressureSettings type; }; 

} // namespace repository

} // namespace gi

#endif
