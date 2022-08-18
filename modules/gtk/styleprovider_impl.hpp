// AUTO-GENERATED

#ifndef _GI_GTK_STYLEPROVIDER_IMPL_HPP_
#define _GI_GTK_STYLEPROVIDER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkIconFactory* gtk_style_provider_get_icon_factory (GtkStyleProvider* provider, GtkWidgetPath* path);
// ::GtkIconFactory* gtk_style_provider_get_icon_factory (::GtkStyleProvider* provider, ::GtkWidgetPath* path);
// IGNORE; deprecated

// GtkStyleProperties* gtk_style_provider_get_style (GtkStyleProvider* provider, GtkWidgetPath* path);
// ::GtkStyleProperties* gtk_style_provider_get_style (::GtkStyleProvider* provider, ::GtkWidgetPath* path);
// IGNORE; deprecated

// gboolean gtk_style_provider_get_style_property (GtkStyleProvider* provider, GtkWidgetPath* path, GtkStateFlags state, GParamSpec* pspec, GValue* value);
// gboolean gtk_style_provider_get_style_property (::GtkStyleProvider* provider, ::GtkWidgetPath* path, ::GtkStateFlags state, ::GParamSpec* pspec, ::GValue* value);
bool base::StyleProviderBase::get_style_property (Gtk::WidgetPath path, Gtk::StateFlags state, GObject::ParamSpec pspec, GObject::Value & value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkStyleProvider* provider, ::GtkWidgetPath* path, ::GtkStateFlags state, ::GParamSpec* pspec, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_provider_get_style_property;
  traits::unset_wrapper<GValue>::type value_c;
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  auto state_to_c = gi::unwrap (state);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkStyleProvider*) (gobj_()), (::GtkWidgetPath*) (path_to_c), (::GtkStateFlags) (state_to_c), (::GParamSpec*) (pspec_to_c), (::GValue*) ((GValue*) &value_c));
  value = gi::wrap ((GValue*) &value_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GObject::Value> base::StyleProviderBase::get_style_property (Gtk::WidgetPath path, Gtk::StateFlags state, GObject::ParamSpec pspec) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkStyleProvider* provider, ::GtkWidgetPath* path, ::GtkStateFlags state, ::GParamSpec* pspec, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_provider_get_style_property;
  traits::unset_wrapper<GValue>::type value_c;
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  auto state_to_c = gi::unwrap (state);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkStyleProvider*) (gobj_()), (::GtkWidgetPath*) (path_to_c), (::GtkStateFlags) (state_to_c), (::GParamSpec*) (pspec_to_c), (::GValue*) ((GValue*) &value_c));
  return std::make_tuple (_temp_ret, gi::wrap ((GValue*) &value_c, gi::transfer_none, gi::direction_out));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/styleprovider_extra_def_impl.hpp>)
#include <gtk/styleprovider_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/styleprovider_extra_impl.hpp>)
#include <gtk/styleprovider_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void StyleProviderIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GtkStyleProviderIface *methods = (::GtkStyleProviderIface *) interface_struct;
  (void) methods;

}

// GtkIconFactory* StyleProvider::get_icon_factory (GtkStyleProvider* provider, GtkWidgetPath* path);
// ::GtkIconFactory* StyleProvider::get_icon_factory (::GtkStyleProvider* provider, ::GtkWidgetPath* path);
// IGNORE; deprecated

// GtkStyleProperties* StyleProvider::get_style (GtkStyleProvider* provider, GtkWidgetPath* path);
// ::GtkStyleProperties* StyleProvider::get_style (::GtkStyleProvider* provider, ::GtkWidgetPath* path);
// IGNORE; deprecated

// gboolean StyleProvider::get_style_property (GtkStyleProvider* provider, GtkWidgetPath* path, GtkStateFlags state, GParamSpec* pspec, GValue* value);
// gboolean StyleProvider::get_style_property (::GtkStyleProvider* provider, ::GtkWidgetPath* path, ::GtkStateFlags state, ::GParamSpec* pspec, ::GValue* value);
// SKIP; virtual-method out parameter not supported

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
