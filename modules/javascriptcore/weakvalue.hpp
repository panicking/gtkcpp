// AUTO-GENERATED

#ifndef _GI_JAVASCRIPTCORE_WEAKVALUE_HPP_
#define _GI_JAVASCRIPTCORE_WEAKVALUE_HPP_


namespace gi {

namespace repository {

namespace JavaScriptCore {

class Value;

class WeakValue;

namespace base {


#define GI_JAVASCRIPTCORE_WEAKVALUE_BASE base::WeakValueBase
class WeakValueBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::JSCWeakValue BaseObjectType;

WeakValueBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return jsc_weak_value_get_type(); } 

// JSCWeakValue* jsc_weak_value_new (JSCValue* value);
// ::JSCWeakValue* jsc_weak_value_new (::JSCValue* value);
static GI_INLINE_DECL JavaScriptCore::WeakValue new_ (JavaScriptCore::Value value) noexcept;

// JSCValue* jsc_weak_value_get_value (JSCWeakValue* weak_value);
// ::JSCValue* jsc_weak_value_get_value (::JSCWeakValue* weak_value);
GI_INLINE_DECL JavaScriptCore::Value get_value () noexcept;

gi::property_proxy_write<JavaScriptCore::Value, base::WeakValueBase> property_value()
{ return gi::property_proxy_write<JavaScriptCore::Value, base::WeakValueBase> (*this, "value"); }

// signal cleared
gi::signal_proxy<void(JavaScriptCore::WeakValue)> signal_cleared()
{ return gi::signal_proxy<void(JavaScriptCore::WeakValue)> (*this, "cleared"); }

}; // class

} // namespace base

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<javascriptcore/weakvalue_extra_def.hpp>)
#include <javascriptcore/weakvalue_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<javascriptcore/weakvalue_extra.hpp>)
#include <javascriptcore/weakvalue_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace JavaScriptCore {

class WeakValue : public GI_JAVASCRIPTCORE_WEAKVALUE_BASE
{ typedef GI_JAVASCRIPTCORE_WEAKVALUE_BASE super_type; using super_type::super_type; };

} // namespace JavaScriptCore

template<> struct declare_cpptype_of<::JSCWeakValue>
{ typedef JavaScriptCore::WeakValue type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace JavaScriptCore {

namespace impl {

namespace internal {


class WeakValueClassDef
{
typedef WeakValueClassDef self;
public:
typedef JavaScriptCore::WeakValue instance_type;
typedef ::JSCWeakValueClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class WeakValueClass: public detail::ClassTemplate<JavaScriptCore::impl::internal::WeakValueClassDef, GObject::impl::internal::ObjectClass>
{
typedef WeakValueClass self;
typedef detail::ClassTemplate<JavaScriptCore::impl::internal::WeakValueClassDef, GObject::impl::internal::ObjectClass> super;

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

using WeakValueImpl = detail::ObjectImpl<WeakValue, internal::WeakValueClass>;

} // namespace impl

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi

#endif
