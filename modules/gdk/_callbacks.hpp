// AUTO-GENERATED

#ifndef _GI_GDK__CALLBACKS_HPP_
#define _GI_GDK__CALLBACKS_HPP_

namespace gi {

namespace repository {

namespace Gdk {

class Seat;
class Window;

// typedef void (*GdkEventFunc) (GdkEvent* event, gpointer data);
// typedef void (*GdkEventFunc) ( event, void* data);
// SKIP; event type  not supported

// typedef GdkFilterReturn (*GdkFilterFunc) (GdkXEvent* xevent, GdkEvent* event, gpointer data);
// typedef ::GdkFilterReturn (*GdkFilterFunc) (::GdkXEvent xevent,  event, void* data);
// SKIP; event type  not supported, inconsistent in xevent pointer depth (1 vs 0)

// typedef void (*GdkSeatGrabPrepareFunc) (GdkSeat* seat, GdkWindow* window, gpointer user_data);
// typedef void (*GdkSeatGrabPrepareFunc) (::GdkSeat* seat, ::GdkWindow* window, void* user_data);
typedef gi::detail::callback<void(Gdk::Seat seat, Gdk::Window window), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> SeatGrabPrepareFunc;

// typedef gboolean (*GdkWindowChildFunc) (GdkWindow* window, gpointer user_data);
// typedef gboolean (*GdkWindowChildFunc) (::GdkWindow* window, void* user_data);
typedef gi::detail::callback<bool(Gdk::Window window), gi::transfer_none_t, gi::transfer_none_t> WindowChildFunc;

// typedef void (*GdkWindowInvalidateHandlerFunc) (GdkWindow* window, cairo_region_t* region);
// typedef void (*GdkWindowInvalidateHandlerFunc) (::GdkWindow* window, ::cairo_region_t* region);
// SKIP; not a callback since no user_data

} // namespace Gdk

} // namespace repository

} // namespace gi

#endif
