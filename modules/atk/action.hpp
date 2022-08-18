// AUTO-GENERATED

#ifndef _GI_ATK_ACTION_HPP_
#define _GI_ATK_ACTION_HPP_


namespace gi {

namespace repository {

namespace Atk {


class Action;

namespace base {


#define GI_ATK_ACTION_BASE base::ActionBase
class ActionBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::AtkAction BaseObjectType;

ActionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_action_get_type(); } 

// gboolean atk_action_do_action (AtkAction* action, gint i);
// gboolean atk_action_do_action (::AtkAction* action, gint i);
GI_INLINE_DECL bool do_action (gint i) noexcept;

// const gchar* atk_action_get_description (AtkAction* action, gint i);
// const char* atk_action_get_description (::AtkAction* action, gint i);
GI_INLINE_DECL std::string get_description (gint i) noexcept;

// const gchar* atk_action_get_keybinding (AtkAction* action, gint i);
// const char* atk_action_get_keybinding (::AtkAction* action, gint i);
GI_INLINE_DECL std::string get_keybinding (gint i) noexcept;

// const gchar* atk_action_get_localized_name (AtkAction* action, gint i);
// const char* atk_action_get_localized_name (::AtkAction* action, gint i);
GI_INLINE_DECL std::string get_localized_name (gint i) noexcept;

// gint atk_action_get_n_actions (AtkAction* action);
// gint atk_action_get_n_actions (::AtkAction* action);
GI_INLINE_DECL gint get_n_actions () noexcept;

// const gchar* atk_action_get_name (AtkAction* action, gint i);
// const char* atk_action_get_name (::AtkAction* action, gint i);
GI_INLINE_DECL std::string get_name (gint i) noexcept;

// gboolean atk_action_set_description (AtkAction* action, gint i, const gchar* desc);
// gboolean atk_action_set_description (::AtkAction* action, gint i, const char* desc);
GI_INLINE_DECL bool set_description (gint i, const std::string & desc) noexcept;

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/action_extra_def.hpp>)
#include <atk/action_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/action_extra.hpp>)
#include <atk/action_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class Action : public GI_ATK_ACTION_BASE
{ typedef GI_ATK_ACTION_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkAction>
{ typedef Atk::Action type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class ActionIfaceDef
{
typedef ActionIfaceDef self;
public:
typedef Atk::Action instance_type;
typedef ::AtkActionIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Action::do_action (AtkAction* action, gint i);
// gboolean Action::do_action (::AtkAction* action, gint i);
virtual bool do_action_ (gint i) noexcept = 0;

// const gchar* Action::get_description (AtkAction* action, gint i);
// const char* Action::get_description (::AtkAction* action, gint i);
// SKIP; invalid callback return transfer none

// const gchar* Action::get_keybinding (AtkAction* action, gint i);
// const char* Action::get_keybinding (::AtkAction* action, gint i);
// SKIP; invalid callback return transfer none

// const gchar* Action::get_localized_name (AtkAction* action, gint i);
// const char* Action::get_localized_name (::AtkAction* action, gint i);
// SKIP; invalid callback return transfer none

// gint Action::get_n_actions (AtkAction* action);
// gint Action::get_n_actions (::AtkAction* action);
virtual gint get_n_actions_ () noexcept = 0;

// const gchar* Action::get_name (AtkAction* action, gint i);
// const char* Action::get_name (::AtkAction* action, gint i);
// SKIP; invalid callback return transfer none

// gboolean Action::set_description (AtkAction* action, gint i, const gchar* desc);
// gboolean Action::set_description (::AtkAction* action, gint i, const char* desc);
virtual bool set_description_ (gint i, const std::string & desc) noexcept = 0;


};

using ActionImpl = detail::InterfaceImpl<ActionIfaceDef>;

class ActionIfaceClassImpl: public detail::InterfaceClassImpl<ActionImpl>
{
typedef ActionIfaceClassImpl self;
typedef detail::InterfaceClassImpl<ActionImpl> super;

protected:
using super::super;

// gboolean Action::do_action (AtkAction* action, gint i);
// gboolean Action::do_action (::AtkAction* action, gint i);
GI_INLINE_DECL bool do_action_ (gint i) noexcept override;

// const gchar* Action::get_description (AtkAction* action, gint i);
// const char* Action::get_description (::AtkAction* action, gint i);
// SKIP; invalid callback return transfer none

// const gchar* Action::get_keybinding (AtkAction* action, gint i);
// const char* Action::get_keybinding (::AtkAction* action, gint i);
// SKIP; invalid callback return transfer none

// const gchar* Action::get_localized_name (AtkAction* action, gint i);
// const char* Action::get_localized_name (::AtkAction* action, gint i);
// SKIP; invalid callback return transfer none

// gint Action::get_n_actions (AtkAction* action);
// gint Action::get_n_actions (::AtkAction* action);
GI_INLINE_DECL gint get_n_actions_ () noexcept override;

// const gchar* Action::get_name (AtkAction* action, gint i);
// const char* Action::get_name (::AtkAction* action, gint i);
// SKIP; invalid callback return transfer none

// gboolean Action::set_description (AtkAction* action, gint i, const gchar* desc);
// gboolean Action::set_description (::AtkAction* action, gint i, const char* desc);
GI_INLINE_DECL bool set_description_ (gint i, const std::string & desc) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
