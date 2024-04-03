#include <iostream>

#include <gtkmm/application.h>
#include <gtkmm/button.h>
#include <gtkmm/window.h>


#include "rtwindow_mark2.h"


class RTApplication : public Gtk::Window
{
public:
  RTApplication();
  virtual ~RTApplication();

protected:
  //Member widgets:
  RTWindow rt_window;
};


RTApplication::RTApplication()
{
  set_default_size(1500, 1000);
  // Sets the border width of the window.
  set_border_width(10);

}

RTApplication::~RTApplication()
{
}







int main (int argc, char *argv[])
{
  auto app = Gtk::Application::create(argc, argv, "org.rawtherapee.application");
  RTApplication rtapp;

  //Shows the window and returns when it is closed.
  return app->run(rtapp);
}

