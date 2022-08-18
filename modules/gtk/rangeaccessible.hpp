// AUTO-GENERATED

#ifndef _GI_GTK_RANGEACCESSIBLE_HPP_
#define _GI_GTK_RANGEACCESSIBLE_HPP_

#include "widgetaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class RangeAccessible;

namespace base {


#define GI_GTK_RANGEACCESSIBLE_BASE base::RangeAccessibleBase
class RangeAccessibleBase : public Gtk::WidgetAccessible
{
typedef Gtk::WidgetAccessible super_type;
public:
typedef ::GtkRangeAccessible BaseObjectType;

RangeAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_range_accessible_get_type(); } 

GI_INLINE_DECL Atk::Value interface_ (gi::interface_tag<Atk::Value>);

GI_INLINE_DECL operator Atk::Value ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/rangeaccessible_extra_def.hpp>)
#include <gtk/rangeaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/rangeaccessible_extra.hpp>)
#include <gtk/rangeaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class RangeAccessible : public GI_GTK_RANGEACCESSIBLE_BASE
{ typedef GI_GTK_RANGEACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRangeAccessible>
{ typedef Gtk::RangeAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class RangeAccessibleClassDef
{
typedef RangeAccessibleClassDef self;
public:
typedef Gtk::RangeAccessible instance_type;
typedef ::GtkRangeAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class RangeAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::RangeAccessibleClassDef, Gtk::impl::internal::WidgetAccessibleClass, Atk::impl::internal::ValueIfaceClassImpl>
{
typedef RangeAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::RangeAccessibleClassDef, Gtk::impl::internal::WidgetAccessibleClass, Atk::impl::internal::ValueIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::ValueIfaceClassImpl AtkValueIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using RangeAccessibleImpl = detail::ObjectImpl<RangeAccessible, internal::RangeAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
