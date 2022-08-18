// AUTO-GENERATED

#ifndef _GI_GTK_CALENDAR_HPP_
#define _GI_GTK_CALENDAR_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class Calendar;

namespace base {


#define GI_GTK_CALENDAR_BASE base::CalendarBase
class CalendarBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkCalendar BaseObjectType;

CalendarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_calendar_get_type(); } 

// GtkWidget* gtk_calendar_new ();
// ::GtkCalendar* gtk_calendar_new ();
static GI_INLINE_DECL Gtk::Calendar new_ () noexcept;

// void gtk_calendar_clear_marks (GtkCalendar* calendar);
// void gtk_calendar_clear_marks (::GtkCalendar* calendar);
GI_INLINE_DECL void clear_marks () noexcept;

// void gtk_calendar_get_date (GtkCalendar* calendar, guint* year, guint* month, guint* day);
// void gtk_calendar_get_date (::GtkCalendar* calendar, guint* year, guint* month, guint* day);
GI_INLINE_DECL void get_date (guint * year = nullptr, guint * month = nullptr, guint * day = nullptr) noexcept;
GI_INLINE_DECL std::tuple<guint, guint, guint> get_date () noexcept;

// gboolean gtk_calendar_get_day_is_marked (GtkCalendar* calendar, guint day);
// gboolean gtk_calendar_get_day_is_marked (::GtkCalendar* calendar, guint day);
GI_INLINE_DECL bool get_day_is_marked (guint day) noexcept;

// gint gtk_calendar_get_detail_height_rows (GtkCalendar* calendar);
// gint gtk_calendar_get_detail_height_rows (::GtkCalendar* calendar);
GI_INLINE_DECL gint get_detail_height_rows () noexcept;

// gint gtk_calendar_get_detail_width_chars (GtkCalendar* calendar);
// gint gtk_calendar_get_detail_width_chars (::GtkCalendar* calendar);
GI_INLINE_DECL gint get_detail_width_chars () noexcept;

// GtkCalendarDisplayOptions gtk_calendar_get_display_options (GtkCalendar* calendar);
// ::GtkCalendarDisplayOptions gtk_calendar_get_display_options (::GtkCalendar* calendar);
GI_INLINE_DECL Gtk::CalendarDisplayOptions get_display_options () noexcept;

// void gtk_calendar_mark_day (GtkCalendar* calendar, guint day);
// void gtk_calendar_mark_day (::GtkCalendar* calendar, guint day);
GI_INLINE_DECL void mark_day (guint day) noexcept;

// void gtk_calendar_select_day (GtkCalendar* calendar, guint day);
// void gtk_calendar_select_day (::GtkCalendar* calendar, guint day);
GI_INLINE_DECL void select_day (guint day) noexcept;

// void gtk_calendar_select_month (GtkCalendar* calendar, guint month, guint year);
// void gtk_calendar_select_month (::GtkCalendar* calendar, guint month, guint year);
GI_INLINE_DECL void select_month (guint month, guint year) noexcept;

// void gtk_calendar_set_detail_func (GtkCalendar* calendar, GtkCalendarDetailFunc func, gpointer data, GDestroyNotify destroy);
// void gtk_calendar_set_detail_func (::GtkCalendar* calendar, Gtk::CalendarDetailFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy);
GI_INLINE_DECL void set_detail_func (Gtk::CalendarDetailFunc func) noexcept;

// void gtk_calendar_set_detail_height_rows (GtkCalendar* calendar, gint rows);
// void gtk_calendar_set_detail_height_rows (::GtkCalendar* calendar, gint rows);
GI_INLINE_DECL void set_detail_height_rows (gint rows) noexcept;

// void gtk_calendar_set_detail_width_chars (GtkCalendar* calendar, gint chars);
// void gtk_calendar_set_detail_width_chars (::GtkCalendar* calendar, gint chars);
GI_INLINE_DECL void set_detail_width_chars (gint chars) noexcept;

// void gtk_calendar_set_display_options (GtkCalendar* calendar, GtkCalendarDisplayOptions flags);
// void gtk_calendar_set_display_options (::GtkCalendar* calendar, ::GtkCalendarDisplayOptions flags);
GI_INLINE_DECL void set_display_options (Gtk::CalendarDisplayOptions flags) noexcept;

