// AUTO-GENERATED

#ifndef _GI_GTK_RADIOMENUITEMACCESSIBLE_HPP_
#define _GI_GTK_RADIOMENUITEMACCESSIBLE_HPP_

#include "checkmenuitemaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class RadioMenuItemAccessible;

namespace base {


#define GI_GTK_RADIOMENUITEMACCESSIBLE_BASE base::RadioMenuItemAccessibleBase
class RadioMenuItemAccessibleBase : public Gtk::CheckMenuItemAccessible
{
typedef Gtk::CheckMenuItemAccessible super_type;
public:
typedef ::GtkRadioMenuItemAccessible BaseObjectType;

RadioMenuItemAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_radio_menu_item_accessible_get_type(); } 

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/radiomenuitemaccessible_extra_def.hpp>)
#include <gtk/radiomenuitemaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/radiomenuitemaccessible_extra.hpp>)
#include <gtk/radiomenuitemaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class RadioMenuItemAccessible : public GI_GTK_RADIOMENUITEMACCESSIBLE_BASE
{ typedef GI_GTK_RADIOMENUITEMACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRadioMenuItemAccessible>
{ typedef Gtk::RadioMenuItemAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class RadioMenuItemAccessibleClassDef
{
typedef RadioMenuItemAccessibleClassDef self;
public:
typedef Gtk::RadioMenuItemAccessible instance_type;
typedef ::GtkRadioMenuItemAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class RadioMenuItemAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::RadioMenuItemAccessibleClassDef, Gtk::impl::internal::CheckMenuItemAccessibleClass>
{
typedef RadioMenuItemAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::RadioMenuItemAccessibleClassDef, Gtk::impl::internal::CheckMenuItemAccessibleClass> super;

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

using RadioMenuItemAccessibleImpl = detail::ObjectImpl<RadioMenuItemAccessible, internal::RadioMenuItemAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
