// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRSHAPE_HPP_
#define _GI_PANGO_ATTRSHAPE_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Attribute;
class Rectangle;

class AttrShape;

namespace base {


#define GI_PANGO_ATTRSHAPE_BASE base::AttrShapeBase
class AttrShapeBase : public gi::detail::CBoxedWrapper<AttrShapeBase, ::PangoAttrShape>
{
typedef gi::detail::CBoxedWrapper<AttrShapeBase, ::PangoAttrShape> super_type;
public:

AttrShapeBase (std::nullptr_t = nullptr) : super_type() {}

// PangoAttribute* pango_attr_shape_new (const PangoRectangle* ink_rect, const PangoRectangle* logical_rect);
// ::PangoAttribute* pango_attr_shape_new (const ::PangoRectangle* ink_rect, const ::PangoRectangle* logical_rect);
static GI_INLINE_DECL Pango::Attribute new_ (const Pango::Rectangle & ink_rect, const Pango::Rectangle & logical_rect) noexcept;

// PangoAttribute* pango_attr_shape_new_with_data (const PangoRectangle* ink_rect, const PangoRectangle* logical_rect, gpointer data, PangoAttrDataCopyFunc copy_func, GDestroyNotify destroy_func);
// ::PangoAttribute* pango_attr_shape_new_with_data (const ::PangoRectangle* ink_rect, const ::PangoRectangle* logical_rect, void* data,  copy_func, GLib::DestroyNotify::cfunction_type destroy_func);
// SKIP; copy_func type  not supported

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrshape_extra_def.hpp>)
#include <pango/attrshape_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrshape_extra.hpp>)
#include <pango/attrshape_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class AttrShape : public GI_PANGO_ATTRSHAPE_BASE
{ typedef GI_PANGO_ATTRSHAPE_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoAttrShape>
{ typedef Pango::AttrShape type; }; 

} // namespace repository

} // namespace gi

#endif
