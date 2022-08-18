#ifndef _GI_GLIB_MAINLOOP_EXTRA_DEF_IMPL_HPP_
#define _GI_GLIB_MAINLOOP_EXTRA_DEF_IMPL_HPP_

namespace gi
{
namespace repository
{
namespace GLib
{
namespace base
{
GLib::MainLoop
MainLoopExtra::new_() noexcept
{
  return super::new_(nullptr, false);
}

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi

#endif
