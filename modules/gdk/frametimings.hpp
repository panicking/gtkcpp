// AUTO-GENERATED

#ifndef _GI_GDK_FRAMETIMINGS_HPP_
#define _GI_GDK_FRAMETIMINGS_HPP_


namespace gi {

namespace repository {

namespace Gdk {


class FrameTimings;

namespace base {


#define GI_GDK_FRAMETIMINGS_BASE base::FrameTimingsBase
class FrameTimingsBase : public gi::detail::GBoxedWrapper<FrameTimingsBase, ::GdkFrameTimings>
{
typedef gi::detail::GBoxedWrapper<FrameTimingsBase, ::GdkFrameTimings> super_type;
public:

FrameTimingsBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gdk_frame_timings_get_type(); } 

// gboolean gdk_frame_timings_get_complete (GdkFrameTimings* timings);
// gboolean gdk_frame_timings_get_complete (::GdkFrameTimings* timings);
GI_INLINE_DECL bool get_complete () noexcept;

// gint64 gdk_frame_timings_get_frame_counter (GdkFrameTimings* timings);
// gint64 gdk_frame_timings_get_frame_counter (::GdkFrameTimings* timings);
GI_INLINE_DECL gint64 get_frame_counter () noexcept;

// gint64 gdk_frame_timings_get_frame_time (GdkFrameTimings* timings);
// gint64 gdk_frame_timings_get_frame_time (::GdkFrameTimings* timings);
GI_INLINE_DECL gint64 get_frame_time () noexcept;

// gint64 gdk_frame_timings_get_predicted_presentation_time (GdkFrameTimings* timings);
// gint64 gdk_frame_timings_get_predicted_presentation_time (::GdkFrameTimings* timings);
GI_INLINE_DECL gint64 get_predicted_presentation_time () noexcept;

// gint64 gdk_frame_timings_get_presentation_time (GdkFrameTimings* timings);
// gint64 gdk_frame_timings_get_presentation_time (::GdkFrameTimings* timings);
GI_INLINE_DECL gint64 get_presentation_time () noexcept;

// gint64 gdk_frame_timings_get_refresh_interval (GdkFrameTimings* timings);
// gint64 gdk_frame_timings_get_refresh_interval (::GdkFrameTimings* timings);
GI_INLINE_DECL gint64 get_refresh_interval () noexcept;

// GdkFrameTimings* gdk_frame_timings_ref (GdkFrameTimings* timings);
// ::GdkFrameTimings* gdk_frame_timings_ref (::GdkFrameTimings* timings);
// IGNORE; marked ignore

// void gdk_frame_timings_unref (GdkFrameTimings* timings);
// void gdk_frame_timings_unref (::GdkFrameTimings* timings);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/frametimings_extra_def.hpp>)
#include <gdk/frametimings_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/frametimings_extra.hpp>)
#include <gdk/frametimings_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class FrameTimings : public GI_GDK_FRAMETIMINGS_BASE
{ typedef GI_GDK_FRAMETIMINGS_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkFrameTimings>
{ typedef Gdk::FrameTimings type; }; 

} // namespace repository

} // namespace gi

#endif
