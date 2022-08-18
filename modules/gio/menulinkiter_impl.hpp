// AUTO-GENERATED

#ifndef _GI_GIO_MENULINKITER_IMPL_HPP_
#define _GI_GIO_MENULINKITER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// const gchar* g_menu_link_iter_get_name (GMenuLinkIter* iter);
// const char* g_menu_link_iter_get_name (::GMenuLinkIter* iter);
std::string base::MenuLinkIterBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GMenuLinkIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_link_iter_get_name;
  auto _temp_ret = call_wrap_v ((::GMenuLinkIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_menu_link_iter_get_next (GMenuLinkIter* iter, const gchar** out_link, GMenuModel** value);
// gboolean g_menu_link_iter_get_next (::GMenuLinkIter* iter, const char** out_link, ::GMenuModel** value);
bool base::MenuLinkIterBase::get_next (std::string * out_link, Gio::MenuModel * value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMenuLinkIter* iter, const char** out_link, ::GMenuModel** value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_link_iter_get_next;
  ::GMenuModel* value_o {};
  const char* out_link_o {};
  auto _temp_ret = call_wrap_v ((::GMenuLinkIter*) (gobj_()), (const char**) (out_link ? &out_link_o : nullptr), (::GMenuModel**) (value ? &value_o : nullptr));
  if (value) *value = gi::wrap (value_o, gi::transfer_full, gi::direction_out);
  if (out_link) *out_link = gi::wrap (out_link_o, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string, Gio::MenuModel> base::MenuLinkIterBase::get_next () noexcept
{
  typedef gboolean (*call_wrap_t) (::GMenuLinkIter* iter, const char** out_link, ::GMenuModel** value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_link_iter_get_next;
  ::GMenuModel* value_o {};
  const char* out_link_o {};
  auto _temp_ret = call_wrap_v ((::GMenuLinkIter*) (gobj_()), (const char**) (&out_link_o), (::GMenuModel**) (&value_o));
  return std::make_tuple (_temp_ret, gi::wrap (out_link_o, gi::transfer_none, gi::direction_out), gi::wrap (value_o, gi::transfer_full, gi::direction_out));
}

// GMenuModel* g_menu_link_iter_get_value (GMenuLinkIter* iter);
// ::GMenuModel* g_menu_link_iter_get_value (::GMenuLinkIter* iter);
Gio::MenuModel base::MenuLinkIterBase::get_value () noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::GMenuLinkIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_link_iter_get_value;
  auto _temp_ret = call_wrap_v ((::GMenuLinkIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_menu_link_iter_next (GMenuLinkIter* iter);
// gboolean g_menu_link_iter_next (::GMenuLinkIter* iter);
bool base::MenuLinkIterBase::next () noexcept
{
  typedef gboolean (*call_wrap_t) (::GMenuLinkIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_link_iter_next;
  auto _temp_ret = call_wrap_v ((::GMenuLinkIter*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/menulinkiter_extra_def_impl.hpp>)
#include <gio/menulinkiter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/menulinkiter_extra_impl.hpp>)
#include <gio/menulinkiter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void MenuLinkIterClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GMenuLinkIterClass *methods = (::GMenuLinkIterClass *) class_struct;
  (void) methods;

}

// gboolean MenuLinkIter::get_next (GMenuLinkIter* iter, const gchar** out_link, GMenuModel** value);
// gboolean MenuLinkIter::get_next (::GMenuLinkIter* iter, const char** out_link, ::GMenuModel** value);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
