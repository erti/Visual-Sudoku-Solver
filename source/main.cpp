#include <QApplication>

#include "include/gui/mainwindow.hpp"

int main(int argc, char **argv) {
  QApplication app(argc, argv);

  MainWindow *window = new MainWindow;
  QObject::connect(&app, SIGNAL(aboutToQuit()), window, SLOT(closing()));
  window->show();

  int ret = app.exec();
  delete window;

  return ret;
}
