// AUTO-GENERATED

#ifndef _GI_GTK_HEADERBAR_HPP_
#define _GI_GTK_HEADERBAR_HPP_

#include "container.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class HeaderBar;

namespace base {


#define GI_GTK_HEADERBAR_BASE base::HeaderBarBase
class HeaderBarBase : public Gtk::Container
{
typedef Gtk::Container super_type;
public:
typedef ::GtkHeaderBar BaseObjectType;

HeaderBarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_header_bar_get_type(); } 

// GtkWidget* gtk_header_bar_new ();
// ::GtkHeaderBar* gtk_header_bar_new ();
static GI_INLINE_DECL Gtk::HeaderBar new_ () noexcept;

// GtkWidget* gtk_header_bar_get_custom_title (GtkHeaderBar* bar);
// ::GtkWidget* gtk_header_bar_get_custom_title (::GtkHeaderBar* bar);
GI_INLINE_DECL Gtk::Widget get_custom_title () noexcept;

// const gchar* gtk_header_bar_get_decoration_layout (GtkHeaderBar* bar);
// const char* gtk_header_bar_get_decoration_layout (::GtkHeaderBar* bar);
GI_INLINE_DECL std::string get_decoration_layout () noexcept;

// gboolean gtk_header_bar_get_has_subtitle (GtkHeaderBar* bar);
// gboolean gtk_header_bar_get_has_subtitle (::GtkHeaderBar* bar);
GI_INLINE_DECL bool get_has_subtitle () noexcept;

// gboolean gtk_header_bar_get_show_close_button (GtkHeaderBar* bar);
// gboolean gtk_header_bar_get_show_close_button (::GtkHeaderBar* bar);
GI_INLINE_DECL bool get_show_close_button () noexcept;

// const gchar* gtk_header_bar_get_subtitle (GtkHeaderBar* bar);
// const char* gtk_header_bar_get_subtitle (::GtkHeaderBar* bar);
GI_INLINE_DECL std::string get_subtitle () noexcept;

// const gchar* gtk_header_bar_get_title (GtkHeaderBar* bar);
// const char* gtk_header_bar_get_title (::GtkHeaderBar* bar);
GI_INLINE_DECL std::string get_title () noexcept;

// void gtk_header_bar_pack_end (GtkHeaderBar* bar, GtkWidget* child);
// void gtk_header_bar_pack_end (::GtkHeaderBar* bar, ::GtkWidget* child);
GI_INLINE_DECL void pack_end (Gtk::Widget child) noexcept;

// void gtk_header_bar_pack_start (GtkHeaderBar* bar, GtkWidget* child);
// void gtk_header_bar_pack_start (::GtkHeaderBar* bar, ::GtkWidget* child);
GI_INLINE_DECL void pack_start (Gtk::Widget child) noexcept;

// void gtk_header_bar_set_custom_title (GtkHeaderBar* bar, GtkWidget* title_widget);
// void gtk_header_bar_set_custom_title (::GtkHeaderBar* bar, ::GtkWidget* title_widget);
GI_INLINE_DECL void set_custom_title (Gtk::Widget title_widget) noexcept;
GI_INLINE_DECL void set_custom_title () noexcept;

// void gtk_header_bar_set_decoration_layout (GtkHeaderBar* bar, const gchar* layout);
// void gtk_header_bar_set_decoration_layout (::GtkHeaderBar* bar, const char* layout);
GI_INLINE_DECL void set_decoration_layout (const std::string & layout) noexcept;
GI_INLINE_DECL void set_decoration_layout () noexcept;

// void gtk_header_bar_set_has_subtitle (GtkHeaderBar* bar, gboolean setting);
// void gtk_header_bar_set_has_subtitle (::GtkHeaderBar* bar, gboolean setting);
GI_INLINE_DECL void set_has_subtitle (gboolean setting) noexcept;

// void gtk_header_bar_set_show_close_button (GtkHeaderBar* bar, gboolean setting);
// void gtk_header_bar_set_show_close_button (::GtkHeaderBar* bar, gboolean setting);
GI_INLINE_DECL void set_show_close_button (gboolean setting) noexcept;

// void gtk_header_bar_set_subtitle (GtkHeaderBar* bar, const gchar* subtitle);
// void gtk_header_bar_set_subtitle (::GtkHeaderBar* bar, const char* subtitle);
GI_INLINE_DECL void set_subtitle (const std::string & subtitle) noexcept;
GI_INLINE_DECL void set_subtitle () noexcept;

// void gtk_header_bar_set_title (GtkHeaderBar* bar, const gchar* title);
// void gtk_header_bar_set_title (::GtkHeaderBar* bar, const char* title);
GI_INLINE_DECL void set_title (const std::string & title) noexcept;
GI_INLINE_DECL void set_title () noexcept;

gi::property_proxy<Gtk::Widget, base::HeaderBarBase> property_custom_title()
{ return gi::property_proxy<Gtk::Widget, base::HeaderBarBase> (*this, "custom-title"); }
const gi::property_proxy<Gtk::Widget, base::HeaderBarBase> property_custom_title() const
{ return gi::property_proxy<Gtk::Widget, base::HeaderBarBase> (*this, "custom-title"); }

gi::property_proxy<std::string, base::HeaderBarBase> property_decoration_layout()
{ return gi::property_proxy<std::string, base::HeaderBarBase> (*this, "decoration-layout"); }
const gi::property_proxy<std::string, base::HeaderBarBase> property_decoration_layout() const
{ return gi::property_proxy<std::string, base::HeaderBarBase> (*this, "decoration-layout"); }

gi::property_proxy<bool, base::HeaderBarBase> property_decoration_layout_set()
{ return gi::property_proxy<bool, base::HeaderBarBase> (*this, "decoration-layout-set"); }
const gi::property_proxy<bool, base::HeaderBarBase> property_decoration_layout_set() const
{ return gi::property_proxy<bool, base::HeaderBarBase> (*this, "decoration-layout-set"); }

gi::property_proxy<bool, base::HeaderBarBase> property_has_subtitle()
{ return gi::property_proxy<bool, base::HeaderBarBase> (*this, "has-subtitle"); }
const gi::property_proxy<bool, base::HeaderBarBase> property_has_subtitle() const
{ return gi::property_proxy<bool, base::HeaderBarBase> (*this, "has-subtitle"); }

gi::property_proxy<bool, base::HeaderBarBase> property_show_close_button()
{ return gi::property_proxy<bool, base::HeaderBarBase> (*this, "show-close-button"); }
const gi::property_proxy<bool, base::HeaderBarBase> property_show_close_button() const
{ return gi::property_proxy<bool, base::HeaderBarBase> (*this, "show-close-button"); }

gi::property_proxy<gint, base::HeaderBarBase> property_spacing()
{ return gi::property_proxy<gint, base::HeaderBarBase> (*this, "spacing"); }
const gi::property_proxy<gint, base::HeaderBarBase> property_spacing() const
{ return gi::property_proxy<gint, base::HeaderBarBase> (*this, "spacing"); }

gi::property_proxy<std::string, base::HeaderBarBase> property_subtitle()
{ return gi::property_proxy<std::string, base::HeaderBarBase> (*this, "subtitle"); }
const gi::property_proxy<std::string, base::HeaderBarBase> property_subtitle() const
{ return gi::property_proxy<std::string, base::HeaderBarBase> (*this, "subtitle"); }

gi::property_proxy<std::string, base::HeaderBarBase> property_title()
{ return gi::property_proxy<std::string, base::HeaderBarBase> (*this, "title"); }
const gi::property_proxy<std::string, base::HeaderBarBase> property_title() const
{ return gi::property_proxy<std::string, base::HeaderBarBase> (*this, "title"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/headerbar_extra_def.hpp>)
#include <gtk/headerbar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/headerbar_extra.hpp>)
#include <gtk/headerbar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class HeaderBar : public GI_GTK_HEADERBAR_BASE
{ typedef GI_GTK_HEADERBAR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkHeaderBar>
{ typedef Gtk::HeaderBar type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class HeaderBarClassDef
{
typedef HeaderBarClassDef self;
public:
typedef Gtk::HeaderBar instance_type;
typedef ::GtkHeaderBarClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class HeaderBarClass: public detail::ClassTemplate<Gtk::impl::internal::HeaderBarClassDef, Gtk::impl::internal::ContainerClass>
{
typedef HeaderBarClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::HeaderBarClassDef, Gtk::impl::internal::ContainerClass> super;

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

using HeaderBarImpl = detail::ObjectImpl<HeaderBar, internal::HeaderBarClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
