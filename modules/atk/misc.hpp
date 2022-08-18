// AUTO-GENERATED

#ifndef _GI_ATK_MISC_HPP_
#define _GI_ATK_MISC_HPP_


namespace gi {

namespace repository {

namespace Atk {


class Misc;

namespace base {


#define GI_ATK_MISC_BASE base::MiscBase
class MiscBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AtkMisc BaseObjectType;

MiscBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_misc_get_type(); } 

// const AtkMisc* atk_misc_get_instance ();
// const ::AtkMisc* atk_misc_get_instance ();
// IGNORE; deprecated

// void atk_misc_threads_enter (AtkMisc* misc);
// void atk_misc_threads_enter (::AtkMisc* misc);
// IGNORE; deprecated

// void atk_misc_threads_leave (AtkMisc* misc);
// void atk_misc_threads_leave (::AtkMisc* misc);
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/misc_extra_def.hpp>)
#include <atk/misc_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/misc_extra.hpp>)
#include <atk/misc_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class Misc : public GI_ATK_MISC_BASE
{ typedef GI_ATK_MISC_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkMisc>
{ typedef Atk::Misc type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class MiscClassDef
{
typedef MiscClassDef self;
public:
typedef Atk::Misc instance_type;
typedef ::AtkMiscClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Misc::threads_enter (AtkMisc* misc);
// void Misc::threads_enter (::AtkMisc* misc);
// IGNORE; deprecated

// void Misc::threads_leave (AtkMisc* misc);
// void Misc::threads_leave (::AtkMisc* misc);
// IGNORE; deprecated


};

GI_CLASS_IMPL_BEGIN


class MiscClass: public detail::ClassTemplate<Atk::impl::internal::MiscClassDef, GObject::impl::internal::ObjectClass>
{
typedef MiscClass self;
typedef detail::ClassTemplate<Atk::impl::internal::MiscClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Misc::threads_enter (AtkMisc* misc);
// void Misc::threads_enter (::AtkMisc* misc);
// IGNORE; deprecated

// void Misc::threads_leave (AtkMisc* misc);
// void Misc::threads_leave (::AtkMisc* misc);
// IGNORE; deprecated


};

} // namespace internal

GI_CLASS_IMPL_END

using MiscImpl = detail::ObjectImpl<Misc, internal::MiscClass>;

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
