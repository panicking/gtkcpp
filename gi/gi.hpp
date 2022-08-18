#ifndef GI_HPP
#define GI_HPP

#ifdef GI_INLINE
#define GI_INLINE_DECL inline
#else
#define GI_INLINE_DECL
#endif

// typically clang might warn but gcc might complain about pragma clang ...
#ifdef GI_CLASS_IMPL_PRAGMA
#ifndef GI_CLASS_IMPL_BEGIN
#define GI_CLASS_IMPL_BEGIN                                                    \
  _Pragma("GCC diagnostic push")                                               \
      _Pragma("GCC diagnostic ignored \"-Woverloaded-virtual\"")
#endif

#ifndef GI_CLASS_IMPL_END
#define GI_CLASS_IMPL_END _Pragma("GCC diagnostic pop")
#endif
#else
#define GI_CLASS_IMPL_BEGIN
#define GI_CLASS_IMPL_END
#endif

// lots of declarations might be attributed as deprecated,
// but not so annotated, so let's avoid warning floods
// also handle complaints about const qualified casts
// (due to silly const qualified scalar parameters)
#define GI_DISABLE_DEPRECATED_WARN_BEGIN                                       \
  _Pragma("GCC diagnostic push")                                               \
      _Pragma("GCC diagnostic ignored \"-Wdeprecated-declarations\"")          \
  _Pragma("GCC diagnostic push")                                               \
      _Pragma("GCC diagnostic ignored \"-Wignored-qualifiers\"")               \

#define GI_DISABLE_DEPRECATED_WARN_END                                         \
    _Pragma("GCC diagnostic pop")                                              \
    _Pragma("GCC diagnostic pop")

#include "base.hpp"
#include "container.hpp"
#include "enumflag.hpp"
#include "exception.hpp"
#include "expected.hpp"
#include "object.hpp"
#include "objectclass.hpp"

// check that include path has been setup properly to include override
#if defined(__has_include)
#if !__has_include(<glib/glib_extra_def.hpp>)
#warning "overrides not found in include path"
#endif
#endif

#endif // GI_HPP
