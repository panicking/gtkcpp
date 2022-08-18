// AUTO-GENERATED

#ifndef _GI_GTK_LINKBUTTON_HPP_
#define _GI_GTK_LINKBUTTON_HPP_

#include "button.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class LinkButton;

namespace base {


#define GI_GTK_LINKBUTTON_BASE base::LinkButtonBase
class LinkButtonBase : public Gtk::Button
{
typedef Gtk::Button super_type;
public:
typedef ::GtkLinkButton BaseObjectType;

LinkButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_link_button_get_type(); } 

// GtkWidget* gtk_link_button_new (const gchar* uri);
// ::GtkLinkButton* gtk_link_button_new (const char* uri);
static GI_INLINE_DECL Gtk::LinkButton new_ (const std::string & uri) noexcept;

// GtkWidget* gtk_link_button_new_with_label (const gchar* uri, const gchar* label);
// ::GtkLinkButton* gtk_link_button_new_with_label (const char* uri, const char* label);
static GI_INLINE_DECL Gtk::LinkButton new_with_label (const std::string & uri, const std::string & label) noexcept;
static GI_INLINE_DECL Gtk::LinkButton new_with_label (const std::string & uri) noexcept;

// const gchar* gtk_link_button_get_uri (GtkLinkButton* link_button);
// const char* gtk_link_button_get_uri (::GtkLinkButton* link_button);
GI_INLINE_DECL std::string get_uri () noexcept;

// gboolean gtk_link_button_get_visited (GtkLinkButton* link_button);
// gboolean gtk_link_button_get_visited (::GtkLinkButton* link_button);
GI_INLINE_DECL bool get_visited () noexcept;

// void gtk_link_button_set_uri (GtkLinkButton* link_button, const gchar* uri);
// void gtk_link_button_set_uri (::GtkLinkButton* link_button, const char* uri);
GI_INLINE_DECL void set_uri (const std::string & uri) noexcept;

// void gtk_link_button_set_visited (GtkLinkButton* link_button, gboolean visited);
// void gtk_link_button_set_visited (::GtkLinkButton* link_button, gboolean visited);
GI_INLINE_DECL void set_visited (gboolean visited) noexcept;

gi::property_proxy<std::string, base::LinkButtonBase> property_uri()
{ return gi::property_proxy<std::string, base::LinkButtonBase> (*this, "uri"); }
const gi::property_proxy<std::string, base::LinkButtonBase> property_uri() const
{ return gi::property_proxy<std::string, base::LinkButtonBase> (*this, "uri"); }

gi::property_proxy<bool, base::LinkButtonBase> property_visited()
{ return gi::property_proxy<bool, base::LinkButtonBase> (*this, "visited"); }
const gi::property_proxy<bool, base::LinkButtonBase> property_visited() const
{ return gi::property_proxy<bool, base::LinkButtonBase> (*this, "visited"); }

// signal activate-link
gi::signal_proxy<bool(Gtk::LinkButton)> signal_activate_link()
{ return gi::signal_proxy<bool(Gtk::LinkButton)> (*this, "activate-link"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/linkbutton_extra_def.hpp>)
#include <gtk/linkbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/linkbutton_extra.hpp>)
#include <gtk/linkbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class LinkButton : public GI_GTK_LINKBUTTON_BASE
{ typedef GI_GTK_LINKBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkLinkButton>
{ typedef Gtk::LinkButton type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class LinkButtonClassDef
{
typedef LinkButtonClassDef self;
public:
typedef Gtk::LinkButton instance_type;
typedef ::GtkLinkButtonClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean LinkButton::activate_link (GtkLinkButton* button);
// gboolean LinkButton::activate_link (::GtkLinkButton* button);
virtual bool activate_link_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class LinkButtonClass: public detail::ClassTemplate<Gtk::impl::internal::LinkButtonClassDef, Gtk::impl::internal::ButtonClass>
{
typedef LinkButtonClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::LinkButtonClassDef, Gtk::impl::internal::ButtonClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean LinkButton::activate_link (GtkLinkButton* button);
// gboolean LinkButton::activate_link (::GtkLinkButton* button);
GI_INLINE_DECL bool activate_link_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using LinkButtonImpl = detail::ObjectImpl<LinkButton, internal::LinkButtonClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
