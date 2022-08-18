// AUTO-GENERATED

#ifndef _GI_GST_TAGSETTER_IMPL_HPP_
#define _GI_GST_TAGSETTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// void gst_tag_setter_add_tag_valist (GstTagSetter* setter, GstTagMergeMode mode, const gchar* tag, va_list var_args);
// void gst_tag_setter_add_tag_valist (::GstTagSetter* setter, ::GstTagMergeMode mode, const char* tag,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// void gst_tag_setter_add_tag_valist_values (GstTagSetter* setter, GstTagMergeMode mode, const gchar* tag, va_list var_args);
// void gst_tag_setter_add_tag_valist_values (::GstTagSetter* setter, ::GstTagMergeMode mode, const char* tag,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// void gst_tag_setter_add_tag_value (GstTagSetter* setter, GstTagMergeMode mode, const gchar* tag, const GValue* value);
// void gst_tag_setter_add_tag_value (::GstTagSetter* setter, ::GstTagMergeMode mode, const char* tag, const ::GValue* value);
void base::TagSetterBase::add_tag_value (Gst::TagMergeMode mode, const std::string & tag, const GObject::Value & value) noexcept
{
  typedef void (*call_wrap_t) (::GstTagSetter* setter, ::GstTagMergeMode mode, const char* tag, const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_setter_add_tag_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto mode_to_c = gi::unwrap (mode);
  call_wrap_v ((::GstTagSetter*) (gobj_()), (::GstTagMergeMode) (mode_to_c), (const char*) (tag_to_c), (const ::GValue*) (value_to_c));
}

// void gst_tag_setter_add_tag_values (GstTagSetter* setter, GstTagMergeMode mode, const gchar* tag);
// void gst_tag_setter_add_tag_values (::GstTagSetter* setter, ::GstTagMergeMode mode, const char* tag);
// IGNORE; not introspectable, varargs not supported

// void gst_tag_setter_add_tags (GstTagSetter* setter, GstTagMergeMode mode, const gchar* tag);
// void gst_tag_setter_add_tags (::GstTagSetter* setter, ::GstTagMergeMode mode, const char* tag);
// IGNORE; not introspectable, varargs not supported

// const GstTagList* gst_tag_setter_get_tag_list (GstTagSetter* setter);
// const ::GstTagList* gst_tag_setter_get_tag_list (::GstTagSetter* setter);
Gst::TagList base::TagSetterBase::get_tag_list () noexcept
{
  typedef const ::GstTagList* (*call_wrap_t) (::GstTagSetter* setter);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_setter_get_tag_list;
  auto _temp_ret = call_wrap_v ((::GstTagSetter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstTagMergeMode gst_tag_setter_get_tag_merge_mode (GstTagSetter* setter);
// ::GstTagMergeMode gst_tag_setter_get_tag_merge_mode (::GstTagSetter* setter);
Gst::TagMergeMode base::TagSetterBase::get_tag_merge_mode () noexcept
{
  typedef ::GstTagMergeMode (*call_wrap_t) (::GstTagSetter* setter);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_setter_get_tag_merge_mode;
  auto _temp_ret = call_wrap_v ((::GstTagSetter*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gst_tag_setter_merge_tags (GstTagSetter* setter, const GstTagList* list, GstTagMergeMode mode);
// void gst_tag_setter_merge_tags (::GstTagSetter* setter, const ::GstTagList* list, ::GstTagMergeMode mode);
void base::TagSetterBase::merge_tags (const Gst::TagList & list, Gst::TagMergeMode mode) noexcept
{
  typedef void (*call_wrap_t) (::GstTagSetter* setter, const ::GstTagList* list, ::GstTagMergeMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_setter_merge_tags;
  auto mode_to_c = gi::unwrap (mode);
  auto list_to_c = gi::unwrap (list, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstTagSetter*) (gobj_()), (const ::GstTagList*) (list_to_c), (::GstTagMergeMode) (mode_to_c));
}

// void gst_tag_setter_reset_tags (GstTagSetter* setter);
// void gst_tag_setter_reset_tags (::GstTagSetter* setter);
void base::TagSetterBase::reset_tags () noexcept
{
  typedef void (*call_wrap_t) (::GstTagSetter* setter);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_setter_reset_tags;
  call_wrap_v ((::GstTagSetter*) (gobj_()));
}

// void gst_tag_setter_set_tag_merge_mode (GstTagSetter* setter, GstTagMergeMode mode);
// void gst_tag_setter_set_tag_merge_mode (::GstTagSetter* setter, ::GstTagMergeMode mode);
void base::TagSetterBase::set_tag_merge_mode (Gst::TagMergeMode mode) noexcept
{
  typedef void (*call_wrap_t) (::GstTagSetter* setter, ::GstTagMergeMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_setter_set_tag_merge_mode;
  auto mode_to_c = gi::unwrap (mode);
  call_wrap_v ((::GstTagSetter*) (gobj_()), (::GstTagMergeMode) (mode_to_c));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/tagsetter_extra_def_impl.hpp>)
#include <gst/tagsetter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/tagsetter_extra_impl.hpp>)
#include <gst/tagsetter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void TagSetterInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GstTagSetterInterface *methods = (::GstTagSetterInterface *) interface_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
