// AUTO-GENERATED

#ifndef _GI_WEBKIT2__FLAGS_HPP_
#define _GI_WEBKIT2__FLAGS_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

#if defined(EditorTypingAttributes)
#undef EditorTypingAttributes
#endif
enum class EditorTypingAttributes {
  NONE_ = WEBKIT_EDITOR_TYPING_ATTRIBUTE_NONE,
  BOLD_ = WEBKIT_EDITOR_TYPING_ATTRIBUTE_BOLD,
  ITALIC_ = WEBKIT_EDITOR_TYPING_ATTRIBUTE_ITALIC,
  UNDERLINE_ = WEBKIT_EDITOR_TYPING_ATTRIBUTE_UNDERLINE,
  STRIKETHROUGH_ = WEBKIT_EDITOR_TYPING_ATTRIBUTE_STRIKETHROUGH,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::EditorTypingAttributes>
{ typedef WebKitEditorTypingAttributes type; }; 
template<> struct declare_cpptype_of<WebKitEditorTypingAttributes>
{ typedef WebKit2::EditorTypingAttributes type; }; 

template<> struct declare_gtype_of<WebKit2::EditorTypingAttributes>
{ static GType get_type() { return webkit_editor_typing_attributes_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

#if defined(FindOptions)
#undef FindOptions
#endif
enum class FindOptions {
  NONE_ = WEBKIT_FIND_OPTIONS_NONE,
  CASE_INSENSITIVE_ = WEBKIT_FIND_OPTIONS_CASE_INSENSITIVE,
  AT_WORD_STARTS_ = WEBKIT_FIND_OPTIONS_AT_WORD_STARTS,
  TREAT_MEDIAL_CAPITAL_AS_WORD_START_ = WEBKIT_FIND_OPTIONS_TREAT_MEDIAL_CAPITAL_AS_WORD_START,
  BACKWARDS_ = WEBKIT_FIND_OPTIONS_BACKWARDS,
  WRAP_AROUND_ = WEBKIT_FIND_OPTIONS_WRAP_AROUND,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::FindOptions>
{ typedef WebKitFindOptions type; }; 
template<> struct declare_cpptype_of<WebKitFindOptions>
{ typedef WebKit2::FindOptions type; }; 

template<> struct declare_gtype_of<WebKit2::FindOptions>
{ static GType get_type() { return webkit_find_options_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

#if defined(HitTestResultContext)
#undef HitTestResultContext
#endif
enum class HitTestResultContext {
  DOCUMENT_ = WEBKIT_HIT_TEST_RESULT_CONTEXT_DOCUMENT,
  LINK_ = WEBKIT_HIT_TEST_RESULT_CONTEXT_LINK,
  IMAGE_ = WEBKIT_HIT_TEST_RESULT_CONTEXT_IMAGE,
  MEDIA_ = WEBKIT_HIT_TEST_RESULT_CONTEXT_MEDIA,
  EDITABLE_ = WEBKIT_HIT_TEST_RESULT_CONTEXT_EDITABLE,
  SCROLLBAR_ = WEBKIT_HIT_TEST_RESULT_CONTEXT_SCROLLBAR,
  SELECTION_ = WEBKIT_HIT_TEST_RESULT_CONTEXT_SELECTION,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::HitTestResultContext>
{ typedef WebKitHitTestResultContext type; }; 
template<> struct declare_cpptype_of<WebKitHitTestResultContext>
{ typedef WebKit2::HitTestResultContext type; }; 

template<> struct declare_gtype_of<WebKit2::HitTestResultContext>
{ static GType get_type() { return webkit_hit_test_result_context_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

#if defined(InputHints)
#undef InputHints
#endif
enum class InputHints {
  NONE_ = WEBKIT_INPUT_HINT_NONE,
  SPELLCHECK_ = WEBKIT_INPUT_HINT_SPELLCHECK,
  LOWERCASE_ = WEBKIT_INPUT_HINT_LOWERCASE,
  UPPERCASE_CHARS_ = WEBKIT_INPUT_HINT_UPPERCASE_CHARS,
  UPPERCASE_WORDS_ = WEBKIT_INPUT_HINT_UPPERCASE_WORDS,
  UPPERCASE_SENTENCES_ = WEBKIT_INPUT_HINT_UPPERCASE_SENTENCES,
  INHIBIT_OSK_ = WEBKIT_INPUT_HINT_INHIBIT_OSK,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::InputHints>
{ typedef WebKitInputHints type; }; 
template<> struct declare_cpptype_of<WebKitInputHints>
{ typedef WebKit2::InputHints type; }; 

template<> struct declare_gtype_of<WebKit2::InputHints>
{ static GType get_type() { return webkit_input_hints_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

#if defined(SnapshotOptions)
#undef SnapshotOptions
#endif
enum class SnapshotOptions {
  NONE_ = WEBKIT_SNAPSHOT_OPTIONS_NONE,
  INCLUDE_SELECTION_HIGHLIGHTING_ = WEBKIT_SNAPSHOT_OPTIONS_INCLUDE_SELECTION_HIGHLIGHTING,
  TRANSPARENT_BACKGROUND_ = WEBKIT_SNAPSHOT_OPTIONS_TRANSPARENT_BACKGROUND,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::SnapshotOptions>
{ typedef WebKitSnapshotOptions type; }; 
template<> struct declare_cpptype_of<WebKitSnapshotOptions>
{ typedef WebKit2::SnapshotOptions type; }; 

template<> struct declare_gtype_of<WebKit2::SnapshotOptions>
{ static GType get_type() { return webkit_snapshot_options_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

#if defined(WebsiteDataTypes)
#undef WebsiteDataTypes
#endif
enum class WebsiteDataTypes {
  MEMORY_CACHE_ = WEBKIT_WEBSITE_DATA_MEMORY_CACHE,
  DISK_CACHE_ = WEBKIT_WEBSITE_DATA_DISK_CACHE,
  OFFLINE_APPLICATION_CACHE_ = WEBKIT_WEBSITE_DATA_OFFLINE_APPLICATION_CACHE,
  SESSION_STORAGE_ = WEBKIT_WEBSITE_DATA_SESSION_STORAGE,
  LOCAL_STORAGE_ = WEBKIT_WEBSITE_DATA_LOCAL_STORAGE,
  WEBSQL_DATABASES_ = WEBKIT_WEBSITE_DATA_WEBSQL_DATABASES,
  INDEXEDDB_DATABASES_ = WEBKIT_WEBSITE_DATA_INDEXEDDB_DATABASES,
  PLUGIN_DATA_ = WEBKIT_WEBSITE_DATA_PLUGIN_DATA,
  COOKIES_ = WEBKIT_WEBSITE_DATA_COOKIES,
  DEVICE_ID_HASH_SALT_ = WEBKIT_WEBSITE_DATA_DEVICE_ID_HASH_SALT,
  HSTS_CACHE_ = WEBKIT_WEBSITE_DATA_HSTS_CACHE,
  ITP_ = WEBKIT_WEBSITE_DATA_ITP,
  SERVICE_WORKER_REGISTRATIONS_ = WEBKIT_WEBSITE_DATA_SERVICE_WORKER_REGISTRATIONS,
  DOM_CACHE_ = WEBKIT_WEBSITE_DATA_DOM_CACHE,
  ALL_ = WEBKIT_WEBSITE_DATA_ALL,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::WebsiteDataTypes>
{ typedef WebKitWebsiteDataTypes type; }; 
template<> struct declare_cpptype_of<WebKitWebsiteDataTypes>
{ typedef WebKit2::WebsiteDataTypes type; }; 

template<> struct declare_gtype_of<WebKit2::WebsiteDataTypes>
{ static GType get_type() { return webkit_website_data_types_get_type(); } };


} // namespace repository

} // namespace gi


#endif
