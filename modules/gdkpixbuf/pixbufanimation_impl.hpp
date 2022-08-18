// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF_PIXBUFANIMATION_IMPL_HPP_
#define _GI_GDKPIXBUF_PIXBUFANIMATION_IMPL_HPP_

namespace gi {

namespace repository {

namespace GdkPixbuf {

namespace base {

// GdkPixbufAnimation* gdk_pixbuf_animation_new_from_file (const char* filename, GError ** error);
// ::GdkPixbufAnimation* gdk_pixbuf_animation_new_from_file (const char* filename, GError ** error);
GdkPixbuf::PixbufAnimation base::PixbufAnimationBase::new_from_file (const std::string & filename)
{
  typedef ::GdkPixbufAnimation* (*call_wrap_t) (const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_new_from_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GdkPixbuf::PixbufAnimation base::PixbufAnimationBase::new_from_file (const std::string & filename, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbufAnimation* (*call_wrap_t) (const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_new_from_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GdkPixbufAnimation* gdk_pixbuf_animation_new_from_resource (const char* resource_path, GError ** error);
// ::GdkPixbufAnimation* gdk_pixbuf_animation_new_from_resource (const char* resource_path, GError ** error);
GdkPixbuf::PixbufAnimation base::PixbufAnimationBase::new_from_resource (const std::string & resource_path)
{
  typedef ::GdkPixbufAnimation* (*call_wrap_t) (const char* resource_path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_new_from_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (resource_path_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GdkPixbuf::PixbufAnimation base::PixbufAnimationBase::new_from_resource (const std::string & resource_path, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbufAnimation* (*call_wrap_t) (const char* resource_path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_new_from_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (resource_path_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GdkPixbufAnimation* gdk_pixbuf_animation_new_from_stream (GInputStream* stream, GCancellable* cancellable, GError ** error);
// ::GdkPixbufAnimation* gdk_pixbuf_animation_new_from_stream (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
GdkPixbuf::PixbufAnimation base::PixbufAnimationBase::new_from_stream (Gio::InputStream stream, Gio::Cancellable cancellable)
{
  typedef ::GdkPixbufAnimation* (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_new_from_stream;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GdkPixbuf::PixbufAnimation base::PixbufAnimationBase::new_from_stream (Gio::InputStream stream)
{
  typedef ::GdkPixbufAnimation* (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_new_from_stream;
  auto cancellable_to_c = nullptr;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GdkPixbuf::PixbufAnimation base::PixbufAnimationBase::new_from_stream (Gio::InputStream stream, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbufAnimation* (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_new_from_stream;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GdkPixbuf::PixbufAnimation base::PixbufAnimationBase::new_from_stream (Gio::InputStream stream, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbufAnimation* (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_new_from_stream;
  auto cancellable_to_c = nullptr;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GdkPixbufAnimation* gdk_pixbuf_animation_new_from_stream_finish (GAsyncResult* async_result, GError ** error);
// ::GdkPixbufAnimation* gdk_pixbuf_animation_new_from_stream_finish (::GAsyncResult* async_result, GError ** error);
GdkPixbuf::PixbufAnimation base::PixbufAnimationBase::new_from_stream_finish (Gio::AsyncResult async_result)
{
  typedef ::GdkPixbufAnimation* (*call_wrap_t) (::GAsyncResult* async_result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_new_from_stream_finish;
  auto async_result_to_c = gi::unwrap (async_result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (async_result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GdkPixbuf::PixbufAnimation base::PixbufAnimationBase::new_from_stream_finish (Gio::AsyncResult async_result, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbufAnimation* (*call_wrap_t) (::GAsyncResult* async_result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_new_from_stream_finish;
  auto async_result_to_c = gi::unwrap (async_result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (async_result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gdk_pixbuf_animation_new_from_stream_async (GInputStream* stream, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void gdk_pixbuf_animation_new_from_stream_async (::GInputStream* stream, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::PixbufAnimationBase::new_from_stream_async (Gio::InputStream stream, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_new_from_stream_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GInputStream*) (stream_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::PixbufAnimationBase::new_from_stream_async (Gio::InputStream stream, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_new_from_stream_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GInputStream*) (stream_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// int gdk_pixbuf_animation_get_height (GdkPixbufAnimation* animation);
// gint gdk_pixbuf_animation_get_height (::GdkPixbufAnimation* animation);
gint base::PixbufAnimationBase::get_height () noexcept
{
  typedef gint (*call_wrap_t) (::GdkPixbufAnimation* animation);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_get_height;
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimation*) (gobj_()));
  return _temp_ret;
}

// GdkPixbufAnimationIter* gdk_pixbuf_animation_get_iter (GdkPixbufAnimation* animation, const GTimeVal* start_time);
// ::GdkPixbufAnimationIter* gdk_pixbuf_animation_get_iter (::GdkPixbufAnimation* animation, const  start_time);
// SKIP; start_time type  not supported

// GdkPixbuf* gdk_pixbuf_animation_get_static_image (GdkPixbufAnimation* animation);
// ::GdkPixbuf* gdk_pixbuf_animation_get_static_image (::GdkPixbufAnimation* animation);
GdkPixbuf::Pixbuf base::PixbufAnimationBase::get_static_image () noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GdkPixbufAnimation* animation);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_get_static_image;
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// int gdk_pixbuf_animation_get_width (GdkPixbufAnimation* animation);
// gint gdk_pixbuf_animation_get_width (::GdkPixbufAnimation* animation);
gint base::PixbufAnimationBase::get_width () noexcept
{
  typedef gint (*call_wrap_t) (::GdkPixbufAnimation* animation);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_get_width;
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimation*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_pixbuf_animation_is_static_image (GdkPixbufAnimation* animation);
// gboolean gdk_pixbuf_animation_is_static_image (::GdkPixbufAnimation* animation);
bool base::PixbufAnimationBase::is_static_image () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkPixbufAnimation* animation);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_animation_is_static_image;
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimation*) (gobj_()));
  return _temp_ret;
}

// FAILURE on gdk_pixbuf_animation_ref; No such node (<xmlattr>.transfer-ownership)
// void gdk_pixbuf_animation_unref (GdkPixbufAnimation* animation);
// void gdk_pixbuf_animation_unref (::GdkPixbufAnimation* animation);
// IGNORE; marked ignore


} // namespace base

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufanimation_extra_def_impl.hpp>)
#include <gdkpixbuf/pixbufanimation_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufanimation_extra_impl.hpp>)
#include <gdkpixbuf/pixbufanimation_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GdkPixbuf {

namespace impl {

namespace internal {

void PixbufAnimationClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GdkPixbufAnimationClass *methods = (::GdkPixbufAnimationClass *) class_struct;
  (void) methods;

  methods->get_static_image = (decltype (methods->get_static_image)) detail::method_wrapper<self, GdkPixbuf::Pixbuf (*) (), gi::transfer_none_t>::wrapper<&self::get_static_image_>;
  methods->is_static_image = (decltype (methods->is_static_image)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::is_static_image_>;
}

// GdkPixbufAnimationIter* PixbufAnimation::get_iter (GdkPixbufAnimation* animation, const GTimeVal* start_time);
// ::GdkPixbufAnimationIter* PixbufAnimation::get_iter (::GdkPixbufAnimation* animation, const  start_time);
// SKIP; start_time type  not supported

// void PixbufAnimation::get_size (GdkPixbufAnimation* animation, int* width, int* height);
// void PixbufAnimation::get_size (::GdkPixbufAnimation* animation, gint width, gint height);
// SKIP; inconsistent in height pointer depth (1 vs 0), inconsistent in width pointer depth (1 vs 0)

// GdkPixbuf* PixbufAnimation::get_static_image (GdkPixbufAnimation* animation);
// ::GdkPixbuf* PixbufAnimation::get_static_image (::GdkPixbufAnimation* animation);
GdkPixbuf::Pixbuf PixbufAnimationClass::get_static_image_ () noexcept
{
  if (!get_struct_()->get_static_image) return GdkPixbuf::Pixbuf{};
  typedef ::GdkPixbuf* (*call_wrap_t) (::GdkPixbufAnimation* animation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_static_image;
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean PixbufAnimation::is_static_image (GdkPixbufAnimation* animation);
// gboolean PixbufAnimation::is_static_image (::GdkPixbufAnimation* animation);
bool PixbufAnimationClass::is_static_image_ () noexcept
{
  if (!get_struct_()->is_static_image) return bool{};
  typedef gboolean (*call_wrap_t) (::GdkPixbufAnimation* animation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_static_image;
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimation*) (gobj_()));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi

#endif
