// AUTO-GENERATED

#ifndef _GI_GTK_STATUSBAR_HPP_
#define _GI_GTK_STATUSBAR_HPP_

#include "box.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Box;

class Statusbar;

namespace base {


#define GI_GTK_STATUSBAR_BASE base::StatusbarBase
class StatusbarBase : public Gtk::Box
{
typedef Gtk::Box super_type;
public:
typedef ::GtkStatusbar BaseObjectType;

StatusbarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_statusbar_get_type(); } 

// GtkWidget* gtk_statusbar_new ();
// ::GtkStatusbar* gtk_statusbar_new ();
static GI_INLINE_DECL Gtk::Statusbar new_ () noexcept;

// guint gtk_statusbar_get_context_id (GtkStatusbar* statusbar, const gchar* context_description);
// guint gtk_statusbar_get_context_id (::GtkStatusbar* statusbar, const char* context_description);
GI_INLINE_DECL guint get_context_id (const std::string & context_description) noexcept;

// GtkWidget* gtk_statusbar_get_message_area (GtkStatusbar* statusbar);
// ::GtkBox* gtk_statusbar_get_message_area (::GtkStatusbar* statusbar);
GI_INLINE_DECL Gtk::Box get_message_area () noexcept;

// void gtk_statusbar_pop (GtkStatusbar* statusbar, guint context_id);
// void gtk_statusbar_pop (::GtkStatusbar* statusbar, guint context_id);
GI_INLINE_DECL void pop (guint context_id) noexcept;

// guint gtk_statusbar_push (GtkStatusbar* statusbar, guint context_id, const gchar* text);
// guint gtk_statusbar_push (::GtkStatusbar* statusbar, guint context_id, const char* text);
GI_INLINE_DECL guint push (guint context_id, const std::string & text) noexcept;

// void gtk_statusbar_remove (GtkStatusbar* statusbar, guint context_id, guint message_id);
// void gtk_statusbar_remove (::GtkStatusbar* statusbar, guint context_id, guint message_id);
GI_INLINE_DECL void remove (guint context_id, guint message_id) noexcept;

// void gtk_statusbar_remove_all (GtkStatusbar* statusbar, guint context_id);
// void gtk_statusbar_remove_all (::GtkStatusbar* statusbar, guint context_id);
GI_INLINE_DECL void remove_all (guint context_id) noexcept;

// signal text-popped
gi::signal_proxy<void(Gtk::Statusbar, guint context_id, const std::string & text)> signal_text_popped()
{ return gi::signal_proxy<void(Gtk::Statusbar, guint context_id, const std::string & text)> (*this, "text-popped"); }

// signal text-pushed
gi::signal_proxy<void(Gtk::Statusbar, guint context_id, const std::string & text)> signal_text_pushed()
{ return gi::signal_proxy<void(Gtk::Statusbar, guint context_id, const std::string & text)> (*this, "text-pushed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/statusbar_extra_def.hpp>)
#include <gtk/statusbar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/statusbar_extra.hpp>)
#include <gtk/statusbar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Statusbar : public GI_GTK_STATUSBAR_BASE
{ typedef GI_GTK_STATUSBAR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkStatusbar>
{ typedef Gtk::Statusbar type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class StatusbarClassDef
{
typedef StatusbarClassDef self;
public:
typedef Gtk::Statusbar instance_type;
typedef ::GtkStatusbarClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Statusbar::text_popped (GtkStatusbar* statusbar, guint context_id, const gchar* text);
// void Statusbar::text_popped (::GtkStatusbar* statusbar, guint context_id, const char* text);
virtual void text_popped_ (guint context_id, const std::string & text) noexcept = 0;

// void Statusbar::text_pushed (GtkStatusbar* statusbar, guint context_id, const gchar* text);
// void Statusbar::text_pushed (::GtkStatusbar* statusbar, guint context_id, const char* text);
virtual void text_pushed_ (guint context_id, const std::string & text) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class StatusbarClass: public detail::ClassTemplate<Gtk::impl::internal::StatusbarClassDef, Gtk::impl::internal::BoxClass>
{
typedef StatusbarClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::StatusbarClassDef, Gtk::impl::internal::BoxClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Statusbar::text_popped (GtkStatusbar* statusbar, guint context_id, const gchar* text);
// void Statusbar::text_popped (::GtkStatusbar* statusbar, guint context_id, const char* text);
GI_INLINE_DECL void text_popped_ (guint context_id, const std::string & text) noexcept override;

// void Statusbar::text_pushed (GtkStatusbar* statusbar, guint context_id, const gchar* text);
// void Statusbar::text_pushed (::GtkStatusbar* statusbar, guint context_id, const char* text);
GI_INLINE_DECL void text_pushed_ (guint context_id, const std::string & text) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using StatusbarImpl = detail::ObjectImpl<Statusbar, internal::StatusbarClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
