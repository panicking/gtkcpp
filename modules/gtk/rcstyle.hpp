// AUTO-GENERATED

#ifndef _GI_GTK_RCSTYLE_HPP_
#define _GI_GTK_RCSTYLE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Settings;

class RcStyle;

namespace base {


#define GI_GTK_RCSTYLE_BASE base::RcStyleBase
class RcStyleBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkRcStyle BaseObjectType;

RcStyleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_rc_style_get_type(); } 

// GtkRcStyle* gtk_rc_style_new ();
// ::GtkRcStyle* gtk_rc_style_new ();
// IGNORE; deprecated

// GtkRcStyle* gtk_rc_style_copy (GtkRcStyle* orig);
// ::GtkRcStyle* gtk_rc_style_copy (::GtkRcStyle* orig);
// IGNORE; deprecated

// char* RcStyle::name (const ::GtkRcStyle* obj);
// char* RcStyle::name (const ::GtkRcStyle* obj);
GI_INLINE_DECL std::string name_ () const noexcept;

// ::PangoFontDescription* RcStyle::font_desc (const ::GtkRcStyle* obj);
// ::PangoFontDescription* RcStyle::font_desc (const ::GtkRcStyle* obj);
GI_INLINE_DECL Pango::FontDescription font_desc_ () const noexcept;

// gint RcStyle::xthickness (const ::GtkRcStyle* obj);
// gint RcStyle::xthickness (const ::GtkRcStyle* obj);
GI_INLINE_DECL gint xthickness_ () const noexcept;

//  RcStyle::xthickness (::GtkRcStyle* obj, gint _value);
// void RcStyle::xthickness (::GtkRcStyle* obj, gint _value);
GI_INLINE_DECL void xthickness_ (gint _value) noexcept;

// gint RcStyle::ythickness (const ::GtkRcStyle* obj);
// gint RcStyle::ythickness (const ::GtkRcStyle* obj);
GI_INLINE_DECL gint ythickness_ () const noexcept;

//  RcStyle::ythickness (::GtkRcStyle* obj, gint _value);
// void RcStyle::ythickness (::GtkRcStyle* obj, gint _value);
GI_INLINE_DECL void ythickness_ (gint _value) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/rcstyle_extra_def.hpp>)
#include <gtk/rcstyle_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/rcstyle_extra.hpp>)
#include <gtk/rcstyle_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class RcStyle : public GI_GTK_RCSTYLE_BASE
{ typedef GI_GTK_RCSTYLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRcStyle>
{ typedef Gtk::RcStyle type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class RcStyleClassDef
{
typedef RcStyleClassDef self;
public:
typedef Gtk::RcStyle instance_type;
typedef ::GtkRcStyleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void RcStyle::merge (GtkRcStyle* dest, GtkRcStyle* src);
// void RcStyle::merge (::GtkRcStyle* dest, ::GtkRcStyle* src);
virtual void merge_ (Gtk::RcStyle src) noexcept = 0;

// guint RcStyle::parse (GtkRcStyle* rc_style, GtkSettings* settings, GScanner* scanner);
// guint RcStyle::parse (::GtkRcStyle* rc_style, ::GtkSettings* settings, ::GScanner* scanner);
virtual guint parse_ (Gtk::Settings settings, GLib::Scanner scanner) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class RcStyleClass: public detail::ClassTemplate<Gtk::impl::internal::RcStyleClassDef, GObject::impl::internal::ObjectClass>
{
typedef RcStyleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::RcStyleClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void RcStyle::merge (GtkRcStyle* dest, GtkRcStyle* src);
// void RcStyle::merge (::GtkRcStyle* dest, ::GtkRcStyle* src);
GI_INLINE_DECL void merge_ (Gtk::RcStyle src) noexcept override;

// guint RcStyle::parse (GtkRcStyle* rc_style, GtkSettings* settings, GScanner* scanner);
// guint RcStyle::parse (::GtkRcStyle* rc_style, ::GtkSettings* settings, ::GScanner* scanner);
GI_INLINE_DECL guint parse_ (Gtk::Settings settings, GLib::Scanner scanner) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using RcStyleImpl = detail::ObjectImpl<RcStyle, internal::RcStyleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
