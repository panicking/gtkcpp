// AUTO-GENERATED

#ifndef _GI_GIO_FILEDESCRIPTORBASED_IMPL_HPP_
#define _GI_GIO_FILEDESCRIPTORBASED_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// int g_file_descriptor_based_get_fd (GFileDescriptorBased* fd_based);
// gint g_file_descriptor_based_get_fd (::GFileDescriptorBased* fd_based);
gint base::FileDescriptorBasedBase::get_fd () noexcept
{
  typedef gint (*call_wrap_t) (::GFileDescriptorBased* fd_based);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_descriptor_based_get_fd;
  auto _temp_ret = call_wrap_v ((::GFileDescriptorBased*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/filedescriptorbased_extra_def_impl.hpp>)
#include <gio/filedescriptorbased_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/filedescriptorbased_extra_impl.hpp>)
#include <gio/filedescriptorbased_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void FileDescriptorBasedIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GFileDescriptorBasedIface *methods = (::GFileDescriptorBasedIface *) interface_struct;
  (void) methods;

  methods->get_fd = (decltype (methods->get_fd)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_fd_>;
}

// int FileDescriptorBased::get_fd (GFileDescriptorBased* fd_based);
// gint FileDescriptorBased::get_fd (::GFileDescriptorBased* fd_based);
gint FileDescriptorBasedIfaceClassImpl::get_fd_ () noexcept
{
  if (!get_struct_()->get_fd) return gint{};
  typedef gint (*call_wrap_t) (::GFileDescriptorBased* fd_based);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_fd;
  auto _temp_ret = call_wrap_v ((::GFileDescriptorBased*) (gobj_()));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
