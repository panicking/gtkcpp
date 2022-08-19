// AUTO-GENERATED

#ifndef _GI_SOUP_CONTENTSNIFFER_HPP_
#define _GI_SOUP_CONTENTSNIFFER_HPP_


namespace gi {

namespace repository {

namespace Soup {

class Buffer;
class Message;
class SessionFeature;

class ContentSniffer;

namespace base {


#define GI_SOUP_CONTENTSNIFFER_BASE base::ContentSnifferBase
class ContentSnifferBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::SoupContentSniffer BaseObjectType;

ContentSnifferBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_content_sniffer_get_type(); } 

GI_INLINE_DECL Soup::SessionFeature interface_ (gi::interface_tag<Soup::SessionFeature>);

GI_INLINE_DECL operator Soup::SessionFeature ();

// SoupContentSniffer* soup_content_sniffer_new ();
// ::SoupContentSniffer* soup_content_sniffer_new ();
static GI_INLINE_DECL Soup::ContentSniffer new_ () noexcept;

// gsize soup_content_sniffer_get_buffer_size (SoupContentSniffer* sniffer);
// gsize soup_content_sniffer_get_buffer_size (::SoupContentSniffer* sniffer);
GI_INLINE_DECL gsize get_buffer_size () noexcept;

// char* soup_content_sniffer_sniff (SoupContentSniffer* sniffer, SoupMessage* msg, SoupBuffer* buffer, GHashTable** params);
// char* soup_content_sniffer_sniff (::SoupContentSniffer* sniffer, ::SoupMessage* msg, ::SoupBuffer* buffer, ::GHashTable** params);
GI_INLINE_DECL std::string sniff (Soup::Message msg, Soup::Buffer buffer, std::map<std::string, std::string> * params = nullptr) noexcept;
GI_INLINE_DECL std::tuple<std::string, std::map<std::string, std::string>> sniff (Soup::Message msg, Soup::Buffer buffer) noexcept;

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/contentsniffer_extra_def.hpp>)
#include <soup/contentsniffer_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/contentsniffer_extra.hpp>)
#include <soup/contentsniffer_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class ContentSniffer : public GI_SOUP_CONTENTSNIFFER_BASE
{ typedef GI_SOUP_CONTENTSNIFFER_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupContentSniffer>
{ typedef Soup::ContentSniffer type; }; 

} // namespace repository

} // namespace gi

#include "sessionfeature.hpp"

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class ContentSnifferClassDef
{
typedef ContentSnifferClassDef self;
public:
typedef Soup::ContentSniffer instance_type;
typedef ::SoupContentSnifferClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gsize ContentSniffer::get_buffer_size (SoupContentSniffer* sniffer);
// gsize ContentSniffer::get_buffer_size (::SoupContentSniffer* sniffer);
virtual gsize get_buffer_size_ () noexcept = 0;

// char* ContentSniffer::sniff (SoupContentSniffer* sniffer, SoupMessage* msg, SoupBuffer* buffer, GHashTable** params);
// char* ContentSniffer::sniff (::SoupContentSniffer* sniffer, ::SoupMessage* msg, ::SoupBuffer* buffer, ::GHashTable** params);
// SKIP; virtual-method out parameter not supported


};

GI_CLASS_IMPL_BEGIN


class ContentSnifferClass: public detail::ClassTemplate<Soup::impl::internal::ContentSnifferClassDef, GObject::impl::internal::ObjectClass, Soup::impl::internal::SessionFeatureInterfaceClassImpl>
{
typedef ContentSnifferClass self;
typedef detail::ClassTemplate<Soup::impl::internal::ContentSnifferClassDef, GObject::impl::internal::ObjectClass, Soup::impl::internal::SessionFeatureInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Soup::impl::internal::SessionFeatureInterfaceClassImpl SoupSessionFeatureInterface_type;


// gsize ContentSniffer::get_buffer_size (SoupContentSniffer* sniffer);
// gsize ContentSniffer::get_buffer_size (::SoupContentSniffer* sniffer);
GI_INLINE_DECL gsize get_buffer_size_ () noexcept override;

// char* ContentSniffer::sniff (SoupContentSniffer* sniffer, SoupMessage* msg, SoupBuffer* buffer, GHashTable** params);
// char* ContentSniffer::sniff (::SoupContentSniffer* sniffer, ::SoupMessage* msg, ::SoupBuffer* buffer, ::GHashTable** params);
// SKIP; virtual-method out parameter not supported


};

} // namespace internal

GI_CLASS_IMPL_END

using ContentSnifferImpl = detail::ObjectImpl<ContentSniffer, internal::ContentSnifferClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
