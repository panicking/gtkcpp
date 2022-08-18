// AUTO-GENERATED

#ifndef _GI_GIO_EMBLEMEDICON_IMPL_HPP_
#define _GI_GIO_EMBLEMEDICON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::Icon EmblemedIconBase::interface_ (gi::interface_tag<Gio::Icon>)
{ return gi::wrap ((Gio::Icon::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

EmblemedIconBase::operator Gio::Icon ()
{ return interface_ (gi::interface_tag<Gio::Icon>()); }

// GIcon* g_emblemed_icon_new (GIcon* icon, GEmblem* emblem);
// ::GEmblemedIcon* g_emblemed_icon_new (::GIcon* icon, ::GEmblem* emblem);
Gio::EmblemedIcon base::EmblemedIconBase::new_ (Gio::Icon icon, Gio::Emblem emblem) noexcept
{
  typedef ::GEmblemedIcon* (*call_wrap_t) (::GIcon* icon, ::GEmblem* emblem);
  call_wrap_t call_wrap_v = (call_wrap_t) g_emblemed_icon_new;
  auto emblem_to_c = gi::unwrap (emblem, gi::transfer_none, gi::direction_in);
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GIcon*) (icon_to_c), (::GEmblem*) (emblem_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::EmblemedIcon base::EmblemedIconBase::new_ (Gio::Icon icon) noexcept
{
  typedef ::GEmblemedIcon* (*call_wrap_t) (::GIcon* icon, ::GEmblem* emblem);
  call_wrap_t call_wrap_v = (call_wrap_t) g_emblemed_icon_new;
  auto emblem_to_c = nullptr;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GIcon*) (icon_to_c), (::GEmblem*) (emblem_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_emblemed_icon_add_emblem (GEmblemedIcon* emblemed, GEmblem* emblem);
// void g_emblemed_icon_add_emblem (::GEmblemedIcon* emblemed, ::GEmblem* emblem);
void base::EmblemedIconBase::add_emblem (Gio::Emblem emblem) noexcept
{
  typedef void (*call_wrap_t) (::GEmblemedIcon* emblemed, ::GEmblem* emblem);
  call_wrap_t call_wrap_v = (call_wrap_t) g_emblemed_icon_add_emblem;
  auto emblem_to_c = gi::unwrap (emblem, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GEmblemedIcon*) (gobj_()), (::GEmblem*) (emblem_to_c));
}

// void g_emblemed_icon_clear_emblems (GEmblemedIcon* emblemed);
// void g_emblemed_icon_clear_emblems (::GEmblemedIcon* emblemed);
void base::EmblemedIconBase::clear_emblems () noexcept
{
  typedef void (*call_wrap_t) (::GEmblemedIcon* emblemed);
  call_wrap_t call_wrap_v = (call_wrap_t) g_emblemed_icon_clear_emblems;
  call_wrap_v ((::GEmblemedIcon*) (gobj_()));
}

// GList* g_emblemed_icon_get_emblems (GEmblemedIcon* emblemed);
// ::GList* g_emblemed_icon_get_emblems (::GEmblemedIcon* emblemed);
std::vector<Gio::Emblem> base::EmblemedIconBase::get_emblems () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GEmblemedIcon* emblemed);
  call_wrap_t call_wrap_v = (call_wrap_t) g_emblemed_icon_get_emblems;
  auto _temp_ret = call_wrap_v ((::GEmblemedIcon*) (gobj_()));
  return gi::detail::wrap_list<Gio::Emblem> (_temp_ret, gi::transfer_none);
}

// GIcon* g_emblemed_icon_get_icon (GEmblemedIcon* emblemed);
// ::GIcon* g_emblemed_icon_get_icon (::GEmblemedIcon* emblemed);
Gio::Icon base::EmblemedIconBase::get_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GEmblemedIcon* emblemed);
  call_wrap_t call_wrap_v = (call_wrap_t) g_emblemed_icon_get_icon;
  auto _temp_ret = call_wrap_v ((::GEmblemedIcon*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/emblemedicon_extra_def_impl.hpp>)
#include <gio/emblemedicon_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/emblemedicon_extra_impl.hpp>)
#include <gio/emblemedicon_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void EmblemedIconClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GEmblemedIconClass *methods = (::GEmblemedIconClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
