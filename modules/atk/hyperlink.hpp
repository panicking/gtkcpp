// AUTO-GENERATED

#ifndef _GI_ATK_HYPERLINK_HPP_
#define _GI_ATK_HYPERLINK_HPP_


namespace gi {

namespace repository {

namespace Atk {

class Action;
class Object;

class Hyperlink;

namespace base {


#define GI_ATK_HYPERLINK_BASE base::HyperlinkBase
class HyperlinkBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AtkHyperlink BaseObjectType;

HyperlinkBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_hyperlink_get_type(); } 

GI_INLINE_DECL Atk::Action interface_ (gi::interface_tag<Atk::Action>);

GI_INLINE_DECL operator Atk::Action ();

// gint atk_hyperlink_get_end_index (AtkHyperlink* link_);
// gint atk_hyperlink_get_end_index (::AtkHyperlink* link_);
GI_INLINE_DECL gint get_end_index () noexcept;

// gint atk_hyperlink_get_n_anchors (AtkHyperlink* link_);
// gint atk_hyperlink_get_n_anchors (::AtkHyperlink* link_);
GI_INLINE_DECL gint get_n_anchors () noexcept;

// AtkObject* atk_hyperlink_get_object (AtkHyperlink* link_, gint i);
// ::AtkObject* atk_hyperlink_get_object (::AtkHyperlink* link_, gint i);
GI_INLINE_DECL Atk::Object get_object (gint i) noexcept;

// gint atk_hyperlink_get_start_index (AtkHyperlink* link_);
// gint atk_hyperlink_get_start_index (::AtkHyperlink* link_);
GI_INLINE_DECL gint get_start_index () noexcept;

// gchar* atk_hyperlink_get_uri (AtkHyperlink* link_, gint i);
// char* atk_hyperlink_get_uri (::AtkHyperlink* link_, gint i);
GI_INLINE_DECL std::string get_uri (gint i) noexcept;

// gboolean atk_hyperlink_is_inline (AtkHyperlink* link_);
// gboolean atk_hyperlink_is_inline (::AtkHyperlink* link_);
GI_INLINE_DECL bool is_inline () noexcept;

// gboolean atk_hyperlink_is_selected_link (AtkHyperlink* link_);
// gboolean atk_hyperlink_is_selected_link (::AtkHyperlink* link_);
// IGNORE; deprecated

// gboolean atk_hyperlink_is_valid (AtkHyperlink* link_);
// gboolean atk_hyperlink_is_valid (::AtkHyperlink* link_);
GI_INLINE_DECL bool is_valid () noexcept;

gi::property_proxy<gint, base::HyperlinkBase> property_end_index()
{ return gi::property_proxy<gint, base::HyperlinkBase> (*this, "end-index"); }
const gi::property_proxy<gint, base::HyperlinkBase> property_end_index() const
{ return gi::property_proxy<gint, base::HyperlinkBase> (*this, "end-index"); }

gi::property_proxy<gint, base::HyperlinkBase> property_number_of_anchors()
{ return gi::property_proxy<gint, base::HyperlinkBase> (*this, "number-of-anchors"); }
const gi::property_proxy<gint, base::HyperlinkBase> property_number_of_anchors() const
{ return gi::property_proxy<gint, base::HyperlinkBase> (*this, "number-of-anchors"); }

gi::property_proxy<bool, base::HyperlinkBase> property_selected_link()
{ return gi::property_proxy<bool, base::HyperlinkBase> (*this, "selected-link"); }
const gi::property_proxy<bool, base::HyperlinkBase> property_selected_link() const
{ return gi::property_proxy<bool, base::HyperlinkBase> (*this, "selected-link"); }

gi::property_proxy<gint, base::HyperlinkBase> property_start_index()
{ return gi::property_proxy<gint, base::HyperlinkBase> (*this, "start-index"); }
const gi::property_proxy<gint, base::HyperlinkBase> property_start_index() const
{ return gi::property_proxy<gint, base::HyperlinkBase> (*this, "start-index"); }

// signal link-activated
gi::signal_proxy<void(Atk::Hyperlink)> signal_link_activated()
{ return gi::signal_proxy<void(Atk::Hyperlink)> (*this, "link-activated"); }

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/hyperlink_extra_def.hpp>)
#include <atk/hyperlink_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/hyperlink_extra.hpp>)
#include <atk/hyperlink_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class Hyperlink : public GI_ATK_HYPERLINK_BASE
{ typedef GI_ATK_HYPERLINK_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkHyperlink>
{ typedef Atk::Hyperlink type; }; 

} // namespace repository

} // namespace gi

#include "action.hpp"

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class HyperlinkClassDef
{
typedef HyperlinkClassDef self;
public:
typedef Atk::Hyperlink instance_type;
typedef ::AtkHyperlinkClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gint Hyperlink::get_end_index (AtkHyperlink* link_);
// gint Hyperlink::get_end_index (::AtkHyperlink* link_);
virtual gint get_end_index_ () noexcept = 0;

// gint Hyperlink::get_n_anchors (AtkHyperlink* link_);
// gint Hyperlink::get_n_anchors (::AtkHyperlink* link_);
virtual gint get_n_anchors_ () noexcept = 0;

// AtkObject* Hyperlink::get_object (AtkHyperlink* link_, gint i);
// ::AtkObject* Hyperlink::get_object (::AtkHyperlink* link_, gint i);
virtual Atk::Object get_object_ (gint i) noexcept = 0;

// gint Hyperlink::get_start_index (AtkHyperlink* link_);
// gint Hyperlink::get_start_index (::AtkHyperlink* link_);
virtual gint get_start_index_ () noexcept = 0;

// gchar* Hyperlink::get_uri (AtkHyperlink* link_, gint i);
// char* Hyperlink::get_uri (::AtkHyperlink* link_, gint i);
virtual std::string get_uri_ (gint i) noexcept = 0;

// gboolean Hyperlink::is_selected_link (AtkHyperlink* link_);
// gboolean Hyperlink::is_selected_link (::AtkHyperlink* link_);
// IGNORE; deprecated

// gboolean Hyperlink::is_valid (AtkHyperlink* link_);
// gboolean Hyperlink::is_valid (::AtkHyperlink* link_);
virtual bool is_valid_ () noexcept = 0;

// void Hyperlink::link_activated (AtkHyperlink* link_);
// void Hyperlink::link_activated (::AtkHyperlink* link_);
virtual void link_activated_ () noexcept = 0;

// guint Hyperlink::link_state (AtkHyperlink* link_);
// guint Hyperlink::link_state (::AtkHyperlink* link_);
virtual guint link_state_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class HyperlinkClass: public detail::ClassTemplate<Atk::impl::internal::HyperlinkClassDef, GObject::impl::internal::ObjectClass, Atk::impl::internal::ActionIfaceClassImpl>
{
typedef HyperlinkClass self;
typedef detail::ClassTemplate<Atk::impl::internal::HyperlinkClassDef, GObject::impl::internal::ObjectClass, Atk::impl::internal::ActionIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::ActionIfaceClassImpl AtkActionIface_type;


// gint Hyperlink::get_end_index (AtkHyperlink* link_);
// gint Hyperlink::get_end_index (::AtkHyperlink* link_);
GI_INLINE_DECL gint get_end_index_ () noexcept override;

// gint Hyperlink::get_n_anchors (AtkHyperlink* link_);
// gint Hyperlink::get_n_anchors (::AtkHyperlink* link_);
GI_INLINE_DECL gint get_n_anchors_ () noexcept override;

// AtkObject* Hyperlink::get_object (AtkHyperlink* link_, gint i);
// ::AtkObject* Hyperlink::get_object (::AtkHyperlink* link_, gint i);
GI_INLINE_DECL Atk::Object get_object_ (gint i) noexcept override;

// gint Hyperlink::get_start_index (AtkHyperlink* link_);
// gint Hyperlink::get_start_index (::AtkHyperlink* link_);
GI_INLINE_DECL gint get_start_index_ () noexcept override;

// gchar* Hyperlink::get_uri (AtkHyperlink* link_, gint i);
// char* Hyperlink::get_uri (::AtkHyperlink* link_, gint i);
GI_INLINE_DECL std::string get_uri_ (gint i) noexcept override;

// gboolean Hyperlink::is_selected_link (AtkHyperlink* link_);
// gboolean Hyperlink::is_selected_link (::AtkHyperlink* link_);
// IGNORE; deprecated

// gboolean Hyperlink::is_valid (AtkHyperlink* link_);
// gboolean Hyperlink::is_valid (::AtkHyperlink* link_);
GI_INLINE_DECL bool is_valid_ () noexcept override;

// void Hyperlink::link_activated (AtkHyperlink* link_);
// void Hyperlink::link_activated (::AtkHyperlink* link_);
GI_INLINE_DECL void link_activated_ () noexcept override;

// guint Hyperlink::link_state (AtkHyperlink* link_);
// guint Hyperlink::link_state (::AtkHyperlink* link_);
GI_INLINE_DECL guint link_state_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using HyperlinkImpl = detail::ObjectImpl<Hyperlink, internal::HyperlinkClass>;

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
