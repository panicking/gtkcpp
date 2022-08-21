// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF__CALLBACKS_HPP_
#define _GI_GDKPIXBUF__CALLBACKS_HPP_

namespace gi {

namespace repository {

namespace GdkPixbuf {

class Pixbuf;
class PixbufAnimation;
class PixbufFormat;
class PixbufModule;

// typedef void (*GdkPixbufDestroyNotify) (gpointer data);
// typedef void (*GdkPixbufDestroyNotify) (void* data);
// SKIP; inconsistent array info

// typedef gpointer (*GdkPixbufModuleBeginLoadFunc) (GdkPixbufModuleSizeFunc size_func, GdkPixbufModulePreparedFunc prepared_func, GdkPixbufModuleUpdatedFunc updated_func, gpointer user_data, GError ** error);
// typedef void* (*GdkPixbufModuleBeginLoadFunc) (GdkPixbuf::PixbufModuleSizeFunc::cfunction_type size_func, GdkPixbuf::PixbufModulePreparedFunc::cfunction_type prepared_func, GdkPixbuf::PixbufModuleUpdatedFunc::cfunction_type updated_func, void* user_data, GError ** error);
// IGNORE; not introspectable, callback callback parameter not supported, callback callback parameter not supported, callback callback parameter not supported, callee GError not supported

// typedef void (*GdkPixbufModuleFillInfoFunc) (GdkPixbufFormat* info);
// typedef void (*GdkPixbufModuleFillInfoFunc) (::GdkPixbufFormat* info);
// SKIP; not a callback since no user_data

// typedef void (*GdkPixbufModuleFillVtableFunc) (GdkPixbufModule* module_);
// typedef void (*GdkPixbufModuleFillVtableFunc) (::GdkPixbufModule* module_);
// SKIP; not a callback since no user_data

// typedef gboolean (*GdkPixbufModuleIncrementLoadFunc) (gpointer context, const guchar* buf, guint size, GError ** error);
// typedef gboolean (*GdkPixbufModuleIncrementLoadFunc) (void* context, const guint8* buf, guint size, GError ** error);
// SKIP; callback container parameter not supported, callee GError not supported

// typedef GdkPixbufAnimation* (*GdkPixbufModuleLoadAnimationFunc) (FILE* f, GError ** error);
// typedef ::GdkPixbufAnimation* (*GdkPixbufModuleLoadAnimationFunc) (void* f, GError ** error);
// SKIP; callee GError not supported

// typedef GdkPixbuf* (*GdkPixbufModuleLoadFunc) (FILE* f, GError ** error);
// typedef ::GdkPixbuf* (*GdkPixbufModuleLoadFunc) (void* f, GError ** error);
// SKIP; callee GError not supported

// typedef GdkPixbuf* (*GdkPixbufModuleLoadXpmDataFunc) (const char** data);
// typedef ::GdkPixbuf* (*GdkPixbufModuleLoadXpmDataFunc) (const char** data);
// SKIP; callback container parameter not supported

// typedef void (*GdkPixbufModulePreparedFunc) (GdkPixbuf* pixbuf, GdkPixbufAnimation* anim, gpointer user_data);
// typedef void (*GdkPixbufModulePreparedFunc) (::GdkPixbuf* pixbuf, ::GdkPixbufAnimation* anim, void* user_data);
typedef gi::detail::callback<void(GdkPixbuf::Pixbuf pixbuf, GdkPixbuf::PixbufAnimation anim), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> PixbufModulePreparedFunc;

// typedef gboolean (*GdkPixbufModuleSaveCallbackFunc) (GdkPixbufSaveFunc save_func, gpointer user_data, GdkPixbuf* pixbuf, gchar** option_keys, gchar** option_values, GError ** error);
// typedef gboolean (*GdkPixbufModuleSaveCallbackFunc) (GdkPixbuf::PixbufSaveFunc::cfunction_type save_func, void* user_data, ::GdkPixbuf* pixbuf, char** option_keys, char** option_values, GError ** error);
// IGNORE; not introspectable, callback callback parameter not supported, callback container parameter not supported, callback container parameter not supported, callee GError not supported

// typedef gboolean (*GdkPixbufModuleSaveFunc) (FILE* f, GdkPixbuf* pixbuf, gchar** param_keys, gchar** param_values, GError ** error);
// typedef gboolean (*GdkPixbufModuleSaveFunc) (void* f, ::GdkPixbuf* pixbuf, char** param_keys, char** param_values, GError ** error);
// SKIP; callback container parameter not supported, callback container parameter not supported, callee GError not supported

// typedef gboolean (*GdkPixbufModuleSaveOptionSupportedFunc) (const gchar* option_key);
// typedef gboolean (*GdkPixbufModuleSaveOptionSupportedFunc) (const char* option_key);
// SKIP; not a callback since no user_data

// typedef void (*GdkPixbufModuleSizeFunc) (gint* width, gint* height, gpointer user_data);
// typedef void (*GdkPixbufModuleSizeFunc) (gint width, gint height, void* user_data);
// SKIP; inconsistent in height pointer depth (1 vs 0), inconsistent in width pointer depth (1 vs 0)

// typedef gboolean (*GdkPixbufModuleStopLoadFunc) (gpointer context, GError ** error);
// typedef gboolean (*GdkPixbufModuleStopLoadFunc) (void* context, GError ** error);
// SKIP; callee GError not supported

// typedef void (*GdkPixbufModuleUpdatedFunc) (GdkPixbuf* pixbuf, int x, int y, int width, int height, gpointer user_data);
// typedef void (*GdkPixbufModuleUpdatedFunc) (::GdkPixbuf* pixbuf, gint x, gint y, gint width, gint height, void* user_data);
typedef gi::detail::callback<void(GdkPixbuf::Pixbuf pixbuf, gint x, gint y, gint width, gint height), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> PixbufModuleUpdatedFunc;

// typedef gboolean (*GdkPixbufSaveFunc) (const gchar* buf, gsize count, GError** error, gpointer data);
// typedef gboolean (*GdkPixbufSaveFunc) (const guint8* buf, gsize count, ::GError** error, void* data);
// SKIP; callback container parameter not supported, callback out parameter not supported

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi

#endif
