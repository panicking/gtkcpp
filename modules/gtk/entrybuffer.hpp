// AUTO-GENERATED

#ifndef _GI_GTK_ENTRYBUFFER_HPP_
#define _GI_GTK_ENTRYBUFFER_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class EntryBuffer;

namespace base {


#define GI_GTK_ENTRYBUFFER_BASE base::EntryBufferBase
class EntryBufferBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkEntryBuffer BaseObjectType;

EntryBufferBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_entry_buffer_get_type(); } 

// GtkEntryBuffer* gtk_entry_buffer_new (const gchar* initial_chars, gint n_initial_chars);
// ::GtkEntryBuffer* gtk_entry_buffer_new (const char* initial_chars, gint n_initial_chars);
static GI_INLINE_DECL Gtk::EntryBuffer new_ (const std::string & initial_chars, gint n_initial_chars) noexcept;
static GI_INLINE_DECL Gtk::EntryBuffer new_ (gint n_initial_chars) noexcept;

// guint gtk_entry_buffer_delete_text (GtkEntryBuffer* buffer, guint position, gint n_chars);
// guint gtk_entry_buffer_delete_text (::GtkEntryBuffer* buffer, guint position, gint n_chars);
GI_INLINE_DECL guint delete_text (guint position, gint n_chars) noexcept;

// void gtk_entry_buffer_emit_deleted_text (GtkEntryBuffer* buffer, guint position, guint n_chars);
// void gtk_entry_buffer_emit_deleted_text (::GtkEntryBuffer* buffer, guint position, guint n_chars);
GI_INLINE_DECL void emit_deleted_text (guint position, guint n_chars) noexcept;

// void gtk_entry_buffer_emit_inserted_text (GtkEntryBuffer* buffer, guint position, const gchar* chars, guint n_chars);
// void gtk_entry_buffer_emit_inserted_text (::GtkEntryBuffer* buffer, guint position, const char* chars, guint n_chars);
GI_INLINE_DECL void emit_inserted_text (guint position, const std::string & chars, guint n_chars) noexcept;

// gsize gtk_entry_buffer_get_bytes (GtkEntryBuffer* buffer);
// gsize gtk_entry_buffer_get_bytes (::GtkEntryBuffer* buffer);
GI_INLINE_DECL gsize get_bytes () noexcept;

// guint gtk_entry_buffer_get_length (GtkEntryBuffer* buffer);
// guint gtk_entry_buffer_get_length (::GtkEntryBuffer* buffer);
GI_INLINE_DECL guint get_length () noexcept;

// gint gtk_entry_buffer_get_max_length (GtkEntryBuffer* buffer);
// gint gtk_entry_buffer_get_max_length (::GtkEntryBuffer* buffer);
GI_INLINE_DECL gint get_max_length () noexcept;

// const gchar* gtk_entry_buffer_get_text (GtkEntryBuffer* buffer);
// const char* gtk_entry_buffer_get_text (::GtkEntryBuffer* buffer);
GI_INLINE_DECL std::string get_text () noexcept;

// guint gtk_entry_buffer_insert_text (GtkEntryBuffer* buffer, guint position, const gchar* chars, gint n_chars);
// guint gtk_entry_buffer_insert_text (::GtkEntryBuffer* buffer, guint position, const char* chars, gint n_chars);
GI_INLINE_DECL guint insert_text (guint position, const std::string & chars, gint n_chars) noexcept;

// void gtk_entry_buffer_set_max_length (GtkEntryBuffer* buffer, gint max_length);
// void gtk_entry_buffer_set_max_length (::GtkEntryBuffer* buffer, gint max_length);
GI_INLINE_DECL void set_max_length (gint max_length) noexcept;

// void gtk_entry_buffer_set_text (GtkEntryBuffer* buffer, const gchar* chars, gint n_chars);
// void gtk_entry_buffer_set_text (::GtkEntryBuffer* buffer, const char* chars, gint n_chars);
GI_INLINE_DECL void set_text (const std::string & chars, gint n_chars) noexcept;

gi::property_proxy<guint, base::EntryBufferBase> property_length()
{ return gi::property_proxy<guint, base::EntryBufferBase> (*this, "length"); }
const gi::property_proxy<guint, base::EntryBufferBase> property_length() const
{ return gi::property_proxy<guint, base::EntryBufferBase> (*this, "length"); }

gi::property_proxy<gint, base::EntryBufferBase> property_max_length()
{ return gi::property_proxy<gint, base::EntryBufferBase> (*this, "max-length"); }
const gi::property_proxy<gint, base::EntryBufferBase> property_max_length() const
{ return gi::property_proxy<gint, base::EntryBufferBase> (*this, "max-length"); }

gi::property_proxy<std::string, base::EntryBufferBase> property_text()
{ return gi::property_proxy<std::string, base::EntryBufferBase> (*this, "text"); }
const gi::property_proxy<std::string, base::EntryBufferBase> property_text() const
{ return gi::property_proxy<std::string, base::EntryBufferBase> (*this, "text"); }

