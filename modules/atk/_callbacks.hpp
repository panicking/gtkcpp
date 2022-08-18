// AUTO-GENERATED

#ifndef _GI_ATK__CALLBACKS_HPP_
#define _GI_ATK__CALLBACKS_HPP_

namespace gi {

namespace repository {

namespace Atk {

class KeyEventStruct;
class Object;

// typedef void (*AtkEventListener) (AtkObject* obj);
// typedef void (*AtkEventListener) (::AtkObject* obj);
// SKIP; not a callback since no user_data

// typedef void (*AtkEventListenerInit) ();
// typedef void (*AtkEventListenerInit) ();
// SKIP; not a callback since no user_data

// typedef gboolean (*AtkFunction) (gpointer user_data);
// typedef gboolean (*AtkFunction) (void* user_data);
typedef gi::detail::callback<bool(), gi::transfer_none_t> Function;

// typedef gint (*AtkKeySnoopFunc) (AtkKeyEventStruct* event, gpointer user_data);
// typedef gint (*AtkKeySnoopFunc) (::AtkKeyEventStruct* event, void* user_data);
typedef gi::detail::callback<gint(Atk::KeyEventStruct event), gi::transfer_none_t, gi::transfer_none_t> KeySnoopFunc;

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
