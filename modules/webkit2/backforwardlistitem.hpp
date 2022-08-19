// AUTO-GENERATED

#ifndef _GI_WEBKIT2_BACKFORWARDLISTITEM_HPP_
#define _GI_WEBKIT2_BACKFORWARDLISTITEM_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class BackForwardListItem;

namespace base {


#define GI_WEBKIT2_BACKFORWARDLISTITEM_BASE base::BackForwardListItemBase
class BackForwardListItemBase : public GObject::InitiallyUnowned
{
typedef GObject::InitiallyUnowned super_type;
public:
typedef ::WebKitBackForwardListItem BaseObjectType;

BackForwardListItemBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_back_forward_list_item_get_type(); } 

// const gchar* webkit_back_forward_list_item_get_original_uri (WebKitBackForwardListItem* list_item);
// const char* webkit_back_forward_list_item_get_original_uri (::WebKitBackForwardListItem* list_item);
GI_INLINE_DECL std::string get_original_uri () noexcept;

// const gchar* webkit_back_forward_list_item_get_title (WebKitBackForwardListItem* list_item);
// const char* webkit_back_forward_list_item_get_title (::WebKitBackForwardListItem* list_item);
GI_INLINE_DECL std::string get_title () noexcept;

// const gchar* webkit_back_forward_list_item_get_uri (WebKitBackForwardListItem* list_item);
// const char* webkit_back_forward_list_item_get_uri (::WebKitBackForwardListItem* list_item);
GI_INLINE_DECL std::string get_uri () noexcept;

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/backforwardlistitem_extra_def.hpp>)
#include <webkit2/backforwardlistitem_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/backforwardlistitem_extra.hpp>)
#include <webkit2/backforwardlistitem_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class BackForwardListItem : public GI_WEBKIT2_BACKFORWARDLISTITEM_BASE
{ typedef GI_WEBKIT2_BACKFORWARDLISTITEM_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitBackForwardListItem>
{ typedef WebKit2::BackForwardListItem type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class BackForwardListItemClassDef
{
typedef BackForwardListItemClassDef self;
public:
typedef WebKit2::BackForwardListItem instance_type;
typedef ::WebKitBackForwardListItemClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class BackForwardListItemClass: public detail::ClassTemplate<WebKit2::impl::internal::BackForwardListItemClassDef, GObject::impl::internal::InitiallyUnownedClass>
{
typedef BackForwardListItemClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::BackForwardListItemClassDef, GObject::impl::internal::InitiallyUnownedClass> super;

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

using BackForwardListItemImpl = detail::ObjectImpl<BackForwardListItem, internal::BackForwardListItemClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
