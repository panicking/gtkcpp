#ifndef GI_EXPECTED_HPP
#define GI_EXPECTED_HPP

#include "nonstd/expected.hpp"

#include "base.hpp"
#include "exception.hpp"

namespace gi
{
// alias so we might route to a std type some day ...
template<typename T, typename E>
using expected = nonstd::expected<T, E>;

// standardize on glib error
template<typename T>
using result = expected<T, repository::GLib::Error>;

namespace detail
{
inline nonstd::unexpected_type<repository::GLib::Error>
make_unexpected(GError *error)
{
  assert(error);
  return nonstd::make_unexpected(repository::GLib::Error(error));
}
} // namespace detail

// no forwarding reference; T must be non-reference type
template<typename T>
result<T>
make_result(T t, GError *error)
{
  if (error)
    return detail::make_unexpected(error);
  return t;
}

// rough helpers to unwrap result/expected
// unwrap by move
template<typename T>
T
expect(gi::result<T> &&t)
{
  if (!t)
    detail::try_throw(t.error());
  return std::move(*t);
}

namespace detail
{
template<typename T>
void test_result(const gi::result<T> &);
template<typename T>
int test_result(const T &);
template<typename T>
using is_result = std::is_same<void,
    decltype(test_result(std::forward<T>(std::declval<T>())))>;
} // namespace detail

// should only be used for a non-result
// (e.g. avoid l-value result ending up here)
template<typename T, typename Enable = typename std::enable_if<
                         !detail::is_result<T>::value>::type>
T
expect(T &&t)
{
  return std::forward<T>(t);
}

} // namespace gi

#endif // GI_EXPECTED_HPP
