// AUTO-GENERATED

#ifndef _GI_ATK_NOOPOBJECT_IMPL_HPP_
#define _GI_ATK_NOOPOBJECT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

Atk::Action NoOpObjectBase::interface_ (gi::interface_tag<Atk::Action>)
{ return gi::wrap ((Atk::Action::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

NoOpObjectBase::operator Atk::Action ()
{ return interface_ (gi::interface_tag<Atk::Action>()); }

Atk::Component NoOpObjectBase::interface_ (gi::interface_tag<Atk::Component>)
{ return gi::wrap ((Atk::Component::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

NoOpObjectBase::operator Atk::Component ()
{ return interface_ (gi::interface_tag<Atk::Component>()); }

Atk::Document NoOpObjectBase::interface_ (gi::interface_tag<Atk::Document>)
{ return gi::wrap ((Atk::Document::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

NoOpObjectBase::operator Atk::Document ()
{ return interface_ (gi::interface_tag<Atk::Document>()); }

Atk::EditableText NoOpObjectBase::interface_ (gi::interface_tag<Atk::EditableText>)
{ return gi::wrap ((Atk::EditableText::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

NoOpObjectBase::operator Atk::EditableText ()
{ return interface_ (gi::interface_tag<Atk::EditableText>()); }

Atk::Hypertext NoOpObjectBase::interface_ (gi::interface_tag<Atk::Hypertext>)
{ return gi::wrap ((Atk::Hypertext::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

NoOpObjectBase::operator Atk::Hypertext ()
{ return interface_ (gi::interface_tag<Atk::Hypertext>()); }

Atk::Image NoOpObjectBase::interface_ (gi::interface_tag<Atk::Image>)
{ return gi::wrap ((Atk::Image::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

NoOpObjectBase::operator Atk::Image ()
{ return interface_ (gi::interface_tag<Atk::Image>()); }

Atk::Selection NoOpObjectBase::interface_ (gi::interface_tag<Atk::Selection>)
{ return gi::wrap ((Atk::Selection::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

NoOpObjectBase::operator Atk::Selection ()
{ return interface_ (gi::interface_tag<Atk::Selection>()); }

Atk::Table NoOpObjectBase::interface_ (gi::interface_tag<Atk::Table>)
{ return gi::wrap ((Atk::Table::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

NoOpObjectBase::operator Atk::Table ()
{ return interface_ (gi::interface_tag<Atk::Table>()); }

Atk::TableCell NoOpObjectBase::interface_ (gi::interface_tag<Atk::TableCell>)
{ return gi::wrap ((Atk::TableCell::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

NoOpObjectBase::operator Atk::TableCell ()
{ return interface_ (gi::interface_tag<Atk::TableCell>()); }

Atk::Text NoOpObjectBase::interface_ (gi::interface_tag<Atk::Text>)
{ return gi::wrap ((Atk::Text::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

NoOpObjectBase::operator Atk::Text ()
{ return interface_ (gi::interface_tag<Atk::Text>()); }

Atk::Value NoOpObjectBase::interface_ (gi::interface_tag<Atk::Value>)
{ return gi::wrap ((Atk::Value::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

NoOpObjectBase::operator Atk::Value ()
{ return interface_ (gi::interface_tag<Atk::Value>()); }

Atk::Window NoOpObjectBase::interface_ (gi::interface_tag<Atk::Window>)
{ return gi::wrap ((Atk::Window::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

NoOpObjectBase::operator Atk::Window ()
{ return interface_ (gi::interface_tag<Atk::Window>()); }

// AtkObject* atk_no_op_object_new (GObject* obj);
// ::AtkNoOpObject* atk_no_op_object_new (::GObject* obj);
Atk::NoOpObject base::NoOpObjectBase::new_ (GObject::Object obj) noexcept
{
  typedef ::AtkNoOpObject* (*call_wrap_t) (::GObject* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_no_op_object_new;
  auto obj_to_c = gi::unwrap (obj, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GObject*) (obj_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/noopobject_extra_def_impl.hpp>)
#include <atk/noopobject_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/noopobject_extra_impl.hpp>)
#include <atk/noopobject_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void NoOpObjectClassDef::class_init (gpointer class_struct, gpointer )
{
  ::AtkNoOpObjectClass *methods = (::AtkNoOpObjectClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
