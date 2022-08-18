#ifndef _GI_GLIB_GLIB_EXTRA_DEF_IMPL_HPP_
#define _GI_GLIB_GLIB_EXTRA_DEF_IMPL_HPP_

namespace gi
{
namespace repository
{
namespace GLib
{
guint
idle_add(GLib::SourceFunc function) noexcept
{
  return idle_add(GLib::PRIORITY_DEFAULT_IDLE_, function);
}

guint
timeout_add_seconds(guint interval, GLib::SourceFunc function) noexcept
{
  return timeout_add_seconds(GLib::PRIORITY_DEFAULT_, interval, function);
}

guint
timeout_add(guint interval, GLib::SourceFunc function) noexcept
{
  return timeout_add(GLib::PRIORITY_DEFAULT_, interval, function);
}

} // namespace GLib

} // namespace repository

} // namespace gi

#endif