// void gtk_calendar_unmark_day (GtkCalendar* calendar, guint day);
// void gtk_calendar_unmark_day (::GtkCalendar* calendar, guint day);
GI_INLINE_DECL void unmark_day (guint day) noexcept;

gi::property_proxy<gint, base::CalendarBase> property_day()
{ return gi::property_proxy<gint, base::CalendarBase> (*this, "day"); }
const gi::property_proxy<gint, base::CalendarBase> property_day() const
{ return gi::property_proxy<gint, base::CalendarBase> (*this, "day"); }

gi::property_proxy<gint, base::CalendarBase> property_detail_height_rows()
{ return gi::property_proxy<gint, base::CalendarBase> (*this, "detail-height-rows"); }
const gi::property_proxy<gint, base::CalendarBase> property_detail_height_rows() const
{ return gi::property_proxy<gint, base::CalendarBase> (*this, "detail-height-rows"); }

gi::property_proxy<gint, base::CalendarBase> property_detail_width_chars()
{ return gi::property_proxy<gint, base::CalendarBase> (*this, "detail-width-chars"); }
const gi::property_proxy<gint, base::CalendarBase> property_detail_width_chars() const
{ return gi::property_proxy<gint, base::CalendarBase> (*this, "detail-width-chars"); }

gi::property_proxy<gint, base::CalendarBase> property_month()
{ return gi::property_proxy<gint, base::CalendarBase> (*this, "month"); }
const gi::property_proxy<gint, base::CalendarBase> property_month() const
{ return gi::property_proxy<gint, base::CalendarBase> (*this, "month"); }

gi::property_proxy<bool, base::CalendarBase> property_no_month_change()
{ return gi::property_proxy<bool, base::CalendarBase> (*this, "no-month-change"); }
const gi::property_proxy<bool, base::CalendarBase> property_no_month_change() const
{ return gi::property_proxy<bool, base::CalendarBase> (*this, "no-month-change"); }

gi::property_proxy<bool, base::CalendarBase> property_show_day_names()
{ return gi::property_proxy<bool, base::CalendarBase> (*this, "show-day-names"); }
const gi::property_proxy<bool, base::CalendarBase> property_show_day_names() const
{ return gi::property_proxy<bool, base::CalendarBase> (*this, "show-day-names"); }

gi::property_proxy<bool, base::CalendarBase> property_show_details()
{ return gi::property_proxy<bool, base::CalendarBase> (*this, "show-details"); }
const gi::property_proxy<bool, base::CalendarBase> property_show_details() const
{ return gi::property_proxy<bool, base::CalendarBase> (*this, "show-details"); }

gi::property_proxy<bool, base::CalendarBase> property_show_heading()
{ return gi::property_proxy<bool, base::CalendarBase> (*this, "show-heading"); }
const gi::property_proxy<bool, base::CalendarBase> property_show_heading() const
{ return gi::property_proxy<bool, base::CalendarBase> (*this, "show-heading"); }

gi::property_proxy<bool, base::CalendarBase> property_show_week_numbers()
{ return gi::property_proxy<bool, base::CalendarBase> (*this, "show-week-numbers"); }
const gi::property_proxy<bool, base::CalendarBase> property_show_week_numbers() const
{ return gi::property_proxy<bool, base::CalendarBase> (*this, "show-week-numbers"); }

gi::property_proxy<gint, base::CalendarBase> property_year()
{ return gi::property_proxy<gint, base::CalendarBase> (*this, "year"); }
const gi::property_proxy<gint, base::CalendarBase> property_year() const
{ return gi::property_proxy<gint, base::CalendarBase> (*this, "year"); }

// signal day-selected
gi::signal_proxy<void(Gtk::Calendar)> signal_day_selected()
{ return gi::signal_proxy<void(Gtk::Calendar)> (*this, "day-selected"); }

// signal day-selected-double-click
gi::signal_proxy<void(Gtk::Calendar)> signal_day_selected_double_click()
{ return gi::signal_proxy<void(Gtk::Calendar)> (*this, "day-selected-double-click"); }

