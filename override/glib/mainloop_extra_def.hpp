#ifndef _GI_GLIB_MAINLOOP_EXTRA_DEF_HPP_
#define _GI_GLIB_MAINLOOP_EXTRA_DEF_HPP_

namespace gi
{
namespace repository
{
namespace GLib
{
namespace base
{
class MainLoopExtra : public GI_GLIB_MAINLOOP_BASE
{
  typedef GI_GLIB_MAINLOOP_BASE super;

public:
  static GI_INLINE_DECL GLib::MainLoop new_() noexcept;

}; // class

#undef GI_GLIB_MAINLOOP_BASE
#define GI_GLIB_MAINLOOP_BASE base::MainLoopExtra

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi

#endif
