// AUTO-GENERATED

#ifndef _GI_GLIB_TESTLOGBUFFER_HPP_
#define _GI_GLIB_TESTLOGBUFFER_HPP_


namespace gi {

namespace repository {

namespace GLib {


class TestLogBuffer;

namespace base {


#define GI_GLIB_TESTLOGBUFFER_BASE base::TestLogBufferBase
class TestLogBufferBase : public gi::detail::CBoxedWrapper<TestLogBufferBase, ::GTestLogBuffer>
{
typedef gi::detail::CBoxedWrapper<TestLogBufferBase, ::GTestLogBuffer> super_type;
public:

TestLogBufferBase (std::nullptr_t = nullptr) : super_type() {}

// void g_test_log_buffer_free (GTestLogBuffer* tbuffer);
// void g_test_log_buffer_free (::GTestLogBuffer* tbuffer);
// IGNORE; marked ignore

// FAILURE on g_test_log_buffer_pop; No such node (<xmlattr>.transfer-ownership)
// void g_test_log_buffer_push (GTestLogBuffer* tbuffer, guint n_bytes, const guint8* bytes);
// void g_test_log_buffer_push (::GTestLogBuffer* tbuffer, guint n_bytes, const guint8 bytes);
// SKIP; inconsistent in bytes pointer depth (1 vs 0)

// FAILURE on g_test_log_buffer_new; No such node (<xmlattr>.transfer-ownership)
}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/testlogbuffer_extra_def.hpp>)
#include <glib/testlogbuffer_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/testlogbuffer_extra.hpp>)
#include <glib/testlogbuffer_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class TestLogBuffer : public GI_GLIB_TESTLOGBUFFER_BASE
{ typedef GI_GLIB_TESTLOGBUFFER_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GTestLogBuffer>
{ typedef GLib::TestLogBuffer type; }; 

} // namespace repository

} // namespace gi

#endif
