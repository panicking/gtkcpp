// AUTO-GENERATED

#ifndef _GI_WEBKIT2_BACKFORWARDLIST_HPP_
#define _GI_WEBKIT2_BACKFORWARDLIST_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class BackForwardListItem;

class BackForwardList;

namespace base {


#define GI_WEBKIT2_BACKFORWARDLIST_BASE base::BackForwardListBase
class BackForwardListBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitBackForwardList BaseObjectType;

BackForwardListBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_back_forward_list_get_type(); } 

// WebKitBackForwardListItem* webkit_back_forward_list_get_back_item (WebKitBackForwardList* back_forward_list);
// ::WebKitBackForwardListItem* webkit_back_forward_list_get_back_item (::WebKitBackForwardList* back_forward_list);
GI_INLINE_DECL WebKit2::BackForwardListItem get_back_item () noexcept;

// GList* webkit_back_forward_list_get_back_list (WebKitBackForwardList* back_forward_list);
// ::GList* webkit_back_forward_list_get_back_list (::WebKitBackForwardList* back_forward_list);
GI_INLINE_DECL std::vector<WebKit2::BackForwardListItem> get_back_list () noexcept;

// GList* webkit_back_forward_list_get_back_list_with_limit (WebKitBackForwardList* back_forward_list, guint limit);
// ::GList* webkit_back_forward_list_get_back_list_with_limit (::WebKitBackForwardList* back_forward_list, guint limit);
GI_INLINE_DECL std::vector<WebKit2::BackForwardListItem> get_back_list_with_limit (guint limit) noexcept;

// WebKitBackForwardListItem* webkit_back_forward_list_get_current_item (WebKitBackForwardList* back_forward_list);
// ::WebKitBackForwardListItem* webkit_back_forward_list_get_current_item (::WebKitBackForwardList* back_forward_list);
GI_INLINE_DECL WebKit2::BackForwardListItem get_current_item () noexcept;

// WebKitBackForwardListItem* webkit_back_forward_list_get_forward_item (WebKitBackForwardList* back_forward_list);
// ::WebKitBackForwardListItem* webkit_back_forward_list_get_forward_item (::WebKitBackForwardList* back_forward_list);
GI_INLINE_DECL WebKit2::BackForwardListItem get_forward_item () noexcept;

// GList* webkit_back_forward_list_get_forward_list (WebKitBackForwardList* back_forward_list);
// ::GList* webkit_back_forward_list_get_forward_list (::WebKitBackForwardList* back_forward_list);
GI_INLINE_DECL std::vector<WebKit2::BackForwardListItem> get_forward_list () noexcept;

// GList* webkit_back_forward_list_get_forward_list_with_limit (WebKitBackForwardList* back_forward_list, guint limit);
// ::GList* webkit_back_forward_list_get_forward_list_with_limit (::WebKitBackForwardList* back_forward_list, guint limit);
GI_INLINE_DECL std::vector<WebKit2::BackForwardListItem> get_forward_list_with_limit (guint limit) noexcept;

// guint webkit_back_forward_list_get_length (WebKitBackForwardList* back_forward_list);
// guint webkit_back_forward_list_get_length (::WebKitBackForwardList* back_forward_list);
GI_INLINE_DECL guint get_length () noexcept;

// WebKitBackForwardListItem* webkit_back_forward_list_get_nth_item (WebKitBackForwardList* back_forward_list, gint index);
// ::WebKitBackForwardListItem* webkit_back_forward_list_get_nth_item (::WebKitBackForwardList* back_forward_list, gint index);
GI_INLINE_DECL WebKit2::BackForwardListItem get_nth_item (gint index) noexcept;

// signal changed
gi::signal_proxy<void(WebKit2::BackForwardList, WebKit2::BackForwardListItem item_added, void* items_removed)> signal_changed()
{ return gi::signal_proxy<void(WebKit2::BackForwardList, WebKit2::BackForwardListItem item_added, void* items_removed)> (*this, "changed"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/backforwardlist_extra_def.hpp>)
#include <webkit2/backforwardlist_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/backforwardlist_extra.hpp>)
#include <webkit2/backforwardlist_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class BackForwardList : public GI_WEBKIT2_BACKFORWARDLIST_BASE
{ typedef GI_WEBKIT2_BACKFORWARDLIST_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitBackForwardList>
{ typedef WebKit2::BackForwardList type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class BackForwardListClassDef
{
typedef BackForwardListClassDef self;
public:
typedef WebKit2::BackForwardList instance_type;
typedef ::WebKitBackForwardListClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class BackForwardListClass: public detail::ClassTemplate<WebKit2::impl::internal::BackForwardListClassDef, GObject::impl::internal::ObjectClass>
{
typedef BackForwardListClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::BackForwardListClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using BackForwardListImpl = detail::ObjectImpl<BackForwardList, internal::BackForwardListClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
