// AUTO-GENERATED

#ifndef _GI_GTK_TEXTAPPEARANCE_HPP_
#define _GI_GTK_TEXTAPPEARANCE_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class TextAppearance;

namespace base {


#define GI_GTK_TEXTAPPEARANCE_BASE base::TextAppearanceBase
class TextAppearanceBase : public gi::detail::CBoxedWrapper<TextAppearanceBase, ::GtkTextAppearance>
{
typedef gi::detail::CBoxedWrapper<TextAppearanceBase, ::GtkTextAppearance> super_type;
public:

TextAppearanceBase (std::nullptr_t = nullptr) : super_type() {}

// gint TextAppearance::rise (const ::GtkTextAppearance* obj);
// gint TextAppearance::rise (const ::GtkTextAppearance* obj);
GI_INLINE_DECL gint rise_ () const noexcept;

//  TextAppearance::rise (::GtkTextAppearance* obj, gint _value);
// void TextAppearance::rise (::GtkTextAppearance* obj, gint _value);
GI_INLINE_DECL void rise_ (gint _value) noexcept;

// guint TextAppearance::underline (const ::GtkTextAppearance* obj);
// guint TextAppearance::underline (const ::GtkTextAppearance* obj);
GI_INLINE_DECL guint underline_ () const noexcept;

//  TextAppearance::underline (::GtkTextAppearance* obj, guint _value);
// void TextAppearance::underline (::GtkTextAppearance* obj, guint _value);
GI_INLINE_DECL void underline_ (guint _value) noexcept;

// guint TextAppearance::strikethrough (const ::GtkTextAppearance* obj);
// guint TextAppearance::strikethrough (const ::GtkTextAppearance* obj);
GI_INLINE_DECL guint strikethrough_ () const noexcept;

//  TextAppearance::strikethrough (::GtkTextAppearance* obj, guint _value);
// void TextAppearance::strikethrough (::GtkTextAppearance* obj, guint _value);
GI_INLINE_DECL void strikethrough_ (guint _value) noexcept;

// guint TextAppearance::draw_bg (const ::GtkTextAppearance* obj);
// guint TextAppearance::draw_bg (const ::GtkTextAppearance* obj);
GI_INLINE_DECL guint draw_bg_ () const noexcept;

//  TextAppearance::draw_bg (::GtkTextAppearance* obj, guint _value);
// void TextAppearance::draw_bg (::GtkTextAppearance* obj, guint _value);
GI_INLINE_DECL void draw_bg_ (guint _value) noexcept;

// guint TextAppearance::inside_selection (const ::GtkTextAppearance* obj);
// guint TextAppearance::inside_selection (const ::GtkTextAppearance* obj);
GI_INLINE_DECL guint inside_selection_ () const noexcept;

//  TextAppearance::inside_selection (::GtkTextAppearance* obj, guint _value);
// void TextAppearance::inside_selection (::GtkTextAppearance* obj, guint _value);
GI_INLINE_DECL void inside_selection_ (guint _value) noexcept;

// guint TextAppearance::is_text (const ::GtkTextAppearance* obj);
// guint TextAppearance::is_text (const ::GtkTextAppearance* obj);
GI_INLINE_DECL guint is_text_ () const noexcept;

//  TextAppearance::is_text (::GtkTextAppearance* obj, guint _value);
// void TextAppearance::is_text (::GtkTextAppearance* obj, guint _value);
GI_INLINE_DECL void is_text_ (guint _value) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/textappearance_extra_def.hpp>)
#include <gtk/textappearance_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/textappearance_extra.hpp>)
#include <gtk/textappearance_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TextAppearance : public GI_GTK_TEXTAPPEARANCE_BASE
{ typedef GI_GTK_TEXTAPPEARANCE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTextAppearance>
{ typedef Gtk::TextAppearance type; }; 

} // namespace repository

} // namespace gi

#endif
