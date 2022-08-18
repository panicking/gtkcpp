// AUTO-GENERATED

#ifndef _GI_GST_CONTROLBINDING_HPP_
#define _GI_GST_CONTROLBINDING_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Gst {

class Object;

class ControlBinding;

namespace base {


#define GI_GST_CONTROLBINDING_BASE base::ControlBindingBase
class ControlBindingBase : public Gst::Object
{
typedef Gst::Object super_type;
public:
typedef ::GstControlBinding BaseObjectType;

ControlBindingBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_control_binding_get_type(); } 

// gboolean gst_control_binding_get_g_value_array (GstControlBinding* binding, GstClockTime timestamp, GstClockTime interval, guint n_values, GValue* values);
// gboolean gst_control_binding_get_g_value_array (::GstControlBinding* binding, ::GstClockTime timestamp, ::GstClockTime interval, guint n_values, ::GValue** values);
// SKIP; inconsistent in values pointer depth (1 vs 2)

// GValue* gst_control_binding_get_value (GstControlBinding* binding, GstClockTime timestamp);
// ::GValue* gst_control_binding_get_value (::GstControlBinding* binding, ::GstClockTime timestamp);
GI_INLINE_DECL GObject::Value get_value (::GstClockTime timestamp) noexcept;

// gboolean gst_control_binding_get_value_array (GstControlBinding* binding, GstClockTime timestamp, GstClockTime interval, guint n_values, gpointer values);
// gboolean gst_control_binding_get_value_array (::GstControlBinding* binding, ::GstClockTime timestamp, ::GstClockTime interval, guint n_values, void** values);
GI_INLINE_DECL bool get_value_array (::GstClockTime timestamp, ::GstClockTime interval, guint n_values, gpointer * values) noexcept;

// gboolean gst_control_binding_is_disabled (GstControlBinding* binding);
// gboolean gst_control_binding_is_disabled (::GstControlBinding* binding);
GI_INLINE_DECL bool is_disabled () noexcept;

// void gst_control_binding_set_disabled (GstControlBinding* binding, gboolean disabled);
// void gst_control_binding_set_disabled (::GstControlBinding* binding, gboolean disabled);
GI_INLINE_DECL void set_disabled (gboolean disabled) noexcept;

// gboolean gst_control_binding_sync_values (GstControlBinding* binding, GstObject* object, GstClockTime timestamp, GstClockTime last_sync);
// gboolean gst_control_binding_sync_values (::GstControlBinding* binding, ::GstObject* object, ::GstClockTime timestamp, ::GstClockTime last_sync);
GI_INLINE_DECL bool sync_values (Gst::Object object, ::GstClockTime timestamp, ::GstClockTime last_sync) noexcept;

gi::property_proxy<std::string, base::ControlBindingBase> property_name()
{ return gi::property_proxy<std::string, base::ControlBindingBase> (*this, "name"); }
const gi::property_proxy<std::string, base::ControlBindingBase> property_name() const
{ return gi::property_proxy<std::string, base::ControlBindingBase> (*this, "name"); }

gi::property_proxy<Gst::Object, base::ControlBindingBase> property_object()
{ return gi::property_proxy<Gst::Object, base::ControlBindingBase> (*this, "object"); }
const gi::property_proxy<Gst::Object, base::ControlBindingBase> property_object() const
{ return gi::property_proxy<Gst::Object, base::ControlBindingBase> (*this, "object"); }

// char* ControlBinding::name (const ::GstControlBinding* obj);
// char* ControlBinding::name (const ::GstControlBinding* obj);
GI_INLINE_DECL std::string name_ () const noexcept;

// ::GParamSpec* ControlBinding::pspec (const ::GstControlBinding* obj);
// ::GParamSpec* ControlBinding::pspec (const ::GstControlBinding* obj);
GI_INLINE_DECL GObject::ParamSpec pspec_ () const noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/controlbinding_extra_def.hpp>)
#include <gst/controlbinding_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/controlbinding_extra.hpp>)
#include <gst/controlbinding_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class ControlBinding : public GI_GST_CONTROLBINDING_BASE
{ typedef GI_GST_CONTROLBINDING_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstControlBinding>
{ typedef Gst::ControlBinding type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class ControlBindingClassDef
{
typedef ControlBindingClassDef self;
public:
typedef Gst::ControlBinding instance_type;
typedef ::GstControlBindingClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean ControlBinding::get_g_value_array (GstControlBinding* binding, GstClockTime timestamp, GstClockTime interval, guint n_values, GValue* values);
// gboolean ControlBinding::get_g_value_array (::GstControlBinding* binding, ::GstClockTime timestamp, ::GstClockTime interval, guint n_values, ::GValue** values);
// SKIP; virtual-method container parameter not supported

// GValue* ControlBinding::get_value (GstControlBinding* binding, GstClockTime timestamp);
// ::GValue* ControlBinding::get_value (::GstControlBinding* binding, ::GstClockTime timestamp);
virtual GObject::Value get_value_ (::GstClockTime timestamp) noexcept = 0;

// gboolean ControlBinding::sync_values (GstControlBinding* binding, GstObject* object, GstClockTime timestamp, GstClockTime last_sync);
// gboolean ControlBinding::sync_values (::GstControlBinding* binding, ::GstObject* object, ::GstClockTime timestamp, ::GstClockTime last_sync);
virtual bool sync_values_ (Gst::Object object, ::GstClockTime timestamp, ::GstClockTime last_sync) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ControlBindingClass: public detail::ClassTemplate<Gst::impl::internal::ControlBindingClassDef, Gst::impl::internal::ObjectClass>
{
typedef ControlBindingClass self;
typedef detail::ClassTemplate<Gst::impl::internal::ControlBindingClassDef, Gst::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean ControlBinding::get_g_value_array (GstControlBinding* binding, GstClockTime timestamp, GstClockTime interval, guint n_values, GValue* values);
// gboolean ControlBinding::get_g_value_array (::GstControlBinding* binding, ::GstClockTime timestamp, ::GstClockTime interval, guint n_values, ::GValue** values);
// SKIP; virtual-method container parameter not supported

// GValue* ControlBinding::get_value (GstControlBinding* binding, GstClockTime timestamp);
// ::GValue* ControlBinding::get_value (::GstControlBinding* binding, ::GstClockTime timestamp);
GI_INLINE_DECL GObject::Value get_value_ (::GstClockTime timestamp) noexcept override;

// gboolean ControlBinding::sync_values (GstControlBinding* binding, GstObject* object, GstClockTime timestamp, GstClockTime last_sync);
// gboolean ControlBinding::sync_values (::GstControlBinding* binding, ::GstObject* object, ::GstClockTime timestamp, ::GstClockTime last_sync);
GI_INLINE_DECL bool sync_values_ (Gst::Object object, ::GstClockTime timestamp, ::GstClockTime last_sync) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ControlBindingImpl = detail::ObjectImpl<ControlBinding, internal::ControlBindingClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
