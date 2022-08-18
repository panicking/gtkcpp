// AUTO-GENERATED

#ifndef _GI_GST_STREAM_IMPL_HPP_
#define _GI_GST_STREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstStream* gst_stream_new (const gchar* stream_id, GstCaps* caps, GstStreamType type, GstStreamFlags flags);
// ::GstStream* gst_stream_new (const char* stream_id, ::GstCaps* caps, ::GstStreamType type, ::GstStreamFlags flags);
Gst::Stream base::StreamBase::new_ (const std::string & stream_id, Gst::Caps caps, Gst::StreamType type, Gst::StreamFlags flags) noexcept
{
  typedef ::GstStream* (*call_wrap_t) (const char* stream_id, ::GstCaps* caps, ::GstStreamType type, ::GstStreamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_stream_new;
  auto flags_to_c = gi::unwrap (flags);
  auto type_to_c = gi::unwrap (type);
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  auto stream_id_to_c = gi::unwrap (stream_id, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (stream_id_to_c), (::GstCaps*) (caps_to_c), (::GstStreamType) (type_to_c), (::GstStreamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Stream base::StreamBase::new_ (Gst::StreamType type, Gst::StreamFlags flags) noexcept
{
  typedef ::GstStream* (*call_wrap_t) (const char* stream_id, ::GstCaps* caps, ::GstStreamType type, ::GstStreamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_stream_new;
  auto flags_to_c = gi::unwrap (flags);
  auto type_to_c = gi::unwrap (type);
  auto caps_to_c = nullptr;
  auto stream_id_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (stream_id_to_c), (::GstCaps*) (caps_to_c), (::GstStreamType) (type_to_c), (::GstStreamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstCaps* gst_stream_get_caps (GstStream* stream);
// ::GstCaps* gst_stream_get_caps (::GstStream* stream);
Gst::Caps base::StreamBase::get_caps () noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_stream_get_caps;
  auto _temp_ret = call_wrap_v ((::GstStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstStreamFlags gst_stream_get_stream_flags (GstStream* stream);
// ::GstStreamFlags gst_stream_get_stream_flags (::GstStream* stream);
Gst::StreamFlags base::StreamBase::get_stream_flags () noexcept
{
  typedef ::GstStreamFlags (*call_wrap_t) (::GstStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_stream_get_stream_flags;
  auto _temp_ret = call_wrap_v ((::GstStream*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const gchar* gst_stream_get_stream_id (GstStream* stream);
// const char* gst_stream_get_stream_id (::GstStream* stream);
std::string base::StreamBase::get_stream_id () noexcept
{
  typedef const char* (*call_wrap_t) (::GstStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_stream_get_stream_id;
  auto _temp_ret = call_wrap_v ((::GstStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstStreamType gst_stream_get_stream_type (GstStream* stream);
// ::GstStreamType gst_stream_get_stream_type (::GstStream* stream);
Gst::StreamType base::StreamBase::get_stream_type () noexcept
{
  typedef ::GstStreamType (*call_wrap_t) (::GstStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_stream_get_stream_type;
  auto _temp_ret = call_wrap_v ((::GstStream*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GstTagList* gst_stream_get_tags (GstStream* stream);
// ::GstTagList* gst_stream_get_tags (::GstStream* stream);
Gst::TagList base::StreamBase::get_tags () noexcept
{
  typedef ::GstTagList* (*call_wrap_t) (::GstStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_stream_get_tags;
  auto _temp_ret = call_wrap_v ((::GstStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_stream_set_caps (GstStream* stream, GstCaps* caps);
// void gst_stream_set_caps (::GstStream* stream, ::GstCaps* caps);
void base::StreamBase::set_caps (Gst::Caps caps) noexcept
{
  typedef void (*call_wrap_t) (::GstStream* stream, ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_stream_set_caps;
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstStream*) (gobj_()), (::GstCaps*) (caps_to_c));
}
void base::StreamBase::set_caps () noexcept
{
  typedef void (*call_wrap_t) (::GstStream* stream, ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_stream_set_caps;
  auto caps_to_c = nullptr;
  call_wrap_v ((::GstStream*) (gobj_()), (::GstCaps*) (caps_to_c));
}

// void gst_stream_set_stream_flags (GstStream* stream, GstStreamFlags flags);
// void gst_stream_set_stream_flags (::GstStream* stream, ::GstStreamFlags flags);
void base::StreamBase::set_stream_flags (Gst::StreamFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GstStream* stream, ::GstStreamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_stream_set_stream_flags;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GstStream*) (gobj_()), (::GstStreamFlags) (flags_to_c));
}

// void gst_stream_set_stream_type (GstStream* stream, GstStreamType stream_type);
// void gst_stream_set_stream_type (::GstStream* stream, ::GstStreamType stream_type);
void base::StreamBase::set_stream_type (Gst::StreamType stream_type) noexcept
{
  typedef void (*call_wrap_t) (::GstStream* stream, ::GstStreamType stream_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_stream_set_stream_type;
  auto stream_type_to_c = gi::unwrap (stream_type);
  call_wrap_v ((::GstStream*) (gobj_()), (::GstStreamType) (stream_type_to_c));
}

// void gst_stream_set_tags (GstStream* stream, GstTagList* tags);
// void gst_stream_set_tags (::GstStream* stream, ::GstTagList* tags);
void base::StreamBase::set_tags (Gst::TagList tags) noexcept
{
  typedef void (*call_wrap_t) (::GstStream* stream, ::GstTagList* tags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_stream_set_tags;
  auto tags_to_c = gi::unwrap (tags, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstStream*) (gobj_()), (::GstTagList*) (tags_to_c));
}
void base::StreamBase::set_tags () noexcept
{
  typedef void (*call_wrap_t) (::GstStream* stream, ::GstTagList* tags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_stream_set_tags;
  auto tags_to_c = nullptr;
  call_wrap_v ((::GstStream*) (gobj_()), (::GstTagList*) (tags_to_c));
}

static const char* _field_stream_id_get (const ::GstStream* obj) { return (const char*) obj->stream_id; }
// const char* Stream::stream_id (const ::GstStream* obj);
// const char* Stream::stream_id (const ::GstStream* obj);
std::string base::StreamBase::stream_id_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstStream* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_stream_id_get;
  auto _temp_ret = call_wrap_v ((const ::GstStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/stream_extra_def_impl.hpp>)
#include <gst/stream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/stream_extra_impl.hpp>)
#include <gst/stream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void StreamClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstStreamClass *methods = (::GstStreamClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
