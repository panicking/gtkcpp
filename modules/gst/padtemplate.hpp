// AUTO-GENERATED

#ifndef _GI_GST_PADTEMPLATE_HPP_
#define _GI_GST_PADTEMPLATE_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Gst {

class Caps;
class Pad;
class StaticPadTemplate;

class PadTemplate;

namespace base {


#define GI_GST_PADTEMPLATE_BASE base::PadTemplateBase
class PadTemplateBase : public Gst::Object
{
typedef Gst::Object super_type;
public:
typedef ::GstPadTemplate BaseObjectType;

PadTemplateBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_pad_template_get_type(); } 

// GstPadTemplate* gst_pad_template_new (const gchar* name_template, GstPadDirection direction, GstPadPresence presence, GstCaps* caps);
// ::GstPadTemplate* gst_pad_template_new (const char* name_template, ::GstPadDirection direction, ::GstPadPresence presence, ::GstCaps* caps);
static GI_INLINE_DECL Gst::PadTemplate new_ (const std::string & name_template, Gst::PadDirection direction, Gst::PadPresence presence, Gst::Caps caps) noexcept;

// GstPadTemplate* gst_pad_template_new_from_static_pad_template_with_gtype (GstStaticPadTemplate* pad_template, GType pad_type);
// ::GstPadTemplate* gst_pad_template_new_from_static_pad_template_with_gtype (::GstStaticPadTemplate* pad_template, GType pad_type);
static GI_INLINE_DECL Gst::PadTemplate new_from_static_pad_template_with_gtype (Gst::StaticPadTemplate pad_template, GType pad_type) noexcept;

// GstPadTemplate* gst_pad_template_new_with_gtype (const gchar* name_template, GstPadDirection direction, GstPadPresence presence, GstCaps* caps, GType pad_type);
// ::GstPadTemplate* gst_pad_template_new_with_gtype (const char* name_template, ::GstPadDirection direction, ::GstPadPresence presence, ::GstCaps* caps, GType pad_type);
static GI_INLINE_DECL Gst::PadTemplate new_with_gtype (const std::string & name_template, Gst::PadDirection direction, Gst::PadPresence presence, Gst::Caps caps, GType pad_type) noexcept;

// GstCaps* gst_pad_template_get_caps (GstPadTemplate* templ);
// ::GstCaps* gst_pad_template_get_caps (::GstPadTemplate* templ);
GI_INLINE_DECL Gst::Caps get_caps () noexcept;

// GstCaps* gst_pad_template_get_documentation_caps (GstPadTemplate* templ);
// ::GstCaps* gst_pad_template_get_documentation_caps (::GstPadTemplate* templ);
GI_INLINE_DECL Gst::Caps get_documentation_caps () noexcept;

// void gst_pad_template_pad_created (GstPadTemplate* templ, GstPad* pad);
// void gst_pad_template_pad_created (::GstPadTemplate* templ, ::GstPad* pad);
GI_INLINE_DECL void pad_created (Gst::Pad pad) noexcept;

// void gst_pad_template_set_documentation_caps (GstPadTemplate* templ, GstCaps* caps);
// void gst_pad_template_set_documentation_caps (::GstPadTemplate* templ, ::GstCaps* caps);
GI_INLINE_DECL void set_documentation_caps (Gst::Caps caps) noexcept;

gi::property_proxy<Gst::Caps, base::PadTemplateBase> property_caps()
{ return gi::property_proxy<Gst::Caps, base::PadTemplateBase> (*this, "caps"); }
const gi::property_proxy<Gst::Caps, base::PadTemplateBase> property_caps() const
{ return gi::property_proxy<Gst::Caps, base::PadTemplateBase> (*this, "caps"); }

gi::property_proxy<Gst::PadDirection, base::PadTemplateBase> property_direction()
{ return gi::property_proxy<Gst::PadDirection, base::PadTemplateBase> (*this, "direction"); }
const gi::property_proxy<Gst::PadDirection, base::PadTemplateBase> property_direction() const
{ return gi::property_proxy<Gst::PadDirection, base::PadTemplateBase> (*this, "direction"); }

gi::property_proxy<GType, base::PadTemplateBase> property_gtype()
{ return gi::property_proxy<GType, base::PadTemplateBase> (*this, "gtype"); }
const gi::property_proxy<GType, base::PadTemplateBase> property_gtype() const
{ return gi::property_proxy<GType, base::PadTemplateBase> (*this, "gtype"); }

gi::property_proxy<std::string, base::PadTemplateBase> property_name_template()
{ return gi::property_proxy<std::string, base::PadTemplateBase> (*this, "name-template"); }
const gi::property_proxy<std::string, base::PadTemplateBase> property_name_template() const
{ return gi::property_proxy<std::string, base::PadTemplateBase> (*this, "name-template"); }

gi::property_proxy<Gst::PadPresence, base::PadTemplateBase> property_presence()
{ return gi::property_proxy<Gst::PadPresence, base::PadTemplateBase> (*this, "presence"); }
const gi::property_proxy<Gst::PadPresence, base::PadTemplateBase> property_presence() const
{ return gi::property_proxy<Gst::PadPresence, base::PadTemplateBase> (*this, "presence"); }

// char* PadTemplate::name_template (const ::GstPadTemplate* obj);
// char* PadTemplate::name_template (const ::GstPadTemplate* obj);
GI_INLINE_DECL std::string name_template_ () const noexcept;

// ::GstPadDirection PadTemplate::direction (const ::GstPadTemplate* obj);
// ::GstPadDirection PadTemplate::direction (const ::GstPadTemplate* obj);
GI_INLINE_DECL Gst::PadDirection direction_ () const noexcept;

//  PadTemplate::direction (::GstPadTemplate* obj, ::GstPadDirection _value);
// void PadTemplate::direction (::GstPadTemplate* obj, ::GstPadDirection _value);
GI_INLINE_DECL void direction_ (Gst::PadDirection _value) noexcept;

// ::GstPadPresence PadTemplate::presence (const ::GstPadTemplate* obj);
// ::GstPadPresence PadTemplate::presence (const ::GstPadTemplate* obj);
GI_INLINE_DECL Gst::PadPresence presence_ () const noexcept;

//  PadTemplate::presence (::GstPadTemplate* obj, ::GstPadPresence _value);
// void PadTemplate::presence (::GstPadTemplate* obj, ::GstPadPresence _value);
GI_INLINE_DECL void presence_ (Gst::PadPresence _value) noexcept;

// ::GstCaps* PadTemplate::caps (const ::GstPadTemplate* obj);
// ::GstCaps* PadTemplate::caps (const ::GstPadTemplate* obj);
GI_INLINE_DECL Gst::Caps caps_ () const noexcept;

// signal pad-created
gi::signal_proxy<void(Gst::PadTemplate, Gst::Pad pad)> signal_pad_created()
{ return gi::signal_proxy<void(Gst::PadTemplate, Gst::Pad pad)> (*this, "pad-created"); }

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/padtemplate_extra_def.hpp>)
#include <gst/padtemplate_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/padtemplate_extra.hpp>)
#include <gst/padtemplate_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class PadTemplate : public GI_GST_PADTEMPLATE_BASE
{ typedef GI_GST_PADTEMPLATE_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstPadTemplate>
{ typedef Gst::PadTemplate type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class PadTemplateClassDef
{
typedef PadTemplateClassDef self;
public:
typedef Gst::PadTemplate instance_type;
typedef ::GstPadTemplateClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void PadTemplate::pad_created (GstPadTemplate* templ, GstPad* pad);
// void PadTemplate::pad_created (::GstPadTemplate* templ, ::GstPad* pad);
virtual void pad_created_ (Gst::Pad pad) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class PadTemplateClass: public detail::ClassTemplate<Gst::impl::internal::PadTemplateClassDef, Gst::impl::internal::ObjectClass>
{
typedef PadTemplateClass self;
typedef detail::ClassTemplate<Gst::impl::internal::PadTemplateClassDef, Gst::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void PadTemplate::pad_created (GstPadTemplate* templ, GstPad* pad);
// void PadTemplate::pad_created (::GstPadTemplate* templ, ::GstPad* pad);
GI_INLINE_DECL void pad_created_ (Gst::Pad pad) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using PadTemplateImpl = detail::ObjectImpl<PadTemplate, internal::PadTemplateClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
