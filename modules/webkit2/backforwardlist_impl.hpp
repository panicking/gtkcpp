// AUTO-GENERATED

#ifndef _GI_WEBKIT2_BACKFORWARDLIST_IMPL_HPP_
#define _GI_WEBKIT2_BACKFORWARDLIST_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitBackForwardListItem* webkit_back_forward_list_get_back_item (WebKitBackForwardList* back_forward_list);
// ::WebKitBackForwardListItem* webkit_back_forward_list_get_back_item (::WebKitBackForwardList* back_forward_list);
WebKit2::BackForwardListItem base::BackForwardListBase::get_back_item () noexcept
{
  typedef ::WebKitBackForwardListItem* (*call_wrap_t) (::WebKitBackForwardList* back_forward_list);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_back_forward_list_get_back_item;
  auto _temp_ret = call_wrap_v ((::WebKitBackForwardList*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GList* webkit_back_forward_list_get_back_list (WebKitBackForwardList* back_forward_list);
// ::GList* webkit_back_forward_list_get_back_list (::WebKitBackForwardList* back_forward_list);
std::vector<WebKit2::BackForwardListItem> base::BackForwardListBase::get_back_list () noexcept
{
  typedef ::GList* (*call_wrap_t) (::WebKitBackForwardList* back_forward_list);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_back_forward_list_get_back_list;
  auto _temp_ret = call_wrap_v ((::WebKitBackForwardList*) (gobj_()));
  return gi::detail::wrap_list<WebKit2::BackForwardListItem> (_temp_ret, gi::transfer_container);
}

// GList* webkit_back_forward_list_get_back_list_with_limit (WebKitBackForwardList* back_forward_list, guint limit);
// ::GList* webkit_back_forward_list_get_back_list_with_limit (::WebKitBackForwardList* back_forward_list, guint limit);
std::vector<WebKit2::BackForwardListItem> base::BackForwardListBase::get_back_list_with_limit (guint limit) noexcept
{
  typedef ::GList* (*call_wrap_t) (::WebKitBackForwardList* back_forward_list, guint limit);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_back_forward_list_get_back_list_with_limit;
  auto limit_to_c = limit;
  auto _temp_ret = call_wrap_v ((::WebKitBackForwardList*) (gobj_()), (guint) (limit_to_c));
  return gi::detail::wrap_list<WebKit2::BackForwardListItem> (_temp_ret, gi::transfer_container);
}

// WebKitBackForwardListItem* webkit_back_forward_list_get_current_item (WebKitBackForwardList* back_forward_list);
// ::WebKitBackForwardListItem* webkit_back_forward_list_get_current_item (::WebKitBackForwardList* back_forward_list);
WebKit2::BackForwardListItem base::BackForwardListBase::get_current_item () noexcept
{
  typedef ::WebKitBackForwardListItem* (*call_wrap_t) (::WebKitBackForwardList* back_forward_list);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_back_forward_list_get_current_item;
  auto _temp_ret = call_wrap_v ((::WebKitBackForwardList*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitBackForwardListItem* webkit_back_forward_list_get_forward_item (WebKitBackForwardList* back_forward_list);
// ::WebKitBackForwardListItem* webkit_back_forward_list_get_forward_item (::WebKitBackForwardList* back_forward_list);
WebKit2::BackForwardListItem base::BackForwardListBase::get_forward_item () noexcept
{
  typedef ::WebKitBackForwardListItem* (*call_wrap_t) (::WebKitBackForwardList* back_forward_list);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_back_forward_list_get_forward_item;
  auto _temp_ret = call_wrap_v ((::WebKitBackForwardList*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GList* webkit_back_forward_list_get_forward_list (WebKitBackForwardList* back_forward_list);
// ::GList* webkit_back_forward_list_get_forward_list (::WebKitBackForwardList* back_forward_list);
std::vector<WebKit2::BackForwardListItem> base::BackForwardListBase::get_forward_list () noexcept
{
  typedef ::GList* (*call_wrap_t) (::WebKitBackForwardList* back_forward_list);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_back_forward_list_get_forward_list;
  auto _temp_ret = call_wrap_v ((::WebKitBackForwardList*) (gobj_()));
  return gi::detail::wrap_list<WebKit2::BackForwardListItem> (_temp_ret, gi::transfer_container);
}

// GList* webkit_back_forward_list_get_forward_list_with_limit (WebKitBackForwardList* back_forward_list, guint limit);
// ::GList* webkit_back_forward_list_get_forward_list_with_limit (::WebKitBackForwardList* back_forward_list, guint limit);
std::vector<WebKit2::BackForwardListItem> base::BackForwardListBase::get_forward_list_with_limit (guint limit) noexcept
{
  typedef ::GList* (*call_wrap_t) (::WebKitBackForwardList* back_forward_list, guint limit);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_back_forward_list_get_forward_list_with_limit;
  auto limit_to_c = limit;
  auto _temp_ret = call_wrap_v ((::WebKitBackForwardList*) (gobj_()), (guint) (limit_to_c));
  return gi::detail::wrap_list<WebKit2::BackForwardListItem> (_temp_ret, gi::transfer_container);
}

// guint webkit_back_forward_list_get_length (WebKitBackForwardList* back_forward_list);
// guint webkit_back_forward_list_get_length (::WebKitBackForwardList* back_forward_list);
guint base::BackForwardListBase::get_length () noexcept
{
  typedef guint (*call_wrap_t) (::WebKitBackForwardList* back_forward_list);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_back_forward_list_get_length;
  auto _temp_ret = call_wrap_v ((::WebKitBackForwardList*) (gobj_()));
  return _temp_ret;
}

// WebKitBackForwardListItem* webkit_back_forward_list_get_nth_item (WebKitBackForwardList* back_forward_list, gint index);
// ::WebKitBackForwardListItem* webkit_back_forward_list_get_nth_item (::WebKitBackForwardList* back_forward_list, gint index);
WebKit2::BackForwardListItem base::BackForwardListBase::get_nth_item (gint index) noexcept
{
  typedef ::WebKitBackForwardListItem* (*call_wrap_t) (::WebKitBackForwardList* back_forward_list, gint index);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_back_forward_list_get_nth_item;
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((::WebKitBackForwardList*) (gobj_()), (gint) (index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}



} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/backforwardlist_extra_def_impl.hpp>)
#include <webkit2/backforwardlist_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/backforwardlist_extra_impl.hpp>)
#include <webkit2/backforwardlist_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void BackForwardListClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitBackForwardListClass *methods = (::WebKitBackForwardListClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
