// AUTO-GENERATED

#ifndef _GI_GIO_MENUATTRIBUTEITER_IMPL_HPP_
#define _GI_GIO_MENUATTRIBUTEITER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// const gchar* g_menu_attribute_iter_get_name (GMenuAttributeIter* iter);
// const char* g_menu_attribute_iter_get_name (::GMenuAttributeIter* iter);
std::string base::MenuAttributeIterBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GMenuAttributeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_attribute_iter_get_name;
  auto _temp_ret = call_wrap_v ((::GMenuAttributeIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_menu_attribute_iter_get_next (GMenuAttributeIter* iter, const gchar** out_name, GVariant** value);
// gboolean g_menu_attribute_iter_get_next (::GMenuAttributeIter* iter, const char** out_name, ::GVariant** value);
bool base::MenuAttributeIterBase::get_next (std::string * out_name, GLib::Variant * value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMenuAttributeIter* iter, const char** out_name, ::GVariant** value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_attribute_iter_get_next;
  ::GVariant* value_o {};
  const char* out_name_o {};
  auto _temp_ret = call_wrap_v ((::GMenuAttributeIter*) (gobj_()), (const char**) (out_name ? &out_name_o : nullptr), (::GVariant**) (value ? &value_o : nullptr));
  if (value) *value = gi::wrap (value_o, gi::transfer_full, gi::direction_out);
  if (out_name) *out_name = gi::wrap (out_name_o, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string, GLib::Variant> base::MenuAttributeIterBase::get_next () noexcept
{
  typedef gboolean (*call_wrap_t) (::GMenuAttributeIter* iter, const char** out_name, ::GVariant** value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_attribute_iter_get_next;
  ::GVariant* value_o {};
  const char* out_name_o {};
  auto _temp_ret = call_wrap_v ((::GMenuAttributeIter*) (gobj_()), (const char**) (&out_name_o), (::GVariant**) (&value_o));
  return std::make_tuple (_temp_ret, gi::wrap (out_name_o, gi::transfer_none, gi::direction_out), gi::wrap (value_o, gi::transfer_full, gi::direction_out));
}

// GVariant* g_menu_attribute_iter_get_value (GMenuAttributeIter* iter);
// ::GVariant* g_menu_attribute_iter_get_value (::GMenuAttributeIter* iter);
GLib::Variant base::MenuAttributeIterBase::get_value () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GMenuAttributeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_attribute_iter_get_value;
  auto _temp_ret = call_wrap_v ((::GMenuAttributeIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_menu_attribute_iter_next (GMenuAttributeIter* iter);
// gboolean g_menu_attribute_iter_next (::GMenuAttributeIter* iter);
bool base::MenuAttributeIterBase::next () noexcept
{
  typedef gboolean (*call_wrap_t) (::GMenuAttributeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_attribute_iter_next;
  auto _temp_ret = call_wrap_v ((::GMenuAttributeIter*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/menuattributeiter_extra_def_impl.hpp>)
#include <gio/menuattributeiter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/menuattributeiter_extra_impl.hpp>)
#include <gio/menuattributeiter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void MenuAttributeIterClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GMenuAttributeIterClass *methods = (::GMenuAttributeIterClass *) class_struct;
  (void) methods;

}

// gboolean MenuAttributeIter::get_next (GMenuAttributeIter* iter, const gchar** out_name, GVariant** value);
// gboolean MenuAttributeIter::get_next (::GMenuAttributeIter* iter, const char** out_name, ::GVariant** value);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
