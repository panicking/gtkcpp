// AUTO-GENERATED

#ifndef _GI_GLIB_TESTLOGMSG_IMPL_HPP_
#define _GI_GLIB_TESTLOGMSG_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

static ::GTestLogType _field_log_type_get (const ::GTestLogMsg* obj) { return (::GTestLogType) obj->log_type; }
// ::GTestLogType TestLogMsg::log_type (const ::GTestLogMsg* obj);
// ::GTestLogType TestLogMsg::log_type (const ::GTestLogMsg* obj);
GLib::TestLogType base::TestLogMsgBase::log_type_ () const noexcept
{
  typedef ::GTestLogType (*call_wrap_t) (const ::GTestLogMsg* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_log_type_get;
  auto _temp_ret = call_wrap_v ((const ::GTestLogMsg*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_log_type_set (::GTestLogMsg* obj, ::GTestLogType _value) { obj->log_type = (decltype(obj->log_type)) _value; }
//  TestLogMsg::log_type (::GTestLogMsg* obj, ::GTestLogType _value);
// void TestLogMsg::log_type (::GTestLogMsg* obj, ::GTestLogType _value);
void base::TestLogMsgBase::log_type_ (GLib::TestLogType _value) noexcept
{
  typedef void (*call_wrap_t) (::GTestLogMsg* obj, ::GTestLogType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_log_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GTestLogMsg*) (gobj_()), (::GTestLogType) (_value_to_c));
}

static guint _field_n_strings_get (const ::GTestLogMsg* obj) { return (guint) obj->n_strings; }
// guint TestLogMsg::n_strings (const ::GTestLogMsg* obj);
// guint TestLogMsg::n_strings (const ::GTestLogMsg* obj);
guint base::TestLogMsgBase::n_strings_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GTestLogMsg* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_n_strings_get;
  auto _temp_ret = call_wrap_v ((const ::GTestLogMsg*) (gobj_()));
  return _temp_ret;
}

static void _field_n_strings_set (::GTestLogMsg* obj, guint _value) { obj->n_strings = (decltype(obj->n_strings)) _value; }
//  TestLogMsg::n_strings (::GTestLogMsg* obj, guint _value);
// void TestLogMsg::n_strings (::GTestLogMsg* obj, guint _value);
void base::TestLogMsgBase::n_strings_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GTestLogMsg* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_n_strings_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GTestLogMsg*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_n_nums_get (const ::GTestLogMsg* obj) { return (guint) obj->n_nums; }
// guint TestLogMsg::n_nums (const ::GTestLogMsg* obj);
// guint TestLogMsg::n_nums (const ::GTestLogMsg* obj);
guint base::TestLogMsgBase::n_nums_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GTestLogMsg* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_n_nums_get;
  auto _temp_ret = call_wrap_v ((const ::GTestLogMsg*) (gobj_()));
  return _temp_ret;
}

static void _field_n_nums_set (::GTestLogMsg* obj, guint _value) { obj->n_nums = (decltype(obj->n_nums)) _value; }
//  TestLogMsg::n_nums (::GTestLogMsg* obj, guint _value);
// void TestLogMsg::n_nums (::GTestLogMsg* obj, guint _value);
void base::TestLogMsgBase::n_nums_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GTestLogMsg* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_n_nums_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GTestLogMsg*) (gobj_()), (guint) (_value_to_c));
}

// void g_test_log_msg_free (GTestLogMsg* tmsg);
// void g_test_log_msg_free (::GTestLogMsg* tmsg);
// IGNORE; marked ignore


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/testlogmsg_extra_def_impl.hpp>)
#include <glib/testlogmsg_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/testlogmsg_extra_impl.hpp>)
#include <glib/testlogmsg_extra_impl.hpp>
#endif
#endif

#endif
