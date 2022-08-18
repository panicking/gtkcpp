// AUTO-GENERATED

#ifndef _GI_GST_PRESET_HPP_
#define _GI_GST_PRESET_HPP_


namespace gi {

namespace repository {

namespace Gst {


class Preset;

namespace base {


#define GI_GST_PRESET_BASE base::PresetBase
class PresetBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GstPreset BaseObjectType;

PresetBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_preset_get_type(); } 

// const gchar* gst_preset_get_app_dir ();
// const char* gst_preset_get_app_dir ();
static GI_INLINE_DECL std::string get_app_dir () noexcept;

// gboolean gst_preset_set_app_dir (const gchar* app_dir);
// gboolean gst_preset_set_app_dir (const char* app_dir);
static GI_INLINE_DECL bool set_app_dir (const std::string & app_dir) noexcept;

// gboolean gst_preset_delete_preset (GstPreset* preset, const gchar* name);
// gboolean gst_preset_delete_preset (::GstPreset* preset, const char* name);
GI_INLINE_DECL bool delete_preset (const std::string & name) noexcept;

// gboolean gst_preset_get_meta (GstPreset* preset, const gchar* name, const gchar* tag, gchar** value);
// gboolean gst_preset_get_meta (::GstPreset* preset, const char* name, const char* tag, char** value);
GI_INLINE_DECL bool get_meta (const std::string & name, const std::string & tag, std::string & value) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string> get_meta (const std::string & name, const std::string & tag) noexcept;

// gchar** gst_preset_get_preset_names (GstPreset* preset);
// char** gst_preset_get_preset_names (::GstPreset* preset);
GI_INLINE_DECL std::vector<std::string> get_preset_names () noexcept;

// gchar** gst_preset_get_property_names (GstPreset* preset);
// char** gst_preset_get_property_names (::GstPreset* preset);
GI_INLINE_DECL std::vector<std::string> get_property_names () noexcept;

// gboolean gst_preset_is_editable (GstPreset* preset);
// gboolean gst_preset_is_editable (::GstPreset* preset);
GI_INLINE_DECL bool is_editable () noexcept;

// gboolean gst_preset_load_preset (GstPreset* preset, const gchar* name);
// gboolean gst_preset_load_preset (::GstPreset* preset, const char* name);
GI_INLINE_DECL bool load_preset (const std::string & name) noexcept;

// gboolean gst_preset_rename_preset (GstPreset* preset, const gchar* old_name, const gchar* new_name);
// gboolean gst_preset_rename_preset (::GstPreset* preset, const char* old_name, const char* new_name);
GI_INLINE_DECL bool rename_preset (const std::string & old_name, const std::string & new_name) noexcept;

// gboolean gst_preset_save_preset (GstPreset* preset, const gchar* name);
// gboolean gst_preset_save_preset (::GstPreset* preset, const char* name);
GI_INLINE_DECL bool save_preset (const std::string & name) noexcept;

// gboolean gst_preset_set_meta (GstPreset* preset, const gchar* name, const gchar* tag, const gchar* value);
// gboolean gst_preset_set_meta (::GstPreset* preset, const char* name, const char* tag, const char* value);
GI_INLINE_DECL bool set_meta (const std::string & name, const std::string & tag, const std::string & value) noexcept;
GI_INLINE_DECL bool set_meta (const std::string & name, const std::string & tag) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/preset_extra_def.hpp>)
#include <gst/preset_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/preset_extra.hpp>)
#include <gst/preset_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Preset : public GI_GST_PRESET_BASE
{ typedef GI_GST_PRESET_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstPreset>
{ typedef Gst::Preset type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class PresetInterfaceDef
{
typedef PresetInterfaceDef self;
public:
typedef Gst::Preset instance_type;
typedef ::GstPresetInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Preset::delete_preset (GstPreset* preset, const gchar* name);
// gboolean Preset::delete_preset (::GstPreset* preset, const char* name);
virtual bool delete_preset_ (const std::string & name) noexcept = 0;

// gboolean Preset::get_meta (GstPreset* preset, const gchar* name, const gchar* tag, gchar** value);
// gboolean Preset::get_meta (::GstPreset* preset, const char* name, const char* tag, char** value);
// SKIP; virtual-method out parameter not supported

// gchar** Preset::get_preset_names (GstPreset* preset);
// char** Preset::get_preset_names (::GstPreset* preset);
// SKIP; container return not supported

// gchar** Preset::get_property_names (GstPreset* preset);
// char** Preset::get_property_names (::GstPreset* preset);
// SKIP; container return not supported

// gboolean Preset::load_preset (GstPreset* preset, const gchar* name);
// gboolean Preset::load_preset (::GstPreset* preset, const char* name);
virtual bool load_preset_ (const std::string & name) noexcept = 0;

// gboolean Preset::rename_preset (GstPreset* preset, const gchar* old_name, const gchar* new_name);
// gboolean Preset::rename_preset (::GstPreset* preset, const char* old_name, const char* new_name);
virtual bool rename_preset_ (const std::string & old_name, const std::string & new_name) noexcept = 0;

// gboolean Preset::save_preset (GstPreset* preset, const gchar* name);
// gboolean Preset::save_preset (::GstPreset* preset, const char* name);
virtual bool save_preset_ (const std::string & name) noexcept = 0;

// gboolean Preset::set_meta (GstPreset* preset, const gchar* name, const gchar* tag, const gchar* value);
// gboolean Preset::set_meta (::GstPreset* preset, const char* name, const char* tag, const char* value);
virtual bool set_meta_ (const std::string & name, const std::string & tag, const std::string & value) noexcept = 0;


};

using PresetImpl = detail::InterfaceImpl<PresetInterfaceDef>;

class PresetInterfaceClassImpl: public detail::InterfaceClassImpl<PresetImpl>
{
typedef PresetInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<PresetImpl> super;

protected:
using super::super;

// gboolean Preset::delete_preset (GstPreset* preset, const gchar* name);
// gboolean Preset::delete_preset (::GstPreset* preset, const char* name);
GI_INLINE_DECL bool delete_preset_ (const std::string & name) noexcept override;

// gboolean Preset::get_meta (GstPreset* preset, const gchar* name, const gchar* tag, gchar** value);
// gboolean Preset::get_meta (::GstPreset* preset, const char* name, const char* tag, char** value);
// SKIP; virtual-method out parameter not supported

// gchar** Preset::get_preset_names (GstPreset* preset);
// char** Preset::get_preset_names (::GstPreset* preset);
// SKIP; container return not supported

// gchar** Preset::get_property_names (GstPreset* preset);
// char** Preset::get_property_names (::GstPreset* preset);
// SKIP; container return not supported

// gboolean Preset::load_preset (GstPreset* preset, const gchar* name);
// gboolean Preset::load_preset (::GstPreset* preset, const char* name);
GI_INLINE_DECL bool load_preset_ (const std::string & name) noexcept override;

// gboolean Preset::rename_preset (GstPreset* preset, const gchar* old_name, const gchar* new_name);
// gboolean Preset::rename_preset (::GstPreset* preset, const char* old_name, const char* new_name);
GI_INLINE_DECL bool rename_preset_ (const std::string & old_name, const std::string & new_name) noexcept override;

// gboolean Preset::save_preset (GstPreset* preset, const gchar* name);
// gboolean Preset::save_preset (::GstPreset* preset, const char* name);
GI_INLINE_DECL bool save_preset_ (const std::string & name) noexcept override;

// gboolean Preset::set_meta (GstPreset* preset, const gchar* name, const gchar* tag, const gchar* value);
// gboolean Preset::set_meta (::GstPreset* preset, const char* name, const char* tag, const char* value);
GI_INLINE_DECL bool set_meta_ (const std::string & name, const std::string & tag, const std::string & value) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
