// AUTO-GENERATED

#ifndef _GI_GST_CONTROLSOURCE_HPP_
#define _GI_GST_CONTROLSOURCE_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Gst {


class ControlSource;

namespace base {


#define GI_GST_CONTROLSOURCE_BASE base::ControlSourceBase
class ControlSourceBase : public Gst::Object
{
typedef Gst::Object super_type;
public:
typedef ::GstControlSource BaseObjectType;

ControlSourceBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_control_source_get_type(); } 

// gboolean gst_control_source_get_value (GstControlSource* self, GstClockTime timestamp, gdouble* value);
// gboolean gst_control_source_get_value (::GstControlSource* self, ::GstClockTime timestamp, gdouble* value);
GI_INLINE_DECL bool control_source_get_value (::GstClockTime timestamp, gdouble & value) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble> control_source_get_value (::GstClockTime timestamp) noexcept;

// gboolean gst_control_source_get_value_array (GstControlSource* self, GstClockTime timestamp, GstClockTime interval, guint n_values, gdouble* values);
// gboolean gst_control_source_get_value_array (::GstControlSource* self, ::GstClockTime timestamp, ::GstClockTime interval, guint n_values, gdouble* values);
GI_INLINE_DECL bool control_source_get_value_array (::GstClockTime timestamp, ::GstClockTime interval, guint n_values, gdouble * values) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/controlsource_extra_def.hpp>)
#include <gst/controlsource_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/controlsource_extra.hpp>)
#include <gst/controlsource_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class ControlSource : public GI_GST_CONTROLSOURCE_BASE
{ typedef GI_GST_CONTROLSOURCE_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstControlSource>
{ typedef Gst::ControlSource type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class ControlSourceClassDef
{
typedef ControlSourceClassDef self;
public:
typedef Gst::ControlSource instance_type;
typedef ::GstControlSourceClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ControlSourceClass: public detail::ClassTemplate<Gst::impl::internal::ControlSourceClassDef, Gst::impl::internal::ObjectClass>
{
typedef ControlSourceClass self;
typedef detail::ClassTemplate<Gst::impl::internal::ControlSourceClassDef, Gst::impl::internal::ObjectClass> super;

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

using ControlSourceImpl = detail::ObjectImpl<ControlSource, internal::ControlSourceClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
