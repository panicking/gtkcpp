// AUTO-GENERATED

#ifndef _GI_GST_STREAMCOLLECTION_IMPL_HPP_
#define _GI_GST_STREAMCOLLECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstStreamCollection* gst_stream_collection_new (const gchar* upstream_id);
// ::GstStreamCollection* gst_stream_collection_new (const char* upstream_id);
Gst::StreamCollection base::StreamCollectionBase::new_ (const std::string & upstream_id) noexcept
{
  typedef ::GstStreamCollection* (*call_wrap_t) (const char* upstream_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_stream_collection_new;
  auto upstream_id_to_c = gi::unwrap (upstream_id, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (upstream_id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::StreamCollection base::StreamCollectionBase::new_ () noexcept
{
  typedef ::GstStreamCollection* (*call_wrap_t) (const char* upstream_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_stream_collection_new;
  auto upstream_id_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (upstream_id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_stream_collection_add_stream (GstStreamCollection* collection, GstStream* stream);
// gboolean gst_stream_collection_add_stream (::GstStreamCollection* collection, ::GstStream* stream);
bool base::StreamCollectionBase::add_stream (Gst::Stream stream) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstStreamCollection* collection, ::GstStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_stream_collection_add_stream;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstStreamCollection*) (gobj_()), (::GstStream*) (stream_to_c));
  return _temp_ret;
}

// guint gst_stream_collection_get_size (GstStreamCollection* collection);
// guint gst_stream_collection_get_size (::GstStreamCollection* collection);
guint base::StreamCollectionBase::get_size () noexcept
{
  typedef guint (*call_wrap_t) (::GstStreamCollection* collection);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_stream_collection_get_size;
  auto _temp_ret = call_wrap_v ((::GstStreamCollection*) (gobj_()));
  return _temp_ret;
}

// GstStream* gst_stream_collection_get_stream (GstStreamCollection* collection, guint index);
// ::GstStream* gst_stream_collection_get_stream (::GstStreamCollection* collection, guint index);
Gst::Stream base::StreamCollectionBase::get_stream (guint index) noexcept
{
  typedef ::GstStream* (*call_wrap_t) (::GstStreamCollection* collection, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_stream_collection_get_stream;
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((::GstStreamCollection*) (gobj_()), (guint) (index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gst_stream_collection_get_upstream_id (GstStreamCollection* collection);
// const char* gst_stream_collection_get_upstream_id (::GstStreamCollection* collection);
std::string base::StreamCollectionBase::get_upstream_id () noexcept
{
  typedef const char* (*call_wrap_t) (::GstStreamCollection* collection);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_stream_collection_get_upstream_id;
  auto _temp_ret = call_wrap_v ((::GstStreamCollection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}



} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/streamcollection_extra_def_impl.hpp>)
#include <gst/streamcollection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/streamcollection_extra_impl.hpp>)
#include <gst/streamcollection_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void StreamCollectionClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstStreamCollectionClass *methods = (::GstStreamCollectionClass *) class_struct;
  (void) methods;

  methods->stream_notify = (decltype (methods->stream_notify)) detail::method_wrapper<self, void (*) (Gst::Stream stream, GObject::ParamSpec pspec), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::stream_notify_>;
}

// void StreamCollection::stream_notify (GstStreamCollection* collection, GstStream* stream, GParamSpec* pspec);
// void StreamCollection::stream_notify (::GstStreamCollection* collection, ::GstStream* stream, ::GParamSpec* pspec);
void StreamCollectionClass::stream_notify_ (Gst::Stream stream, GObject::ParamSpec pspec) noexcept
{
  if (!get_struct_()->stream_notify) return ;
  typedef void (*call_wrap_t) (::GstStreamCollection* collection, ::GstStream* stream, ::GParamSpec* pspec);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->stream_notify;
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstStreamCollection*) (gobj_()), (::GstStream*) (stream_to_c), (::GParamSpec*) (pspec_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
