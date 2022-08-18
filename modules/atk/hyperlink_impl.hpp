// AUTO-GENERATED

#ifndef _GI_ATK_HYPERLINK_IMPL_HPP_
#define _GI_ATK_HYPERLINK_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

Atk::Action HyperlinkBase::interface_ (gi::interface_tag<Atk::Action>)
{ return gi::wrap ((Atk::Action::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

HyperlinkBase::operator Atk::Action ()
{ return interface_ (gi::interface_tag<Atk::Action>()); }

// gint atk_hyperlink_get_end_index (AtkHyperlink* link_);
// gint atk_hyperlink_get_end_index (::AtkHyperlink* link_);
gint base::HyperlinkBase::get_end_index () noexcept
{
  typedef gint (*call_wrap_t) (::AtkHyperlink* link_);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_hyperlink_get_end_index;
  auto _temp_ret = call_wrap_v ((::AtkHyperlink*) (gobj_()));
  return _temp_ret;
}

// gint atk_hyperlink_get_n_anchors (AtkHyperlink* link_);
// gint atk_hyperlink_get_n_anchors (::AtkHyperlink* link_);
gint base::HyperlinkBase::get_n_anchors () noexcept
{
  typedef gint (*call_wrap_t) (::AtkHyperlink* link_);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_hyperlink_get_n_anchors;
  auto _temp_ret = call_wrap_v ((::AtkHyperlink*) (gobj_()));
  return _temp_ret;
}

// AtkObject* atk_hyperlink_get_object (AtkHyperlink* link_, gint i);
// ::AtkObject* atk_hyperlink_get_object (::AtkHyperlink* link_, gint i);
Atk::Object base::HyperlinkBase::get_object (gint i) noexcept
{
  typedef ::AtkObject* (*call_wrap_t) (::AtkHyperlink* link_, gint i);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_hyperlink_get_object;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((::AtkHyperlink*) (gobj_()), (gint) (i_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint atk_hyperlink_get_start_index (AtkHyperlink* link_);
// gint atk_hyperlink_get_start_index (::AtkHyperlink* link_);
gint base::HyperlinkBase::get_start_index () noexcept
{
  typedef gint (*call_wrap_t) (::AtkHyperlink* link_);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_hyperlink_get_start_index;
  auto _temp_ret = call_wrap_v ((::AtkHyperlink*) (gobj_()));
  return _temp_ret;
}

// gchar* atk_hyperlink_get_uri (AtkHyperlink* link_, gint i);
// char* atk_hyperlink_get_uri (::AtkHyperlink* link_, gint i);
std::string base::HyperlinkBase::get_uri (gint i) noexcept
{
  typedef char* (*call_wrap_t) (::AtkHyperlink* link_, gint i);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_hyperlink_get_uri;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((::AtkHyperlink*) (gobj_()), (gint) (i_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean atk_hyperlink_is_inline (AtkHyperlink* link_);
// gboolean atk_hyperlink_is_inline (::AtkHyperlink* link_);
bool base::HyperlinkBase::is_inline () noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkHyperlink* link_);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_hyperlink_is_inline;
  auto _temp_ret = call_wrap_v ((::AtkHyperlink*) (gobj_()));
  return _temp_ret;
}

// gboolean atk_hyperlink_is_selected_link (AtkHyperlink* link_);
// gboolean atk_hyperlink_is_selected_link (::AtkHyperlink* link_);
// IGNORE; deprecated

// gboolean atk_hyperlink_is_valid (AtkHyperlink* link_);
// gboolean atk_hyperlink_is_valid (::AtkHyperlink* link_);
bool base::HyperlinkBase::is_valid () noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkHyperlink* link_);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_hyperlink_is_valid;
  auto _temp_ret = call_wrap_v ((::AtkHyperlink*) (gobj_()));
  return _temp_ret;
}



} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/hyperlink_extra_def_impl.hpp>)
#include <atk/hyperlink_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/hyperlink_extra_impl.hpp>)
#include <atk/hyperlink_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void HyperlinkClassDef::class_init (gpointer class_struct, gpointer )
{
  ::AtkHyperlinkClass *methods = (::AtkHyperlinkClass *) class_struct;
  (void) methods;

  methods->get_end_index = (decltype (methods->get_end_index)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_end_index_>;
  methods->get_n_anchors = (decltype (methods->get_n_anchors)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_n_anchors_>;
  methods->get_object = (decltype (methods->get_object)) detail::method_wrapper<self, Atk::Object (*) (gint i), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_object_>;
  methods->get_start_index = (decltype (methods->get_start_index)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_start_index_>;
  methods->get_uri = (decltype (methods->get_uri)) detail::method_wrapper<self, std::string (*) (gint i), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::get_uri_>;
  methods->is_valid = (decltype (methods->is_valid)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::is_valid_>;
  methods->link_activated = (decltype (methods->link_activated)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::link_activated_>;
  methods->link_state = (decltype (methods->link_state)) detail::method_wrapper<self, guint (*) (), gi::transfer_none_t>::wrapper<&self::link_state_>;
}

// gint Hyperlink::get_end_index (AtkHyperlink* link_);
// gint Hyperlink::get_end_index (::AtkHyperlink* link_);
gint HyperlinkClass::get_end_index_ () noexcept
{
  if (!get_struct_()->get_end_index) return gint{};
  typedef gint (*call_wrap_t) (::AtkHyperlink* link_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_end_index;
  auto _temp_ret = call_wrap_v ((::AtkHyperlink*) (gobj_()));
  return _temp_ret;
}

// gint Hyperlink::get_n_anchors (AtkHyperlink* link_);
// gint Hyperlink::get_n_anchors (::AtkHyperlink* link_);
gint HyperlinkClass::get_n_anchors_ () noexcept
{
  if (!get_struct_()->get_n_anchors) return gint{};
  typedef gint (*call_wrap_t) (::AtkHyperlink* link_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_n_anchors;
  auto _temp_ret = call_wrap_v ((::AtkHyperlink*) (gobj_()));
  return _temp_ret;
}

// AtkObject* Hyperlink::get_object (AtkHyperlink* link_, gint i);
// ::AtkObject* Hyperlink::get_object (::AtkHyperlink* link_, gint i);
Atk::Object HyperlinkClass::get_object_ (gint i) noexcept
{
  if (!get_struct_()->get_object) return Atk::Object{};
  typedef ::AtkObject* (*call_wrap_t) (::AtkHyperlink* link_, gint i);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_object;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((::AtkHyperlink*) (gobj_()), (gint) (i_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint Hyperlink::get_start_index (AtkHyperlink* link_);
// gint Hyperlink::get_start_index (::AtkHyperlink* link_);
gint HyperlinkClass::get_start_index_ () noexcept
{
  if (!get_struct_()->get_start_index) return gint{};
  typedef gint (*call_wrap_t) (::AtkHyperlink* link_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_start_index;
  auto _temp_ret = call_wrap_v ((::AtkHyperlink*) (gobj_()));
  return _temp_ret;
}

// gchar* Hyperlink::get_uri (AtkHyperlink* link_, gint i);
// char* Hyperlink::get_uri (::AtkHyperlink* link_, gint i);
std::string HyperlinkClass::get_uri_ (gint i) noexcept
{
  if (!get_struct_()->get_uri) return std::string{};
  typedef char* (*call_wrap_t) (::AtkHyperlink* link_, gint i);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_uri;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((::AtkHyperlink*) (gobj_()), (gint) (i_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean Hyperlink::is_selected_link (AtkHyperlink* link_);
// gboolean Hyperlink::is_selected_link (::AtkHyperlink* link_);
// IGNORE; deprecated

// gboolean Hyperlink::is_valid (AtkHyperlink* link_);
// gboolean Hyperlink::is_valid (::AtkHyperlink* link_);
bool HyperlinkClass::is_valid_ () noexcept
{
  if (!get_struct_()->is_valid) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkHyperlink* link_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_valid;
  auto _temp_ret = call_wrap_v ((::AtkHyperlink*) (gobj_()));
  return _temp_ret;
}

// void Hyperlink::link_activated (AtkHyperlink* link_);
// void Hyperlink::link_activated (::AtkHyperlink* link_);
void HyperlinkClass::link_activated_ () noexcept
{
  if (!get_struct_()->link_activated) return ;
  typedef void (*call_wrap_t) (::AtkHyperlink* link_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->link_activated;
  call_wrap_v ((::AtkHyperlink*) (gobj_()));
}

// guint Hyperlink::link_state (AtkHyperlink* link_);
// guint Hyperlink::link_state (::AtkHyperlink* link_);
guint HyperlinkClass::link_state_ () noexcept
{
  if (!get_struct_()->link_state) return guint{};
  typedef guint (*call_wrap_t) (::AtkHyperlink* link_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->link_state;
  auto _temp_ret = call_wrap_v ((::AtkHyperlink*) (gobj_()));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
