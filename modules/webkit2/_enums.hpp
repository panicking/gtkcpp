// AUTO-GENERATED

#ifndef _GI_WEBKIT2__ENUMS_HPP_
#define _GI_WEBKIT2__ENUMS_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

enum class AuthenticationScheme {
  DEFAULT_ = WEBKIT_AUTHENTICATION_SCHEME_DEFAULT,
  HTTP_BASIC_ = WEBKIT_AUTHENTICATION_SCHEME_HTTP_BASIC,
  HTTP_DIGEST_ = WEBKIT_AUTHENTICATION_SCHEME_HTTP_DIGEST,
  HTML_FORM_ = WEBKIT_AUTHENTICATION_SCHEME_HTML_FORM,
  NTLM_ = WEBKIT_AUTHENTICATION_SCHEME_NTLM,
  NEGOTIATE_ = WEBKIT_AUTHENTICATION_SCHEME_NEGOTIATE,
  CLIENT_CERTIFICATE_REQUESTED_ = WEBKIT_AUTHENTICATION_SCHEME_CLIENT_CERTIFICATE_REQUESTED,
  SERVER_TRUST_EVALUATION_REQUESTED_ = WEBKIT_AUTHENTICATION_SCHEME_SERVER_TRUST_EVALUATION_REQUESTED,
  CLIENT_CERTIFICATE_PIN_REQUESTED_ = WEBKIT_AUTHENTICATION_SCHEME_CLIENT_CERTIFICATE_PIN_REQUESTED,
  UNKNOWN_ = WEBKIT_AUTHENTICATION_SCHEME_UNKNOWN,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::AuthenticationScheme>
{ typedef WebKitAuthenticationScheme type; }; 
template<> struct declare_cpptype_of<WebKitAuthenticationScheme>
{ typedef WebKit2::AuthenticationScheme type; }; 

template<> struct declare_gtype_of<WebKit2::AuthenticationScheme>
{ static GType get_type() { return webkit_authentication_scheme_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class AutomationBrowsingContextPresentation {
  WINDOW_ = WEBKIT_AUTOMATION_BROWSING_CONTEXT_PRESENTATION_WINDOW,
  TAB_ = WEBKIT_AUTOMATION_BROWSING_CONTEXT_PRESENTATION_TAB,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::AutomationBrowsingContextPresentation>
{ typedef WebKitAutomationBrowsingContextPresentation type; }; 
template<> struct declare_cpptype_of<WebKitAutomationBrowsingContextPresentation>
{ typedef WebKit2::AutomationBrowsingContextPresentation type; }; 

template<> struct declare_gtype_of<WebKit2::AutomationBrowsingContextPresentation>
{ static GType get_type() { return webkit_automation_browsing_context_presentation_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class AutoplayPolicy {
  ALLOW_ = WEBKIT_AUTOPLAY_ALLOW,
  ALLOW_WITHOUT_SOUND_ = WEBKIT_AUTOPLAY_ALLOW_WITHOUT_SOUND,
  DENY_ = WEBKIT_AUTOPLAY_DENY,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::AutoplayPolicy>
{ typedef WebKitAutoplayPolicy type; }; 
template<> struct declare_cpptype_of<WebKitAutoplayPolicy>
{ typedef WebKit2::AutoplayPolicy type; }; 

template<> struct declare_gtype_of<WebKit2::AutoplayPolicy>
{ static GType get_type() { return webkit_autoplay_policy_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class CacheModel {
  DOCUMENT_VIEWER_ = WEBKIT_CACHE_MODEL_DOCUMENT_VIEWER,
  WEB_BROWSER_ = WEBKIT_CACHE_MODEL_WEB_BROWSER,
  DOCUMENT_BROWSER_ = WEBKIT_CACHE_MODEL_DOCUMENT_BROWSER,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::CacheModel>
{ typedef WebKitCacheModel type; }; 
template<> struct declare_cpptype_of<WebKitCacheModel>
{ typedef WebKit2::CacheModel type; }; 

template<> struct declare_gtype_of<WebKit2::CacheModel>
{ static GType get_type() { return webkit_cache_model_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class ContextMenuAction {
  NO_ACTION_ = WEBKIT_CONTEXT_MENU_ACTION_NO_ACTION,
  OPEN_LINK_ = WEBKIT_CONTEXT_MENU_ACTION_OPEN_LINK,
  OPEN_LINK_IN_NEW_WINDOW_ = WEBKIT_CONTEXT_MENU_ACTION_OPEN_LINK_IN_NEW_WINDOW,
  DOWNLOAD_LINK_TO_DISK_ = WEBKIT_CONTEXT_MENU_ACTION_DOWNLOAD_LINK_TO_DISK,
  COPY_LINK_TO_CLIPBOARD_ = WEBKIT_CONTEXT_MENU_ACTION_COPY_LINK_TO_CLIPBOARD,
  OPEN_IMAGE_IN_NEW_WINDOW_ = WEBKIT_CONTEXT_MENU_ACTION_OPEN_IMAGE_IN_NEW_WINDOW,
  DOWNLOAD_IMAGE_TO_DISK_ = WEBKIT_CONTEXT_MENU_ACTION_DOWNLOAD_IMAGE_TO_DISK,
  COPY_IMAGE_TO_CLIPBOARD_ = WEBKIT_CONTEXT_MENU_ACTION_COPY_IMAGE_TO_CLIPBOARD,
  COPY_IMAGE_URL_TO_CLIPBOARD_ = WEBKIT_CONTEXT_MENU_ACTION_COPY_IMAGE_URL_TO_CLIPBOARD,
  OPEN_FRAME_IN_NEW_WINDOW_ = WEBKIT_CONTEXT_MENU_ACTION_OPEN_FRAME_IN_NEW_WINDOW,
  GO_BACK_ = WEBKIT_CONTEXT_MENU_ACTION_GO_BACK,
  GO_FORWARD_ = WEBKIT_CONTEXT_MENU_ACTION_GO_FORWARD,
  STOP_ = WEBKIT_CONTEXT_MENU_ACTION_STOP,
  RELOAD_ = WEBKIT_CONTEXT_MENU_ACTION_RELOAD,
  COPY_ = WEBKIT_CONTEXT_MENU_ACTION_COPY,
  CUT_ = WEBKIT_CONTEXT_MENU_ACTION_CUT,
  PASTE_ = WEBKIT_CONTEXT_MENU_ACTION_PASTE,
  DELETE_ = WEBKIT_CONTEXT_MENU_ACTION_DELETE,
  SELECT_ALL_ = WEBKIT_CONTEXT_MENU_ACTION_SELECT_ALL,
  INPUT_METHODS_ = WEBKIT_CONTEXT_MENU_ACTION_INPUT_METHODS,
  UNICODE_ = WEBKIT_CONTEXT_MENU_ACTION_UNICODE,
  SPELLING_GUESS_ = WEBKIT_CONTEXT_MENU_ACTION_SPELLING_GUESS,
  NO_GUESSES_FOUND_ = WEBKIT_CONTEXT_MENU_ACTION_NO_GUESSES_FOUND,
  IGNORE_SPELLING_ = WEBKIT_CONTEXT_MENU_ACTION_IGNORE_SPELLING,
  LEARN_SPELLING_ = WEBKIT_CONTEXT_MENU_ACTION_LEARN_SPELLING,
  IGNORE_GRAMMAR_ = WEBKIT_CONTEXT_MENU_ACTION_IGNORE_GRAMMAR,
  FONT_MENU_ = WEBKIT_CONTEXT_MENU_ACTION_FONT_MENU,
  BOLD_ = WEBKIT_CONTEXT_MENU_ACTION_BOLD,
  ITALIC_ = WEBKIT_CONTEXT_MENU_ACTION_ITALIC,
  UNDERLINE_ = WEBKIT_CONTEXT_MENU_ACTION_UNDERLINE,
  OUTLINE_ = WEBKIT_CONTEXT_MENU_ACTION_OUTLINE,
  INSPECT_ELEMENT_ = WEBKIT_CONTEXT_MENU_ACTION_INSPECT_ELEMENT,
  OPEN_VIDEO_IN_NEW_WINDOW_ = WEBKIT_CONTEXT_MENU_ACTION_OPEN_VIDEO_IN_NEW_WINDOW,
  OPEN_AUDIO_IN_NEW_WINDOW_ = WEBKIT_CONTEXT_MENU_ACTION_OPEN_AUDIO_IN_NEW_WINDOW,
  COPY_VIDEO_LINK_TO_CLIPBOARD_ = WEBKIT_CONTEXT_MENU_ACTION_COPY_VIDEO_LINK_TO_CLIPBOARD,
  COPY_AUDIO_LINK_TO_CLIPBOARD_ = WEBKIT_CONTEXT_MENU_ACTION_COPY_AUDIO_LINK_TO_CLIPBOARD,
  TOGGLE_MEDIA_CONTROLS_ = WEBKIT_CONTEXT_MENU_ACTION_TOGGLE_MEDIA_CONTROLS,
  TOGGLE_MEDIA_LOOP_ = WEBKIT_CONTEXT_MENU_ACTION_TOGGLE_MEDIA_LOOP,
  ENTER_VIDEO_FULLSCREEN_ = WEBKIT_CONTEXT_MENU_ACTION_ENTER_VIDEO_FULLSCREEN,
  MEDIA_PLAY_ = WEBKIT_CONTEXT_MENU_ACTION_MEDIA_PLAY,
  MEDIA_PAUSE_ = WEBKIT_CONTEXT_MENU_ACTION_MEDIA_PAUSE,
  MEDIA_MUTE_ = WEBKIT_CONTEXT_MENU_ACTION_MEDIA_MUTE,
  DOWNLOAD_VIDEO_TO_DISK_ = WEBKIT_CONTEXT_MENU_ACTION_DOWNLOAD_VIDEO_TO_DISK,
  DOWNLOAD_AUDIO_TO_DISK_ = WEBKIT_CONTEXT_MENU_ACTION_DOWNLOAD_AUDIO_TO_DISK,
  INSERT_EMOJI_ = WEBKIT_CONTEXT_MENU_ACTION_INSERT_EMOJI,
  PASTE_AS_PLAIN_TEXT_ = WEBKIT_CONTEXT_MENU_ACTION_PASTE_AS_PLAIN_TEXT,
  CUSTOM_ = WEBKIT_CONTEXT_MENU_ACTION_CUSTOM,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::ContextMenuAction>
{ typedef WebKitContextMenuAction type; }; 
template<> struct declare_cpptype_of<WebKitContextMenuAction>
{ typedef WebKit2::ContextMenuAction type; }; 

template<> struct declare_gtype_of<WebKit2::ContextMenuAction>
{ static GType get_type() { return webkit_context_menu_action_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class CookieAcceptPolicy {
  ALWAYS_ = WEBKIT_COOKIE_POLICY_ACCEPT_ALWAYS,
  NEVER_ = WEBKIT_COOKIE_POLICY_ACCEPT_NEVER,
  NO_THIRD_PARTY_ = WEBKIT_COOKIE_POLICY_ACCEPT_NO_THIRD_PARTY,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::CookieAcceptPolicy>
{ typedef WebKitCookieAcceptPolicy type; }; 
template<> struct declare_cpptype_of<WebKitCookieAcceptPolicy>
{ typedef WebKit2::CookieAcceptPolicy type; }; 

template<> struct declare_gtype_of<WebKit2::CookieAcceptPolicy>
{ static GType get_type() { return webkit_cookie_accept_policy_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class CookiePersistentStorage {
  TEXT_ = WEBKIT_COOKIE_PERSISTENT_STORAGE_TEXT,
  SQLITE_ = WEBKIT_COOKIE_PERSISTENT_STORAGE_SQLITE,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::CookiePersistentStorage>
{ typedef WebKitCookiePersistentStorage type; }; 
template<> struct declare_cpptype_of<WebKitCookiePersistentStorage>
{ typedef WebKit2::CookiePersistentStorage type; }; 

template<> struct declare_gtype_of<WebKit2::CookiePersistentStorage>
{ static GType get_type() { return webkit_cookie_persistent_storage_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class CredentialPersistence {
  NONE_ = WEBKIT_CREDENTIAL_PERSISTENCE_NONE,
  FOR_SESSION_ = WEBKIT_CREDENTIAL_PERSISTENCE_FOR_SESSION,
  PERMANENT_ = WEBKIT_CREDENTIAL_PERSISTENCE_PERMANENT,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::CredentialPersistence>
{ typedef WebKitCredentialPersistence type; }; 
template<> struct declare_cpptype_of<WebKitCredentialPersistence>
{ typedef WebKit2::CredentialPersistence type; }; 

template<> struct declare_gtype_of<WebKit2::CredentialPersistence>
{ static GType get_type() { return webkit_credential_persistence_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class DownloadError {
  NETWORK_ = WEBKIT_DOWNLOAD_ERROR_NETWORK,
  CANCELLED_BY_USER_ = WEBKIT_DOWNLOAD_ERROR_CANCELLED_BY_USER,
  DESTINATION_ = WEBKIT_DOWNLOAD_ERROR_DESTINATION,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::DownloadError>
{ typedef WebKitDownloadError type; }; 
template<> struct declare_cpptype_of<WebKitDownloadError>
{ typedef WebKit2::DownloadError type; }; 

template<> struct declare_gtype_of<WebKit2::DownloadError>
{ static GType get_type() { return webkit_download_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class FaviconDatabaseError {
  NOT_INITIALIZED_ = WEBKIT_FAVICON_DATABASE_ERROR_NOT_INITIALIZED,
  FAVICON_NOT_FOUND_ = WEBKIT_FAVICON_DATABASE_ERROR_FAVICON_NOT_FOUND,
  FAVICON_UNKNOWN_ = WEBKIT_FAVICON_DATABASE_ERROR_FAVICON_UNKNOWN,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::FaviconDatabaseError>
{ typedef WebKitFaviconDatabaseError type; }; 
template<> struct declare_cpptype_of<WebKitFaviconDatabaseError>
{ typedef WebKit2::FaviconDatabaseError type; }; 

template<> struct declare_gtype_of<WebKit2::FaviconDatabaseError>
{ static GType get_type() { return webkit_favicon_database_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class HardwareAccelerationPolicy {
  ON_DEMAND_ = WEBKIT_HARDWARE_ACCELERATION_POLICY_ON_DEMAND,
  ALWAYS_ = WEBKIT_HARDWARE_ACCELERATION_POLICY_ALWAYS,
  NEVER_ = WEBKIT_HARDWARE_ACCELERATION_POLICY_NEVER,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::HardwareAccelerationPolicy>
{ typedef WebKitHardwareAccelerationPolicy type; }; 
template<> struct declare_cpptype_of<WebKitHardwareAccelerationPolicy>
{ typedef WebKit2::HardwareAccelerationPolicy type; }; 

template<> struct declare_gtype_of<WebKit2::HardwareAccelerationPolicy>
{ static GType get_type() { return webkit_hardware_acceleration_policy_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class InputPurpose {
  FREE_FORM_ = WEBKIT_INPUT_PURPOSE_FREE_FORM,
  DIGITS_ = WEBKIT_INPUT_PURPOSE_DIGITS,
  NUMBER_ = WEBKIT_INPUT_PURPOSE_NUMBER,
  PHONE_ = WEBKIT_INPUT_PURPOSE_PHONE,
  URL_ = WEBKIT_INPUT_PURPOSE_URL,
  EMAIL_ = WEBKIT_INPUT_PURPOSE_EMAIL,
  PASSWORD_ = WEBKIT_INPUT_PURPOSE_PASSWORD,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::InputPurpose>
{ typedef WebKitInputPurpose type; }; 
template<> struct declare_cpptype_of<WebKitInputPurpose>
{ typedef WebKit2::InputPurpose type; }; 

template<> struct declare_gtype_of<WebKit2::InputPurpose>
{ static GType get_type() { return webkit_input_purpose_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class InsecureContentEvent {
  RUN_ = WEBKIT_INSECURE_CONTENT_RUN,
  DISPLAYED_ = WEBKIT_INSECURE_CONTENT_DISPLAYED,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::InsecureContentEvent>
{ typedef WebKitInsecureContentEvent type; }; 
template<> struct declare_cpptype_of<WebKitInsecureContentEvent>
{ typedef WebKit2::InsecureContentEvent type; }; 

template<> struct declare_gtype_of<WebKit2::InsecureContentEvent>
{ static GType get_type() { return webkit_insecure_content_event_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class JavascriptError {
  FAILED_ = WEBKIT_JAVASCRIPT_ERROR_SCRIPT_FAILED,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::JavascriptError>
{ typedef WebKitJavascriptError type; }; 
template<> struct declare_cpptype_of<WebKitJavascriptError>
{ typedef WebKit2::JavascriptError type; }; 

template<> struct declare_gtype_of<WebKit2::JavascriptError>
{ static GType get_type() { return webkit_javascript_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class LoadEvent {
  STARTED_ = WEBKIT_LOAD_STARTED,
  REDIRECTED_ = WEBKIT_LOAD_REDIRECTED,
  COMMITTED_ = WEBKIT_LOAD_COMMITTED,
  FINISHED_ = WEBKIT_LOAD_FINISHED,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::LoadEvent>
{ typedef WebKitLoadEvent type; }; 
template<> struct declare_cpptype_of<WebKitLoadEvent>
{ typedef WebKit2::LoadEvent type; }; 

template<> struct declare_gtype_of<WebKit2::LoadEvent>
{ static GType get_type() { return webkit_load_event_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class MediaCaptureState {
  NONE_ = WEBKIT_MEDIA_CAPTURE_STATE_NONE,
  ACTIVE_ = WEBKIT_MEDIA_CAPTURE_STATE_ACTIVE,
  MUTED_ = WEBKIT_MEDIA_CAPTURE_STATE_MUTED,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::MediaCaptureState>
{ typedef WebKitMediaCaptureState type; }; 
template<> struct declare_cpptype_of<WebKitMediaCaptureState>
{ typedef WebKit2::MediaCaptureState type; }; 

template<> struct declare_gtype_of<WebKit2::MediaCaptureState>
{ static GType get_type() { return webkit_media_capture_state_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class NavigationType {
  LINK_CLICKED_ = WEBKIT_NAVIGATION_TYPE_LINK_CLICKED,
  FORM_SUBMITTED_ = WEBKIT_NAVIGATION_TYPE_FORM_SUBMITTED,
  BACK_FORWARD_ = WEBKIT_NAVIGATION_TYPE_BACK_FORWARD,
  RELOAD_ = WEBKIT_NAVIGATION_TYPE_RELOAD,
  FORM_RESUBMITTED_ = WEBKIT_NAVIGATION_TYPE_FORM_RESUBMITTED,
  OTHER_ = WEBKIT_NAVIGATION_TYPE_OTHER,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::NavigationType>
{ typedef WebKitNavigationType type; }; 
template<> struct declare_cpptype_of<WebKitNavigationType>
{ typedef WebKit2::NavigationType type; }; 

template<> struct declare_gtype_of<WebKit2::NavigationType>
{ static GType get_type() { return webkit_navigation_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class NetworkError {
  FAILED_ = WEBKIT_NETWORK_ERROR_FAILED,
  TRANSPORT_ = WEBKIT_NETWORK_ERROR_TRANSPORT,
  UNKNOWN_PROTOCOL_ = WEBKIT_NETWORK_ERROR_UNKNOWN_PROTOCOL,
  CANCELLED_ = WEBKIT_NETWORK_ERROR_CANCELLED,
  FILE_DOES_NOT_EXIST_ = WEBKIT_NETWORK_ERROR_FILE_DOES_NOT_EXIST,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::NetworkError>
{ typedef WebKitNetworkError type; }; 
template<> struct declare_cpptype_of<WebKitNetworkError>
{ typedef WebKit2::NetworkError type; }; 

template<> struct declare_gtype_of<WebKit2::NetworkError>
{ static GType get_type() { return webkit_network_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class NetworkProxyMode {
  DEFAULT_ = WEBKIT_NETWORK_PROXY_MODE_DEFAULT,
  NO_PROXY_ = WEBKIT_NETWORK_PROXY_MODE_NO_PROXY,
  CUSTOM_ = WEBKIT_NETWORK_PROXY_MODE_CUSTOM,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::NetworkProxyMode>
{ typedef WebKitNetworkProxyMode type; }; 
template<> struct declare_cpptype_of<WebKitNetworkProxyMode>
{ typedef WebKit2::NetworkProxyMode type; }; 

template<> struct declare_gtype_of<WebKit2::NetworkProxyMode>
{ static GType get_type() { return webkit_network_proxy_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class PluginError {
  FAILED_ = WEBKIT_PLUGIN_ERROR_FAILED,
  CANNOT_FIND_PLUGIN_ = WEBKIT_PLUGIN_ERROR_CANNOT_FIND_PLUGIN,
  CANNOT_LOAD_PLUGIN_ = WEBKIT_PLUGIN_ERROR_CANNOT_LOAD_PLUGIN,
  JAVA_UNAVAILABLE_ = WEBKIT_PLUGIN_ERROR_JAVA_UNAVAILABLE,
  CONNECTION_CANCELLED_ = WEBKIT_PLUGIN_ERROR_CONNECTION_CANCELLED,
  WILL_HANDLE_LOAD_ = WEBKIT_PLUGIN_ERROR_WILL_HANDLE_LOAD,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::PluginError>
{ typedef WebKitPluginError type; }; 
template<> struct declare_cpptype_of<WebKitPluginError>
{ typedef WebKit2::PluginError type; }; 

template<> struct declare_gtype_of<WebKit2::PluginError>
{ static GType get_type() { return webkit_plugin_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class PolicyDecisionType {
  NAVIGATION_ACTION_ = WEBKIT_POLICY_DECISION_TYPE_NAVIGATION_ACTION,
  NEW_WINDOW_ACTION_ = WEBKIT_POLICY_DECISION_TYPE_NEW_WINDOW_ACTION,
  RESPONSE_ = WEBKIT_POLICY_DECISION_TYPE_RESPONSE,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::PolicyDecisionType>
{ typedef WebKitPolicyDecisionType type; }; 
template<> struct declare_cpptype_of<WebKitPolicyDecisionType>
{ typedef WebKit2::PolicyDecisionType type; }; 

template<> struct declare_gtype_of<WebKit2::PolicyDecisionType>
{ static GType get_type() { return webkit_policy_decision_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class PolicyError {
  FAILED_ = WEBKIT_POLICY_ERROR_FAILED,
  CANNOT_SHOW_MIME_TYPE_ = WEBKIT_POLICY_ERROR_CANNOT_SHOW_MIME_TYPE,
  CANNOT_SHOW_URI_ = WEBKIT_POLICY_ERROR_CANNOT_SHOW_URI,
  FRAME_LOAD_INTERRUPTED_BY_POLICY_CHANGE_ = WEBKIT_POLICY_ERROR_FRAME_LOAD_INTERRUPTED_BY_POLICY_CHANGE,
  CANNOT_USE_RESTRICTED_PORT_ = WEBKIT_POLICY_ERROR_CANNOT_USE_RESTRICTED_PORT,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::PolicyError>
{ typedef WebKitPolicyError type; }; 
template<> struct declare_cpptype_of<WebKitPolicyError>
{ typedef WebKit2::PolicyError type; }; 

template<> struct declare_gtype_of<WebKit2::PolicyError>
{ static GType get_type() { return webkit_policy_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class PrintError {
  GENERAL_ = WEBKIT_PRINT_ERROR_GENERAL,
  PRINTER_NOT_FOUND_ = WEBKIT_PRINT_ERROR_PRINTER_NOT_FOUND,
  INVALID_PAGE_RANGE_ = WEBKIT_PRINT_ERROR_INVALID_PAGE_RANGE,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::PrintError>
{ typedef WebKitPrintError type; }; 
template<> struct declare_cpptype_of<WebKitPrintError>
{ typedef WebKit2::PrintError type; }; 

template<> struct declare_gtype_of<WebKit2::PrintError>
{ static GType get_type() { return webkit_print_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class PrintOperationResponse {
  PRINT_ = WEBKIT_PRINT_OPERATION_RESPONSE_PRINT,
  CANCEL_ = WEBKIT_PRINT_OPERATION_RESPONSE_CANCEL,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::PrintOperationResponse>
{ typedef WebKitPrintOperationResponse type; }; 
template<> struct declare_cpptype_of<WebKitPrintOperationResponse>
{ typedef WebKit2::PrintOperationResponse type; }; 

template<> struct declare_gtype_of<WebKit2::PrintOperationResponse>
{ static GType get_type() { return webkit_print_operation_response_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class ProcessModel {
  SHARED_SECONDARY_PROCESS_ = WEBKIT_PROCESS_MODEL_SHARED_SECONDARY_PROCESS,
  MULTIPLE_SECONDARY_PROCESSES_ = WEBKIT_PROCESS_MODEL_MULTIPLE_SECONDARY_PROCESSES,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::ProcessModel>
{ typedef WebKitProcessModel type; }; 
template<> struct declare_cpptype_of<WebKitProcessModel>
{ typedef WebKit2::ProcessModel type; }; 

template<> struct declare_gtype_of<WebKit2::ProcessModel>
{ static GType get_type() { return webkit_process_model_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class SaveMode {
  MHTML_ = WEBKIT_SAVE_MODE_MHTML,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::SaveMode>
{ typedef WebKitSaveMode type; }; 
template<> struct declare_cpptype_of<WebKitSaveMode>
{ typedef WebKit2::SaveMode type; }; 

template<> struct declare_gtype_of<WebKit2::SaveMode>
{ static GType get_type() { return webkit_save_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class ScriptDialogType {
  ALERT_ = WEBKIT_SCRIPT_DIALOG_ALERT,
  CONFIRM_ = WEBKIT_SCRIPT_DIALOG_CONFIRM,
  PROMPT_ = WEBKIT_SCRIPT_DIALOG_PROMPT,
  BEFORE_UNLOAD_CONFIRM_ = WEBKIT_SCRIPT_DIALOG_BEFORE_UNLOAD_CONFIRM,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::ScriptDialogType>
{ typedef WebKitScriptDialogType type; }; 
template<> struct declare_cpptype_of<WebKitScriptDialogType>
{ typedef WebKit2::ScriptDialogType type; }; 

template<> struct declare_gtype_of<WebKit2::ScriptDialogType>
{ static GType get_type() { return webkit_script_dialog_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class SnapshotError {
  CREATE_ = WEBKIT_SNAPSHOT_ERROR_FAILED_TO_CREATE,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::SnapshotError>
{ typedef WebKitSnapshotError type; }; 
template<> struct declare_cpptype_of<WebKitSnapshotError>
{ typedef WebKit2::SnapshotError type; }; 

template<> struct declare_gtype_of<WebKit2::SnapshotError>
{ static GType get_type() { return webkit_snapshot_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class SnapshotRegion {
  VISIBLE_ = WEBKIT_SNAPSHOT_REGION_VISIBLE,
  FULL_DOCUMENT_ = WEBKIT_SNAPSHOT_REGION_FULL_DOCUMENT,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::SnapshotRegion>
{ typedef WebKitSnapshotRegion type; }; 
template<> struct declare_cpptype_of<WebKitSnapshotRegion>
{ typedef WebKit2::SnapshotRegion type; }; 

template<> struct declare_gtype_of<WebKit2::SnapshotRegion>
{ static GType get_type() { return webkit_snapshot_region_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class TLSErrorsPolicy {
  IGNORE_ = WEBKIT_TLS_ERRORS_POLICY_IGNORE,
  FAIL_ = WEBKIT_TLS_ERRORS_POLICY_FAIL,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::TLSErrorsPolicy>
{ typedef WebKitTLSErrorsPolicy type; }; 
template<> struct declare_cpptype_of<WebKitTLSErrorsPolicy>
{ typedef WebKit2::TLSErrorsPolicy type; }; 

template<> struct declare_gtype_of<WebKit2::TLSErrorsPolicy>
{ static GType get_type() { return webkit_tls_errors_policy_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class UserContentFilterError {
  INVALID_SOURCE_ = WEBKIT_USER_CONTENT_FILTER_ERROR_INVALID_SOURCE,
  NOT_FOUND_ = WEBKIT_USER_CONTENT_FILTER_ERROR_NOT_FOUND,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::UserContentFilterError>
{ typedef WebKitUserContentFilterError type; }; 
template<> struct declare_cpptype_of<WebKitUserContentFilterError>
{ typedef WebKit2::UserContentFilterError type; }; 

template<> struct declare_gtype_of<WebKit2::UserContentFilterError>
{ static GType get_type() { return webkit_user_content_filter_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class UserContentInjectedFrames {
  ALL_FRAMES_ = WEBKIT_USER_CONTENT_INJECT_ALL_FRAMES,
  TOP_FRAME_ = WEBKIT_USER_CONTENT_INJECT_TOP_FRAME,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::UserContentInjectedFrames>
{ typedef WebKitUserContentInjectedFrames type; }; 
template<> struct declare_cpptype_of<WebKitUserContentInjectedFrames>
{ typedef WebKit2::UserContentInjectedFrames type; }; 

template<> struct declare_gtype_of<WebKit2::UserContentInjectedFrames>
{ static GType get_type() { return webkit_user_content_injected_frames_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class UserMessageError {
  MESSAGE_ = WEBKIT_USER_MESSAGE_UNHANDLED_MESSAGE,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::UserMessageError>
{ typedef WebKitUserMessageError type; }; 
template<> struct declare_cpptype_of<WebKitUserMessageError>
{ typedef WebKit2::UserMessageError type; }; 

template<> struct declare_gtype_of<WebKit2::UserMessageError>
{ static GType get_type() { return webkit_user_message_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class UserScriptInjectionTime {
  START_ = WEBKIT_USER_SCRIPT_INJECT_AT_DOCUMENT_START,
  END_ = WEBKIT_USER_SCRIPT_INJECT_AT_DOCUMENT_END,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::UserScriptInjectionTime>
{ typedef WebKitUserScriptInjectionTime type; }; 
template<> struct declare_cpptype_of<WebKitUserScriptInjectionTime>
{ typedef WebKit2::UserScriptInjectionTime type; }; 

template<> struct declare_gtype_of<WebKit2::UserScriptInjectionTime>
{ static GType get_type() { return webkit_user_script_injection_time_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class UserStyleLevel {
  USER_ = WEBKIT_USER_STYLE_LEVEL_USER,
  AUTHOR_ = WEBKIT_USER_STYLE_LEVEL_AUTHOR,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::UserStyleLevel>
{ typedef WebKitUserStyleLevel type; }; 
template<> struct declare_cpptype_of<WebKitUserStyleLevel>
{ typedef WebKit2::UserStyleLevel type; }; 

template<> struct declare_gtype_of<WebKit2::UserStyleLevel>
{ static GType get_type() { return webkit_user_style_level_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

enum class WebProcessTerminationReason {
  CRASHED_ = WEBKIT_WEB_PROCESS_CRASHED,
  EXCEEDED_MEMORY_LIMIT_ = WEBKIT_WEB_PROCESS_EXCEEDED_MEMORY_LIMIT,
  TERMINATED_BY_API_ = WEBKIT_WEB_PROCESS_TERMINATED_BY_API,
};

} // namespace WebKit2

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<WebKit2::WebProcessTerminationReason>
{ typedef WebKitWebProcessTerminationReason type; }; 
template<> struct declare_cpptype_of<WebKitWebProcessTerminationReason>
{ typedef WebKit2::WebProcessTerminationReason type; }; 

template<> struct declare_gtype_of<WebKit2::WebProcessTerminationReason>
{ static GType get_type() { return webkit_web_process_termination_reason_get_type(); } };


} // namespace repository

} // namespace gi


#endif
