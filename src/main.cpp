#include <QApplication>

#include "texteditor.hpp"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  TextEditor w;
  w.show();
  return a.exec();
}
