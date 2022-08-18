// AUTO-GENERATED

#ifndef _GI_GST_PRESET_IMPL_HPP_
#define _GI_GST_PRESET_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// const gchar* gst_preset_get_app_dir ();
// const char* gst_preset_get_app_dir ();
std::string base::PresetBase::get_app_dir () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_preset_get_app_dir;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gst_preset_set_app_dir (const gchar* app_dir);
// gboolean gst_preset_set_app_dir (const char* app_dir);
bool base::PresetBase::set_app_dir (const std::string & app_dir) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* app_dir);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_preset_set_app_dir;
  auto app_dir_to_c = gi::unwrap (app_dir, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (app_dir_to_c));
  return _temp_ret;
}

// gboolean gst_preset_delete_preset (GstPreset* preset, const gchar* name);
// gboolean gst_preset_delete_preset (::GstPreset* preset, const char* name);
bool base::PresetBase::delete_preset (const std::string & name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPreset* preset, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_preset_delete_preset;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPreset*) (gobj_()), (const char*) (name_to_c));
  return _temp_ret;
}

// gboolean gst_preset_get_meta (GstPreset* preset, const gchar* name, const gchar* tag, gchar** value);
// gboolean gst_preset_get_meta (::GstPreset* preset, const char* name, const char* tag, char** value);
bool base::PresetBase::get_meta (const std::string & name, const std::string & tag, std::string & value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPreset* preset, const char* name, const char* tag, char** value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_preset_get_meta;
  char* value_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPreset*) (gobj_()), (const char*) (name_to_c), (const char*) (tag_to_c), (char**) (&value_o));
  value = gi::wrap (value_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string> base::PresetBase::get_meta (const std::string & name, const std::string & tag) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPreset* preset, const char* name, const char* tag, char** value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_preset_get_meta;
  char* value_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPreset*) (gobj_()), (const char*) (name_to_c), (const char*) (tag_to_c), (char**) (&value_o));
  return std::make_tuple (_temp_ret, gi::wrap (value_o, gi::transfer_full, gi::direction_out));
}

// gchar** gst_preset_get_preset_names (GstPreset* preset);
// char** gst_preset_get_preset_names (::GstPreset* preset);
std::vector<std::string> base::PresetBase::get_preset_names () noexcept
{
  typedef char** (*call_wrap_t) (::GstPreset* preset);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_preset_get_preset_names;
  auto _temp_ret = call_wrap_v ((::GstPreset*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// gchar** gst_preset_get_property_names (GstPreset* preset);
// char** gst_preset_get_property_names (::GstPreset* preset);
std::vector<std::string> base::PresetBase::get_property_names () noexcept
{
  typedef char** (*call_wrap_t) (::GstPreset* preset);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_preset_get_property_names;
  auto _temp_ret = call_wrap_v ((::GstPreset*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// gboolean gst_preset_is_editable (GstPreset* preset);
// gboolean gst_preset_is_editable (::GstPreset* preset);
bool base::PresetBase::is_editable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPreset* preset);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_preset_is_editable;
  auto _temp_ret = call_wrap_v ((::GstPreset*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_preset_load_preset (GstPreset* preset, const gchar* name);
// gboolean gst_preset_load_preset (::GstPreset* preset, const char* name);
bool base::PresetBase::load_preset (const std::string & name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPreset* preset, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_preset_load_preset;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPreset*) (gobj_()), (const char*) (name_to_c));
  return _temp_ret;
}

// gboolean gst_preset_rename_preset (GstPreset* preset, const gchar* old_name, const gchar* new_name);
// gboolean gst_preset_rename_preset (::GstPreset* preset, const char* old_name, const char* new_name);
bool base::PresetBase::rename_preset (const std::string & old_name, const std::string & new_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPreset* preset, const char* old_name, const char* new_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_preset_rename_preset;
  auto new_name_to_c = gi::unwrap (new_name, gi::transfer_none, gi::direction_in);
  auto old_name_to_c = gi::unwrap (old_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPreset*) (gobj_()), (const char*) (old_name_to_c), (const char*) (new_name_to_c));
  return _temp_ret;
}

// gboolean gst_preset_save_preset (GstPreset* preset, const gchar* name);
// gboolean gst_preset_save_preset (::GstPreset* preset, const char* name);
bool base::PresetBase::save_preset (const std::string & name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPreset* preset, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_preset_save_preset;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPreset*) (gobj_()), (const char*) (name_to_c));
  return _temp_ret;
}

// gboolean gst_preset_set_meta (GstPreset* preset, const gchar* name, const gchar* tag, const gchar* value);
// gboolean gst_preset_set_meta (::GstPreset* preset, const char* name, const char* tag, const char* value);
bool base::PresetBase::set_meta (const std::string & name, const std::string & tag, const std::string & value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPreset* preset, const char* name, const char* tag, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_preset_set_meta;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPreset*) (gobj_()), (const char*) (name_to_c), (const char*) (tag_to_c), (const char*) (value_to_c));
  return _temp_ret;
}
bool base::PresetBase::set_meta (const std::string & name, const std::string & tag) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPreset* preset, const char* name, const char* tag, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_preset_set_meta;
  auto value_to_c = nullptr;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPreset*) (gobj_()), (const char*) (name_to_c), (const char*) (tag_to_c), (const char*) (value_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/preset_extra_def_impl.hpp>)
