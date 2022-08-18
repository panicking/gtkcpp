#ifndef GI_CALLBACK_HPP
#define GI_CALLBACK_HPP

#include "base.hpp"

#include <functional>

namespace gi
{
namespace detail
{
template<typename T, typename Enable = void>
struct check_argument
{
  static void check(const T & /*arg*/) {}
};

template<typename T>
struct check_argument<T,
    typename std::enable_if<traits::is_cboxed<T>::value>::type>
{
  static void check(const T &arg)
  {
    int count = arg.use_count();
    if (count > 1)
      g_critical("invalid ownership count %d; copy argument if needed", count);
  }
};

template<typename T>
scope_guard
make_argument_guard(const T &arg)
{
  return scope_guard([&arg]() { check_argument<T>::check(arg); });
}

inline std::string
exception_desc(const std::exception &e)
{
  auto desc = e.what();
  return desc ? desc : typeid(e).name();
}

// handles all calls C -> C++ (callbacks, virtual method calls)
// restrictions though on types supported (e.g. no containers, no output params)
template<typename T, typename RetTransfer, typename... Transfer>
struct transform_caller;

template<typename R, typename... Args, typename RetTransfer,
    typename... Transfers>
struct transform_caller<R(Args...), RetTransfer, Transfers...>
{
  typedef transform_caller self_type;
  typedef R (*caller_type)(Args &&..., void *d);

private:
  static R do_call(Args &&... args, caller_type func, void *d)
  {
    // some argument wrappers have not assumed full ownership (e.g. plain
    // boxed) so check here that the callee did not hold on to it
    scope_guard g[] = {make_argument_guard(args)...};
    (void)g;
    // ref forward; check above can handle moved argument
    // (though will likely pass by value later in call chain)
    return func(std::forward<Args>(args)..., d);
  }

  template<typename T,
      typename std::enable_if<!std::is_void<T>::value>::type * = nullptr>
  static typename traits::ctype<T>::type _wrapper(
      typename traits::ctype<Args>::type... args, caller_type func, void *d)
  {
    return unwrap(do_call(wrap(args, Transfers(), direction_in)..., func, d),
        RetTransfer(), direction_out);
  }

  template<typename T,
      typename std::enable_if<std::is_void<T>::value>::type * = nullptr>
  static T _wrapper(
      typename traits::ctype<Args>::type... args, caller_type func, void *d)
  {
    return do_call(wrap(args, Transfers(), direction_in)..., func, d);
  }

public:
  static typename traits::ctype<R>::type wrapper(
      typename traits::ctype<Args>::type... args, caller_type func, void *d)
  {
    // exceptions should not escape into plain C
#if GI_CONFIG_EXCEPTIONS
    try {
#endif
      return self_type::template _wrapper<R>(args..., func, d);
#if GI_CONFIG_EXCEPTIONS
    } catch (const std::exception &exc) {
      // simply report the hard and simple way
      // otherwise catch internally if something else/more is desired
      auto msg = std::string("handler exception; ") + exception_desc(exc);
      g_critical("%s", msg.c_str());
    } catch (...) {
      g_critical("handler unknown exception");
    }
    return typename traits::ctype<R>::type();
#endif
  }
};

class connection_status
{
public:
  struct data
  {
    bool connected{false};
  };

  bool connected() const
  {
    auto sp = data_.lock();
    return sp && sp->connected;
  }

protected:
  std::weak_ptr<data> data_;
};

// callback handling
template<typename G>
class connectable;

template<typename G>
class callback_wrapper;

template<typename R, typename... Args>
class connectable<R(Args...)>
{
  friend class callback_wrapper<R(Args...)>;
  struct data : public connection_status::data
  {
    template<typename T,
        typename Enable = typename detail::disable_if_same_or_derived<data, T>>
    data(T &&t) : callable(std::forward<T>(t))
    {}

    std::function<R(Args... args)> callable;
  };

  struct connection_status_factory : public connection_status
  {
    connection_status_factory(std::shared_ptr<data> p)
    {
      data_ = std::weak_ptr<connection_status::data>(p);
    }
  };

public:
  // avoid copy constructor mishaps
  template<typename T,
      typename Enable =
          typename detail::disable_if_same_or_derived<connectable, T>>
  connectable(T &&t) : data_(std::make_shared<data>(std::forward<T>(t)))
  {}

  connection_status connection() const
  {
    return connection_status_factory(data_);
  }

  R operator()(Args... args)
  {
    return data_->callable(std::forward<Args>(args)...);
  }

  explicit operator bool() { return data_ && data_->callable; }

private:
  // state management by wrapper
  void connected(bool conn) { data_->connected = conn; }
  void disconnect() { data_->connected = false; }

private:
  std::shared_ptr<data> data_;
};

template<typename R, typename... Args>
class callback_wrapper<R(Args...)>
{
public:
  template<typename T,
      typename Enable =
          typename detail::disable_if_same_or_derived<callback_wrapper, T>>
  callback_wrapper(T &&t) : _callback(std::forward<T>(t))
  {
    // mark connected now that it is wrapped
    _callback.connected(true);
  }

  static R wrapper(Args... args, gpointer user_data)
  {
    auto t = reinterpret_cast<callback_wrapper *>(user_data);
    return t->_callback(args...);
  }

  static void destroy(gpointer user_data)
  {
    auto t = reinterpret_cast<callback_wrapper *>(user_data);
    delete t;
  }

