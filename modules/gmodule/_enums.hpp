// AUTO-GENERATED

#ifndef _GI_GMODULE__ENUMS_HPP_
#define _GI_GMODULE__ENUMS_HPP_

namespace gi {

namespace repository {

namespace GModule {

enum class ModuleError {
  FAILED_ = G_MODULE_ERROR_FAILED,
  CHECK_FAILED_ = G_MODULE_ERROR_CHECK_FAILED,
};

} // namespace GModule

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GModule::ModuleError>
{ typedef GModuleError type; }; 
template<> struct declare_cpptype_of<GModuleError>
{ typedef GModule::ModuleError type; }; 


} // namespace repository

} // namespace gi


#endif
