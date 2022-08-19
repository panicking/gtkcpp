#include "config.h"
#include <gtk/gtk.hpp>
#include <webkit2/webkit2.hpp>

#include <iostream>
#include <locale.h>
#include <cxxabi.h>

namespace GLib = gi::repository::GLib;
namespace GObject_ = gi::repository::GObject;
namespace Gtk = gi::repository::Gtk;
namespace Gio = gi::repository::Gio;
namespace Webkit = gi::repository::WebKit2;

static GLib::MainLoop loop;

const char* currentExceptionTypeName()
{
    int status;
    return abi::__cxa_demangle(abi::__cxa_current_exception_type()->name(), 0, 0, &status);
}

int
main(int argc, char **argv)
{
  gtk_init(&argc, &argv);

  setlocale (LC_ALL, "");

  auto resources = Gio::Resource::load(PKGDATADIR + "/alexa.gresource");

  Gio::resources_register(resources);

  auto builder = Gtk::Builder::new_();

  try {
      builder.add_from_resource("/amarula/alexa/ui/window.ui");
  } catch (gi::repository::GLib::Error &ex) {
      std::cerr << ex.what() << std::endl;
  }

  GObject_::Object win = builder.get_object("window");

  auto w = gi::object_cast<Gtk::Window>(win);
  auto scrolled_obj = builder.get_object("scrolled_webview");
  auto scrolledView = gi::object_cast<Gtk::ScrolledWindow>(scrolled_obj);
  auto webview = Webkit::WebView::new_();

  scrolledView.add(gi::object_cast<Gtk::Widget>(webview));

  webview.load_uri("https://www.amarulasolutions.com");
  webview.set_visible(true);

  // TODO auto-handle arg ignore ??
  w.signal_destroy().connect([](Gtk::Widget) { Gtk::main_quit(); });
  w.show_all();

  Gtk::main();
}
