// AUTO-GENERATED

#ifndef _GI_GTK_LEVELBAR_HPP_
#define _GI_GTK_LEVELBAR_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Orientable;

class LevelBar;

namespace base {


#define GI_GTK_LEVELBAR_BASE base::LevelBarBase
class LevelBarBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkLevelBar BaseObjectType;

LevelBarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_level_bar_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* gtk_level_bar_new ();
// ::GtkLevelBar* gtk_level_bar_new ();
static GI_INLINE_DECL Gtk::LevelBar new_ () noexcept;

// GtkWidget* gtk_level_bar_new_for_interval (gdouble min_value, gdouble max_value);
// ::GtkLevelBar* gtk_level_bar_new_for_interval (gdouble min_value, gdouble max_value);
static GI_INLINE_DECL Gtk::LevelBar new_for_interval (gdouble min_value, gdouble max_value) noexcept;

// void gtk_level_bar_add_offset_value (GtkLevelBar* self, const gchar* name, gdouble value);
// void gtk_level_bar_add_offset_value (::GtkLevelBar* self, const char* name, gdouble value);
GI_INLINE_DECL void add_offset_value (const std::string & name, gdouble value) noexcept;

// gboolean gtk_level_bar_get_inverted (GtkLevelBar* self);
// gboolean gtk_level_bar_get_inverted (::GtkLevelBar* self);
GI_INLINE_DECL bool get_inverted () noexcept;

// gdouble gtk_level_bar_get_max_value (GtkLevelBar* self);
// gdouble gtk_level_bar_get_max_value (::GtkLevelBar* self);
GI_INLINE_DECL gdouble get_max_value () noexcept;

// gdouble gtk_level_bar_get_min_value (GtkLevelBar* self);
// gdouble gtk_level_bar_get_min_value (::GtkLevelBar* self);
GI_INLINE_DECL gdouble get_min_value () noexcept;

// GtkLevelBarMode gtk_level_bar_get_mode (GtkLevelBar* self);
// ::GtkLevelBarMode gtk_level_bar_get_mode (::GtkLevelBar* self);
GI_INLINE_DECL Gtk::LevelBarMode get_mode () noexcept;

// gboolean gtk_level_bar_get_offset_value (GtkLevelBar* self, const gchar* name, gdouble* value);
// gboolean gtk_level_bar_get_offset_value (::GtkLevelBar* self, const char* name, gdouble* value);
GI_INLINE_DECL bool get_offset_value (const std::string & name, gdouble & value) noexcept;
GI_INLINE_DECL bool get_offset_value (gdouble & value) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble> get_offset_value (const std::string & name) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble> get_offset_value () noexcept;

// gdouble gtk_level_bar_get_value (GtkLevelBar* self);
// gdouble gtk_level_bar_get_value (::GtkLevelBar* self);
GI_INLINE_DECL gdouble get_value () noexcept;

// void gtk_level_bar_remove_offset_value (GtkLevelBar* self, const gchar* name);
// void gtk_level_bar_remove_offset_value (::GtkLevelBar* self, const char* name);
GI_INLINE_DECL void remove_offset_value (const std::string & name) noexcept;
GI_INLINE_DECL void remove_offset_value () noexcept;

// void gtk_level_bar_set_inverted (GtkLevelBar* self, gboolean inverted);
// void gtk_level_bar_set_inverted (::GtkLevelBar* self, gboolean inverted);
GI_INLINE_DECL void set_inverted (gboolean inverted) noexcept;

// void gtk_level_bar_set_max_value (GtkLevelBar* self, gdouble value);
// void gtk_level_bar_set_max_value (::GtkLevelBar* self, gdouble value);
GI_INLINE_DECL void set_max_value (gdouble value) noexcept;

// void gtk_level_bar_set_min_value (GtkLevelBar* self, gdouble value);
// void gtk_level_bar_set_min_value (::GtkLevelBar* self, gdouble value);
GI_INLINE_DECL void set_min_value (gdouble value) noexcept;

// void gtk_level_bar_set_mode (GtkLevelBar* self, GtkLevelBarMode mode);
// void gtk_level_bar_set_mode (::GtkLevelBar* self, ::GtkLevelBarMode mode);
GI_INLINE_DECL void set_mode (Gtk::LevelBarMode mode) noexcept;

// void gtk_level_bar_set_value (GtkLevelBar* self, gdouble value);
// void gtk_level_bar_set_value (::GtkLevelBar* self, gdouble value);
GI_INLINE_DECL void set_value (gdouble value) noexcept;

gi::property_proxy<bool, base::LevelBarBase> property_inverted()
{ return gi::property_proxy<bool, base::LevelBarBase> (*this, "inverted"); }
const gi::property_proxy<bool, base::LevelBarBase> property_inverted() const
{ return gi::property_proxy<bool, base::LevelBarBase> (*this, "inverted"); }

gi::property_proxy<gdouble, base::LevelBarBase> property_max_value()
{ return gi::property_proxy<gdouble, base::LevelBarBase> (*this, "max-value"); }
const gi::property_proxy<gdouble, base::LevelBarBase> property_max_value() const
{ return gi::property_proxy<gdouble, base::LevelBarBase> (*this, "max-value"); }

gi::property_proxy<gdouble, base::LevelBarBase> property_min_value()
{ return gi::property_proxy<gdouble, base::LevelBarBase> (*this, "min-value"); }
const gi::property_proxy<gdouble, base::LevelBarBase> property_min_value() const
{ return gi::property_proxy<gdouble, base::LevelBarBase> (*this, "min-value"); }

gi::property_proxy<Gtk::LevelBarMode, base::LevelBarBase> property_mode()
{ return gi::property_proxy<Gtk::LevelBarMode, base::LevelBarBase> (*this, "mode"); }
const gi::property_proxy<Gtk::LevelBarMode, base::LevelBarBase> property_mode() const
{ return gi::property_proxy<Gtk::LevelBarMode, base::LevelBarBase> (*this, "mode"); }

gi::property_proxy<gdouble, base::LevelBarBase> property_value()
{ return gi::property_proxy<gdouble, base::LevelBarBase> (*this, "value"); }
const gi::property_proxy<gdouble, base::LevelBarBase> property_value() const
{ return gi::property_proxy<gdouble, base::LevelBarBase> (*this, "value"); }

// signal offset-changed
gi::signal_proxy<void(Gtk::LevelBar, const std::string & name)> signal_offset_changed()
{ return gi::signal_proxy<void(Gtk::LevelBar, const std::string & name)> (*this, "offset-changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/levelbar_extra_def.hpp>)
#include <gtk/levelbar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/levelbar_extra.hpp>)
#include <gtk/levelbar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class LevelBar : public GI_GTK_LEVELBAR_BASE
{ typedef GI_GTK_LEVELBAR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkLevelBar>
{ typedef Gtk::LevelBar type; }; 

} // namespace repository

} // namespace gi

#include "orientable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class LevelBarClassDef
{
typedef LevelBarClassDef self;
public:
typedef Gtk::LevelBar instance_type;
typedef ::GtkLevelBarClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void LevelBar::offset_changed (GtkLevelBar* self, const gchar* name);
// void LevelBar::offset_changed (::GtkLevelBar* self, const char* name);
virtual void offset_changed_ (const std::string & name) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class LevelBarClass: public detail::ClassTemplate<Gtk::impl::internal::LevelBarClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::OrientableIfaceClassImpl>
{
typedef LevelBarClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::LevelBarClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::OrientableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::OrientableIfaceClassImpl GtkOrientableIface_type;


// void LevelBar::offset_changed (GtkLevelBar* self, const gchar* name);
// void LevelBar::offset_changed (::GtkLevelBar* self, const char* name);
GI_INLINE_DECL void offset_changed_ (const std::string & name) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using LevelBarImpl = detail::ObjectImpl<LevelBar, internal::LevelBarClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
