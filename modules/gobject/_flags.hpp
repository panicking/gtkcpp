// AUTO-GENERATED

#ifndef _GI_GOBJECT__FLAGS_HPP_
#define _GI_GOBJECT__FLAGS_HPP_

namespace gi {

namespace repository {

namespace GObject {

enum class BindingFlags {
  DEFAULT_ = G_BINDING_DEFAULT,
  BIDIRECTIONAL_ = G_BINDING_BIDIRECTIONAL,
  SYNC_CREATE_ = G_BINDING_SYNC_CREATE,
  INVERT_BOOLEAN_ = G_BINDING_INVERT_BOOLEAN,
};

} // namespace GObject

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GObject::BindingFlags>
{ typedef GBindingFlags type; }; 
template<> struct declare_cpptype_of<GBindingFlags>
{ typedef GObject::BindingFlags type; }; 

template<> struct declare_gtype_of<GObject::BindingFlags>
{ static GType get_type() { return g_binding_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GObject {

enum class ConnectFlags {
  AFTER_ = G_CONNECT_AFTER,
  SWAPPED_ = G_CONNECT_SWAPPED,
};

} // namespace GObject

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GObject::ConnectFlags>
{ typedef GConnectFlags type; }; 
template<> struct declare_cpptype_of<GConnectFlags>
{ typedef GObject::ConnectFlags type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GObject {

enum class ParamFlags {
  READABLE_ = G_PARAM_READABLE,
  WRITABLE_ = G_PARAM_WRITABLE,
  READWRITE_ = G_PARAM_READWRITE,
  CONSTRUCT_ = G_PARAM_CONSTRUCT,
  CONSTRUCT_ONLY_ = G_PARAM_CONSTRUCT_ONLY,
  LAX_VALIDATION_ = G_PARAM_LAX_VALIDATION,
  STATIC_NAME_ = G_PARAM_STATIC_NAME,
  PRIVATE_ = G_PARAM_PRIVATE,
  STATIC_NICK_ = G_PARAM_STATIC_NICK,
  STATIC_BLURB_ = G_PARAM_STATIC_BLURB,
  EXPLICIT_NOTIFY_ = G_PARAM_EXPLICIT_NOTIFY,
  DEPRECATED_ = G_PARAM_DEPRECATED,
};

} // namespace GObject

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GObject::ParamFlags>
{ typedef GParamFlags type; }; 
template<> struct declare_cpptype_of<GParamFlags>
{ typedef GObject::ParamFlags type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GObject {

enum class SignalFlags {
  RUN_FIRST_ = G_SIGNAL_RUN_FIRST,
  RUN_LAST_ = G_SIGNAL_RUN_LAST,
  RUN_CLEANUP_ = G_SIGNAL_RUN_CLEANUP,
  NO_RECURSE_ = G_SIGNAL_NO_RECURSE,
  DETAILED_ = G_SIGNAL_DETAILED,
  ACTION_ = G_SIGNAL_ACTION,
  NO_HOOKS_ = G_SIGNAL_NO_HOOKS,
  MUST_COLLECT_ = G_SIGNAL_MUST_COLLECT,
  DEPRECATED_ = G_SIGNAL_DEPRECATED,
  ACCUMULATOR_FIRST_RUN_ = G_SIGNAL_ACCUMULATOR_FIRST_RUN,
};

} // namespace GObject

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GObject::SignalFlags>
{ typedef GSignalFlags type; }; 
template<> struct declare_cpptype_of<GSignalFlags>
{ typedef GObject::SignalFlags type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GObject {

enum class SignalMatchType {
  ID_ = G_SIGNAL_MATCH_ID,
  DETAIL_ = G_SIGNAL_MATCH_DETAIL,
  CLOSURE_ = G_SIGNAL_MATCH_CLOSURE,
  FUNC_ = G_SIGNAL_MATCH_FUNC,
  DATA_ = G_SIGNAL_MATCH_DATA,
  UNBLOCKED_ = G_SIGNAL_MATCH_UNBLOCKED,
};

} // namespace GObject

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GObject::SignalMatchType>
{ typedef GSignalMatchType type; }; 
template<> struct declare_cpptype_of<GSignalMatchType>
{ typedef GObject::SignalMatchType type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GObject {

enum class TypeFlags {
  ABSTRACT_ = G_TYPE_FLAG_ABSTRACT,
  VALUE_ABSTRACT_ = G_TYPE_FLAG_VALUE_ABSTRACT,
  FINAL_ = G_TYPE_FLAG_FINAL,
};

} // namespace GObject

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GObject::TypeFlags>
{ typedef GTypeFlags type; }; 
template<> struct declare_cpptype_of<GTypeFlags>
{ typedef GObject::TypeFlags type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GObject {

enum class TypeFundamentalFlags {
  CLASSED_ = G_TYPE_FLAG_CLASSED,
  INSTANTIATABLE_ = G_TYPE_FLAG_INSTANTIATABLE,
  DERIVABLE_ = G_TYPE_FLAG_DERIVABLE,
  DEEP_DERIVABLE_ = G_TYPE_FLAG_DEEP_DERIVABLE,
};

} // namespace GObject

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GObject::TypeFundamentalFlags>
{ typedef GTypeFundamentalFlags type; }; 
template<> struct declare_cpptype_of<GTypeFundamentalFlags>
{ typedef GObject::TypeFundamentalFlags type; }; 


} // namespace repository

} // namespace gi


#endif
