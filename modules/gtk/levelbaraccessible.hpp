// AUTO-GENERATED

#ifndef _GI_GTK_LEVELBARACCESSIBLE_HPP_
#define _GI_GTK_LEVELBARACCESSIBLE_HPP_

#include "widgetaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class LevelBarAccessible;

namespace base {


#define GI_GTK_LEVELBARACCESSIBLE_BASE base::LevelBarAccessibleBase
class LevelBarAccessibleBase : public Gtk::WidgetAccessible
{
typedef Gtk::WidgetAccessible super_type;
public:
typedef ::GtkLevelBarAccessible BaseObjectType;

LevelBarAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_level_bar_accessible_get_type(); } 

GI_INLINE_DECL Atk::Value interface_ (gi::interface_tag<Atk::Value>);

GI_INLINE_DECL operator Atk::Value ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/levelbaraccessible_extra_def.hpp>)
#include <gtk/levelbaraccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/levelbaraccessible_extra.hpp>)
#include <gtk/levelbaraccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class LevelBarAccessible : public GI_GTK_LEVELBARACCESSIBLE_BASE
{ typedef GI_GTK_LEVELBARACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkLevelBarAccessible>
{ typedef Gtk::LevelBarAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class LevelBarAccessibleClassDef
{
typedef LevelBarAccessibleClassDef self;
public:
typedef Gtk::LevelBarAccessible instance_type;
typedef ::GtkLevelBarAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class LevelBarAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::LevelBarAccessibleClassDef, Gtk::impl::internal::WidgetAccessibleClass, Atk::impl::internal::ValueIfaceClassImpl>
{
typedef LevelBarAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::LevelBarAccessibleClassDef, Gtk::impl::internal::WidgetAccessibleClass, Atk::impl::internal::ValueIfaceClassImpl> super;

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

using LevelBarAccessibleImpl = detail::ObjectImpl<LevelBarAccessible, internal::LevelBarAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
