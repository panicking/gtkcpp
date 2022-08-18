// AUTO-GENERATED

#ifndef _GI_GTK_FIXEDCHILD_HPP_
#define _GI_GTK_FIXEDCHILD_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class FixedChild;

namespace base {


#define GI_GTK_FIXEDCHILD_BASE base::FixedChildBase
class FixedChildBase : public gi::detail::CBoxedWrapper<FixedChildBase, ::GtkFixedChild>
{
typedef gi::detail::CBoxedWrapper<FixedChildBase, ::GtkFixedChild> super_type;
public:

FixedChildBase (std::nullptr_t = nullptr) : super_type() {}

// ::GtkWidget* FixedChild::widget (const ::GtkFixedChild* obj);
// ::GtkWidget* FixedChild::widget (const ::GtkFixedChild* obj);
GI_INLINE_DECL Gtk::Widget widget_ () const noexcept;

// gint FixedChild::x (const ::GtkFixedChild* obj);
// gint FixedChild::x (const ::GtkFixedChild* obj);
GI_INLINE_DECL gint x_ () const noexcept;

//  FixedChild::x (::GtkFixedChild* obj, gint _value);
// void FixedChild::x (::GtkFixedChild* obj, gint _value);
GI_INLINE_DECL void x_ (gint _value) noexcept;

// gint FixedChild::y (const ::GtkFixedChild* obj);
// gint FixedChild::y (const ::GtkFixedChild* obj);
GI_INLINE_DECL gint y_ () const noexcept;

//  FixedChild::y (::GtkFixedChild* obj, gint _value);
// void FixedChild::y (::GtkFixedChild* obj, gint _value);
GI_INLINE_DECL void y_ (gint _value) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fixedchild_extra_def.hpp>)
#include <gtk/fixedchild_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fixedchild_extra.hpp>)
#include <gtk/fixedchild_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FixedChild : public GI_GTK_FIXEDCHILD_BASE
{ typedef GI_GTK_FIXEDCHILD_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFixedChild>
{ typedef Gtk::FixedChild type; }; 

} // namespace repository

} // namespace gi

#endif
