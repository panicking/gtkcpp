// AUTO-GENERATED

#ifndef _GI_PANGO_COVERAGE_IMPL_HPP_
#define _GI_PANGO_COVERAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// PangoCoverage* pango_coverage_new ();
// ::PangoCoverage* pango_coverage_new ();
Pango::Coverage base::CoverageBase::new_ () noexcept
{
  typedef ::PangoCoverage* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) pango_coverage_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoCoverage* pango_coverage_from_bytes (guchar* bytes, int n_bytes);
// ::PangoCoverage* pango_coverage_from_bytes (guint8* bytes, gint n_bytes);
// IGNORE; deprecated

// PangoCoverage* pango_coverage_copy (PangoCoverage* coverage);
// ::PangoCoverage* pango_coverage_copy (::PangoCoverage* coverage);
Pango::Coverage base::CoverageBase::copy () noexcept
{
  typedef ::PangoCoverage* (*call_wrap_t) (::PangoCoverage* coverage);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_coverage_copy;
  auto _temp_ret = call_wrap_v ((::PangoCoverage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoCoverageLevel pango_coverage_get (PangoCoverage* coverage, int index_);
// ::PangoCoverageLevel pango_coverage_get (::PangoCoverage* coverage, gint index_);
Pango::CoverageLevel base::CoverageBase::get (gint index_) noexcept
{
  typedef ::PangoCoverageLevel (*call_wrap_t) (::PangoCoverage* coverage, gint index_);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_coverage_get;
  auto index__to_c = index_;
  auto _temp_ret = call_wrap_v ((::PangoCoverage*) (gobj_()), (gint) (index__to_c));
  return gi::wrap (_temp_ret);
}

// void pango_coverage_max (PangoCoverage* coverage, PangoCoverage* other);
// void pango_coverage_max (::PangoCoverage* coverage, ::PangoCoverage* other);
// IGNORE; deprecated

// PangoCoverage* pango_coverage_ref (PangoCoverage* coverage);
// ::PangoCoverage* pango_coverage_ref (::PangoCoverage* coverage);
// IGNORE; marked ignore

// void pango_coverage_set (PangoCoverage* coverage, int index_, PangoCoverageLevel level);
// void pango_coverage_set (::PangoCoverage* coverage, gint index_, ::PangoCoverageLevel level);
void base::CoverageBase::set (gint index_, Pango::CoverageLevel level) noexcept
{
  typedef void (*call_wrap_t) (::PangoCoverage* coverage, gint index_, ::PangoCoverageLevel level);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_coverage_set;
  auto level_to_c = gi::unwrap (level);
  auto index__to_c = index_;
  call_wrap_v ((::PangoCoverage*) (gobj_()), (gint) (index__to_c), (::PangoCoverageLevel) (level_to_c));
}

// void pango_coverage_to_bytes (PangoCoverage* coverage, guchar** bytes, int* n_bytes);
// void pango_coverage_to_bytes (::PangoCoverage* coverage, guint8** bytes, gint* n_bytes);
// IGNORE; deprecated

// void pango_coverage_unref (PangoCoverage* coverage);
// void pango_coverage_unref (::PangoCoverage* coverage);
// IGNORE; marked ignore


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/coverage_extra_def_impl.hpp>)
#include <pango/coverage_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/coverage_extra_impl.hpp>)
#include <pango/coverage_extra_impl.hpp>
#endif
#endif

#endif
