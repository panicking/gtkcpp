// AUTO-GENERATED

#ifndef _GI_GST_TOCSETTER_HPP_
#define _GI_GST_TOCSETTER_HPP_


namespace gi {

namespace repository {

namespace Gst {

class Toc;

class TocSetter;

namespace base {


#define GI_GST_TOCSETTER_BASE base::TocSetterBase
class TocSetterBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GstTocSetter BaseObjectType;

TocSetterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_toc_setter_get_type(); } 

// GstToc* gst_toc_setter_get_toc (GstTocSetter* setter);
// ::GstToc* gst_toc_setter_get_toc (::GstTocSetter* setter);
GI_INLINE_DECL Gst::Toc get_toc () noexcept;

// void gst_toc_setter_reset (GstTocSetter* setter);
// void gst_toc_setter_reset (::GstTocSetter* setter);
GI_INLINE_DECL void reset () noexcept;

// void gst_toc_setter_set_toc (GstTocSetter* setter, GstToc* toc);
// void gst_toc_setter_set_toc (::GstTocSetter* setter, ::GstToc* toc);
GI_INLINE_DECL void set_toc (Gst::Toc toc) noexcept;
GI_INLINE_DECL void set_toc () noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/tocsetter_extra_def.hpp>)
#include <gst/tocsetter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/tocsetter_extra.hpp>)
#include <gst/tocsetter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class TocSetter : public GI_GST_TOCSETTER_BASE
{ typedef GI_GST_TOCSETTER_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstTocSetter>
{ typedef Gst::TocSetter type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class TocSetterInterfaceDef
{
typedef TocSetterInterfaceDef self;
public:
typedef Gst::TocSetter instance_type;
typedef ::GstTocSetterInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );


};

using TocSetterImpl = detail::InterfaceImpl<TocSetterInterfaceDef>;

class TocSetterInterfaceClassImpl: public detail::InterfaceClassImpl<TocSetterImpl>
{
typedef TocSetterInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<TocSetterImpl> super;

protected:
using super::super;


};

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
