// AUTO-GENERATED

#ifndef _GI_SOUP_COOKIEJARDB_HPP_
#define _GI_SOUP_COOKIEJARDB_HPP_

#include "cookiejar.hpp"

namespace gi {

namespace repository {

namespace Soup {


class CookieJarDB;

namespace base {


#define GI_SOUP_COOKIEJARDB_BASE base::CookieJarDBBase
class CookieJarDBBase : public Soup::CookieJar
{
typedef Soup::CookieJar super_type;
public:
typedef ::SoupCookieJarDB BaseObjectType;

CookieJarDBBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_cookie_jar_db_get_type(); } 

// SoupCookieJar* soup_cookie_jar_db_new (const char* filename, gboolean read_only);
// ::SoupCookieJarDB* soup_cookie_jar_db_new (const char* filename, gboolean read_only);
static GI_INLINE_DECL Soup::CookieJarDB new_ (const std::string & filename, gboolean read_only) noexcept;

gi::property_proxy<std::string, base::CookieJarDBBase> property_filename()
{ return gi::property_proxy<std::string, base::CookieJarDBBase> (*this, "filename"); }
const gi::property_proxy<std::string, base::CookieJarDBBase> property_filename() const
{ return gi::property_proxy<std::string, base::CookieJarDBBase> (*this, "filename"); }

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/cookiejardb_extra_def.hpp>)
#include <soup/cookiejardb_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/cookiejardb_extra.hpp>)
#include <soup/cookiejardb_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class CookieJarDB : public GI_SOUP_COOKIEJARDB_BASE
{ typedef GI_SOUP_COOKIEJARDB_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupCookieJarDB>
{ typedef Soup::CookieJarDB type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class CookieJarDBClassDef
{
typedef CookieJarDBClassDef self;
public:
typedef Soup::CookieJarDB instance_type;
typedef ::SoupCookieJarDBClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class CookieJarDBClass: public detail::ClassTemplate<Soup::impl::internal::CookieJarDBClassDef, Soup::impl::internal::CookieJarClass>
{
typedef CookieJarDBClass self;
typedef detail::ClassTemplate<Soup::impl::internal::CookieJarDBClassDef, Soup::impl::internal::CookieJarClass> super;

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

using CookieJarDBImpl = detail::ObjectImpl<CookieJarDB, internal::CookieJarDBClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
