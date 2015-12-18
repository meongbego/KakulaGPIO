#include "kakulagpio.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    KakulaGpio w;
    w.show();

    return a.exec();
}
