// AUTO-GENERATED

#ifndef _GI_SOUP_CACHE_HPP_
#define _GI_SOUP_CACHE_HPP_


namespace gi {

namespace repository {

namespace Soup {

class Message;
class SessionFeature;

class Cache;

namespace base {


#define GI_SOUP_CACHE_BASE base::CacheBase
class CacheBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::SoupCache BaseObjectType;

CacheBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_cache_get_type(); } 

GI_INLINE_DECL Soup::SessionFeature interface_ (gi::interface_tag<Soup::SessionFeature>);

GI_INLINE_DECL operator Soup::SessionFeature ();

// SoupCache* soup_cache_new (const char* cache_dir, SoupCacheType cache_type);
// ::SoupCache* soup_cache_new (const char* cache_dir, ::SoupCacheType cache_type);
static GI_INLINE_DECL Soup::Cache new_ (const std::string & cache_dir, Soup::CacheType cache_type) noexcept;
static GI_INLINE_DECL Soup::Cache new_ (Soup::CacheType cache_type) noexcept;

// void soup_cache_clear (SoupCache* cache);
// void soup_cache_clear (::SoupCache* cache);
GI_INLINE_DECL void clear () noexcept;

// void soup_cache_dump (SoupCache* cache);
// void soup_cache_dump (::SoupCache* cache);
GI_INLINE_DECL void dump () noexcept;

// void soup_cache_flush (SoupCache* cache);
// void soup_cache_flush (::SoupCache* cache);
GI_INLINE_DECL void flush () noexcept;

// guint soup_cache_get_max_size (SoupCache* cache);
// guint soup_cache_get_max_size (::SoupCache* cache);
GI_INLINE_DECL guint get_max_size () noexcept;

// void soup_cache_load (SoupCache* cache);
// void soup_cache_load (::SoupCache* cache);
GI_INLINE_DECL void load () noexcept;

// void soup_cache_set_max_size (SoupCache* cache, guint max_size);
// void soup_cache_set_max_size (::SoupCache* cache, guint max_size);
GI_INLINE_DECL void set_max_size (guint max_size) noexcept;

gi::property_proxy<std::string, base::CacheBase> property_cache_dir()
{ return gi::property_proxy<std::string, base::CacheBase> (*this, "cache-dir"); }
const gi::property_proxy<std::string, base::CacheBase> property_cache_dir() const
{ return gi::property_proxy<std::string, base::CacheBase> (*this, "cache-dir"); }

gi::property_proxy<Soup::CacheType, base::CacheBase> property_cache_type()
{ return gi::property_proxy<Soup::CacheType, base::CacheBase> (*this, "cache-type"); }
const gi::property_proxy<Soup::CacheType, base::CacheBase> property_cache_type() const
{ return gi::property_proxy<Soup::CacheType, base::CacheBase> (*this, "cache-type"); }

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/cache_extra_def.hpp>)
#include <soup/cache_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/cache_extra.hpp>)
#include <soup/cache_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class Cache : public GI_SOUP_CACHE_BASE
{ typedef GI_SOUP_CACHE_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupCache>
{ typedef Soup::Cache type; }; 

} // namespace repository

} // namespace gi

#include "sessionfeature.hpp"

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class CacheClassDef
{
typedef CacheClassDef self;
public:
typedef Soup::Cache instance_type;
typedef ::SoupCacheClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// SoupCacheability Cache::get_cacheability (SoupCache* cache, SoupMessage* msg);
// ::SoupCacheability Cache::get_cacheability (::SoupCache* cache, ::SoupMessage* msg);
virtual Soup::Cacheability get_cacheability_ (Soup::Message msg) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class CacheClass: public detail::ClassTemplate<Soup::impl::internal::CacheClassDef, GObject::impl::internal::ObjectClass, Soup::impl::internal::SessionFeatureInterfaceClassImpl>
{
typedef CacheClass self;
typedef detail::ClassTemplate<Soup::impl::internal::CacheClassDef, GObject::impl::internal::ObjectClass, Soup::impl::internal::SessionFeatureInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Soup::impl::internal::SessionFeatureInterfaceClassImpl SoupSessionFeatureInterface_type;


// SoupCacheability Cache::get_cacheability (SoupCache* cache, SoupMessage* msg);
// ::SoupCacheability Cache::get_cacheability (::SoupCache* cache, ::SoupMessage* msg);
GI_INLINE_DECL Soup::Cacheability get_cacheability_ (Soup::Message msg) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using CacheImpl = detail::ObjectImpl<Cache, internal::CacheClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
