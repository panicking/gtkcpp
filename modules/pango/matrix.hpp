// AUTO-GENERATED

#ifndef _GI_PANGO_MATRIX_HPP_
#define _GI_PANGO_MATRIX_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Rectangle;

class Matrix;

namespace base {


#define GI_PANGO_MATRIX_BASE base::MatrixBase
class MatrixBase : public gi::detail::GBoxedWrapper<MatrixBase, ::PangoMatrix>
{
typedef gi::detail::GBoxedWrapper<MatrixBase, ::PangoMatrix> super_type;
public:

MatrixBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_matrix_get_type(); } 

// gdouble Matrix::xx (const ::PangoMatrix* obj);
// gdouble Matrix::xx (const ::PangoMatrix* obj);
GI_INLINE_DECL gdouble xx_ () const noexcept;

//  Matrix::xx (::PangoMatrix* obj, gdouble _value);
// void Matrix::xx (::PangoMatrix* obj, gdouble _value);
GI_INLINE_DECL void xx_ (gdouble _value) noexcept;

// gdouble Matrix::xy (const ::PangoMatrix* obj);
// gdouble Matrix::xy (const ::PangoMatrix* obj);
GI_INLINE_DECL gdouble xy_ () const noexcept;

//  Matrix::xy (::PangoMatrix* obj, gdouble _value);
// void Matrix::xy (::PangoMatrix* obj, gdouble _value);
GI_INLINE_DECL void xy_ (gdouble _value) noexcept;

// gdouble Matrix::yx (const ::PangoMatrix* obj);
// gdouble Matrix::yx (const ::PangoMatrix* obj);
GI_INLINE_DECL gdouble yx_ () const noexcept;

//  Matrix::yx (::PangoMatrix* obj, gdouble _value);
// void Matrix::yx (::PangoMatrix* obj, gdouble _value);
GI_INLINE_DECL void yx_ (gdouble _value) noexcept;

// gdouble Matrix::yy (const ::PangoMatrix* obj);
// gdouble Matrix::yy (const ::PangoMatrix* obj);
GI_INLINE_DECL gdouble yy_ () const noexcept;

//  Matrix::yy (::PangoMatrix* obj, gdouble _value);
// void Matrix::yy (::PangoMatrix* obj, gdouble _value);
GI_INLINE_DECL void yy_ (gdouble _value) noexcept;

// gdouble Matrix::x0 (const ::PangoMatrix* obj);
// gdouble Matrix::x0 (const ::PangoMatrix* obj);
GI_INLINE_DECL gdouble x0_ () const noexcept;

//  Matrix::x0 (::PangoMatrix* obj, gdouble _value);
// void Matrix::x0 (::PangoMatrix* obj, gdouble _value);
GI_INLINE_DECL void x0_ (gdouble _value) noexcept;

// gdouble Matrix::y0 (const ::PangoMatrix* obj);
// gdouble Matrix::y0 (const ::PangoMatrix* obj);
GI_INLINE_DECL gdouble y0_ () const noexcept;

//  Matrix::y0 (::PangoMatrix* obj, gdouble _value);
// void Matrix::y0 (::PangoMatrix* obj, gdouble _value);
GI_INLINE_DECL void y0_ (gdouble _value) noexcept;

// void pango_matrix_concat (PangoMatrix* matrix, const PangoMatrix* new_matrix);
// void pango_matrix_concat (::PangoMatrix* matrix, const ::PangoMatrix* new_matrix);
GI_INLINE_DECL void concat (const Pango::Matrix & new_matrix) noexcept;

// PangoMatrix* pango_matrix_copy (const PangoMatrix* matrix);
// ::PangoMatrix* pango_matrix_copy (const ::PangoMatrix* matrix);
GI_INLINE_DECL Pango::Matrix copy () const noexcept;

// void pango_matrix_free (PangoMatrix* matrix);
// void pango_matrix_free (::PangoMatrix* matrix);
// IGNORE; marked ignore

// double pango_matrix_get_font_scale_factor (const PangoMatrix* matrix);
// gdouble pango_matrix_get_font_scale_factor (const ::PangoMatrix* matrix);
GI_INLINE_DECL gdouble get_font_scale_factor () const noexcept;

// void pango_matrix_get_font_scale_factors (const PangoMatrix* matrix, double* xscale, double* yscale);
// void pango_matrix_get_font_scale_factors (const ::PangoMatrix* matrix, gdouble* xscale, gdouble* yscale);
GI_INLINE_DECL void get_font_scale_factors (gdouble * xscale = nullptr, gdouble * yscale = nullptr) const noexcept;
GI_INLINE_DECL std::tuple<gdouble, gdouble> get_font_scale_factors () const noexcept;

// double pango_matrix_get_slant_ratio (const PangoMatrix* matrix);
// gdouble pango_matrix_get_slant_ratio (const ::PangoMatrix* matrix);
GI_INLINE_DECL gdouble get_slant_ratio () const noexcept;

// void pango_matrix_rotate (PangoMatrix* matrix, double degrees);
// void pango_matrix_rotate (::PangoMatrix* matrix, gdouble degrees);
GI_INLINE_DECL void rotate (gdouble degrees) noexcept;

// void pango_matrix_scale (PangoMatrix* matrix, double scale_x, double scale_y);
// void pango_matrix_scale (::PangoMatrix* matrix, gdouble scale_x, gdouble scale_y);
GI_INLINE_DECL void scale (gdouble scale_x, gdouble scale_y) noexcept;

// void pango_matrix_transform_distance (const PangoMatrix* matrix, double* dx, double* dy);
// void pango_matrix_transform_distance (const ::PangoMatrix* matrix, gdouble* dx, gdouble* dy);
GI_INLINE_DECL void transform_distance (gdouble & dx, gdouble & dy) const noexcept;

// void pango_matrix_transform_pixel_rectangle (const PangoMatrix* matrix, PangoRectangle* rect);
// void pango_matrix_transform_pixel_rectangle (const ::PangoMatrix* matrix, ::PangoRectangle** rect);
// SKIP; inconsistent inout rect pointer depth (1 vs 2)

// void pango_matrix_transform_point (const PangoMatrix* matrix, double* x, double* y);
// void pango_matrix_transform_point (const ::PangoMatrix* matrix, gdouble* x, gdouble* y);
GI_INLINE_DECL void transform_point (gdouble & x, gdouble & y) const noexcept;

// void pango_matrix_transform_rectangle (const PangoMatrix* matrix, PangoRectangle* rect);
// void pango_matrix_transform_rectangle (const ::PangoMatrix* matrix, ::PangoRectangle** rect);
// SKIP; inconsistent inout rect pointer depth (1 vs 2)

// void pango_matrix_translate (PangoMatrix* matrix, double tx, double ty);
// void pango_matrix_translate (::PangoMatrix* matrix, gdouble tx, gdouble ty);
GI_INLINE_DECL void translate (gdouble tx, gdouble ty) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/matrix_extra_def.hpp>)
#include <pango/matrix_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/matrix_extra.hpp>)
#include <pango/matrix_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class Matrix : public GI_PANGO_MATRIX_BASE
{ typedef GI_PANGO_MATRIX_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoMatrix>
{ typedef Pango::Matrix type; }; 

} // namespace repository

} // namespace gi

#endif
