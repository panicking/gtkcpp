// AUTO-GENERATED

#ifndef _GI_GLIB_TESTLOGMSG_HPP_
#define _GI_GLIB_TESTLOGMSG_HPP_


namespace gi {

namespace repository {

namespace GLib {


class TestLogMsg;

namespace base {


#define GI_GLIB_TESTLOGMSG_BASE base::TestLogMsgBase
class TestLogMsgBase : public gi::detail::CBoxedWrapper<TestLogMsgBase, ::GTestLogMsg>
{
typedef gi::detail::CBoxedWrapper<TestLogMsgBase, ::GTestLogMsg> super_type;
public:

TestLogMsgBase (std::nullptr_t = nullptr) : super_type() {}

// ::GTestLogType TestLogMsg::log_type (const ::GTestLogMsg* obj);
// ::GTestLogType TestLogMsg::log_type (const ::GTestLogMsg* obj);
GI_INLINE_DECL GLib::TestLogType log_type_ () const noexcept;

//  TestLogMsg::log_type (::GTestLogMsg* obj, ::GTestLogType _value);
// void TestLogMsg::log_type (::GTestLogMsg* obj, ::GTestLogType _value);
GI_INLINE_DECL void log_type_ (GLib::TestLogType _value) noexcept;

// guint TestLogMsg::n_strings (const ::GTestLogMsg* obj);
// guint TestLogMsg::n_strings (const ::GTestLogMsg* obj);
GI_INLINE_DECL guint n_strings_ () const noexcept;

//  TestLogMsg::n_strings (::GTestLogMsg* obj, guint _value);
// void TestLogMsg::n_strings (::GTestLogMsg* obj, guint _value);
GI_INLINE_DECL void n_strings_ (guint _value) noexcept;

// guint TestLogMsg::n_nums (const ::GTestLogMsg* obj);
// guint TestLogMsg::n_nums (const ::GTestLogMsg* obj);
GI_INLINE_DECL guint n_nums_ () const noexcept;

//  TestLogMsg::n_nums (::GTestLogMsg* obj, guint _value);
// void TestLogMsg::n_nums (::GTestLogMsg* obj, guint _value);
GI_INLINE_DECL void n_nums_ (guint _value) noexcept;

// void g_test_log_msg_free (GTestLogMsg* tmsg);
// void g_test_log_msg_free (::GTestLogMsg* tmsg);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/testlogmsg_extra_def.hpp>)
#include <glib/testlogmsg_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/testlogmsg_extra.hpp>)
#include <glib/testlogmsg_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class TestLogMsg : public GI_GLIB_TESTLOGMSG_BASE
{ typedef GI_GLIB_TESTLOGMSG_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GTestLogMsg>
{ typedef GLib::TestLogMsg type; }; 

} // namespace repository

} // namespace gi

#endif
