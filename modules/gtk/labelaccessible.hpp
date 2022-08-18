// AUTO-GENERATED

#ifndef _GI_GTK_LABELACCESSIBLE_HPP_
#define _GI_GTK_LABELACCESSIBLE_HPP_

#include "widgetaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class LabelAccessible;

namespace base {


#define GI_GTK_LABELACCESSIBLE_BASE base::LabelAccessibleBase
class LabelAccessibleBase : public Gtk::WidgetAccessible
{
typedef Gtk::WidgetAccessible super_type;
public:
typedef ::GtkLabelAccessible BaseObjectType;

LabelAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_label_accessible_get_type(); } 

GI_INLINE_DECL Atk::Hypertext interface_ (gi::interface_tag<Atk::Hypertext>);

GI_INLINE_DECL operator Atk::Hypertext ();

GI_INLINE_DECL Atk::Text interface_ (gi::interface_tag<Atk::Text>);

GI_INLINE_DECL operator Atk::Text ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/labelaccessible_extra_def.hpp>)
#include <gtk/labelaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/labelaccessible_extra.hpp>)
#include <gtk/labelaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class LabelAccessible : public GI_GTK_LABELACCESSIBLE_BASE
{ typedef GI_GTK_LABELACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkLabelAccessible>
{ typedef Gtk::LabelAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class LabelAccessibleClassDef
{
typedef LabelAccessibleClassDef self;
public:
typedef Gtk::LabelAccessible instance_type;
typedef ::GtkLabelAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class LabelAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::LabelAccessibleClassDef, Gtk::impl::internal::WidgetAccessibleClass, Atk::impl::internal::HypertextIfaceClassImpl, Atk::impl::internal::TextIfaceClassImpl>
{
typedef LabelAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::LabelAccessibleClassDef, Gtk::impl::internal::WidgetAccessibleClass, Atk::impl::internal::HypertextIfaceClassImpl, Atk::impl::internal::TextIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::HypertextIfaceClassImpl AtkHypertextIface_type;
typedef Atk::impl::internal::TextIfaceClassImpl AtkTextIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using LabelAccessibleImpl = detail::ObjectImpl<LabelAccessible, internal::LabelAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
