#ifndef _GI_GLIB_GLIB_EXTRA_DEF_HPP_
#define _GI_GLIB_GLIB_EXTRA_DEF_HPP_

namespace gi
{
namespace repository
{
namespace GLib
{
GI_INLINE_DECL guint idle_add(GLib::SourceFunc function) noexcept;

GI_INLINE_DECL guint timeout_add_seconds(
    guint interval, GLib::SourceFunc function) noexcept;

GI_INLINE_DECL guint timeout_add(
    guint interval, GLib::SourceFunc function) noexcept;

// connection helpers
namespace internal
{
class SourceConnection : public detail::connection_impl
{
public:
  using connection_impl::connection_impl;

  void disconnect() { g_source_remove(id_); }
};

} // namespace internal

using SourceConnection = detail::connection<internal::SourceConnection>;
using SourceScopedConnection = detail::scoped_connection<SourceConnection>;

} // namespace GLib

template<>
struct declare_gtype_of<GLib::Variant>
{
  static GType get_type() { return G_TYPE_VARIANT; }
  static GLib::Variant get_value(const GValue *val)
  {
    return wrap(g_value_dup_variant(val), transfer_full);
  }
  static void set_value(GValue *val, GLib::Variant v)
  {
    g_value_take_variant(val, v.gobj_copy_());
  }
};

} // namespace repository

inline repository::GLib::SourceConnection
make_connection(gulong id, const repository::GLib::SourceFunc &func)
{
  return repository::GLib::SourceConnection(id, func.connection());
}

} // namespace gi

#endif
