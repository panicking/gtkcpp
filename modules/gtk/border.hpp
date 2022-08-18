// AUTO-GENERATED

#ifndef _GI_GTK_BORDER_HPP_
#define _GI_GTK_BORDER_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class Border;

namespace base {


#define GI_GTK_BORDER_BASE base::BorderBase
class BorderBase : public gi::detail::GBoxedWrapper<BorderBase, ::GtkBorder>
{
typedef gi::detail::GBoxedWrapper<BorderBase, ::GtkBorder> super_type;
public:

BorderBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_border_get_type(); } 

// gint16 Border::left (const ::GtkBorder* obj);
// gint16 Border::left (const ::GtkBorder* obj);
GI_INLINE_DECL gint16 left_ () const noexcept;

//  Border::left (::GtkBorder* obj, gint16 _value);
// void Border::left (::GtkBorder* obj, gint16 _value);
GI_INLINE_DECL void left_ (gint16 _value) noexcept;

// gint16 Border::right (const ::GtkBorder* obj);
// gint16 Border::right (const ::GtkBorder* obj);
GI_INLINE_DECL gint16 right_ () const noexcept;

//  Border::right (::GtkBorder* obj, gint16 _value);
// void Border::right (::GtkBorder* obj, gint16 _value);
GI_INLINE_DECL void right_ (gint16 _value) noexcept;

// gint16 Border::top (const ::GtkBorder* obj);
// gint16 Border::top (const ::GtkBorder* obj);
GI_INLINE_DECL gint16 top_ () const noexcept;

//  Border::top (::GtkBorder* obj, gint16 _value);
// void Border::top (::GtkBorder* obj, gint16 _value);
GI_INLINE_DECL void top_ (gint16 _value) noexcept;

// gint16 Border::bottom (const ::GtkBorder* obj);
// gint16 Border::bottom (const ::GtkBorder* obj);
GI_INLINE_DECL gint16 bottom_ () const noexcept;

//  Border::bottom (::GtkBorder* obj, gint16 _value);
// void Border::bottom (::GtkBorder* obj, gint16 _value);
GI_INLINE_DECL void bottom_ (gint16 _value) noexcept;

// GtkBorder* gtk_border_new ();
// ::GtkBorder* gtk_border_new ();
static GI_INLINE_DECL Gtk::Border new_ () noexcept;

// GtkBorder* gtk_border_copy (const GtkBorder* border_);
// ::GtkBorder* gtk_border_copy (const ::GtkBorder* border_);
GI_INLINE_DECL Gtk::Border copy () const noexcept;

// void gtk_border_free (GtkBorder* border_);
// void gtk_border_free (::GtkBorder* border_);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/border_extra_def.hpp>)
#include <gtk/border_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/border_extra.hpp>)
#include <gtk/border_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Border : public GI_GTK_BORDER_BASE
{ typedef GI_GTK_BORDER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkBorder>
{ typedef Gtk::Border type; }; 

} // namespace repository

} // namespace gi

#endif
