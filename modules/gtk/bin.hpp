// AUTO-GENERATED

#ifndef _GI_GTK_BIN_HPP_
#define _GI_GTK_BIN_HPP_

#include "container.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class Bin;

namespace base {


#define GI_GTK_BIN_BASE base::BinBase
class BinBase : public Gtk::Container
{
typedef Gtk::Container super_type;
public:
typedef ::GtkBin BaseObjectType;

BinBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_bin_get_type(); } 

// GtkWidget* gtk_bin_get_child (GtkBin* bin);
// ::GtkWidget* gtk_bin_get_child (::GtkBin* bin);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/bin_extra_def.hpp>)
#include <gtk/bin_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/bin_extra.hpp>)
#include <gtk/bin_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Bin : public GI_GTK_BIN_BASE
{ typedef GI_GTK_BIN_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkBin>
{ typedef Gtk::Bin type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class BinClassDef
{
typedef BinClassDef self;
public:
typedef Gtk::Bin instance_type;
typedef ::GtkBinClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class BinClass: public detail::ClassTemplate<Gtk::impl::internal::BinClassDef, Gtk::impl::internal::ContainerClass>
{
typedef BinClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::BinClassDef, Gtk::impl::internal::ContainerClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using BinImpl = detail::ObjectImpl<Bin, internal::BinClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
