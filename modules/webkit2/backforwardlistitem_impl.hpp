// AUTO-GENERATED

#ifndef _GI_WEBKIT2_BACKFORWARDLISTITEM_IMPL_HPP_
#define _GI_WEBKIT2_BACKFORWARDLISTITEM_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// const gchar* webkit_back_forward_list_item_get_original_uri (WebKitBackForwardListItem* list_item);
// const char* webkit_back_forward_list_item_get_original_uri (::WebKitBackForwardListItem* list_item);
std::string base::BackForwardListItemBase::get_original_uri () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitBackForwardListItem* list_item);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_back_forward_list_item_get_original_uri;
  auto _temp_ret = call_wrap_v ((::WebKitBackForwardListItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_back_forward_list_item_get_title (WebKitBackForwardListItem* list_item);
// const char* webkit_back_forward_list_item_get_title (::WebKitBackForwardListItem* list_item);
std::string base::BackForwardListItemBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitBackForwardListItem* list_item);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_back_forward_list_item_get_title;
  auto _temp_ret = call_wrap_v ((::WebKitBackForwardListItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_back_forward_list_item_get_uri (WebKitBackForwardListItem* list_item);
// const char* webkit_back_forward_list_item_get_uri (::WebKitBackForwardListItem* list_item);
std::string base::BackForwardListItemBase::get_uri () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitBackForwardListItem* list_item);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_back_forward_list_item_get_uri;
  auto _temp_ret = call_wrap_v ((::WebKitBackForwardListItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/backforwardlistitem_extra_def_impl.hpp>)
#include <webkit2/backforwardlistitem_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/backforwardlistitem_extra_impl.hpp>)
#include <webkit2/backforwardlistitem_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void BackForwardListItemClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitBackForwardListItemClass *methods = (::WebKitBackForwardListItemClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