// signal month-changed
gi::signal_proxy<void(Gtk::Calendar)> signal_month_changed()
{ return gi::signal_proxy<void(Gtk::Calendar)> (*this, "month-changed"); }

// signal next-month
gi::signal_proxy<void(Gtk::Calendar)> signal_next_month()
{ return gi::signal_proxy<void(Gtk::Calendar)> (*this, "next-month"); }

// signal next-year
gi::signal_proxy<void(Gtk::Calendar)> signal_next_year()
{ return gi::signal_proxy<void(Gtk::Calendar)> (*this, "next-year"); }

// signal prev-month
gi::signal_proxy<void(Gtk::Calendar)> signal_prev_month()
{ return gi::signal_proxy<void(Gtk::Calendar)> (*this, "prev-month"); }

// signal prev-year
gi::signal_proxy<void(Gtk::Calendar)> signal_prev_year()
{ return gi::signal_proxy<void(Gtk::Calendar)> (*this, "prev-year"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/calendar_extra_def.hpp>)
#include <gtk/calendar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/calendar_extra.hpp>)
#include <gtk/calendar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Calendar : public GI_GTK_CALENDAR_BASE
{ typedef GI_GTK_CALENDAR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCalendar>
{ typedef Gtk::Calendar type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CalendarClassDef
{
typedef CalendarClassDef self;
public:
typedef Gtk::Calendar instance_type;
typedef ::GtkCalendarClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Calendar::day_selected (GtkCalendar* calendar);
// void Calendar::day_selected (::GtkCalendar* calendar);
virtual void day_selected_ () noexcept = 0;

// void Calendar::day_selected_double_click (GtkCalendar* calendar);
// void Calendar::day_selected_double_click (::GtkCalendar* calendar);
virtual void day_selected_double_click_ () noexcept = 0;

// void Calendar::month_changed (GtkCalendar* calendar);
// void Calendar::month_changed (::GtkCalendar* calendar);
virtual void month_changed_ () noexcept = 0;

// void Calendar::next_month (GtkCalendar* calendar);
// void Calendar::next_month (::GtkCalendar* calendar);
virtual void next_month_ () noexcept = 0;

// void Calendar::next_year (GtkCalendar* calendar);
// void Calendar::next_year (::GtkCalendar* calendar);
virtual void next_year_ () noexcept = 0;

// void Calendar::prev_month (GtkCalendar* calendar);
// void Calendar::prev_month (::GtkCalendar* calendar);
virtual void prev_month_ () noexcept = 0;

// void Calendar::prev_year (GtkCalendar* calendar);
// void Calendar::prev_year (::GtkCalendar* calendar);
virtual void prev_year_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class CalendarClass: public detail::ClassTemplate<Gtk::impl::internal::CalendarClassDef, Gtk::impl::internal::WidgetClass>
{
typedef CalendarClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::CalendarClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Calendar::day_selected (GtkCalendar* calendar);
// void Calendar::day_selected (::GtkCalendar* calendar);
GI_INLINE_DECL void day_selected_ () noexcept override;

// void Calendar::day_selected_double_click (GtkCalendar* calendar);
// void Calendar::day_selected_double_click (::GtkCalendar* calendar);
GI_INLINE_DECL void day_selected_double_click_ () noexcept override;

// void Calendar::month_changed (GtkCalendar* calendar);
// void Calendar::month_changed (::GtkCalendar* calendar);
GI_INLINE_DECL void month_changed_ () noexcept override;

// void Calendar::next_month (GtkCalendar* calendar);
// void Calendar::next_month (::GtkCalendar* calendar);
GI_INLINE_DECL void next_month_ () noexcept override;

// void Calendar::next_year (GtkCalendar* calendar);
// void Calendar::next_year (::GtkCalendar* calendar);
GI_INLINE_DECL void next_year_ () noexcept override;

// void Calendar::prev_month (GtkCalendar* calendar);
// void Calendar::prev_month (::GtkCalendar* calendar);
GI_INLINE_DECL void prev_month_ () noexcept override;

// void Calendar::prev_year (GtkCalendar* calendar);
// void Calendar::prev_year (::GtkCalendar* calendar);
GI_INLINE_DECL void prev_year_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using CalendarImpl = detail::ObjectImpl<Calendar, internal::CalendarClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
