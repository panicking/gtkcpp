// AUTO-GENERATED

#ifndef _GI_SOUP_HSTSENFORCERDB_HPP_
#define _GI_SOUP_HSTSENFORCERDB_HPP_

#include "hstsenforcer.hpp"

namespace gi {

namespace repository {

namespace Soup {


class HSTSEnforcerDB;

namespace base {


#define GI_SOUP_HSTSENFORCERDB_BASE base::HSTSEnforcerDBBase
class HSTSEnforcerDBBase : public Soup::HSTSEnforcer
{
typedef Soup::HSTSEnforcer super_type;
public:
typedef ::SoupHSTSEnforcerDB BaseObjectType;

HSTSEnforcerDBBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_hsts_enforcer_db_get_type(); } 

// SoupHSTSEnforcer* soup_hsts_enforcer_db_new (const char* filename);
// ::SoupHSTSEnforcerDB* soup_hsts_enforcer_db_new (const char* filename);
static GI_INLINE_DECL Soup::HSTSEnforcerDB new_ (const std::string & filename) noexcept;

gi::property_proxy<std::string, base::HSTSEnforcerDBBase> property_filename()
{ return gi::property_proxy<std::string, base::HSTSEnforcerDBBase> (*this, "filename"); }
const gi::property_proxy<std::string, base::HSTSEnforcerDBBase> property_filename() const
{ return gi::property_proxy<std::string, base::HSTSEnforcerDBBase> (*this, "filename"); }

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/hstsenforcerdb_extra_def.hpp>)
#include <soup/hstsenforcerdb_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/hstsenforcerdb_extra.hpp>)
#include <soup/hstsenforcerdb_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class HSTSEnforcerDB : public GI_SOUP_HSTSENFORCERDB_BASE
{ typedef GI_SOUP_HSTSENFORCERDB_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupHSTSEnforcerDB>
{ typedef Soup::HSTSEnforcerDB type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class HSTSEnforcerDBClassDef
{
typedef HSTSEnforcerDBClassDef self;
public:
typedef Soup::HSTSEnforcerDB instance_type;
typedef ::SoupHSTSEnforcerDBClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class HSTSEnforcerDBClass: public detail::ClassTemplate<Soup::impl::internal::HSTSEnforcerDBClassDef, Soup::impl::internal::HSTSEnforcerClass>
{
typedef HSTSEnforcerDBClass self;
typedef detail::ClassTemplate<Soup::impl::internal::HSTSEnforcerDBClassDef, Soup::impl::internal::HSTSEnforcerClass> super;

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

using HSTSEnforcerDBImpl = detail::ObjectImpl<HSTSEnforcerDB, internal::HSTSEnforcerDBClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
