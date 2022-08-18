// AUTO-GENERATED

#ifndef _GI_PANGO_COVERAGE_HPP_
#define _GI_PANGO_COVERAGE_HPP_


namespace gi {

namespace repository {

namespace Pango {


class Coverage;

namespace base {


#define GI_PANGO_COVERAGE_BASE base::CoverageBase
class CoverageBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::PangoCoverage BaseObjectType;

CoverageBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return pango_coverage_get_type(); } 

// PangoCoverage* pango_coverage_new ();
// ::PangoCoverage* pango_coverage_new ();
static GI_INLINE_DECL Pango::Coverage new_ () noexcept;

// PangoCoverage* pango_coverage_from_bytes (guchar* bytes, int n_bytes);
// ::PangoCoverage* pango_coverage_from_bytes (guint8* bytes, gint n_bytes);
// IGNORE; deprecated

// PangoCoverage* pango_coverage_copy (PangoCoverage* coverage);
// ::PangoCoverage* pango_coverage_copy (::PangoCoverage* coverage);
GI_INLINE_DECL Pango::Coverage copy () noexcept;

// PangoCoverageLevel pango_coverage_get (PangoCoverage* coverage, int index_);
// ::PangoCoverageLevel pango_coverage_get (::PangoCoverage* coverage, gint index_);
GI_INLINE_DECL Pango::CoverageLevel get (gint index_) noexcept;

// void pango_coverage_max (PangoCoverage* coverage, PangoCoverage* other);
// void pango_coverage_max (::PangoCoverage* coverage, ::PangoCoverage* other);
// IGNORE; deprecated

// PangoCoverage* pango_coverage_ref (PangoCoverage* coverage);
// ::PangoCoverage* pango_coverage_ref (::PangoCoverage* coverage);
// IGNORE; marked ignore

// void pango_coverage_set (PangoCoverage* coverage, int index_, PangoCoverageLevel level);
// void pango_coverage_set (::PangoCoverage* coverage, gint index_, ::PangoCoverageLevel level);
GI_INLINE_DECL void set (gint index_, Pango::CoverageLevel level) noexcept;

// void pango_coverage_to_bytes (PangoCoverage* coverage, guchar** bytes, int* n_bytes);
// void pango_coverage_to_bytes (::PangoCoverage* coverage, guint8** bytes, gint* n_bytes);
// IGNORE; deprecated

// void pango_coverage_unref (PangoCoverage* coverage);
// void pango_coverage_unref (::PangoCoverage* coverage);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/coverage_extra_def.hpp>)
#include <pango/coverage_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/coverage_extra.hpp>)
#include <pango/coverage_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class Coverage : public GI_PANGO_COVERAGE_BASE
{ typedef GI_PANGO_COVERAGE_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoCoverage>
{ typedef Pango::Coverage type; }; 

} // namespace repository

} // namespace gi

#endif
