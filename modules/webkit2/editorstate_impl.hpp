// AUTO-GENERATED

#ifndef _GI_WEBKIT2_EDITORSTATE_IMPL_HPP_
#define _GI_WEBKIT2_EDITORSTATE_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// guint webkit_editor_state_get_typing_attributes (WebKitEditorState* editor_state);
// guint webkit_editor_state_get_typing_attributes (::WebKitEditorState* editor_state);
guint base::EditorStateBase::get_typing_attributes () noexcept
{
  typedef guint (*call_wrap_t) (::WebKitEditorState* editor_state);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_editor_state_get_typing_attributes;
  auto _temp_ret = call_wrap_v ((::WebKitEditorState*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_editor_state_is_copy_available (WebKitEditorState* editor_state);
// gboolean webkit_editor_state_is_copy_available (::WebKitEditorState* editor_state);
bool base::EditorStateBase::is_copy_available () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitEditorState* editor_state);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_editor_state_is_copy_available;
  auto _temp_ret = call_wrap_v ((::WebKitEditorState*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_editor_state_is_cut_available (WebKitEditorState* editor_state);
// gboolean webkit_editor_state_is_cut_available (::WebKitEditorState* editor_state);
bool base::EditorStateBase::is_cut_available () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitEditorState* editor_state);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_editor_state_is_cut_available;
  auto _temp_ret = call_wrap_v ((::WebKitEditorState*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_editor_state_is_paste_available (WebKitEditorState* editor_state);
// gboolean webkit_editor_state_is_paste_available (::WebKitEditorState* editor_state);
bool base::EditorStateBase::is_paste_available () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitEditorState* editor_state);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_editor_state_is_paste_available;
  auto _temp_ret = call_wrap_v ((::WebKitEditorState*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_editor_state_is_redo_available (WebKitEditorState* editor_state);
// gboolean webkit_editor_state_is_redo_available (::WebKitEditorState* editor_state);
bool base::EditorStateBase::is_redo_available () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitEditorState* editor_state);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_editor_state_is_redo_available;
  auto _temp_ret = call_wrap_v ((::WebKitEditorState*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_editor_state_is_undo_available (WebKitEditorState* editor_state);
// gboolean webkit_editor_state_is_undo_available (::WebKitEditorState* editor_state);
bool base::EditorStateBase::is_undo_available () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitEditorState* editor_state);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_editor_state_is_undo_available;
  auto _temp_ret = call_wrap_v ((::WebKitEditorState*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/editorstate_extra_def_impl.hpp>)
#include <webkit2/editorstate_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/editorstate_extra_impl.hpp>)
#include <webkit2/editorstate_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void EditorStateClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitEditorStateClass *methods = (::WebKitEditorStateClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
