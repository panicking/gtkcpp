// AUTO-GENERATED

#ifndef _GI_ATK_VALUE_HPP_
#define _GI_ATK_VALUE_HPP_


namespace gi {

namespace repository {

namespace Atk {

class Range;

class Value;

namespace base {


#define GI_ATK_VALUE_BASE base::ValueBase
class ValueBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::AtkValue BaseObjectType;

ValueBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_value_get_type(); } 

// void atk_value_get_current_value (AtkValue* obj, GValue* value);
// void atk_value_get_current_value (::AtkValue* obj, ::GValue* value);
// IGNORE; deprecated

// gdouble atk_value_get_increment (AtkValue* obj);
// gdouble atk_value_get_increment (::AtkValue* obj);
GI_INLINE_DECL gdouble get_increment () noexcept;

// void atk_value_get_maximum_value (AtkValue* obj, GValue* value);
// void atk_value_get_maximum_value (::AtkValue* obj, ::GValue* value);
// IGNORE; deprecated

// void atk_value_get_minimum_increment (AtkValue* obj, GValue* value);
// void atk_value_get_minimum_increment (::AtkValue* obj, ::GValue* value);
// IGNORE; deprecated

// void atk_value_get_minimum_value (AtkValue* obj, GValue* value);
// void atk_value_get_minimum_value (::AtkValue* obj, ::GValue* value);
// IGNORE; deprecated

// AtkRange* atk_value_get_range (AtkValue* obj);
// ::AtkRange* atk_value_get_range (::AtkValue* obj);
GI_INLINE_DECL Atk::Range get_range () noexcept;

// GSList* atk_value_get_sub_ranges (AtkValue* obj);
// ::GSList* atk_value_get_sub_ranges (::AtkValue* obj);
GI_INLINE_DECL std::vector<Atk::Range> get_sub_ranges () noexcept;

// void atk_value_get_value_and_text (AtkValue* obj, gdouble* value, gchar** text);
// void atk_value_get_value_and_text (::AtkValue* obj, gdouble* value, char** text);
GI_INLINE_DECL void get_value_and_text (gdouble & value, std::string * text = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gdouble, std::string> get_value_and_text () noexcept;

// gboolean atk_value_set_current_value (AtkValue* obj, const GValue* value);
// gboolean atk_value_set_current_value (::AtkValue* obj, const ::GValue* value);
// IGNORE; deprecated

// void atk_value_set_value (AtkValue* obj, const gdouble new_value);
// void atk_value_set_value (::AtkValue* obj, const gdouble new_value);
GI_INLINE_DECL void set_value (const gdouble new_value) noexcept;

// signal value-changed
gi::signal_proxy<void(Atk::Value, gdouble value, const std::string & text)> signal_value_changed()
{ return gi::signal_proxy<void(Atk::Value, gdouble value, const std::string & text)> (*this, "value-changed"); }

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/value_extra_def.hpp>)
#include <atk/value_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/value_extra.hpp>)
#include <atk/value_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class Value : public GI_ATK_VALUE_BASE
{ typedef GI_ATK_VALUE_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkValue>
{ typedef Atk::Value type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class ValueIfaceDef
{
typedef ValueIfaceDef self;
public:
typedef Atk::Value instance_type;
typedef ::AtkValueIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void Value::get_current_value (AtkValue* obj, GValue* value);
// void Value::get_current_value (::AtkValue* obj, ::GValue* value);
// IGNORE; deprecated, virtual-method out parameter not supported

// gdouble Value::get_increment (AtkValue* obj);
// gdouble Value::get_increment (::AtkValue* obj);
virtual gdouble get_increment_ () noexcept = 0;

// void Value::get_maximum_value (AtkValue* obj, GValue* value);
// void Value::get_maximum_value (::AtkValue* obj, ::GValue* value);
// IGNORE; deprecated, virtual-method out parameter not supported

// void Value::get_minimum_increment (AtkValue* obj, GValue* value);
// void Value::get_minimum_increment (::AtkValue* obj, ::GValue* value);
// IGNORE; deprecated, virtual-method out parameter not supported

// void Value::get_minimum_value (AtkValue* obj, GValue* value);
// void Value::get_minimum_value (::AtkValue* obj, ::GValue* value);
// IGNORE; deprecated, virtual-method out parameter not supported

// AtkRange* Value::get_range (AtkValue* obj);
// ::AtkRange* Value::get_range (::AtkValue* obj);
virtual Atk::Range get_range_ () noexcept = 0;

// GSList* Value::get_sub_ranges (AtkValue* obj);
// ::GSList* Value::get_sub_ranges (::AtkValue* obj);
// SKIP; container return not supported

// void Value::get_value_and_text (AtkValue* obj, gdouble* value, gchar** text);
// void Value::get_value_and_text (::AtkValue* obj, gdouble* value, char** text);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// gboolean Value::set_current_value (AtkValue* obj, const GValue* value);
// gboolean Value::set_current_value (::AtkValue* obj, const ::GValue* value);
// IGNORE; deprecated

// void Value::set_value (AtkValue* obj, const gdouble new_value);
// void Value::set_value (::AtkValue* obj, const gdouble new_value);
virtual void set_value_ (const gdouble new_value) noexcept = 0;


};

using ValueImpl = detail::InterfaceImpl<ValueIfaceDef>;

class ValueIfaceClassImpl: public detail::InterfaceClassImpl<ValueImpl>
{
typedef ValueIfaceClassImpl self;
typedef detail::InterfaceClassImpl<ValueImpl> super;

protected:
using super::super;

// void Value::get_current_value (AtkValue* obj, GValue* value);
// void Value::get_current_value (::AtkValue* obj, ::GValue* value);
// IGNORE; deprecated, virtual-method out parameter not supported

// gdouble Value::get_increment (AtkValue* obj);
// gdouble Value::get_increment (::AtkValue* obj);
GI_INLINE_DECL gdouble get_increment_ () noexcept override;

// void Value::get_maximum_value (AtkValue* obj, GValue* value);
// void Value::get_maximum_value (::AtkValue* obj, ::GValue* value);
// IGNORE; deprecated, virtual-method out parameter not supported

// void Value::get_minimum_increment (AtkValue* obj, GValue* value);
// void Value::get_minimum_increment (::AtkValue* obj, ::GValue* value);
// IGNORE; deprecated, virtual-method out parameter not supported

// void Value::get_minimum_value (AtkValue* obj, GValue* value);
// void Value::get_minimum_value (::AtkValue* obj, ::GValue* value);
// IGNORE; deprecated, virtual-method out parameter not supported

// AtkRange* Value::get_range (AtkValue* obj);
// ::AtkRange* Value::get_range (::AtkValue* obj);
GI_INLINE_DECL Atk::Range get_range_ () noexcept override;

// GSList* Value::get_sub_ranges (AtkValue* obj);
// ::GSList* Value::get_sub_ranges (::AtkValue* obj);
// SKIP; container return not supported

// void Value::get_value_and_text (AtkValue* obj, gdouble* value, gchar** text);
// void Value::get_value_and_text (::AtkValue* obj, gdouble* value, char** text);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// gboolean Value::set_current_value (AtkValue* obj, const GValue* value);
// gboolean Value::set_current_value (::AtkValue* obj, const ::GValue* value);
// IGNORE; deprecated

// void Value::set_value (AtkValue* obj, const gdouble new_value);
// void Value::set_value (::AtkValue* obj, const gdouble new_value);
GI_INLINE_DECL void set_value_ (const gdouble new_value) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
