// AUTO-GENERATED

#ifndef _GI_GTK_IMMULTICONTEXT_HPP_
#define _GI_GTK_IMMULTICONTEXT_HPP_

#include "imcontext.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class MenuShell;

class IMMulticontext;

namespace base {


#define GI_GTK_IMMULTICONTEXT_BASE base::IMMulticontextBase
class IMMulticontextBase : public Gtk::IMContext
{
typedef Gtk::IMContext super_type;
public:
typedef ::GtkIMMulticontext BaseObjectType;

IMMulticontextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_im_multicontext_get_type(); } 

// GtkIMContext* gtk_im_multicontext_new ();
// ::GtkIMMulticontext* gtk_im_multicontext_new ();
static GI_INLINE_DECL Gtk::IMMulticontext new_ () noexcept;

// void gtk_im_multicontext_append_menuitems (GtkIMMulticontext* context, GtkMenuShell* menushell);
// void gtk_im_multicontext_append_menuitems (::GtkIMMulticontext* context, ::GtkMenuShell* menushell);
// IGNORE; deprecated

// const char* gtk_im_multicontext_get_context_id (GtkIMMulticontext* context);
// const char* gtk_im_multicontext_get_context_id (::GtkIMMulticontext* context);
GI_INLINE_DECL std::string get_context_id () noexcept;

// void gtk_im_multicontext_set_context_id (GtkIMMulticontext* context, const char* context_id);
// void gtk_im_multicontext_set_context_id (::GtkIMMulticontext* context, const char* context_id);
GI_INLINE_DECL void set_context_id (const std::string & context_id) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/immulticontext_extra_def.hpp>)
#include <gtk/immulticontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/immulticontext_extra.hpp>)
#include <gtk/immulticontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class IMMulticontext : public GI_GTK_IMMULTICONTEXT_BASE
{ typedef GI_GTK_IMMULTICONTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkIMMulticontext>
{ typedef Gtk::IMMulticontext type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class IMMulticontextClassDef
{
typedef IMMulticontextClassDef self;
public:
typedef Gtk::IMMulticontext instance_type;
typedef ::GtkIMMulticontextClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class IMMulticontextClass: public detail::ClassTemplate<Gtk::impl::internal::IMMulticontextClassDef, Gtk::impl::internal::IMContextClass>
{
typedef IMMulticontextClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::IMMulticontextClassDef, Gtk::impl::internal::IMContextClass> super;

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

using IMMulticontextImpl = detail::ObjectImpl<IMMulticontext, internal::IMMulticontextClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
