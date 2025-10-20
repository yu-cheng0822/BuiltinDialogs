#include "cbuiltinblg.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cbuiltinblg w;
    w.show();
    return a.exec();
}
