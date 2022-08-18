// AUTO-GENERATED

#ifndef _GI_GIO_MENUATTRIBUTEITER_HPP_
#define _GI_GIO_MENUATTRIBUTEITER_HPP_


namespace gi {

namespace repository {

namespace Gio {


class MenuAttributeIter;

namespace base {


#define GI_GIO_MENUATTRIBUTEITER_BASE base::MenuAttributeIterBase
class MenuAttributeIterBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GMenuAttributeIter BaseObjectType;

MenuAttributeIterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_menu_attribute_iter_get_type(); } 

// const gchar* g_menu_attribute_iter_get_name (GMenuAttributeIter* iter);
// const char* g_menu_attribute_iter_get_name (::GMenuAttributeIter* iter);
GI_INLINE_DECL std::string get_name () noexcept;

// gboolean g_menu_attribute_iter_get_next (GMenuAttributeIter* iter, const gchar** out_name, GVariant** value);
// gboolean g_menu_attribute_iter_get_next (::GMenuAttributeIter* iter, const char** out_name, ::GVariant** value);
GI_INLINE_DECL bool get_next (std::string * out_name = nullptr, GLib::Variant * value = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string, GLib::Variant> get_next () noexcept;

// GVariant* g_menu_attribute_iter_get_value (GMenuAttributeIter* iter);
// ::GVariant* g_menu_attribute_iter_get_value (::GMenuAttributeIter* iter);
GI_INLINE_DECL GLib::Variant get_value () noexcept;

// gboolean g_menu_attribute_iter_next (GMenuAttributeIter* iter);
// gboolean g_menu_attribute_iter_next (::GMenuAttributeIter* iter);
GI_INLINE_DECL bool next () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/menuattributeiter_extra_def.hpp>)
#include <gio/menuattributeiter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/menuattributeiter_extra.hpp>)
#include <gio/menuattributeiter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class MenuAttributeIter : public GI_GIO_MENUATTRIBUTEITER_BASE
{ typedef GI_GIO_MENUATTRIBUTEITER_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GMenuAttributeIter>
{ typedef Gio::MenuAttributeIter type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class MenuAttributeIterClassDef
{
typedef MenuAttributeIterClassDef self;
public:
typedef Gio::MenuAttributeIter instance_type;
typedef ::GMenuAttributeIterClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean MenuAttributeIter::get_next (GMenuAttributeIter* iter, const gchar** out_name, GVariant** value);
// gboolean MenuAttributeIter::get_next (::GMenuAttributeIter* iter, const char** out_name, ::GVariant** value);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported


};

GI_CLASS_IMPL_BEGIN


class MenuAttributeIterClass: public detail::ClassTemplate<Gio::impl::internal::MenuAttributeIterClassDef, GObject::impl::internal::ObjectClass>
{
typedef MenuAttributeIterClass self;
typedef detail::ClassTemplate<Gio::impl::internal::MenuAttributeIterClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean MenuAttributeIter::get_next (GMenuAttributeIter* iter, const gchar** out_name, GVariant** value);
// gboolean MenuAttributeIter::get_next (::GMenuAttributeIter* iter, const char** out_name, ::GVariant** value);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported


};

} // namespace internal

GI_CLASS_IMPL_END

using MenuAttributeIterImpl = detail::ObjectImpl<MenuAttributeIter, internal::MenuAttributeIterClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
