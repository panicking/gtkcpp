// AUTO-GENERATED

#ifndef _GI_GIO_EMBLEM_IMPL_HPP_
#define _GI_GIO_EMBLEM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::Icon EmblemBase::interface_ (gi::interface_tag<Gio::Icon>)
{ return gi::wrap ((Gio::Icon::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

EmblemBase::operator Gio::Icon ()
{ return interface_ (gi::interface_tag<Gio::Icon>()); }

// GEmblem* g_emblem_new (GIcon* icon);
// ::GEmblem* g_emblem_new (::GIcon* icon);
Gio::Emblem base::EmblemBase::new_ (Gio::Icon icon) noexcept
{
  typedef ::GEmblem* (*call_wrap_t) (::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) g_emblem_new;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GIcon*) (icon_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GEmblem* g_emblem_new_with_origin (GIcon* icon, GEmblemOrigin origin);
// ::GEmblem* g_emblem_new_with_origin (::GIcon* icon, ::GEmblemOrigin origin);
Gio::Emblem base::EmblemBase::new_with_origin (Gio::Icon icon, Gio::EmblemOrigin origin) noexcept
{
  typedef ::GEmblem* (*call_wrap_t) (::GIcon* icon, ::GEmblemOrigin origin);
  call_wrap_t call_wrap_v = (call_wrap_t) g_emblem_new_with_origin;
  auto origin_to_c = gi::unwrap (origin);
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GIcon*) (icon_to_c), (::GEmblemOrigin) (origin_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GIcon* g_emblem_get_icon (GEmblem* emblem);
// ::GIcon* g_emblem_get_icon (::GEmblem* emblem);
Gio::Icon base::EmblemBase::get_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GEmblem* emblem);
  call_wrap_t call_wrap_v = (call_wrap_t) g_emblem_get_icon;
  auto _temp_ret = call_wrap_v ((::GEmblem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GEmblemOrigin g_emblem_get_origin (GEmblem* emblem);
// ::GEmblemOrigin g_emblem_get_origin (::GEmblem* emblem);
Gio::EmblemOrigin base::EmblemBase::get_origin () noexcept
{
  typedef ::GEmblemOrigin (*call_wrap_t) (::GEmblem* emblem);
  call_wrap_t call_wrap_v = (call_wrap_t) g_emblem_get_origin;
  auto _temp_ret = call_wrap_v ((::GEmblem*) (gobj_()));
  return gi::wrap (_temp_ret);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/emblem_extra_def_impl.hpp>)
#include <gio/emblem_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/emblem_extra_impl.hpp>)
#include <gio/emblem_extra_impl.hpp>
#endif
#endif

#endif