  // (async scope) wrapper may have to take ownership of additional data
  // (other callback wrapper)
  template<typename T>
  void take_data(std::shared_ptr<T> d)
  {
    auto cb = std::move(_callback.data_->callable);
    auto newcb = [d, cb](Args &&...args) {
      return cb(std::forward<Args>(args)...);
    };
    _callback.data_->callable = std::move(newcb);
  }

  template<typename T>
  void take_data(T *d)
  {
    take_data(std::shared_ptr<T>(d));
  }

protected:
  ~callback_wrapper()
  {
    // other shared ptr to data might be around (unlikely though)
    // but regardless disconnect now as requested (as wrapper is going away)
    _callback.disconnect();
  }

  connectable<R(Args... args)> _callback;
};

template<typename G>
struct transform_callback_wrapper;

template<typename R, typename... Args>
struct transform_callback_wrapper<R(Args...)>
{
  // transfers of arguments
  template<bool AUTODESTROY, typename RetTransfer, typename... Transfers>
  class with_transfer : public callback_wrapper<R(Args...)>
  {
    typedef callback_wrapper<R(Args...)> super_type;
    typedef with_transfer self_type;

  public:
    template<typename T>
    explicit with_transfer(T &&t) : super_type(std::forward<T>(t))
    {}

  private:
    static R caller(Args &&... args, void *d)
    {
      auto this_ = (self_type *)d;
      return this_->_callback(std::forward<Args>(args)...);
    }

  public:
    static typename traits::ctype<R>::type wrapper(
        typename traits::ctype<Args>::type... args, gpointer user_data)
    {
      auto t = reinterpret_cast<self_type *>(user_data);
      std::unique_ptr<self_type> wt(AUTODESTROY ? t : nullptr);
      return transform_caller<R(Args...), RetTransfer, Transfers...>::wrapper(
          args..., caller, t);
    }
  };
};

template<typename CppSig, typename... Transfers>
class callback : public connectable<CppSig>
{
  typedef connectable<CppSig> super_type;

public:
  typedef CppSig function_type;

  template<bool ASYNC = false>
  using wrapper_type = typename transform_callback_wrapper<
      function_type>::template with_transfer<ASYNC, Transfers...>;

  typedef typename std::add_pointer<decltype(wrapper_type<>::wrapper)>::type
      cfunction_type;

  using super_type::super_type;
};

// signal handling;
// transfer none for arguments
// transfer full for return
template<typename G>
struct transform_signal_wrapper;

template<typename T>
struct signal_arg_transfer
{
  typedef transfer_none_t type;
};

template<typename R, typename... Args>
struct transform_signal_wrapper<R(Args...)>
    : public transform_callback_wrapper<R(
          Args...)>::template with_transfer<false, transfer_full_t,
          typename detail::signal_arg_transfer<Args>::type...>
{
private:
  typedef typename transform_callback_wrapper<R(
      Args...)>::template with_transfer<false, transfer_full_t,
      typename detail::signal_arg_transfer<Args>::type...>
      super_;

public:
  template<typename T>
  transform_signal_wrapper(T &&t) : super_(std::forward<T>(t))
  {}
};

// connection helpers
class connection_impl
{
public:
  connection_impl(gulong id, connection_status s) : id_(id), status_(s) {}

  bool connected() const { return status_.connected(); }

  gulong id() const { return id_; }

protected:
  gulong id_;
  connection_status status_;
};

template<typename Connection>
class connection
{
  typedef Connection impl;

public:
  connection() = default;

  template<typename... Args>
  explicit connection(Args... arg)
      : conn_(std::make_shared<impl>(std::forward<Args>(arg)...))
  {
    // this is to be expected at this time
    if (!connected()) {
      g_warning("creating non-connected connection");
    }
  }

  // implicit copy/move

  bool connected() const { return conn_ && conn_->connected(); }
  void disconnect()
  {
    if (connected())
      conn_->disconnect();
  }

protected:
  std::shared_ptr<impl> conn_;
};

template<typename ConnectionBase>
class scoped_connection : public ConnectionBase
{
  typedef ConnectionBase connection;

public:
  scoped_connection() : connection() {}
  ~scoped_connection() { this->disconnect(); }

  void release() { this->conn_.reset(); }

  // ensure default movable
  scoped_connection(scoped_connection &&other) = default;
  scoped_connection &operator=(scoped_connection &&other) = default;

  // not copyable; to avoid inadvertent disconnect
  scoped_connection(const scoped_connection &other) = delete;
  scoped_connection &operator=(const scoped_connection &other) = delete;

  // but convert/assign from base class
  scoped_connection(const connection &other) : connection(other) {}
  scoped_connection &operator=(const connection &other)
  {
    (*(connection *)(this)) = other;
    return *this;
  }
  scoped_connection &operator=(const connection &&other)
  {
    (*(connection *)(this)) = std::move(other);
    return *this;
  }
};

} // namespace detail

// function bind helpers
template<typename R, typename T, typename Tp, typename... Args>
inline std::function<R(Args...)>
mem_fun(R (T::*pm)(Args...), Tp object)
{
  return [object, pm](Args... args) {
    return (object->*pm)(std::forward<Args>(args)...);
  };
}

template<typename R, typename T, typename Tp, typename... Args>
inline std::function<R(Args...)>
mem_fun(R (T::*pm)(Args...) const, Tp object)
{
  return [object, pm](Args... args) {
    return (object->*pm)(std::forward<Args>(args)...);
  };
}

} // namespace gi

#endif // CALLBACK_HPP
