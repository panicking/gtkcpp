// AUTO-GENERATED

#ifndef _GI_JAVASCRIPTCORE_VIRTUALMACHINE_HPP_
#define _GI_JAVASCRIPTCORE_VIRTUALMACHINE_HPP_


namespace gi {

namespace repository {

namespace JavaScriptCore {


class VirtualMachine;

namespace base {


#define GI_JAVASCRIPTCORE_VIRTUALMACHINE_BASE base::VirtualMachineBase
class VirtualMachineBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::JSCVirtualMachine BaseObjectType;

VirtualMachineBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return jsc_virtual_machine_get_type(); } 

// JSCVirtualMachine* jsc_virtual_machine_new ();
// ::JSCVirtualMachine* jsc_virtual_machine_new ();
static GI_INLINE_DECL JavaScriptCore::VirtualMachine new_ () noexcept;

}; // class

} // namespace base

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<javascriptcore/virtualmachine_extra_def.hpp>)
#include <javascriptcore/virtualmachine_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<javascriptcore/virtualmachine_extra.hpp>)
#include <javascriptcore/virtualmachine_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace JavaScriptCore {

class VirtualMachine : public GI_JAVASCRIPTCORE_VIRTUALMACHINE_BASE
{ typedef GI_JAVASCRIPTCORE_VIRTUALMACHINE_BASE super_type; using super_type::super_type; };

} // namespace JavaScriptCore

template<> struct declare_cpptype_of<::JSCVirtualMachine>
{ typedef JavaScriptCore::VirtualMachine type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace JavaScriptCore {

namespace impl {

namespace internal {


class VirtualMachineClassDef
{
typedef VirtualMachineClassDef self;
public:
typedef JavaScriptCore::VirtualMachine instance_type;
typedef ::JSCVirtualMachineClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class VirtualMachineClass: public detail::ClassTemplate<JavaScriptCore::impl::internal::VirtualMachineClassDef, GObject::impl::internal::ObjectClass>
{
typedef VirtualMachineClass self;
typedef detail::ClassTemplate<JavaScriptCore::impl::internal::VirtualMachineClassDef, GObject::impl::internal::ObjectClass> super;

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

using VirtualMachineImpl = detail::ObjectImpl<VirtualMachine, internal::VirtualMachineClass>;

} // namespace impl

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi

#endif