#include <gst/preset_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/preset_extra_impl.hpp>)
#include <gst/preset_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void PresetInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GstPresetInterface *methods = (::GstPresetInterface *) interface_struct;
  (void) methods;

  methods->delete_preset = (decltype (methods->delete_preset)) detail::method_wrapper<self, bool (*) (const std::string & name), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::delete_preset_>;
  methods->load_preset = (decltype (methods->load_preset)) detail::method_wrapper<self, bool (*) (const std::string & name), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::load_preset_>;
  methods->rename_preset = (decltype (methods->rename_preset)) detail::method_wrapper<self, bool (*) (const std::string & old_name, const std::string & new_name), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::rename_preset_>;
  methods->save_preset = (decltype (methods->save_preset)) detail::method_wrapper<self, bool (*) (const std::string & name), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::save_preset_>;
  methods->set_meta = (decltype (methods->set_meta)) detail::method_wrapper<self, bool (*) (const std::string & name, const std::string & tag, const std::string & value), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::set_meta_>;
}

// gboolean Preset::delete_preset (GstPreset* preset, const gchar* name);
// gboolean Preset::delete_preset (::GstPreset* preset, const char* name);
bool PresetInterfaceClassImpl::delete_preset_ (const std::string & name) noexcept
{
  if (!get_struct_()->delete_preset) return bool{};
  typedef gboolean (*call_wrap_t) (::GstPreset* preset, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->delete_preset;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPreset*) (gobj_()), (const char*) (name_to_c));
  return _temp_ret;
}

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
bool PresetInterfaceClassImpl::load_preset_ (const std::string & name) noexcept
{
  if (!get_struct_()->load_preset) return bool{};
  typedef gboolean (*call_wrap_t) (::GstPreset* preset, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->load_preset;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPreset*) (gobj_()), (const char*) (name_to_c));
  return _temp_ret;
}

// gboolean Preset::rename_preset (GstPreset* preset, const gchar* old_name, const gchar* new_name);
// gboolean Preset::rename_preset (::GstPreset* preset, const char* old_name, const char* new_name);
bool PresetInterfaceClassImpl::rename_preset_ (const std::string & old_name, const std::string & new_name) noexcept
{
  if (!get_struct_()->rename_preset) return bool{};
  typedef gboolean (*call_wrap_t) (::GstPreset* preset, const char* old_name, const char* new_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->rename_preset;
  auto new_name_to_c = gi::unwrap (new_name, gi::transfer_none, gi::direction_in);
  auto old_name_to_c = gi::unwrap (old_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPreset*) (gobj_()), (const char*) (old_name_to_c), (const char*) (new_name_to_c));
  return _temp_ret;
}

// gboolean Preset::save_preset (GstPreset* preset, const gchar* name);
// gboolean Preset::save_preset (::GstPreset* preset, const char* name);
bool PresetInterfaceClassImpl::save_preset_ (const std::string & name) noexcept
{
  if (!get_struct_()->save_preset) return bool{};
  typedef gboolean (*call_wrap_t) (::GstPreset* preset, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->save_preset;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPreset*) (gobj_()), (const char*) (name_to_c));
  return _temp_ret;
}

// gboolean Preset::set_meta (GstPreset* preset, const gchar* name, const gchar* tag, const gchar* value);
// gboolean Preset::set_meta (::GstPreset* preset, const char* name, const char* tag, const char* value);
bool PresetInterfaceClassImpl::set_meta_ (const std::string & name, const std::string & tag, const std::string & value) noexcept
{
  if (!get_struct_()->set_meta) return bool{};
  typedef gboolean (*call_wrap_t) (::GstPreset* preset, const char* name, const char* tag, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_meta;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPreset*) (gobj_()), (const char*) (name_to_c), (const char*) (tag_to_c), (const char*) (value_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
