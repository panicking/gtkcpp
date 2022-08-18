// AUTO-GENERATED

#ifndef _GI_GST_GHOSTPAD_HPP_
#define _GI_GST_GHOSTPAD_HPP_

#include "proxypad.hpp"

namespace gi {

namespace repository {

namespace Gst {

class Object;
class Pad;
class PadTemplate;

class GhostPad;

namespace base {


#define GI_GST_GHOSTPAD_BASE base::GhostPadBase
class GhostPadBase : public Gst::ProxyPad
{
typedef Gst::ProxyPad super_type;
public:
typedef ::GstGhostPad BaseObjectType;

GhostPadBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_ghost_pad_get_type(); } 

// GstPad* gst_ghost_pad_new (const gchar* name, GstPad* target);
// ::GstGhostPad* gst_ghost_pad_new (const char* name, ::GstPad* target);
static GI_INLINE_DECL Gst::GhostPad new_ (const std::string & name, Gst::Pad target) noexcept;
static GI_INLINE_DECL Gst::GhostPad new_ (Gst::Pad target) noexcept;

// GstPad* gst_ghost_pad_new_from_template (const gchar* name, GstPad* target, GstPadTemplate* templ);
// ::GstGhostPad* gst_ghost_pad_new_from_template (const char* name, ::GstPad* target, ::GstPadTemplate* templ);
static GI_INLINE_DECL Gst::GhostPad new_from_template (const std::string & name, Gst::Pad target, Gst::PadTemplate templ) noexcept;
static GI_INLINE_DECL Gst::GhostPad new_from_template (Gst::Pad target, Gst::PadTemplate templ) noexcept;

// GstPad* gst_ghost_pad_new_no_target (const gchar* name, GstPadDirection dir);
// ::GstGhostPad* gst_ghost_pad_new_no_target (const char* name, ::GstPadDirection dir);
static GI_INLINE_DECL Gst::GhostPad new_no_target (const std::string & name, Gst::PadDirection dir) noexcept;
static GI_INLINE_DECL Gst::GhostPad new_no_target (Gst::PadDirection dir) noexcept;

// GstPad* gst_ghost_pad_new_no_target_from_template (const gchar* name, GstPadTemplate* templ);
// ::GstGhostPad* gst_ghost_pad_new_no_target_from_template (const char* name, ::GstPadTemplate* templ);
static GI_INLINE_DECL Gst::GhostPad new_no_target_from_template (const std::string & name, Gst::PadTemplate templ) noexcept;
static GI_INLINE_DECL Gst::GhostPad new_no_target_from_template (Gst::PadTemplate templ) noexcept;

// gboolean gst_ghost_pad_activate_mode_default (GstPad* pad, GstObject* parent, GstPadMode mode, gboolean active);
// gboolean gst_ghost_pad_activate_mode_default (::GstPad* pad, ::GstObject* parent, ::GstPadMode mode, gboolean active);
static GI_INLINE_DECL bool activate_mode_default (Gst::Pad pad, Gst::Object parent, Gst::PadMode mode, gboolean active) noexcept;
static GI_INLINE_DECL bool activate_mode_default (Gst::Pad pad, Gst::PadMode mode, gboolean active) noexcept;

// gboolean gst_ghost_pad_internal_activate_mode_default (GstPad* pad, GstObject* parent, GstPadMode mode, gboolean active);
// gboolean gst_ghost_pad_internal_activate_mode_default (::GstPad* pad, ::GstObject* parent, ::GstPadMode mode, gboolean active);
static GI_INLINE_DECL bool internal_activate_mode_default (Gst::Pad pad, Gst::Object parent, Gst::PadMode mode, gboolean active) noexcept;
static GI_INLINE_DECL bool internal_activate_mode_default (Gst::Pad pad, Gst::PadMode mode, gboolean active) noexcept;

// gboolean gst_ghost_pad_construct (GstGhostPad* gpad);
// gboolean gst_ghost_pad_construct (::GstGhostPad* gpad);
// IGNORE; deprecated

// GstPad* gst_ghost_pad_get_target (GstGhostPad* gpad);
// ::GstPad* gst_ghost_pad_get_target (::GstGhostPad* gpad);
GI_INLINE_DECL Gst::Pad get_target () noexcept;

// gboolean gst_ghost_pad_set_target (GstGhostPad* gpad, GstPad* newtarget);
// gboolean gst_ghost_pad_set_target (::GstGhostPad* gpad, ::GstPad* newtarget);
GI_INLINE_DECL bool set_target (Gst::Pad newtarget) noexcept;
GI_INLINE_DECL bool set_target () noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/ghostpad_extra_def.hpp>)
#include <gst/ghostpad_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/ghostpad_extra.hpp>)
#include <gst/ghostpad_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class GhostPad : public GI_GST_GHOSTPAD_BASE
{ typedef GI_GST_GHOSTPAD_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstGhostPad>
{ typedef Gst::GhostPad type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class GhostPadClassDef
{
typedef GhostPadClassDef self;
public:
typedef Gst::GhostPad instance_type;
typedef ::GstGhostPadClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class GhostPadClass: public detail::ClassTemplate<Gst::impl::internal::GhostPadClassDef, Gst::impl::internal::ProxyPadClass>
{
typedef GhostPadClass self;
typedef detail::ClassTemplate<Gst::impl::internal::GhostPadClassDef, Gst::impl::internal::ProxyPadClass> super;

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

using GhostPadImpl = detail::ObjectImpl<GhostPad, internal::GhostPadClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
