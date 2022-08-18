// AUTO-GENERATED

#ifndef _GI_GIO_THEMEDICON_IMPL_HPP_
#define _GI_GIO_THEMEDICON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::Icon ThemedIconBase::interface_ (gi::interface_tag<Gio::Icon>)
{ return gi::wrap ((Gio::Icon::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ThemedIconBase::operator Gio::Icon ()
{ return interface_ (gi::interface_tag<Gio::Icon>()); }

// GIcon* g_themed_icon_new (const char* iconname);
// ::GThemedIcon* g_themed_icon_new (const char* iconname);
Gio::ThemedIcon base::ThemedIconBase::new_ (const std::string & iconname) noexcept
{
  typedef ::GThemedIcon* (*call_wrap_t) (const char* iconname);
  call_wrap_t call_wrap_v = (call_wrap_t) g_themed_icon_new;
  auto iconname_to_c = gi::unwrap (iconname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (iconname_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GIcon* g_themed_icon_new_from_names (char** iconnames, int len);
// ::GThemedIcon* g_themed_icon_new_from_names (char** iconnames, gint len);
Gio::ThemedIcon base::ThemedIconBase::new_from_names (std::string * iconnames, gint len) noexcept
{
  typedef ::GThemedIcon* (*call_wrap_t) (char** iconnames, gint len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_themed_icon_new_from_names;
  auto iconnames_i = detail::make_list_unwrap_range (iconnames, len, false);
  auto iconnames_w = unwrap (iconnames_i, gi::transfer_none, direction_in);
  auto iconnames_to_c = iconnames_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((char**) (iconnames_to_c), (gint) (iconnames_w.size()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GIcon* g_themed_icon_new_with_default_fallbacks (const char* iconname);
// ::GThemedIcon* g_themed_icon_new_with_default_fallbacks (const char* iconname);
Gio::ThemedIcon base::ThemedIconBase::new_with_default_fallbacks (const std::string & iconname) noexcept
{
  typedef ::GThemedIcon* (*call_wrap_t) (const char* iconname);
  call_wrap_t call_wrap_v = (call_wrap_t) g_themed_icon_new_with_default_fallbacks;
  auto iconname_to_c = gi::unwrap (iconname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (iconname_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_themed_icon_append_name (GThemedIcon* icon, const char* iconname);
// void g_themed_icon_append_name (::GThemedIcon* icon, const char* iconname);
void base::ThemedIconBase::append_name (const std::string & iconname) noexcept
{
  typedef void (*call_wrap_t) (::GThemedIcon* icon, const char* iconname);
  call_wrap_t call_wrap_v = (call_wrap_t) g_themed_icon_append_name;
  auto iconname_to_c = gi::unwrap (iconname, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GThemedIcon*) (gobj_()), (const char*) (iconname_to_c));
}

// const gchar* const* g_themed_icon_get_names (GThemedIcon* icon);
// const char** g_themed_icon_get_names (::GThemedIcon* icon);
std::vector<std::string> base::ThemedIconBase::get_names () noexcept
{
  typedef const char** (*call_wrap_t) (::GThemedIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) g_themed_icon_get_names;
  auto _temp_ret = call_wrap_v ((::GThemedIcon*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_none);
}

// void g_themed_icon_prepend_name (GThemedIcon* icon, const char* iconname);
// void g_themed_icon_prepend_name (::GThemedIcon* icon, const char* iconname);
void base::ThemedIconBase::prepend_name (const std::string & iconname) noexcept
{
  typedef void (*call_wrap_t) (::GThemedIcon* icon, const char* iconname);
  call_wrap_t call_wrap_v = (call_wrap_t) g_themed_icon_prepend_name;
  auto iconname_to_c = gi::unwrap (iconname, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GThemedIcon*) (gobj_()), (const char*) (iconname_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/themedicon_extra_def_impl.hpp>)
#include <gio/themedicon_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/themedicon_extra_impl.hpp>)
#include <gio/themedicon_extra_impl.hpp>
#endif
#endif

#endif
