// AUTO-GENERATED

#ifndef _GI_ATK_RELATION_IMPL_HPP_
#define _GI_ATK_RELATION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

// AtkRelation* atk_relation_new (AtkObject** targets, gint n_targets, AtkRelationType relationship);
// ::AtkRelation* atk_relation_new (::AtkObject** targets, gint n_targets, ::AtkRelationType relationship);
Atk::Relation base::RelationBase::new_ (Atk::Object * targets, gint n_targets, Atk::RelationType relationship) noexcept
{
  typedef ::AtkRelation* (*call_wrap_t) (::AtkObject** targets, gint n_targets, ::AtkRelationType relationship);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_relation_new;
  auto relationship_to_c = gi::unwrap (relationship);
  auto targets_i = detail::make_list_unwrap_range (targets, n_targets, false);
  auto targets_w = unwrap (targets_i, gi::transfer_none, direction_in);
  auto targets_to_c = targets_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::AtkObject**) (targets_to_c), (gint) (targets_w.size()), (::AtkRelationType) (relationship_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void atk_relation_add_target (AtkRelation* relation, AtkObject* target);
// void atk_relation_add_target (::AtkRelation* relation, ::AtkObject* target);
void base::RelationBase::add_target (Atk::Object target) noexcept
{
  typedef void (*call_wrap_t) (::AtkRelation* relation, ::AtkObject* target);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_relation_add_target;
  auto target_to_c = gi::unwrap (target, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::AtkRelation*) (gobj_()), (::AtkObject*) (target_to_c));
}

// AtkRelationType atk_relation_get_relation_type (AtkRelation* relation);
// ::AtkRelationType atk_relation_get_relation_type (::AtkRelation* relation);
Atk::RelationType base::RelationBase::get_relation_type () noexcept
{
  typedef ::AtkRelationType (*call_wrap_t) (::AtkRelation* relation);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_relation_get_relation_type;
  auto _temp_ret = call_wrap_v ((::AtkRelation*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GPtrArray* atk_relation_get_target (AtkRelation* relation);
//  atk_relation_get_target (::AtkRelation* relation);
// SKIP;  type  not supported

// gboolean atk_relation_remove_target (AtkRelation* relation, AtkObject* target);
// gboolean atk_relation_remove_target (::AtkRelation* relation, ::AtkObject* target);
bool base::RelationBase::remove_target (Atk::Object target) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkRelation* relation, ::AtkObject* target);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_relation_remove_target;
  auto target_to_c = gi::unwrap (target, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::AtkRelation*) (gobj_()), (::AtkObject*) (target_to_c));
  return _temp_ret;
}

static ::AtkRelationType _field_relationship_get (const ::AtkRelation* obj) { return (::AtkRelationType) obj->relationship; }
// ::AtkRelationType Relation::relationship (const ::AtkRelation* obj);
// ::AtkRelationType Relation::relationship (const ::AtkRelation* obj);
Atk::RelationType base::RelationBase::relationship_ () const noexcept
{
  typedef ::AtkRelationType (*call_wrap_t) (const ::AtkRelation* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_relationship_get;
  auto _temp_ret = call_wrap_v ((const ::AtkRelation*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_relationship_set (::AtkRelation* obj, ::AtkRelationType _value) { obj->relationship = (decltype(obj->relationship)) _value; }
//  Relation::relationship (::AtkRelation* obj, ::AtkRelationType _value);
// void Relation::relationship (::AtkRelation* obj, ::AtkRelationType _value);
void base::RelationBase::relationship_ (Atk::RelationType _value) noexcept
{
  typedef void (*call_wrap_t) (::AtkRelation* obj, ::AtkRelationType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_relationship_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::AtkRelation*) (gobj_()), (::AtkRelationType) (_value_to_c));
}


} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/relation_extra_def_impl.hpp>)
#include <atk/relation_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/relation_extra_impl.hpp>)
#include <atk/relation_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void RelationClassDef::class_init (gpointer class_struct, gpointer )
{
  ::AtkRelationClass *methods = (::AtkRelationClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
