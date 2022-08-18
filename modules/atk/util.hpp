// AUTO-GENERATED

#ifndef _GI_ATK_UTIL_HPP_
#define _GI_ATK_UTIL_HPP_


namespace gi {

namespace repository {

namespace Atk {


class Util;

namespace base {


#define GI_ATK_UTIL_BASE base::UtilBase
class UtilBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AtkUtil BaseObjectType;

UtilBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_util_get_type(); } 

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/util_extra_def.hpp>)
#include <atk/util_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/util_extra.hpp>)
#include <atk/util_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class Util : public GI_ATK_UTIL_BASE
{ typedef GI_ATK_UTIL_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkUtil>
{ typedef Atk::Util type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class UtilClassDef
{
typedef UtilClassDef self;
public:
typedef Atk::Util instance_type;
typedef ::AtkUtilClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class UtilClass: public detail::ClassTemplate<Atk::impl::internal::UtilClassDef, GObject::impl::internal::ObjectClass>
{
typedef UtilClass self;
typedef detail::ClassTemplate<Atk::impl::internal::UtilClassDef, GObject::impl::internal::ObjectClass> super;

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

using UtilImpl = detail::ObjectImpl<Util, internal::UtilClass>;

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
