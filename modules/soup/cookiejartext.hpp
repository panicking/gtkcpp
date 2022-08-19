// AUTO-GENERATED

#ifndef _GI_SOUP_COOKIEJARTEXT_HPP_
#define _GI_SOUP_COOKIEJARTEXT_HPP_

#include "cookiejar.hpp"

namespace gi {

namespace repository {

namespace Soup {


class CookieJarText;

namespace base {


#define GI_SOUP_COOKIEJARTEXT_BASE base::CookieJarTextBase
class CookieJarTextBase : public Soup::CookieJar
{
typedef Soup::CookieJar super_type;
public:
typedef ::SoupCookieJarText BaseObjectType;

CookieJarTextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_cookie_jar_text_get_type(); } 

// SoupCookieJar* soup_cookie_jar_text_new (const char* filename, gboolean read_only);
// ::SoupCookieJarText* soup_cookie_jar_text_new (const char* filename, gboolean read_only);
static GI_INLINE_DECL Soup::CookieJarText new_ (const std::string & filename, gboolean read_only) noexcept;

gi::property_proxy<std::string, base::CookieJarTextBase> property_filename()
{ return gi::property_proxy<std::string, base::CookieJarTextBase> (*this, "filename"); }
const gi::property_proxy<std::string, base::CookieJarTextBase> property_filename() const
{ return gi::property_proxy<std::string, base::CookieJarTextBase> (*this, "filename"); }

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/cookiejartext_extra_def.hpp>)
#include <soup/cookiejartext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/cookiejartext_extra.hpp>)
#include <soup/cookiejartext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class CookieJarText : public GI_SOUP_COOKIEJARTEXT_BASE
{ typedef GI_SOUP_COOKIEJARTEXT_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupCookieJarText>
{ typedef Soup::CookieJarText type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class CookieJarTextClassDef
{
typedef CookieJarTextClassDef self;
public:
typedef Soup::CookieJarText instance_type;
typedef ::SoupCookieJarTextClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class CookieJarTextClass: public detail::ClassTemplate<Soup::impl::internal::CookieJarTextClassDef, Soup::impl::internal::CookieJarClass>
{
typedef CookieJarTextClass self;
typedef detail::ClassTemplate<Soup::impl::internal::CookieJarTextClassDef, Soup::impl::internal::CookieJarClass> super;

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

using CookieJarTextImpl = detail::ObjectImpl<CookieJarText, internal::CookieJarTextClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
