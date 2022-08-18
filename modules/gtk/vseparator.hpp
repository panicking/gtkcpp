// AUTO-GENERATED

#ifndef _GI_GTK_VSEPARATOR_HPP_
#define _GI_GTK_VSEPARATOR_HPP_

#include "separator.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class VSeparator;

namespace base {


#define GI_GTK_VSEPARATOR_BASE base::VSeparatorBase
class VSeparatorBase : public Gtk::Separator
{
typedef Gtk::Separator super_type;
public:
typedef ::GtkVSeparator BaseObjectType;

VSeparatorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_vseparator_get_type(); } 

// GtkWidget* gtk_vseparator_new ();
// ::GtkVSeparator* gtk_vseparator_new ();
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/vseparator_extra_def.hpp>)
#include <gtk/vseparator_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/vseparator_extra.hpp>)
#include <gtk/vseparator_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class VSeparator : public GI_GTK_VSEPARATOR_BASE
{ typedef GI_GTK_VSEPARATOR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkVSeparator>
{ typedef Gtk::VSeparator type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class VSeparatorClassDef
{
typedef VSeparatorClassDef self;
public:
typedef Gtk::VSeparator instance_type;
typedef ::GtkVSeparatorClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class VSeparatorClass: public detail::ClassTemplate<Gtk::impl::internal::VSeparatorClassDef, Gtk::impl::internal::SeparatorClass>
{
typedef VSeparatorClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::VSeparatorClassDef, Gtk::impl::internal::SeparatorClass> super;

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

using VSeparatorImpl = detail::ObjectImpl<VSeparator, internal::VSeparatorClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
