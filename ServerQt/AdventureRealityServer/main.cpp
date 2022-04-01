#include "intf.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Intf w;
    w.show();


    return a.exec();
}
