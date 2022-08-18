// AUTO-GENERATED

#ifndef _GI_GST_PADTEMPLATE_IMPL_HPP_
#define _GI_GST_PADTEMPLATE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstPadTemplate* gst_pad_template_new (const gchar* name_template, GstPadDirection direction, GstPadPresence presence, GstCaps* caps);
// ::GstPadTemplate* gst_pad_template_new (const char* name_template, ::GstPadDirection direction, ::GstPadPresence presence, ::GstCaps* caps);
Gst::PadTemplate base::PadTemplateBase::new_ (const std::string & name_template, Gst::PadDirection direction, Gst::PadPresence presence, Gst::Caps caps) noexcept
{
  typedef ::GstPadTemplate* (*call_wrap_t) (const char* name_template, ::GstPadDirection direction, ::GstPadPresence presence, ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_template_new;
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  auto presence_to_c = gi::unwrap (presence);
  auto direction_to_c = gi::unwrap (direction);
  auto name_template_to_c = gi::unwrap (name_template, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_template_to_c), (::GstPadDirection) (direction_to_c), (::GstPadPresence) (presence_to_c), (::GstCaps*) (caps_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstPadTemplate* gst_pad_template_new_from_static_pad_template_with_gtype (GstStaticPadTemplate* pad_template, GType pad_type);
// ::GstPadTemplate* gst_pad_template_new_from_static_pad_template_with_gtype (::GstStaticPadTemplate* pad_template, GType pad_type);
Gst::PadTemplate base::PadTemplateBase::new_from_static_pad_template_with_gtype (Gst::StaticPadTemplate pad_template, GType pad_type) noexcept
{
  typedef ::GstPadTemplate* (*call_wrap_t) (::GstStaticPadTemplate* pad_template, GType pad_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_template_new_from_static_pad_template_with_gtype;
  auto pad_type_to_c = pad_type;
  auto pad_template_to_c = gi::unwrap (pad_template, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstStaticPadTemplate*) (pad_template_to_c), (GType) (pad_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstPadTemplate* gst_pad_template_new_with_gtype (const gchar* name_template, GstPadDirection direction, GstPadPresence presence, GstCaps* caps, GType pad_type);
// ::GstPadTemplate* gst_pad_template_new_with_gtype (const char* name_template, ::GstPadDirection direction, ::GstPadPresence presence, ::GstCaps* caps, GType pad_type);
Gst::PadTemplate base::PadTemplateBase::new_with_gtype (const std::string & name_template, Gst::PadDirection direction, Gst::PadPresence presence, Gst::Caps caps, GType pad_type) noexcept
{
  typedef ::GstPadTemplate* (*call_wrap_t) (const char* name_template, ::GstPadDirection direction, ::GstPadPresence presence, ::GstCaps* caps, GType pad_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_template_new_with_gtype;
  auto pad_type_to_c = pad_type;
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  auto presence_to_c = gi::unwrap (presence);
  auto direction_to_c = gi::unwrap (direction);
  auto name_template_to_c = gi::unwrap (name_template, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_template_to_c), (::GstPadDirection) (direction_to_c), (::GstPadPresence) (presence_to_c), (::GstCaps*) (caps_to_c), (GType) (pad_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstCaps* gst_pad_template_get_caps (GstPadTemplate* templ);
// ::GstCaps* gst_pad_template_get_caps (::GstPadTemplate* templ);
Gst::Caps base::PadTemplateBase::get_caps () noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstPadTemplate* templ);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_template_get_caps;
  auto _temp_ret = call_wrap_v ((::GstPadTemplate*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstCaps* gst_pad_template_get_documentation_caps (GstPadTemplate* templ);
// ::GstCaps* gst_pad_template_get_documentation_caps (::GstPadTemplate* templ);
Gst::Caps base::PadTemplateBase::get_documentation_caps () noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstPadTemplate* templ);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_template_get_documentation_caps;
  auto _temp_ret = call_wrap_v ((::GstPadTemplate*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_pad_template_pad_created (GstPadTemplate* templ, GstPad* pad);
// void gst_pad_template_pad_created (::GstPadTemplate* templ, ::GstPad* pad);
void base::PadTemplateBase::pad_created (Gst::Pad pad) noexcept
{
  typedef void (*call_wrap_t) (::GstPadTemplate* templ, ::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_template_pad_created;
  auto pad_to_c = gi::unwrap (pad, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstPadTemplate*) (gobj_()), (::GstPad*) (pad_to_c));
}

// void gst_pad_template_set_documentation_caps (GstPadTemplate* templ, GstCaps* caps);
// void gst_pad_template_set_documentation_caps (::GstPadTemplate* templ, ::GstCaps* caps);
void base::PadTemplateBase::set_documentation_caps (Gst::Caps caps) noexcept
{
  typedef void (*call_wrap_t) (::GstPadTemplate* templ, ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_template_set_documentation_caps;
  auto caps_to_c = gi::unwrap (caps, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::GstPadTemplate*) (gobj_()), (::GstCaps*) (caps_to_c));
}

static char* _field_name_template_get (const ::GstPadTemplate* obj) { return (char*) obj->name_template; }
// char* PadTemplate::name_template (const ::GstPadTemplate* obj);
// char* PadTemplate::name_template (const ::GstPadTemplate* obj);
std::string base::PadTemplateBase::name_template_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GstPadTemplate* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_name_template_get;
  auto _temp_ret = call_wrap_v ((const ::GstPadTemplate*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GstPadDirection _field_direction_get (const ::GstPadTemplate* obj) { return (::GstPadDirection) obj->direction; }
// ::GstPadDirection PadTemplate::direction (const ::GstPadTemplate* obj);
// ::GstPadDirection PadTemplate::direction (const ::GstPadTemplate* obj);
Gst::PadDirection base::PadTemplateBase::direction_ () const noexcept
{
  typedef ::GstPadDirection (*call_wrap_t) (const ::GstPadTemplate* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_direction_get;
  auto _temp_ret = call_wrap_v ((const ::GstPadTemplate*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_direction_set (::GstPadTemplate* obj, ::GstPadDirection _value) { obj->direction = (decltype(obj->direction)) _value; }
//  PadTemplate::direction (::GstPadTemplate* obj, ::GstPadDirection _value);
// void PadTemplate::direction (::GstPadTemplate* obj, ::GstPadDirection _value);
void base::PadTemplateBase::direction_ (Gst::PadDirection _value) noexcept
{
  typedef void (*call_wrap_t) (::GstPadTemplate* obj, ::GstPadDirection _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_direction_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GstPadTemplate*) (gobj_()), (::GstPadDirection) (_value_to_c));
}

static ::GstPadPresence _field_presence_get (const ::GstPadTemplate* obj) { return (::GstPadPresence) obj->presence; }
// ::GstPadPresence PadTemplate::presence (const ::GstPadTemplate* obj);
// ::GstPadPresence PadTemplate::presence (const ::GstPadTemplate* obj);
Gst::PadPresence base::PadTemplateBase::presence_ () const noexcept
{
  typedef ::GstPadPresence (*call_wrap_t) (const ::GstPadTemplate* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_presence_get;
  auto _temp_ret = call_wrap_v ((const ::GstPadTemplate*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_presence_set (::GstPadTemplate* obj, ::GstPadPresence _value) { obj->presence = (decltype(obj->presence)) _value; }
//  PadTemplate::presence (::GstPadTemplate* obj, ::GstPadPresence _value);
// void PadTemplate::presence (::GstPadTemplate* obj, ::GstPadPresence _value);
void base::PadTemplateBase::presence_ (Gst::PadPresence _value) noexcept
{
  typedef void (*call_wrap_t) (::GstPadTemplate* obj, ::GstPadPresence _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_presence_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GstPadTemplate*) (gobj_()), (::GstPadPresence) (_value_to_c));
}

static ::GstCaps* _field_caps_get (const ::GstPadTemplate* obj) { return (::GstCaps*) obj->caps; }
// ::GstCaps* PadTemplate::caps (const ::GstPadTemplate* obj);
// ::GstCaps* PadTemplate::caps (const ::GstPadTemplate* obj);
Gst::Caps base::PadTemplateBase::caps_ () const noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (const ::GstPadTemplate* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_caps_get;
  auto _temp_ret = call_wrap_v ((const ::GstPadTemplate*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}



} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/padtemplate_extra_def_impl.hpp>)
#include <gst/padtemplate_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/padtemplate_extra_impl.hpp>)
#include <gst/padtemplate_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void PadTemplateClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstPadTemplateClass *methods = (::GstPadTemplateClass *) class_struct;
  (void) methods;

  methods->pad_created = (decltype (methods->pad_created)) detail::method_wrapper<self, void (*) (Gst::Pad pad), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::pad_created_>;
}

// void PadTemplate::pad_created (GstPadTemplate* templ, GstPad* pad);
// void PadTemplate::pad_created (::GstPadTemplate* templ, ::GstPad* pad);
void PadTemplateClass::pad_created_ (Gst::Pad pad) noexcept
{
  if (!get_struct_()->pad_created) return ;
  typedef void (*call_wrap_t) (::GstPadTemplate* templ, ::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->pad_created;
  auto pad_to_c = gi::unwrap (pad, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstPadTemplate*) (gobj_()), (::GstPad*) (pad_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
