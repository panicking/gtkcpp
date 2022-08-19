// AUTO-GENERATED

#ifndef _GI_WEBKIT2_EDITORSTATE_HPP_
#define _GI_WEBKIT2_EDITORSTATE_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class EditorState;

namespace base {


#define GI_WEBKIT2_EDITORSTATE_BASE base::EditorStateBase
class EditorStateBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitEditorState BaseObjectType;

EditorStateBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_editor_state_get_type(); } 

// guint webkit_editor_state_get_typing_attributes (WebKitEditorState* editor_state);
// guint webkit_editor_state_get_typing_attributes (::WebKitEditorState* editor_state);
GI_INLINE_DECL guint get_typing_attributes () noexcept;

// gboolean webkit_editor_state_is_copy_available (WebKitEditorState* editor_state);
// gboolean webkit_editor_state_is_copy_available (::WebKitEditorState* editor_state);
GI_INLINE_DECL bool is_copy_available () noexcept;

// gboolean webkit_editor_state_is_cut_available (WebKitEditorState* editor_state);
// gboolean webkit_editor_state_is_cut_available (::WebKitEditorState* editor_state);
GI_INLINE_DECL bool is_cut_available () noexcept;

// gboolean webkit_editor_state_is_paste_available (WebKitEditorState* editor_state);
// gboolean webkit_editor_state_is_paste_available (::WebKitEditorState* editor_state);
GI_INLINE_DECL bool is_paste_available () noexcept;

// gboolean webkit_editor_state_is_redo_available (WebKitEditorState* editor_state);
// gboolean webkit_editor_state_is_redo_available (::WebKitEditorState* editor_state);
GI_INLINE_DECL bool is_redo_available () noexcept;

// gboolean webkit_editor_state_is_undo_available (WebKitEditorState* editor_state);
// gboolean webkit_editor_state_is_undo_available (::WebKitEditorState* editor_state);
GI_INLINE_DECL bool is_undo_available () noexcept;

gi::property_proxy<guint, base::EditorStateBase> property_typing_attributes()
{ return gi::property_proxy<guint, base::EditorStateBase> (*this, "typing-attributes"); }
const gi::property_proxy<guint, base::EditorStateBase> property_typing_attributes() const
{ return gi::property_proxy<guint, base::EditorStateBase> (*this, "typing-attributes"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/editorstate_extra_def.hpp>)
#include <webkit2/editorstate_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/editorstate_extra.hpp>)
#include <webkit2/editorstate_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class EditorState : public GI_WEBKIT2_EDITORSTATE_BASE
{ typedef GI_WEBKIT2_EDITORSTATE_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitEditorState>
{ typedef WebKit2::EditorState type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class EditorStateClassDef
{
typedef EditorStateClassDef self;
public:
typedef WebKit2::EditorState instance_type;
typedef ::WebKitEditorStateClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class EditorStateClass: public detail::ClassTemplate<WebKit2::impl::internal::EditorStateClassDef, GObject::impl::internal::ObjectClass>
{
typedef EditorStateClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::EditorStateClassDef, GObject::impl::internal::ObjectClass> super;

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

using EditorStateImpl = detail::ObjectImpl<EditorState, internal::EditorStateClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
