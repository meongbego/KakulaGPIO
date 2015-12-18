#include "kakulagpio.h"
#include <QApplication>
#include <GPIOClass.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    KakulaGpio w;
    w.show();
    return a.exec();
}
