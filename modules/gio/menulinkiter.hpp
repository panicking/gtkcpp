// AUTO-GENERATED

#ifndef _GI_GIO_MENULINKITER_HPP_
#define _GI_GIO_MENULINKITER_HPP_


namespace gi {

namespace repository {

namespace Gio {

class MenuModel;

class MenuLinkIter;

namespace base {


#define GI_GIO_MENULINKITER_BASE base::MenuLinkIterBase
class MenuLinkIterBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GMenuLinkIter BaseObjectType;

MenuLinkIterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_menu_link_iter_get_type(); } 

// const gchar* g_menu_link_iter_get_name (GMenuLinkIter* iter);
// const char* g_menu_link_iter_get_name (::GMenuLinkIter* iter);
GI_INLINE_DECL std::string get_name () noexcept;

// gboolean g_menu_link_iter_get_next (GMenuLinkIter* iter, const gchar** out_link, GMenuModel** value);
// gboolean g_menu_link_iter_get_next (::GMenuLinkIter* iter, const char** out_link, ::GMenuModel** value);
GI_INLINE_DECL bool get_next (std::string * out_link = nullptr, Gio::MenuModel * value = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string, Gio::MenuModel> get_next () noexcept;

// GMenuModel* g_menu_link_iter_get_value (GMenuLinkIter* iter);
// ::GMenuModel* g_menu_link_iter_get_value (::GMenuLinkIter* iter);
GI_INLINE_DECL Gio::MenuModel get_value () noexcept;

// gboolean g_menu_link_iter_next (GMenuLinkIter* iter);
// gboolean g_menu_link_iter_next (::GMenuLinkIter* iter);
GI_INLINE_DECL bool next () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/menulinkiter_extra_def.hpp>)
#include <gio/menulinkiter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/menulinkiter_extra.hpp>)
#include <gio/menulinkiter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class MenuLinkIter : public GI_GIO_MENULINKITER_BASE
{ typedef GI_GIO_MENULINKITER_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GMenuLinkIter>
{ typedef Gio::MenuLinkIter type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class MenuLinkIterClassDef
{
typedef MenuLinkIterClassDef self;
public:
typedef Gio::MenuLinkIter instance_type;
typedef ::GMenuLinkIterClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean MenuLinkIter::get_next (GMenuLinkIter* iter, const gchar** out_link, GMenuModel** value);
// gboolean MenuLinkIter::get_next (::GMenuLinkIter* iter, const char** out_link, ::GMenuModel** value);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported


};

GI_CLASS_IMPL_BEGIN


class MenuLinkIterClass: public detail::ClassTemplate<Gio::impl::internal::MenuLinkIterClassDef, GObject::impl::internal::ObjectClass>
{
typedef MenuLinkIterClass self;
typedef detail::ClassTemplate<Gio::impl::internal::MenuLinkIterClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean MenuLinkIter::get_next (GMenuLinkIter* iter, const gchar** out_link, GMenuModel** value);
// gboolean MenuLinkIter::get_next (::GMenuLinkIter* iter, const char** out_link, ::GMenuModel** value);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported


};

} // namespace internal

GI_CLASS_IMPL_END

using MenuLinkIterImpl = detail::ObjectImpl<MenuLinkIter, internal::MenuLinkIterClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