// signal deleted-text
gi::signal_proxy<void(Gtk::EntryBuffer, guint position, guint n_chars)> signal_deleted_text()
{ return gi::signal_proxy<void(Gtk::EntryBuffer, guint position, guint n_chars)> (*this, "deleted-text"); }

// signal inserted-text
gi::signal_proxy<void(Gtk::EntryBuffer, guint position, const std::string & chars, guint n_chars)> signal_inserted_text()
{ return gi::signal_proxy<void(Gtk::EntryBuffer, guint position, const std::string & chars, guint n_chars)> (*this, "inserted-text"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/entrybuffer_extra_def.hpp>)
#include <gtk/entrybuffer_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/entrybuffer_extra.hpp>)
#include <gtk/entrybuffer_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class EntryBuffer : public GI_GTK_ENTRYBUFFER_BASE
{ typedef GI_GTK_ENTRYBUFFER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkEntryBuffer>
{ typedef Gtk::EntryBuffer type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class EntryBufferClassDef
{
typedef EntryBufferClassDef self;
public:
typedef Gtk::EntryBuffer instance_type;
typedef ::GtkEntryBufferClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// guint EntryBuffer::delete_text (GtkEntryBuffer* buffer, guint position, guint n_chars);
// guint EntryBuffer::delete_text (::GtkEntryBuffer* buffer, guint position, guint n_chars);
virtual guint delete_text_ (guint position, guint n_chars) noexcept = 0;

// void EntryBuffer::deleted_text (GtkEntryBuffer* buffer, guint position, guint n_chars);
// void EntryBuffer::deleted_text (::GtkEntryBuffer* buffer, guint position, guint n_chars);
virtual void deleted_text_ (guint position, guint n_chars) noexcept = 0;

// guint EntryBuffer::get_length (GtkEntryBuffer* buffer);
// guint EntryBuffer::get_length (::GtkEntryBuffer* buffer);
virtual guint get_length_ () noexcept = 0;

// const gchar* EntryBuffer::get_text (GtkEntryBuffer* buffer, gsize* n_bytes);
// const char* EntryBuffer::get_text (::GtkEntryBuffer* buffer, gsize n_bytes);
// SKIP; invalid callback return transfer none

// guint EntryBuffer::insert_text (GtkEntryBuffer* buffer, guint position, const gchar* chars, guint n_chars);
// guint EntryBuffer::insert_text (::GtkEntryBuffer* buffer, guint position, const char* chars, guint n_chars);
virtual guint insert_text_ (guint position, const std::string & chars, guint n_chars) noexcept = 0;

// void EntryBuffer::inserted_text (GtkEntryBuffer* buffer, guint position, const gchar* chars, guint n_chars);
// void EntryBuffer::inserted_text (::GtkEntryBuffer* buffer, guint position, const char* chars, guint n_chars);
virtual void inserted_text_ (guint position, const std::string & chars, guint n_chars) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class EntryBufferClass: public detail::ClassTemplate<Gtk::impl::internal::EntryBufferClassDef, GObject::impl::internal::ObjectClass>
{
typedef EntryBufferClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::EntryBufferClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// guint EntryBuffer::delete_text (GtkEntryBuffer* buffer, guint position, guint n_chars);
// guint EntryBuffer::delete_text (::GtkEntryBuffer* buffer, guint position, guint n_chars);
GI_INLINE_DECL guint delete_text_ (guint position, guint n_chars) noexcept override;

// void EntryBuffer::deleted_text (GtkEntryBuffer* buffer, guint position, guint n_chars);
// void EntryBuffer::deleted_text (::GtkEntryBuffer* buffer, guint position, guint n_chars);
GI_INLINE_DECL void deleted_text_ (guint position, guint n_chars) noexcept override;

// guint EntryBuffer::get_length (GtkEntryBuffer* buffer);
// guint EntryBuffer::get_length (::GtkEntryBuffer* buffer);
GI_INLINE_DECL guint get_length_ () noexcept override;

// const gchar* EntryBuffer::get_text (GtkEntryBuffer* buffer, gsize* n_bytes);
// const char* EntryBuffer::get_text (::GtkEntryBuffer* buffer, gsize n_bytes);
// SKIP; invalid callback return transfer none

// guint EntryBuffer::insert_text (GtkEntryBuffer* buffer, guint position, const gchar* chars, guint n_chars);
// guint EntryBuffer::insert_text (::GtkEntryBuffer* buffer, guint position, const char* chars, guint n_chars);
GI_INLINE_DECL guint insert_text_ (guint position, const std::string & chars, guint n_chars) noexcept override;

// void EntryBuffer::inserted_text (GtkEntryBuffer* buffer, guint position, const gchar* chars, guint n_chars);
// void EntryBuffer::inserted_text (::GtkEntryBuffer* buffer, guint position, const char* chars, guint n_chars);
GI_INLINE_DECL void inserted_text_ (guint position, const std::string & chars, guint n_chars) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using EntryBufferImpl = detail::ObjectImpl<EntryBuffer, internal::EntryBufferClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
