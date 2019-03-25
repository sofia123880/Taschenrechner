#include "taschenrechner.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Taschenrechner w;
    w.show();
//Test2235
    return a.exec();
}
