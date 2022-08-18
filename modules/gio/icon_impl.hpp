// AUTO-GENERATED

#ifndef _GI_GIO_ICON_IMPL_HPP_
#define _GI_GIO_ICON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GIcon* g_icon_deserialize (GVariant* value);
// ::GIcon* g_icon_deserialize (::GVariant* value);
Gio::Icon base::IconBase::deserialize (GLib::Variant value) noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_icon_deserialize;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVariant*) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// guint g_icon_hash (gconstpointer icon);
// guint g_icon_hash (const void* icon);
guint base::IconBase::hash (const void* icon) noexcept
{
  typedef guint (*call_wrap_t) (const void* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) g_icon_hash;
  auto icon_to_c = icon;
  auto _temp_ret = call_wrap_v ((const void*) (icon_to_c));
  return _temp_ret;
}

// GIcon* g_icon_new_for_string (const gchar* str, GError ** error);
// ::GIcon* g_icon_new_for_string (const char* str, GError ** error);
Gio::Icon base::IconBase::new_for_string (const std::string & str)
{
  typedef ::GIcon* (*call_wrap_t) (const char* str, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_icon_new_for_string;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::Icon base::IconBase::new_for_string (const std::string & str, GLib::Error * _error) noexcept
{
  typedef ::GIcon* (*call_wrap_t) (const char* str, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_icon_new_for_string;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_icon_equal (GIcon* icon1, GIcon* icon2);
// gboolean g_icon_equal (::GIcon* icon1, ::GIcon* icon2);
bool base::IconBase::equal (Gio::Icon icon2) noexcept
{
  typedef gboolean (*call_wrap_t) (::GIcon* icon1, ::GIcon* icon2);
  call_wrap_t call_wrap_v = (call_wrap_t) g_icon_equal;
  auto icon2_to_c = gi::unwrap (icon2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GIcon*) (gobj_()), (::GIcon*) (icon2_to_c));
  return _temp_ret;
}
bool base::IconBase::equal () noexcept
{
  typedef gboolean (*call_wrap_t) (::GIcon* icon1, ::GIcon* icon2);
  call_wrap_t call_wrap_v = (call_wrap_t) g_icon_equal;
  auto icon2_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GIcon*) (gobj_()), (::GIcon*) (icon2_to_c));
  return _temp_ret;
}

// GVariant* g_icon_serialize (GIcon* icon);
// ::GVariant* g_icon_serialize (::GIcon* icon);
GLib::Variant base::IconBase::serialize () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) g_icon_serialize;
  auto _temp_ret = call_wrap_v ((::GIcon*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_icon_to_string (GIcon* icon);
// char* g_icon_to_string (::GIcon* icon);
std::string base::IconBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) g_icon_to_string;
  auto _temp_ret = call_wrap_v ((::GIcon*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/icon_extra_def_impl.hpp>)
#include <gio/icon_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/icon_extra_impl.hpp>)
#include <gio/icon_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void IconIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GIconIface *methods = (::GIconIface *) interface_struct;
  (void) methods;

  methods->equal = (decltype (methods->equal)) detail::method_wrapper<self, bool (*) (Gio::Icon icon2), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::equal_>;
  methods->hash = (decltype (methods->hash)) detail::method_wrapper<self, guint (*) (), gi::transfer_none_t>::wrapper<&self::hash_>;
  methods->serialize = (decltype (methods->serialize)) detail::method_wrapper<self, GLib::Variant (*) (), gi::transfer_full_t>::wrapper<&self::serialize_>;
}

// gboolean Icon::equal (GIcon* icon1, GIcon* icon2);
// gboolean Icon::equal (::GIcon* icon1, ::GIcon* icon2);
bool IconIfaceClassImpl::equal_ (Gio::Icon icon2) noexcept
{
  if (!get_struct_()->equal) return bool{};
  typedef gboolean (*call_wrap_t) (::GIcon* icon1, ::GIcon* icon2);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->equal;
  auto icon2_to_c = gi::unwrap (icon2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GIcon*) (gobj_()), (::GIcon*) (icon2_to_c));
  return _temp_ret;
}

// guint Icon::hash (GIcon* icon);
// guint Icon::hash (::GIcon* icon);
guint IconIfaceClassImpl::hash_ () noexcept
{
  if (!get_struct_()->hash) return guint{};
  typedef guint (*call_wrap_t) (::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->hash;
  auto _temp_ret = call_wrap_v ((::GIcon*) (gobj_()));
  return _temp_ret;
}

// GVariant* Icon::serialize (GIcon* icon);
// ::GVariant* Icon::serialize (::GIcon* icon);
GLib::Variant IconIfaceClassImpl::serialize_ () noexcept
{
  if (!get_struct_()->serialize) return GLib::Variant{};
  typedef ::GVariant* (*call_wrap_t) (::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->serialize;
  auto _temp_ret = call_wrap_v ((::GIcon*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
