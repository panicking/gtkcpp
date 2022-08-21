// AUTO-GENERATED

#ifndef _GI_GMODULE__FLAGS_HPP_
#define _GI_GMODULE__FLAGS_HPP_

namespace gi {

namespace repository {

namespace GModule {

enum class ModuleFlags {
  LAZY_ = G_MODULE_BIND_LAZY,
  LOCAL_ = G_MODULE_BIND_LOCAL,
  MASK_ = G_MODULE_BIND_MASK,
};

} // namespace GModule

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GModule::ModuleFlags>
{ typedef GModuleFlags type; }; 
template<> struct declare_cpptype_of<GModuleFlags>
{ typedef GModule::ModuleFlags type; }; 


} // namespace repository

} // namespace gi


#endif
