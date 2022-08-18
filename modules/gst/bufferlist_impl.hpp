// AUTO-GENERATED

#ifndef _GI_GST_BUFFERLIST_IMPL_HPP_
#define _GI_GST_BUFFERLIST_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstBufferList* gst_buffer_list_new ();
// ::GstBufferList* gst_buffer_list_new ();
Gst::BufferList base::BufferListBase::new_ () noexcept
{
  typedef ::GstBufferList* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_list_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstBufferList* gst_buffer_list_new_sized (guint size);
// ::GstBufferList* gst_buffer_list_new_sized (guint size);
Gst::BufferList base::BufferListBase::new_sized (guint size) noexcept
{
  typedef ::GstBufferList* (*call_wrap_t) (guint size);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_list_new_sized;
  auto size_to_c = size;
  auto _temp_ret = call_wrap_v ((guint) (size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gsize gst_buffer_list_calculate_size (GstBufferList* list);
// gsize gst_buffer_list_calculate_size (::GstBufferList* list);
gsize base::BufferListBase::calculate_size () noexcept
{
  typedef gsize (*call_wrap_t) (::GstBufferList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_list_calculate_size;
  auto _temp_ret = call_wrap_v ((::GstBufferList*) (gobj_()));
  return _temp_ret;
}

// GstBufferList* gst_buffer_list_copy_deep (const GstBufferList* list);
// ::GstBufferList* gst_buffer_list_copy_deep (const ::GstBufferList* list);
Gst::BufferList base::BufferListBase::copy_deep () const noexcept
{
  typedef ::GstBufferList* (*call_wrap_t) (const ::GstBufferList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_list_copy_deep;
  auto _temp_ret = call_wrap_v ((const ::GstBufferList*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_buffer_list_foreach (GstBufferList* list, GstBufferListFunc func, gpointer user_data);
// gboolean gst_buffer_list_foreach (::GstBufferList* list,  func, void* user_data);
// SKIP; func type  not supported

// GstBuffer* gst_buffer_list_get (GstBufferList* list, guint idx);
// ::GstBuffer* gst_buffer_list_get (::GstBufferList* list, guint idx);
Gst::Buffer base::BufferListBase::get (guint idx) noexcept
{
  typedef ::GstBuffer* (*call_wrap_t) (::GstBufferList* list, guint idx);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_list_get;
  auto idx_to_c = idx;
  auto _temp_ret = call_wrap_v ((::GstBufferList*) (gobj_()), (guint) (idx_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstBuffer* gst_buffer_list_get_writable (GstBufferList* list, guint idx);
// ::GstBuffer* gst_buffer_list_get_writable (::GstBufferList* list, guint idx);
Gst::Buffer base::BufferListBase::get_writable (guint idx) noexcept
{
  typedef ::GstBuffer* (*call_wrap_t) (::GstBufferList* list, guint idx);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_list_get_writable;
  auto idx_to_c = idx;
  auto _temp_ret = call_wrap_v ((::GstBufferList*) (gobj_()), (guint) (idx_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gst_buffer_list_insert (GstBufferList* list, gint idx, GstBuffer* buffer);
// void gst_buffer_list_insert (::GstBufferList* list, gint idx, ::GstBuffer* buffer);
void base::BufferListBase::insert (gint idx, Gst::Buffer buffer) noexcept
{
  typedef void (*call_wrap_t) (::GstBufferList* list, gint idx, ::GstBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_list_insert;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_full, gi::direction_in);
  auto idx_to_c = idx;
  call_wrap_v ((::GstBufferList*) (gobj_()), (gint) (idx_to_c), (::GstBuffer*) (buffer_to_c));
}

// guint gst_buffer_list_length (GstBufferList* list);
// guint gst_buffer_list_length (::GstBufferList* list);
guint base::BufferListBase::length () noexcept
{
  typedef guint (*call_wrap_t) (::GstBufferList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_list_length;
  auto _temp_ret = call_wrap_v ((::GstBufferList*) (gobj_()));
  return _temp_ret;
}

// void gst_buffer_list_remove (GstBufferList* list, guint idx, guint length);
// void gst_buffer_list_remove (::GstBufferList* list, guint idx, guint length);
void base::BufferListBase::remove (guint idx, guint length) noexcept
{
  typedef void (*call_wrap_t) (::GstBufferList* list, guint idx, guint length);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_list_remove;
  auto length_to_c = length;
  auto idx_to_c = idx;
  call_wrap_v ((::GstBufferList*) (gobj_()), (guint) (idx_to_c), (guint) (length_to_c));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/bufferlist_extra_def_impl.hpp>)
#include <gst/bufferlist_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/bufferlist_extra_impl.hpp>)
#include <gst/bufferlist_extra_impl.hpp>
#endif
#endif

#endif
