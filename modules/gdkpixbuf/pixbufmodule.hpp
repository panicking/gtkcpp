// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF_PIXBUFMODULE_HPP_
#define _GI_GDKPIXBUF_PIXBUFMODULE_HPP_


namespace gi {

namespace repository {

namespace GdkPixbuf {

class PixbufFormat;

class PixbufModule;

namespace base {


#define GI_GDKPIXBUF_PIXBUFMODULE_BASE base::PixbufModuleBase
class PixbufModuleBase : public gi::detail::CBoxedWrapper<PixbufModuleBase, ::GdkPixbufModule>
{
typedef gi::detail::CBoxedWrapper<PixbufModuleBase, ::GdkPixbufModule> super_type;
public:

PixbufModuleBase (std::nullptr_t = nullptr) : super_type() {}

// char* PixbufModule::module_name (const ::GdkPixbufModule* obj);
// char* PixbufModule::module_name (const ::GdkPixbufModule* obj);
GI_INLINE_DECL std::string module_name_ () const noexcept;

// char* PixbufModule::module_path (const ::GdkPixbufModule* obj);
// char* PixbufModule::module_path (const ::GdkPixbufModule* obj);
GI_INLINE_DECL std::string module_path_ () const noexcept;

// ::GdkPixbufFormat* PixbufModule::info (const ::GdkPixbufModule* obj);
// ::GdkPixbufFormat* PixbufModule::info (const ::GdkPixbufModule* obj);
GI_INLINE_DECL GdkPixbuf::PixbufFormat info_ () const noexcept;

}; // class

} // namespace base

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufmodule_extra_def.hpp>)
#include <gdkpixbuf/pixbufmodule_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufmodule_extra.hpp>)
#include <gdkpixbuf/pixbufmodule_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GdkPixbuf {

class PixbufModule : public GI_GDKPIXBUF_PIXBUFMODULE_BASE
{ typedef GI_GDKPIXBUF_PIXBUFMODULE_BASE super_type; using super_type::super_type; };

} // namespace GdkPixbuf

template<> struct declare_cpptype_of<::GdkPixbufModule>
{ typedef GdkPixbuf::PixbufModule type; }; 

} // namespace repository

} // namespace gi

#endif
