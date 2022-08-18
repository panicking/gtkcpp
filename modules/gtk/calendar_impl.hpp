// AUTO-GENERATED

#ifndef _GI_GTK_CALENDAR_IMPL_HPP_
#define _GI_GTK_CALENDAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_calendar_new ();
// ::GtkCalendar* gtk_calendar_new ();
Gtk::Calendar base::CalendarBase::new_ () noexcept
{
  typedef ::GtkCalendar* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_calendar_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_calendar_clear_marks (GtkCalendar* calendar);
// void gtk_calendar_clear_marks (::GtkCalendar* calendar);
void base::CalendarBase::clear_marks () noexcept
{
  typedef void (*call_wrap_t) (::GtkCalendar* calendar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_calendar_clear_marks;
  call_wrap_v ((::GtkCalendar*) (gobj_()));
}

// void gtk_calendar_get_date (GtkCalendar* calendar, guint* year, guint* month, guint* day);
// void gtk_calendar_get_date (::GtkCalendar* calendar, guint* year, guint* month, guint* day);
void base::CalendarBase::get_date (guint * year, guint * month, guint * day) noexcept
{
  typedef void (*call_wrap_t) (::GtkCalendar* calendar, guint* year, guint* month, guint* day);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_calendar_get_date;
  guint day_o {};
  guint month_o {};
  guint year_o {};
  call_wrap_v ((::GtkCalendar*) (gobj_()), (guint*) (year ? &year_o : nullptr), (guint*) (month ? &month_o : nullptr), (guint*) (day ? &day_o : nullptr));
  if (day) *day = day_o;
  if (month) *month = month_o;
  if (year) *year = year_o;
}
std::tuple<guint, guint, guint> base::CalendarBase::get_date () noexcept
{
  typedef void (*call_wrap_t) (::GtkCalendar* calendar, guint* year, guint* month, guint* day);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_calendar_get_date;
  guint day_o {};
  guint month_o {};
  guint year_o {};
  call_wrap_v ((::GtkCalendar*) (gobj_()), (guint*) (&year_o), (guint*) (&month_o), (guint*) (&day_o));
  return std::make_tuple (year_o, month_o, day_o);
}

// gboolean gtk_calendar_get_day_is_marked (GtkCalendar* calendar, guint day);
// gboolean gtk_calendar_get_day_is_marked (::GtkCalendar* calendar, guint day);
bool base::CalendarBase::get_day_is_marked (guint day) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCalendar* calendar, guint day);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_calendar_get_day_is_marked;
  auto day_to_c = day;
  auto _temp_ret = call_wrap_v ((::GtkCalendar*) (gobj_()), (guint) (day_to_c));
  return _temp_ret;
}

