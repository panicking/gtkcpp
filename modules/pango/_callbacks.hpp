// AUTO-GENERATED

#ifndef _GI_PANGO__CALLBACKS_HPP_
#define _GI_PANGO__CALLBACKS_HPP_

namespace gi {

namespace repository {

namespace Pango {

class Attribute;
class Font;
class Fontset;

// typedef gpointer (*PangoAttrDataCopyFunc) (gconstpointer user_data);
// typedef void* (*PangoAttrDataCopyFunc) (const void* user_data);
// SKIP; invalid type user_data, not a callback since no user_data

// typedef gboolean (*PangoAttrFilterFunc) (PangoAttribute* attribute, gpointer user_data);
// typedef gboolean (*PangoAttrFilterFunc) (::PangoAttribute* attribute, void* user_data);
typedef gi::detail::callback<bool(Pango::Attribute attribute), gi::transfer_none_t, gi::transfer_none_t> AttrFilterFunc;

// typedef gboolean (*PangoFontsetForeachFunc) (PangoFontset* fontset, PangoFont* font, gpointer user_data);
// typedef gboolean (*PangoFontsetForeachFunc) (::PangoFontset* fontset, ::PangoFont* font, void* user_data);
typedef gi::detail::callback<bool(Pango::Fontset fontset, Pango::Font font), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> FontsetForeachFunc;

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
