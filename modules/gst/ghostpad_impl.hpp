// AUTO-GENERATED

#ifndef _GI_GST_GHOSTPAD_IMPL_HPP_
#define _GI_GST_GHOSTPAD_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstPad* gst_ghost_pad_new (const gchar* name, GstPad* target);
// ::GstGhostPad* gst_ghost_pad_new (const char* name, ::GstPad* target);
Gst::GhostPad base::GhostPadBase::new_ (const std::string & name, Gst::Pad target) noexcept
{
  typedef ::GstGhostPad* (*call_wrap_t) (const char* name, ::GstPad* target);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_ghost_pad_new;
  auto target_to_c = gi::unwrap (target, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (::GstPad*) (target_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::GhostPad base::GhostPadBase::new_ (Gst::Pad target) noexcept
{
  typedef ::GstGhostPad* (*call_wrap_t) (const char* name, ::GstPad* target);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_ghost_pad_new;
  auto target_to_c = gi::unwrap (target, gi::transfer_none, gi::direction_in);
  auto name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (::GstPad*) (target_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstPad* gst_ghost_pad_new_from_template (const gchar* name, GstPad* target, GstPadTemplate* templ);
// ::GstGhostPad* gst_ghost_pad_new_from_template (const char* name, ::GstPad* target, ::GstPadTemplate* templ);
Gst::GhostPad base::GhostPadBase::new_from_template (const std::string & name, Gst::Pad target, Gst::PadTemplate templ) noexcept
{
  typedef ::GstGhostPad* (*call_wrap_t) (const char* name, ::GstPad* target, ::GstPadTemplate* templ);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_ghost_pad_new_from_template;
  auto templ_to_c = gi::unwrap (templ, gi::transfer_none, gi::direction_in);
  auto target_to_c = gi::unwrap (target, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (::GstPad*) (target_to_c), (::GstPadTemplate*) (templ_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::GhostPad base::GhostPadBase::new_from_template (Gst::Pad target, Gst::PadTemplate templ) noexcept
{
  typedef ::GstGhostPad* (*call_wrap_t) (const char* name, ::GstPad* target, ::GstPadTemplate* templ);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_ghost_pad_new_from_template;
  auto templ_to_c = gi::unwrap (templ, gi::transfer_none, gi::direction_in);
  auto target_to_c = gi::unwrap (target, gi::transfer_none, gi::direction_in);
  auto name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (::GstPad*) (target_to_c), (::GstPadTemplate*) (templ_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstPad* gst_ghost_pad_new_no_target (const gchar* name, GstPadDirection dir);
// ::GstGhostPad* gst_ghost_pad_new_no_target (const char* name, ::GstPadDirection dir);
Gst::GhostPad base::GhostPadBase::new_no_target (const std::string & name, Gst::PadDirection dir) noexcept
{
  typedef ::GstGhostPad* (*call_wrap_t) (const char* name, ::GstPadDirection dir);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_ghost_pad_new_no_target;
  auto dir_to_c = gi::unwrap (dir);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (::GstPadDirection) (dir_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::GhostPad base::GhostPadBase::new_no_target (Gst::PadDirection dir) noexcept
{
  typedef ::GstGhostPad* (*call_wrap_t) (const char* name, ::GstPadDirection dir);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_ghost_pad_new_no_target;
  auto dir_to_c = gi::unwrap (dir);
  auto name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (::GstPadDirection) (dir_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstPad* gst_ghost_pad_new_no_target_from_template (const gchar* name, GstPadTemplate* templ);
// ::GstGhostPad* gst_ghost_pad_new_no_target_from_template (const char* name, ::GstPadTemplate* templ);
Gst::GhostPad base::GhostPadBase::new_no_target_from_template (const std::string & name, Gst::PadTemplate templ) noexcept
{
  typedef ::GstGhostPad* (*call_wrap_t) (const char* name, ::GstPadTemplate* templ);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_ghost_pad_new_no_target_from_template;
  auto templ_to_c = gi::unwrap (templ, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (::GstPadTemplate*) (templ_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::GhostPad base::GhostPadBase::new_no_target_from_template (Gst::PadTemplate templ) noexcept
{
  typedef ::GstGhostPad* (*call_wrap_t) (const char* name, ::GstPadTemplate* templ);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_ghost_pad_new_no_target_from_template;
  auto templ_to_c = gi::unwrap (templ, gi::transfer_none, gi::direction_in);
  auto name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (::GstPadTemplate*) (templ_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gst_ghost_pad_activate_mode_default (GstPad* pad, GstObject* parent, GstPadMode mode, gboolean active);
// gboolean gst_ghost_pad_activate_mode_default (::GstPad* pad, ::GstObject* parent, ::GstPadMode mode, gboolean active);
bool base::GhostPadBase::activate_mode_default (Gst::Pad pad, Gst::Object parent, Gst::PadMode mode, gboolean active) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstObject* parent, ::GstPadMode mode, gboolean active);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_ghost_pad_activate_mode_default;
  auto active_to_c = active;
  auto mode_to_c = gi::unwrap (mode);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto pad_to_c = gi::unwrap (pad, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (pad_to_c), (::GstObject*) (parent_to_c), (::GstPadMode) (mode_to_c), (gboolean) (active_to_c));
  return _temp_ret;
}
bool base::GhostPadBase::activate_mode_default (Gst::Pad pad, Gst::PadMode mode, gboolean active) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstObject* parent, ::GstPadMode mode, gboolean active);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_ghost_pad_activate_mode_default;
  auto active_to_c = active;
  auto mode_to_c = gi::unwrap (mode);
  auto parent_to_c = nullptr;
  auto pad_to_c = gi::unwrap (pad, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (pad_to_c), (::GstObject*) (parent_to_c), (::GstPadMode) (mode_to_c), (gboolean) (active_to_c));
  return _temp_ret;
}

// gboolean gst_ghost_pad_internal_activate_mode_default (GstPad* pad, GstObject* parent, GstPadMode mode, gboolean active);
// gboolean gst_ghost_pad_internal_activate_mode_default (::GstPad* pad, ::GstObject* parent, ::GstPadMode mode, gboolean active);
bool base::GhostPadBase::internal_activate_mode_default (Gst::Pad pad, Gst::Object parent, Gst::PadMode mode, gboolean active) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstObject* parent, ::GstPadMode mode, gboolean active);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_ghost_pad_internal_activate_mode_default;
  auto active_to_c = active;
  auto mode_to_c = gi::unwrap (mode);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto pad_to_c = gi::unwrap (pad, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (pad_to_c), (::GstObject*) (parent_to_c), (::GstPadMode) (mode_to_c), (gboolean) (active_to_c));
  return _temp_ret;
}
bool base::GhostPadBase::internal_activate_mode_default (Gst::Pad pad, Gst::PadMode mode, gboolean active) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstObject* parent, ::GstPadMode mode, gboolean active);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_ghost_pad_internal_activate_mode_default;
  auto active_to_c = active;
  auto mode_to_c = gi::unwrap (mode);
  auto parent_to_c = nullptr;
  auto pad_to_c = gi::unwrap (pad, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (pad_to_c), (::GstObject*) (parent_to_c), (::GstPadMode) (mode_to_c), (gboolean) (active_to_c));
  return _temp_ret;
}

// gboolean gst_ghost_pad_construct (GstGhostPad* gpad);
// gboolean gst_ghost_pad_construct (::GstGhostPad* gpad);
// IGNORE; deprecated

// GstPad* gst_ghost_pad_get_target (GstGhostPad* gpad);
// ::GstPad* gst_ghost_pad_get_target (::GstGhostPad* gpad);
Gst::Pad base::GhostPadBase::get_target () noexcept
{
  typedef ::GstPad* (*call_wrap_t) (::GstGhostPad* gpad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_ghost_pad_get_target;
  auto _temp_ret = call_wrap_v ((::GstGhostPad*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_ghost_pad_set_target (GstGhostPad* gpad, GstPad* newtarget);
// gboolean gst_ghost_pad_set_target (::GstGhostPad* gpad, ::GstPad* newtarget);
bool base::GhostPadBase::set_target (Gst::Pad newtarget) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstGhostPad* gpad, ::GstPad* newtarget);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_ghost_pad_set_target;
  auto newtarget_to_c = gi::unwrap (newtarget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstGhostPad*) (gobj_()), (::GstPad*) (newtarget_to_c));
  return _temp_ret;
}
bool base::GhostPadBase::set_target () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstGhostPad* gpad, ::GstPad* newtarget);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_ghost_pad_set_target;
  auto newtarget_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstGhostPad*) (gobj_()), (::GstPad*) (newtarget_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/ghostpad_extra_def_impl.hpp>)
#include <gst/ghostpad_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/ghostpad_extra_impl.hpp>)
#include <gst/ghostpad_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void GhostPadClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstGhostPadClass *methods = (::GstGhostPadClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
