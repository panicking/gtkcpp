// AUTO-GENERATED

#ifndef _GI_ATK_SELECTION_HPP_
#define _GI_ATK_SELECTION_HPP_


namespace gi {

namespace repository {

namespace Atk {

class Object;

class Selection;

namespace base {


#define GI_ATK_SELECTION_BASE base::SelectionBase
class SelectionBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::AtkSelection BaseObjectType;

SelectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_selection_get_type(); } 

// gboolean atk_selection_add_selection (AtkSelection* selection, gint i);
// gboolean atk_selection_add_selection (::AtkSelection* selection, gint i);
GI_INLINE_DECL bool add_selection (gint i) noexcept;

// gboolean atk_selection_clear_selection (AtkSelection* selection);
// gboolean atk_selection_clear_selection (::AtkSelection* selection);
GI_INLINE_DECL bool clear_selection () noexcept;

// gint atk_selection_get_selection_count (AtkSelection* selection);
// gint atk_selection_get_selection_count (::AtkSelection* selection);
GI_INLINE_DECL gint get_selection_count () noexcept;

// gboolean atk_selection_is_child_selected (AtkSelection* selection, gint i);
// gboolean atk_selection_is_child_selected (::AtkSelection* selection, gint i);
GI_INLINE_DECL bool is_child_selected (gint i) noexcept;

// AtkObject* atk_selection_ref_selection (AtkSelection* selection, gint i);
// ::AtkObject* atk_selection_ref_selection (::AtkSelection* selection, gint i);
GI_INLINE_DECL Atk::Object ref_selection (gint i) noexcept;

// gboolean atk_selection_remove_selection (AtkSelection* selection, gint i);
// gboolean atk_selection_remove_selection (::AtkSelection* selection, gint i);
GI_INLINE_DECL bool remove_selection (gint i) noexcept;

// gboolean atk_selection_select_all_selection (AtkSelection* selection);
// gboolean atk_selection_select_all_selection (::AtkSelection* selection);
GI_INLINE_DECL bool select_all_selection () noexcept;

// signal selection-changed
gi::signal_proxy<void(Atk::Selection)> signal_selection_changed()
{ return gi::signal_proxy<void(Atk::Selection)> (*this, "selection-changed"); }

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/selection_extra_def.hpp>)
#include <atk/selection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/selection_extra.hpp>)
#include <atk/selection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class Selection : public GI_ATK_SELECTION_BASE
{ typedef GI_ATK_SELECTION_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkSelection>
{ typedef Atk::Selection type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class SelectionIfaceDef
{
typedef SelectionIfaceDef self;
public:
typedef Atk::Selection instance_type;
typedef ::AtkSelectionIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Selection::add_selection (AtkSelection* selection, gint i);
// gboolean Selection::add_selection (::AtkSelection* selection, gint i);
virtual bool add_selection_ (gint i) noexcept = 0;

// gboolean Selection::clear_selection (AtkSelection* selection);
// gboolean Selection::clear_selection (::AtkSelection* selection);
virtual bool clear_selection_ () noexcept = 0;

// gint Selection::get_selection_count (AtkSelection* selection);
// gint Selection::get_selection_count (::AtkSelection* selection);
virtual gint get_selection_count_ () noexcept = 0;

// gboolean Selection::is_child_selected (AtkSelection* selection, gint i);
// gboolean Selection::is_child_selected (::AtkSelection* selection, gint i);
virtual bool is_child_selected_ (gint i) noexcept = 0;

// AtkObject* Selection::ref_selection (AtkSelection* selection, gint i);
// ::AtkObject* Selection::ref_selection (::AtkSelection* selection, gint i);
virtual Atk::Object ref_selection_ (gint i) noexcept = 0;

// gboolean Selection::remove_selection (AtkSelection* selection, gint i);
// gboolean Selection::remove_selection (::AtkSelection* selection, gint i);
virtual bool remove_selection_ (gint i) noexcept = 0;

// gboolean Selection::select_all_selection (AtkSelection* selection);
// gboolean Selection::select_all_selection (::AtkSelection* selection);
virtual bool select_all_selection_ () noexcept = 0;

// void Selection::selection_changed (AtkSelection* selection);
// void Selection::selection_changed (::AtkSelection* selection);
virtual void selection_changed_ () noexcept = 0;


};

using SelectionImpl = detail::InterfaceImpl<SelectionIfaceDef>;

class SelectionIfaceClassImpl: public detail::InterfaceClassImpl<SelectionImpl>
{
typedef SelectionIfaceClassImpl self;
typedef detail::InterfaceClassImpl<SelectionImpl> super;

protected:
using super::super;

// gboolean Selection::add_selection (AtkSelection* selection, gint i);
// gboolean Selection::add_selection (::AtkSelection* selection, gint i);
GI_INLINE_DECL bool add_selection_ (gint i) noexcept override;

// gboolean Selection::clear_selection (AtkSelection* selection);
// gboolean Selection::clear_selection (::AtkSelection* selection);
GI_INLINE_DECL bool clear_selection_ () noexcept override;

// gint Selection::get_selection_count (AtkSelection* selection);
// gint Selection::get_selection_count (::AtkSelection* selection);
GI_INLINE_DECL gint get_selection_count_ () noexcept override;

// gboolean Selection::is_child_selected (AtkSelection* selection, gint i);
// gboolean Selection::is_child_selected (::AtkSelection* selection, gint i);
GI_INLINE_DECL bool is_child_selected_ (gint i) noexcept override;

// AtkObject* Selection::ref_selection (AtkSelection* selection, gint i);
// ::AtkObject* Selection::ref_selection (::AtkSelection* selection, gint i);
GI_INLINE_DECL Atk::Object ref_selection_ (gint i) noexcept override;

// gboolean Selection::remove_selection (AtkSelection* selection, gint i);
// gboolean Selection::remove_selection (::AtkSelection* selection, gint i);
GI_INLINE_DECL bool remove_selection_ (gint i) noexcept override;

// gboolean Selection::select_all_selection (AtkSelection* selection);
// gboolean Selection::select_all_selection (::AtkSelection* selection);
GI_INLINE_DECL bool select_all_selection_ () noexcept override;

// void Selection::selection_changed (AtkSelection* selection);
// void Selection::selection_changed (::AtkSelection* selection);
GI_INLINE_DECL void selection_changed_ () noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
