// AUTO-GENERATED

#ifndef _GI_SOUP_CONTENTDECODER_IMPL_HPP_
#define _GI_SOUP_CONTENTDECODER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

Soup::SessionFeature ContentDecoderBase::interface_ (gi::interface_tag<Soup::SessionFeature>)
{ return gi::wrap ((Soup::SessionFeature::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ContentDecoderBase::operator Soup::SessionFeature ()
{ return interface_ (gi::interface_tag<Soup::SessionFeature>()); }


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/contentdecoder_extra_def_impl.hpp>)
#include <soup/contentdecoder_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/contentdecoder_extra_impl.hpp>)
#include <soup/contentdecoder_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void ContentDecoderClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupContentDecoderClass *methods = (::SoupContentDecoderClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
