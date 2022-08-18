// AUTO-GENERATED

#ifndef _GI_GTK_ENTRYACCESSIBLE_HPP_
#define _GI_GTK_ENTRYACCESSIBLE_HPP_

#include "widgetaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class EntryAccessible;

namespace base {


#define GI_GTK_ENTRYACCESSIBLE_BASE base::EntryAccessibleBase
class EntryAccessibleBase : public Gtk::WidgetAccessible
{
typedef Gtk::WidgetAccessible super_type;
public:
typedef ::GtkEntryAccessible BaseObjectType;

EntryAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_entry_accessible_get_type(); } 

GI_INLINE_DECL Atk::Action interface_ (gi::interface_tag<Atk::Action>);

GI_INLINE_DECL operator Atk::Action ();

GI_INLINE_DECL Atk::EditableText interface_ (gi::interface_tag<Atk::EditableText>);

GI_INLINE_DECL operator Atk::EditableText ();

GI_INLINE_DECL Atk::Text interface_ (gi::interface_tag<Atk::Text>);

GI_INLINE_DECL operator Atk::Text ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/entryaccessible_extra_def.hpp>)
#include <gtk/entryaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/entryaccessible_extra.hpp>)
#include <gtk/entryaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class EntryAccessible : public GI_GTK_ENTRYACCESSIBLE_BASE
{ typedef GI_GTK_ENTRYACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkEntryAccessible>
{ typedef Gtk::EntryAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class EntryAccessibleClassDef
{
typedef EntryAccessibleClassDef self;
public:
typedef Gtk::EntryAccessible instance_type;
typedef ::GtkEntryAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class EntryAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::EntryAccessibleClassDef, Gtk::impl::internal::WidgetAccessibleClass, Atk::impl::internal::ActionIfaceClassImpl, Atk::impl::internal::EditableTextIfaceClassImpl, Atk::impl::internal::TextIfaceClassImpl>
{
typedef EntryAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::EntryAccessibleClassDef, Gtk::impl::internal::WidgetAccessibleClass, Atk::impl::internal::ActionIfaceClassImpl, Atk::impl::internal::EditableTextIfaceClassImpl, Atk::impl::internal::TextIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::ActionIfaceClassImpl AtkActionIface_type;
typedef Atk::impl::internal::EditableTextIfaceClassImpl AtkEditableTextIface_type;
typedef Atk::impl::internal::TextIfaceClassImpl AtkTextIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using EntryAccessibleImpl = detail::ObjectImpl<EntryAccessible, internal::EntryAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