// gint gtk_calendar_get_detail_height_rows (GtkCalendar* calendar);
// gint gtk_calendar_get_detail_height_rows (::GtkCalendar* calendar);
gint base::CalendarBase::get_detail_height_rows () noexcept
{
  typedef gint (*call_wrap_t) (::GtkCalendar* calendar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_calendar_get_detail_height_rows;
  auto _temp_ret = call_wrap_v ((::GtkCalendar*) (gobj_()));
  return _temp_ret;
}

// gint gtk_calendar_get_detail_width_chars (GtkCalendar* calendar);
// gint gtk_calendar_get_detail_width_chars (::GtkCalendar* calendar);
gint base::CalendarBase::get_detail_width_chars () noexcept
{
  typedef gint (*call_wrap_t) (::GtkCalendar* calendar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_calendar_get_detail_width_chars;
  auto _temp_ret = call_wrap_v ((::GtkCalendar*) (gobj_()));
  return _temp_ret;
}

// GtkCalendarDisplayOptions gtk_calendar_get_display_options (GtkCalendar* calendar);
// ::GtkCalendarDisplayOptions gtk_calendar_get_display_options (::GtkCalendar* calendar);
Gtk::CalendarDisplayOptions base::CalendarBase::get_display_options () noexcept
{
  typedef ::GtkCalendarDisplayOptions (*call_wrap_t) (::GtkCalendar* calendar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_calendar_get_display_options;
  auto _temp_ret = call_wrap_v ((::GtkCalendar*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_calendar_mark_day (GtkCalendar* calendar, guint day);
// void gtk_calendar_mark_day (::GtkCalendar* calendar, guint day);
void base::CalendarBase::mark_day (guint day) noexcept
{
  typedef void (*call_wrap_t) (::GtkCalendar* calendar, guint day);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_calendar_mark_day;
  auto day_to_c = day;
  call_wrap_v ((::GtkCalendar*) (gobj_()), (guint) (day_to_c));
}

// void gtk_calendar_select_day (GtkCalendar* calendar, guint day);
// void gtk_calendar_select_day (::GtkCalendar* calendar, guint day);
void base::CalendarBase::select_day (guint day) noexcept
{
  typedef void (*call_wrap_t) (::GtkCalendar* calendar, guint day);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_calendar_select_day;
  auto day_to_c = day;
  call_wrap_v ((::GtkCalendar*) (gobj_()), (guint) (day_to_c));
}

// void gtk_calendar_select_month (GtkCalendar* calendar, guint month, guint year);
// void gtk_calendar_select_month (::GtkCalendar* calendar, guint month, guint year);
void base::CalendarBase::select_month (guint month, guint year) noexcept
{
  typedef void (*call_wrap_t) (::GtkCalendar* calendar, guint month, guint year);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_calendar_select_month;
  auto year_to_c = year;
  auto month_to_c = month;
  call_wrap_v ((::GtkCalendar*) (gobj_()), (guint) (month_to_c), (guint) (year_to_c));
}

// void gtk_calendar_set_detail_func (GtkCalendar* calendar, GtkCalendarDetailFunc func, gpointer data, GDestroyNotify destroy);
// void gtk_calendar_set_detail_func (::GtkCalendar* calendar, Gtk::CalendarDetailFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy);
void base::CalendarBase::set_detail_func (Gtk::CalendarDetailFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkCalendar* calendar, Gtk::CalendarDetailFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_calendar_set_detail_func;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkCalendar*) (gobj_()), (Gtk::CalendarDetailFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
}

// void gtk_calendar_set_detail_height_rows (GtkCalendar* calendar, gint rows);
// void gtk_calendar_set_detail_height_rows (::GtkCalendar* calendar, gint rows);
void base::CalendarBase::set_detail_height_rows (gint rows) noexcept
{
  typedef void (*call_wrap_t) (::GtkCalendar* calendar, gint rows);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_calendar_set_detail_height_rows;
  auto rows_to_c = rows;
  call_wrap_v ((::GtkCalendar*) (gobj_()), (gint) (rows_to_c));
}

// void gtk_calendar_set_detail_width_chars (GtkCalendar* calendar, gint chars);
// void gtk_calendar_set_detail_width_chars (::GtkCalendar* calendar, gint chars);
void base::CalendarBase::set_detail_width_chars (gint chars) noexcept
{
  typedef void (*call_wrap_t) (::GtkCalendar* calendar, gint chars);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_calendar_set_detail_width_chars;
  auto chars_to_c = chars;
  call_wrap_v ((::GtkCalendar*) (gobj_()), (gint) (chars_to_c));
}

// void gtk_calendar_set_display_options (GtkCalendar* calendar, GtkCalendarDisplayOptions flags);
// void gtk_calendar_set_display_options (::GtkCalendar* calendar, ::GtkCalendarDisplayOptions flags);
void base::CalendarBase::set_display_options (Gtk::CalendarDisplayOptions flags) noexcept
{
  typedef void (*call_wrap_t) (::GtkCalendar* calendar, ::GtkCalendarDisplayOptions flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_calendar_set_display_options;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GtkCalendar*) (gobj_()), (::GtkCalendarDisplayOptions) (flags_to_c));
}

// void gtk_calendar_unmark_day (GtkCalendar* calendar, guint day);
// void gtk_calendar_unmark_day (::GtkCalendar* calendar, guint day);
void base::CalendarBase::unmark_day (guint day) noexcept
{
  typedef void (*call_wrap_t) (::GtkCalendar* calendar, guint day);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_calendar_unmark_day;
  auto day_to_c = day;
  call_wrap_v ((::GtkCalendar*) (gobj_()), (guint) (day_to_c));
}









} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/calendar_extra_def_impl.hpp>)
#include <gtk/calendar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/calendar_extra_impl.hpp>)
#include <gtk/calendar_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CalendarClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkCalendarClass *methods = (::GtkCalendarClass *) class_struct;
  (void) methods;

  methods->day_selected = (decltype (methods->day_selected)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::day_selected_>;
  methods->day_selected_double_click = (decltype (methods->day_selected_double_click)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::day_selected_double_click_>;
  methods->month_changed = (decltype (methods->month_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::month_changed_>;
  methods->next_month = (decltype (methods->next_month)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::next_month_>;
  methods->next_year = (decltype (methods->next_year)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::next_year_>;
  methods->prev_month = (decltype (methods->prev_month)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::prev_month_>;
  methods->prev_year = (decltype (methods->prev_year)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::prev_year_>;
}

// void Calendar::day_selected (GtkCalendar* calendar);
// void Calendar::day_selected (::GtkCalendar* calendar);
void CalendarClass::day_selected_ () noexcept
{
  if (!get_struct_()->day_selected) return ;
  typedef void (*call_wrap_t) (::GtkCalendar* calendar);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->day_selected;
  call_wrap_v ((::GtkCalendar*) (gobj_()));
}

// void Calendar::day_selected_double_click (GtkCalendar* calendar);
// void Calendar::day_selected_double_click (::GtkCalendar* calendar);
void CalendarClass::day_selected_double_click_ () noexcept
{
  if (!get_struct_()->day_selected_double_click) return ;
  typedef void (*call_wrap_t) (::GtkCalendar* calendar);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->day_selected_double_click;
  call_wrap_v ((::GtkCalendar*) (gobj_()));
}

// void Calendar::month_changed (GtkCalendar* calendar);
// void Calendar::month_changed (::GtkCalendar* calendar);
void CalendarClass::month_changed_ () noexcept
{
  if (!get_struct_()->month_changed) return ;
  typedef void (*call_wrap_t) (::GtkCalendar* calendar);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->month_changed;
  call_wrap_v ((::GtkCalendar*) (gobj_()));
}

// void Calendar::next_month (GtkCalendar* calendar);
// void Calendar::next_month (::GtkCalendar* calendar);
void CalendarClass::next_month_ () noexcept
{
  if (!get_struct_()->next_month) return ;
  typedef void (*call_wrap_t) (::GtkCalendar* calendar);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->next_month;
  call_wrap_v ((::GtkCalendar*) (gobj_()));
}

// void Calendar::next_year (GtkCalendar* calendar);
// void Calendar::next_year (::GtkCalendar* calendar);
void CalendarClass::next_year_ () noexcept
{
  if (!get_struct_()->next_year) return ;
  typedef void (*call_wrap_t) (::GtkCalendar* calendar);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->next_year;
  call_wrap_v ((::GtkCalendar*) (gobj_()));
}

// void Calendar::prev_month (GtkCalendar* calendar);
// void Calendar::prev_month (::GtkCalendar* calendar);
void CalendarClass::prev_month_ () noexcept
{
  if (!get_struct_()->prev_month) return ;
  typedef void (*call_wrap_t) (::GtkCalendar* calendar);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->prev_month;
  call_wrap_v ((::GtkCalendar*) (gobj_()));
}

// void Calendar::prev_year (GtkCalendar* calendar);
// void Calendar::prev_year (::GtkCalendar* calendar);
void CalendarClass::prev_year_ () noexcept
{
  if (!get_struct_()->prev_year) return ;
  typedef void (*call_wrap_t) (::GtkCalendar* calendar);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->prev_year;
  call_wrap_v ((::GtkCalendar*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
