// AUTO-GENERATED

#ifndef _GI_ATK_RELATIONSET_IMPL_HPP_
#define _GI_ATK_RELATIONSET_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

// AtkRelationSet* atk_relation_set_new ();
// ::AtkRelationSet* atk_relation_set_new ();
Atk::RelationSet base::RelationSetBase::new_ () noexcept
{
  typedef ::AtkRelationSet* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) atk_relation_set_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void atk_relation_set_add (AtkRelationSet* set, AtkRelation* relation);
// void atk_relation_set_add (::AtkRelationSet* set, ::AtkRelation* relation);
void base::RelationSetBase::add (Atk::Relation relation) noexcept
{
  typedef void (*call_wrap_t) (::AtkRelationSet* set, ::AtkRelation* relation);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_relation_set_add;
  auto relation_to_c = gi::unwrap (relation, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::AtkRelationSet*) (gobj_()), (::AtkRelation*) (relation_to_c));
}

// void atk_relation_set_add_relation_by_type (AtkRelationSet* set, AtkRelationType relationship, AtkObject* target);
// void atk_relation_set_add_relation_by_type (::AtkRelationSet* set, ::AtkRelationType relationship, ::AtkObject* target);
void base::RelationSetBase::add_relation_by_type (Atk::RelationType relationship, Atk::Object target) noexcept
{
  typedef void (*call_wrap_t) (::AtkRelationSet* set, ::AtkRelationType relationship, ::AtkObject* target);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_relation_set_add_relation_by_type;
  auto target_to_c = gi::unwrap (target, gi::transfer_none, gi::direction_in);
  auto relationship_to_c = gi::unwrap (relationship);
  call_wrap_v ((::AtkRelationSet*) (gobj_()), (::AtkRelationType) (relationship_to_c), (::AtkObject*) (target_to_c));
}

// gboolean atk_relation_set_contains (AtkRelationSet* set, AtkRelationType relationship);
// gboolean atk_relation_set_contains (::AtkRelationSet* set, ::AtkRelationType relationship);
bool base::RelationSetBase::contains (Atk::RelationType relationship) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkRelationSet* set, ::AtkRelationType relationship);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_relation_set_contains;
  auto relationship_to_c = gi::unwrap (relationship);
  auto _temp_ret = call_wrap_v ((::AtkRelationSet*) (gobj_()), (::AtkRelationType) (relationship_to_c));
  return _temp_ret;
}

// gboolean atk_relation_set_contains_target (AtkRelationSet* set, AtkRelationType relationship, AtkObject* target);
// gboolean atk_relation_set_contains_target (::AtkRelationSet* set, ::AtkRelationType relationship, ::AtkObject* target);
bool base::RelationSetBase::contains_target (Atk::RelationType relationship, Atk::Object target) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkRelationSet* set, ::AtkRelationType relationship, ::AtkObject* target);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_relation_set_contains_target;
  auto target_to_c = gi::unwrap (target, gi::transfer_none, gi::direction_in);
  auto relationship_to_c = gi::unwrap (relationship);
  auto _temp_ret = call_wrap_v ((::AtkRelationSet*) (gobj_()), (::AtkRelationType) (relationship_to_c), (::AtkObject*) (target_to_c));
  return _temp_ret;
}

// gint atk_relation_set_get_n_relations (AtkRelationSet* set);
// gint atk_relation_set_get_n_relations (::AtkRelationSet* set);
gint base::RelationSetBase::get_n_relations () noexcept
{
  typedef gint (*call_wrap_t) (::AtkRelationSet* set);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_relation_set_get_n_relations;
  auto _temp_ret = call_wrap_v ((::AtkRelationSet*) (gobj_()));
  return _temp_ret;
}

// AtkRelation* atk_relation_set_get_relation (AtkRelationSet* set, gint i);
// ::AtkRelation* atk_relation_set_get_relation (::AtkRelationSet* set, gint i);
Atk::Relation base::RelationSetBase::get_relation (gint i) noexcept
{
  typedef ::AtkRelation* (*call_wrap_t) (::AtkRelationSet* set, gint i);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_relation_set_get_relation;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((::AtkRelationSet*) (gobj_()), (gint) (i_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// AtkRelation* atk_relation_set_get_relation_by_type (AtkRelationSet* set, AtkRelationType relationship);
// ::AtkRelation* atk_relation_set_get_relation_by_type (::AtkRelationSet* set, ::AtkRelationType relationship);
Atk::Relation base::RelationSetBase::get_relation_by_type (Atk::RelationType relationship) noexcept
{
  typedef ::AtkRelation* (*call_wrap_t) (::AtkRelationSet* set, ::AtkRelationType relationship);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_relation_set_get_relation_by_type;
  auto relationship_to_c = gi::unwrap (relationship);
  auto _temp_ret = call_wrap_v ((::AtkRelationSet*) (gobj_()), (::AtkRelationType) (relationship_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void atk_relation_set_remove (AtkRelationSet* set, AtkRelation* relation);
// void atk_relation_set_remove (::AtkRelationSet* set, ::AtkRelation* relation);
void base::RelationSetBase::remove (Atk::Relation relation) noexcept
{
  typedef void (*call_wrap_t) (::AtkRelationSet* set, ::AtkRelation* relation);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_relation_set_remove;
  auto relation_to_c = gi::unwrap (relation, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::AtkRelationSet*) (gobj_()), (::AtkRelation*) (relation_to_c));
}


} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/relationset_extra_def_impl.hpp>)
#include <atk/relationset_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/relationset_extra_impl.hpp>)
#include <atk/relationset_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void RelationSetClassDef::class_init (gpointer class_struct, gpointer )
{
  ::AtkRelationSetClass *methods = (::AtkRelationSetClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
