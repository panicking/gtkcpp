// AUTO-GENERATED

#ifndef _GI_GTK_IMCONTEXTSIMPLE_HPP_
#define _GI_GTK_IMCONTEXTSIMPLE_HPP_

#include "imcontext.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class IMContextSimple;

namespace base {


#define GI_GTK_IMCONTEXTSIMPLE_BASE base::IMContextSimpleBase
class IMContextSimpleBase : public Gtk::IMContext
{
typedef Gtk::IMContext super_type;
public:
typedef ::GtkIMContextSimple BaseObjectType;

IMContextSimpleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_im_context_simple_get_type(); } 

// GtkIMContext* gtk_im_context_simple_new ();
// ::GtkIMContextSimple* gtk_im_context_simple_new ();
static GI_INLINE_DECL Gtk::IMContextSimple new_ () noexcept;

// void gtk_im_context_simple_add_compose_file (GtkIMContextSimple* context_simple, const gchar* compose_file);
// void gtk_im_context_simple_add_compose_file (::GtkIMContextSimple* context_simple, const char* compose_file);
GI_INLINE_DECL void add_compose_file (const std::string & compose_file) noexcept;

// void gtk_im_context_simple_add_table (GtkIMContextSimple* context_simple, gint max_seq_len, gint n_seqs);
// void gtk_im_context_simple_add_table (::GtkIMContextSimple* context_simple, gint max_seq_len, gint n_seqs);
// IGNORE; not introspectable, inconsistent array info

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/imcontextsimple_extra_def.hpp>)
#include <gtk/imcontextsimple_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/imcontextsimple_extra.hpp>)
#include <gtk/imcontextsimple_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class IMContextSimple : public GI_GTK_IMCONTEXTSIMPLE_BASE
{ typedef GI_GTK_IMCONTEXTSIMPLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkIMContextSimple>
{ typedef Gtk::IMContextSimple type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class IMContextSimpleClassDef
{
typedef IMContextSimpleClassDef self;
public:
typedef Gtk::IMContextSimple instance_type;
typedef ::GtkIMContextSimpleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class IMContextSimpleClass: public detail::ClassTemplate<Gtk::impl::internal::IMContextSimpleClassDef, Gtk::impl::internal::IMContextClass>
{
typedef IMContextSimpleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::IMContextSimpleClassDef, Gtk::impl::internal::IMContextClass> super;

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

using IMContextSimpleImpl = detail::ObjectImpl<IMContextSimple, internal::IMContextSimpleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
