// AUTO-GENERATED

#ifndef _GI_GLIB_TESTCONFIG_IMPL_HPP_
#define _GI_GLIB_TESTCONFIG_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

static gboolean _field_test_initialized_get (const ::GTestConfig* obj) { return (gboolean) obj->test_initialized; }
// gboolean TestConfig::test_initialized (const ::GTestConfig* obj);
// gboolean TestConfig::test_initialized (const ::GTestConfig* obj);
bool base::TestConfigBase::test_initialized_ () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GTestConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_test_initialized_get;
  auto _temp_ret = call_wrap_v ((const ::GTestConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_test_initialized_set (::GTestConfig* obj, gboolean _value) { obj->test_initialized = (decltype(obj->test_initialized)) _value; }
//  TestConfig::test_initialized (::GTestConfig* obj, gboolean _value);
// void TestConfig::test_initialized (::GTestConfig* obj, gboolean _value);
void base::TestConfigBase::test_initialized_ (gboolean _value) noexcept
{
  typedef void (*call_wrap_t) (::GTestConfig* obj, gboolean _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_test_initialized_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GTestConfig*) (gobj_()), (gboolean) (_value_to_c));
}

static gboolean _field_test_quick_get (const ::GTestConfig* obj) { return (gboolean) obj->test_quick; }
// gboolean TestConfig::test_quick (const ::GTestConfig* obj);
// gboolean TestConfig::test_quick (const ::GTestConfig* obj);
bool base::TestConfigBase::test_quick_ () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GTestConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_test_quick_get;
  auto _temp_ret = call_wrap_v ((const ::GTestConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_test_quick_set (::GTestConfig* obj, gboolean _value) { obj->test_quick = (decltype(obj->test_quick)) _value; }
//  TestConfig::test_quick (::GTestConfig* obj, gboolean _value);
// void TestConfig::test_quick (::GTestConfig* obj, gboolean _value);
void base::TestConfigBase::test_quick_ (gboolean _value) noexcept
{
  typedef void (*call_wrap_t) (::GTestConfig* obj, gboolean _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_test_quick_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GTestConfig*) (gobj_()), (gboolean) (_value_to_c));
}

static gboolean _field_test_perf_get (const ::GTestConfig* obj) { return (gboolean) obj->test_perf; }
// gboolean TestConfig::test_perf (const ::GTestConfig* obj);
// gboolean TestConfig::test_perf (const ::GTestConfig* obj);
bool base::TestConfigBase::test_perf_ () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GTestConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_test_perf_get;
  auto _temp_ret = call_wrap_v ((const ::GTestConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_test_perf_set (::GTestConfig* obj, gboolean _value) { obj->test_perf = (decltype(obj->test_perf)) _value; }
//  TestConfig::test_perf (::GTestConfig* obj, gboolean _value);
// void TestConfig::test_perf (::GTestConfig* obj, gboolean _value);
void base::TestConfigBase::test_perf_ (gboolean _value) noexcept
{
  typedef void (*call_wrap_t) (::GTestConfig* obj, gboolean _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_test_perf_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GTestConfig*) (gobj_()), (gboolean) (_value_to_c));
}

static gboolean _field_test_verbose_get (const ::GTestConfig* obj) { return (gboolean) obj->test_verbose; }
// gboolean TestConfig::test_verbose (const ::GTestConfig* obj);
// gboolean TestConfig::test_verbose (const ::GTestConfig* obj);
bool base::TestConfigBase::test_verbose_ () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GTestConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_test_verbose_get;
  auto _temp_ret = call_wrap_v ((const ::GTestConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_test_verbose_set (::GTestConfig* obj, gboolean _value) { obj->test_verbose = (decltype(obj->test_verbose)) _value; }
//  TestConfig::test_verbose (::GTestConfig* obj, gboolean _value);
// void TestConfig::test_verbose (::GTestConfig* obj, gboolean _value);
void base::TestConfigBase::test_verbose_ (gboolean _value) noexcept
{
  typedef void (*call_wrap_t) (::GTestConfig* obj, gboolean _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_test_verbose_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GTestConfig*) (gobj_()), (gboolean) (_value_to_c));
}

static gboolean _field_test_quiet_get (const ::GTestConfig* obj) { return (gboolean) obj->test_quiet; }
// gboolean TestConfig::test_quiet (const ::GTestConfig* obj);
// gboolean TestConfig::test_quiet (const ::GTestConfig* obj);
bool base::TestConfigBase::test_quiet_ () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GTestConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_test_quiet_get;
  auto _temp_ret = call_wrap_v ((const ::GTestConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_test_quiet_set (::GTestConfig* obj, gboolean _value) { obj->test_quiet = (decltype(obj->test_quiet)) _value; }
//  TestConfig::test_quiet (::GTestConfig* obj, gboolean _value);
// void TestConfig::test_quiet (::GTestConfig* obj, gboolean _value);
void base::TestConfigBase::test_quiet_ (gboolean _value) noexcept
{
  typedef void (*call_wrap_t) (::GTestConfig* obj, gboolean _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_test_quiet_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GTestConfig*) (gobj_()), (gboolean) (_value_to_c));
}

static gboolean _field_test_undefined_get (const ::GTestConfig* obj) { return (gboolean) obj->test_undefined; }
// gboolean TestConfig::test_undefined (const ::GTestConfig* obj);
// gboolean TestConfig::test_undefined (const ::GTestConfig* obj);
bool base::TestConfigBase::test_undefined_ () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GTestConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_test_undefined_get;
  auto _temp_ret = call_wrap_v ((const ::GTestConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_test_undefined_set (::GTestConfig* obj, gboolean _value) { obj->test_undefined = (decltype(obj->test_undefined)) _value; }
//  TestConfig::test_undefined (::GTestConfig* obj, gboolean _value);
// void TestConfig::test_undefined (::GTestConfig* obj, gboolean _value);
void base::TestConfigBase::test_undefined_ (gboolean _value) noexcept
{
  typedef void (*call_wrap_t) (::GTestConfig* obj, gboolean _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_test_undefined_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GTestConfig*) (gobj_()), (gboolean) (_value_to_c));
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/testconfig_extra_def_impl.hpp>)
#include <glib/testconfig_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/testconfig_extra_impl.hpp>)
#include <glib/testconfig_extra_impl.hpp>
#endif
#endif

#endif
