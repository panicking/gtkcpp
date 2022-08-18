// AUTO-GENERATED

#ifndef _GI_GTK_TABLECHILD_HPP_
#define _GI_GTK_TABLECHILD_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class TableChild;

namespace base {


#define GI_GTK_TABLECHILD_BASE base::TableChildBase
class TableChildBase : public gi::detail::CBoxedWrapper<TableChildBase, ::GtkTableChild>
{
typedef gi::detail::CBoxedWrapper<TableChildBase, ::GtkTableChild> super_type;
public:

TableChildBase (std::nullptr_t = nullptr) : super_type() {}

// ::GtkWidget* TableChild::widget (const ::GtkTableChild* obj);
// ::GtkWidget* TableChild::widget (const ::GtkTableChild* obj);
GI_INLINE_DECL Gtk::Widget widget_ () const noexcept;

// guint16 TableChild::left_attach (const ::GtkTableChild* obj);
// guint16 TableChild::left_attach (const ::GtkTableChild* obj);
GI_INLINE_DECL guint16 left_attach_ () const noexcept;

//  TableChild::left_attach (::GtkTableChild* obj, guint16 _value);
// void TableChild::left_attach (::GtkTableChild* obj, guint16 _value);
GI_INLINE_DECL void left_attach_ (guint16 _value) noexcept;

// guint16 TableChild::right_attach (const ::GtkTableChild* obj);
// guint16 TableChild::right_attach (const ::GtkTableChild* obj);
GI_INLINE_DECL guint16 right_attach_ () const noexcept;

//  TableChild::right_attach (::GtkTableChild* obj, guint16 _value);
// void TableChild::right_attach (::GtkTableChild* obj, guint16 _value);
GI_INLINE_DECL void right_attach_ (guint16 _value) noexcept;

// guint16 TableChild::top_attach (const ::GtkTableChild* obj);
// guint16 TableChild::top_attach (const ::GtkTableChild* obj);
GI_INLINE_DECL guint16 top_attach_ () const noexcept;

//  TableChild::top_attach (::GtkTableChild* obj, guint16 _value);
// void TableChild::top_attach (::GtkTableChild* obj, guint16 _value);
GI_INLINE_DECL void top_attach_ (guint16 _value) noexcept;

// guint16 TableChild::bottom_attach (const ::GtkTableChild* obj);
// guint16 TableChild::bottom_attach (const ::GtkTableChild* obj);
GI_INLINE_DECL guint16 bottom_attach_ () const noexcept;

//  TableChild::bottom_attach (::GtkTableChild* obj, guint16 _value);
// void TableChild::bottom_attach (::GtkTableChild* obj, guint16 _value);
GI_INLINE_DECL void bottom_attach_ (guint16 _value) noexcept;

// guint16 TableChild::xpadding (const ::GtkTableChild* obj);
// guint16 TableChild::xpadding (const ::GtkTableChild* obj);
GI_INLINE_DECL guint16 xpadding_ () const noexcept;

//  TableChild::xpadding (::GtkTableChild* obj, guint16 _value);
// void TableChild::xpadding (::GtkTableChild* obj, guint16 _value);
GI_INLINE_DECL void xpadding_ (guint16 _value) noexcept;

// guint16 TableChild::ypadding (const ::GtkTableChild* obj);
// guint16 TableChild::ypadding (const ::GtkTableChild* obj);
GI_INLINE_DECL guint16 ypadding_ () const noexcept;

//  TableChild::ypadding (::GtkTableChild* obj, guint16 _value);
// void TableChild::ypadding (::GtkTableChild* obj, guint16 _value);
GI_INLINE_DECL void ypadding_ (guint16 _value) noexcept;

// guint TableChild::xexpand (const ::GtkTableChild* obj);
// guint TableChild::xexpand (const ::GtkTableChild* obj);
GI_INLINE_DECL guint xexpand_ () const noexcept;

//  TableChild::xexpand (::GtkTableChild* obj, guint _value);
// void TableChild::xexpand (::GtkTableChild* obj, guint _value);
GI_INLINE_DECL void xexpand_ (guint _value) noexcept;

// guint TableChild::yexpand (const ::GtkTableChild* obj);
// guint TableChild::yexpand (const ::GtkTableChild* obj);
GI_INLINE_DECL guint yexpand_ () const noexcept;

//  TableChild::yexpand (::GtkTableChild* obj, guint _value);
// void TableChild::yexpand (::GtkTableChild* obj, guint _value);
GI_INLINE_DECL void yexpand_ (guint _value) noexcept;

// guint TableChild::xshrink (const ::GtkTableChild* obj);
// guint TableChild::xshrink (const ::GtkTableChild* obj);
GI_INLINE_DECL guint xshrink_ () const noexcept;

//  TableChild::xshrink (::GtkTableChild* obj, guint _value);
// void TableChild::xshrink (::GtkTableChild* obj, guint _value);
GI_INLINE_DECL void xshrink_ (guint _value) noexcept;

// guint TableChild::yshrink (const ::GtkTableChild* obj);
// guint TableChild::yshrink (const ::GtkTableChild* obj);
GI_INLINE_DECL guint yshrink_ () const noexcept;

//  TableChild::yshrink (::GtkTableChild* obj, guint _value);
// void TableChild::yshrink (::GtkTableChild* obj, guint _value);
GI_INLINE_DECL void yshrink_ (guint _value) noexcept;

// guint TableChild::xfill (const ::GtkTableChild* obj);
// guint TableChild::xfill (const ::GtkTableChild* obj);
GI_INLINE_DECL guint xfill_ () const noexcept;

//  TableChild::xfill (::GtkTableChild* obj, guint _value);
// void TableChild::xfill (::GtkTableChild* obj, guint _value);
GI_INLINE_DECL void xfill_ (guint _value) noexcept;

// guint TableChild::yfill (const ::GtkTableChild* obj);
// guint TableChild::yfill (const ::GtkTableChild* obj);
GI_INLINE_DECL guint yfill_ () const noexcept;

//  TableChild::yfill (::GtkTableChild* obj, guint _value);
// void TableChild::yfill (::GtkTableChild* obj, guint _value);
GI_INLINE_DECL void yfill_ (guint _value) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/tablechild_extra_def.hpp>)
#include <gtk/tablechild_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/tablechild_extra.hpp>)
#include <gtk/tablechild_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TableChild : public GI_GTK_TABLECHILD_BASE
{ typedef GI_GTK_TABLECHILD_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTableChild>
{ typedef Gtk::TableChild type; }; 

} // namespace repository

} // namespace gi

#endif
