// AUTO-GENERATED

#ifndef _GI_ATK_STATESET_HPP_
#define _GI_ATK_STATESET_HPP_


namespace gi {

namespace repository {

namespace Atk {


class StateSet;

namespace base {


#define GI_ATK_STATESET_BASE base::StateSetBase
class StateSetBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AtkStateSet BaseObjectType;

StateSetBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_state_set_get_type(); } 

// AtkStateSet* atk_state_set_new ();
// ::AtkStateSet* atk_state_set_new ();
static GI_INLINE_DECL Atk::StateSet new_ () noexcept;

// gboolean atk_state_set_add_state (AtkStateSet* set, AtkStateType type);
// gboolean atk_state_set_add_state (::AtkStateSet* set, ::AtkStateType type);
GI_INLINE_DECL bool add_state (Atk::StateType type) noexcept;

// void atk_state_set_add_states (AtkStateSet* set, AtkStateType* types, gint n_types);
// void atk_state_set_add_states (::AtkStateSet* set, ::AtkStateType* types, gint n_types);
GI_INLINE_DECL void add_states (Atk::StateType * types, gint n_types) noexcept;

// AtkStateSet* atk_state_set_and_sets (AtkStateSet* set, AtkStateSet* compare_set);
// ::AtkStateSet* atk_state_set_and_sets (::AtkStateSet* set, ::AtkStateSet* compare_set);
GI_INLINE_DECL Atk::StateSet and_sets (Atk::StateSet compare_set) noexcept;

// void atk_state_set_clear_states (AtkStateSet* set);
// void atk_state_set_clear_states (::AtkStateSet* set);
GI_INLINE_DECL void clear_states () noexcept;

// gboolean atk_state_set_contains_state (AtkStateSet* set, AtkStateType type);
// gboolean atk_state_set_contains_state (::AtkStateSet* set, ::AtkStateType type);
GI_INLINE_DECL bool contains_state (Atk::StateType type) noexcept;

// gboolean atk_state_set_contains_states (AtkStateSet* set, AtkStateType* types, gint n_types);
// gboolean atk_state_set_contains_states (::AtkStateSet* set, ::AtkStateType* types, gint n_types);
GI_INLINE_DECL bool contains_states (Atk::StateType * types, gint n_types) noexcept;

// gboolean atk_state_set_is_empty (AtkStateSet* set);
// gboolean atk_state_set_is_empty (::AtkStateSet* set);
GI_INLINE_DECL bool is_empty () noexcept;

// AtkStateSet* atk_state_set_or_sets (AtkStateSet* set, AtkStateSet* compare_set);
// ::AtkStateSet* atk_state_set_or_sets (::AtkStateSet* set, ::AtkStateSet* compare_set);
GI_INLINE_DECL Atk::StateSet or_sets (Atk::StateSet compare_set) noexcept;

// gboolean atk_state_set_remove_state (AtkStateSet* set, AtkStateType type);
// gboolean atk_state_set_remove_state (::AtkStateSet* set, ::AtkStateType type);
GI_INLINE_DECL bool remove_state (Atk::StateType type) noexcept;

// AtkStateSet* atk_state_set_xor_sets (AtkStateSet* set, AtkStateSet* compare_set);
// ::AtkStateSet* atk_state_set_xor_sets (::AtkStateSet* set, ::AtkStateSet* compare_set);
GI_INLINE_DECL Atk::StateSet xor_sets (Atk::StateSet compare_set) noexcept;

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/stateset_extra_def.hpp>)
#include <atk/stateset_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/stateset_extra.hpp>)
#include <atk/stateset_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class StateSet : public GI_ATK_STATESET_BASE
{ typedef GI_ATK_STATESET_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkStateSet>
{ typedef Atk::StateSet type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class StateSetClassDef
{
typedef StateSetClassDef self;
public:
typedef Atk::StateSet instance_type;
typedef ::AtkStateSetClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class StateSetClass: public detail::ClassTemplate<Atk::impl::internal::StateSetClassDef, GObject::impl::internal::ObjectClass>
{
typedef StateSetClass self;
typedef detail::ClassTemplate<Atk::impl::internal::StateSetClassDef, GObject::impl::internal::ObjectClass> super;

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

using StateSetImpl = detail::ObjectImpl<StateSet, internal::StateSetClass>;

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
