// AUTO-GENERATED

#ifndef _GI_GTK_HSEPARATOR_HPP_
#define _GI_GTK_HSEPARATOR_HPP_

#include "separator.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class HSeparator;

namespace base {


#define GI_GTK_HSEPARATOR_BASE base::HSeparatorBase
class HSeparatorBase : public Gtk::Separator
{
typedef Gtk::Separator super_type;
public:
typedef ::GtkHSeparator BaseObjectType;

HSeparatorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_hseparator_get_type(); } 

// GtkWidget* gtk_hseparator_new ();
// ::GtkHSeparator* gtk_hseparator_new ();
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/hseparator_extra_def.hpp>)
#include <gtk/hseparator_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/hseparator_extra.hpp>)
#include <gtk/hseparator_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class HSeparator : public GI_GTK_HSEPARATOR_BASE
{ typedef GI_GTK_HSEPARATOR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkHSeparator>
{ typedef Gtk::HSeparator type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class HSeparatorClassDef
{
typedef HSeparatorClassDef self;
public:
typedef Gtk::HSeparator instance_type;
typedef ::GtkHSeparatorClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class HSeparatorClass: public detail::ClassTemplate<Gtk::impl::internal::HSeparatorClassDef, Gtk::impl::internal::SeparatorClass>
{
typedef HSeparatorClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::HSeparatorClassDef, Gtk::impl::internal::SeparatorClass> super;

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

using HSeparatorImpl = detail::ObjectImpl<HSeparator, internal::HSeparatorClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
