// AUTO-GENERATED

#ifndef _GI_GIO_FILEICON_IMPL_HPP_
#define _GI_GIO_FILEICON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::Icon FileIconBase::interface_ (gi::interface_tag<Gio::Icon>)
{ return gi::wrap ((Gio::Icon::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

FileIconBase::operator Gio::Icon ()
{ return interface_ (gi::interface_tag<Gio::Icon>()); }

Gio::LoadableIcon FileIconBase::interface_ (gi::interface_tag<Gio::LoadableIcon>)
{ return gi::wrap ((Gio::LoadableIcon::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

FileIconBase::operator Gio::LoadableIcon ()
{ return interface_ (gi::interface_tag<Gio::LoadableIcon>()); }

// GIcon* g_file_icon_new (GFile* file);
// ::GFileIcon* g_file_icon_new (::GFile* file);
Gio::FileIcon base::FileIconBase::new_ (Gio::File file) noexcept
{
  typedef ::GFileIcon* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_icon_new;
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GFile*) (file_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFile* g_file_icon_get_file (GFileIcon* icon);
// ::GFile* g_file_icon_get_file (::GFileIcon* icon);
Gio::File base::FileIconBase::get_file () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GFileIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_icon_get_file;
  auto _temp_ret = call_wrap_v ((::GFileIcon*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileicon_extra_def_impl.hpp>)
#include <gio/fileicon_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileicon_extra_impl.hpp>)
#include <gio/fileicon_extra_impl.hpp>
#endif
#endif

#endif
