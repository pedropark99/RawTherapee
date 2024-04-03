
#include "rtwindow_mark2.h"


RTWindow::RTWindow()
  : mainNB (nullptr)
{
  mainNB.append_page(new Gtk::Widget());
}
