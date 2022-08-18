// AUTO-GENERATED

#ifndef _GI_ATK_EDITABLETEXT_HPP_
#define _GI_ATK_EDITABLETEXT_HPP_


namespace gi {

namespace repository {

namespace Atk {


class EditableText;

namespace base {


#define GI_ATK_EDITABLETEXT_BASE base::EditableTextBase
class EditableTextBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::AtkEditableText BaseObjectType;

EditableTextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_editable_text_get_type(); } 

// void atk_editable_text_copy_text (AtkEditableText* text, gint start_pos, gint end_pos);
// void atk_editable_text_copy_text (::AtkEditableText* text, gint start_pos, gint end_pos);
GI_INLINE_DECL void copy_text (gint start_pos, gint end_pos) noexcept;

// void atk_editable_text_cut_text (AtkEditableText* text, gint start_pos, gint end_pos);
// void atk_editable_text_cut_text (::AtkEditableText* text, gint start_pos, gint end_pos);
GI_INLINE_DECL void cut_text (gint start_pos, gint end_pos) noexcept;

// void atk_editable_text_delete_text (AtkEditableText* text, gint start_pos, gint end_pos);
// void atk_editable_text_delete_text (::AtkEditableText* text, gint start_pos, gint end_pos);
GI_INLINE_DECL void delete_text (gint start_pos, gint end_pos) noexcept;

// void atk_editable_text_insert_text (AtkEditableText* text, const gchar* string, gint length, gint* position);
// void atk_editable_text_insert_text (::AtkEditableText* text, const char* string, gint length, gint position);
// SKIP; inconsistent in position pointer depth (1 vs 0)

// void atk_editable_text_paste_text (AtkEditableText* text, gint position);
// void atk_editable_text_paste_text (::AtkEditableText* text, gint position);
GI_INLINE_DECL void paste_text (gint position) noexcept;

// gboolean atk_editable_text_set_run_attributes (AtkEditableText* text, gint start_offset, gint end_offset);
// gboolean atk_editable_text_set_run_attributes (::AtkEditableText* text, gint start_offset, gint end_offset);
// SKIP; inconsistent list element info

// void atk_editable_text_set_text_contents (AtkEditableText* text, const gchar* string);
// void atk_editable_text_set_text_contents (::AtkEditableText* text, const char* string);
GI_INLINE_DECL void set_text_contents (const std::string & string) noexcept;

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/editabletext_extra_def.hpp>)
#include <atk/editabletext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/editabletext_extra.hpp>)
#include <atk/editabletext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class EditableText : public GI_ATK_EDITABLETEXT_BASE
{ typedef GI_ATK_EDITABLETEXT_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkEditableText>
{ typedef Atk::EditableText type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class EditableTextIfaceDef
{
typedef EditableTextIfaceDef self;
public:
typedef Atk::EditableText instance_type;
typedef ::AtkEditableTextIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void EditableText::copy_text (AtkEditableText* text, gint start_pos, gint end_pos);
// void EditableText::copy_text (::AtkEditableText* text, gint start_pos, gint end_pos);
virtual void copy_text_ (gint start_pos, gint end_pos) noexcept = 0;

// void EditableText::cut_text (AtkEditableText* text, gint start_pos, gint end_pos);
// void EditableText::cut_text (::AtkEditableText* text, gint start_pos, gint end_pos);
virtual void cut_text_ (gint start_pos, gint end_pos) noexcept = 0;

// void EditableText::delete_text (AtkEditableText* text, gint start_pos, gint end_pos);
// void EditableText::delete_text (::AtkEditableText* text, gint start_pos, gint end_pos);
virtual void delete_text_ (gint start_pos, gint end_pos) noexcept = 0;

// void EditableText::insert_text (AtkEditableText* text, const gchar* string, gint length, gint* position);
// void EditableText::insert_text (::AtkEditableText* text, const char* string, gint length, gint position);
// SKIP; inconsistent in position pointer depth (1 vs 0)

// void EditableText::paste_text (AtkEditableText* text, gint position);
// void EditableText::paste_text (::AtkEditableText* text, gint position);
virtual void paste_text_ (gint position) noexcept = 0;

// gboolean EditableText::set_run_attributes (AtkEditableText* text, gint start_offset, gint end_offset);
// gboolean EditableText::set_run_attributes (::AtkEditableText* text, gint start_offset, gint end_offset);
// SKIP; inconsistent list element info

// void EditableText::set_text_contents (AtkEditableText* text, const gchar* string);
// void EditableText::set_text_contents (::AtkEditableText* text, const char* string);
virtual void set_text_contents_ (const std::string & string) noexcept = 0;


};

using EditableTextImpl = detail::InterfaceImpl<EditableTextIfaceDef>;

class EditableTextIfaceClassImpl: public detail::InterfaceClassImpl<EditableTextImpl>
{
typedef EditableTextIfaceClassImpl self;
typedef detail::InterfaceClassImpl<EditableTextImpl> super;

protected:
using super::super;

// void EditableText::copy_text (AtkEditableText* text, gint start_pos, gint end_pos);
// void EditableText::copy_text (::AtkEditableText* text, gint start_pos, gint end_pos);
GI_INLINE_DECL void copy_text_ (gint start_pos, gint end_pos) noexcept override;

// void EditableText::cut_text (AtkEditableText* text, gint start_pos, gint end_pos);
// void EditableText::cut_text (::AtkEditableText* text, gint start_pos, gint end_pos);
GI_INLINE_DECL void cut_text_ (gint start_pos, gint end_pos) noexcept override;

// void EditableText::delete_text (AtkEditableText* text, gint start_pos, gint end_pos);
// void EditableText::delete_text (::AtkEditableText* text, gint start_pos, gint end_pos);
GI_INLINE_DECL void delete_text_ (gint start_pos, gint end_pos) noexcept override;

// void EditableText::insert_text (AtkEditableText* text, const gchar* string, gint length, gint* position);
// void EditableText::insert_text (::AtkEditableText* text, const char* string, gint length, gint position);
// SKIP; inconsistent in position pointer depth (1 vs 0)

// void EditableText::paste_text (AtkEditableText* text, gint position);
// void EditableText::paste_text (::AtkEditableText* text, gint position);
GI_INLINE_DECL void paste_text_ (gint position) noexcept override;

// gboolean EditableText::set_run_attributes (AtkEditableText* text, gint start_offset, gint end_offset);
// gboolean EditableText::set_run_attributes (::AtkEditableText* text, gint start_offset, gint end_offset);
// SKIP; inconsistent list element info

// void EditableText::set_text_contents (AtkEditableText* text, const gchar* string);
// void EditableText::set_text_contents (::AtkEditableText* text, const char* string);
GI_INLINE_DECL void set_text_contents_ (const std::string & string) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
