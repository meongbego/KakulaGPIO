#ifndef KAKULAGPIO_H
#define KAKULAGPIO_H

#include <QWidget>
#include <gong.h>
#include <QTimer>

namespace Ui {
class KakulaGpio;
}

class KakulaGpio : public QWidget
{
    Q_OBJECT

public:
    explicit KakulaGpio(QWidget *parent = 0);
    ~KakulaGpio();

    void clickedGong(QString type);
    void clickedGong2(QString type);
    void clickedGong3(QString type);
    void clickedGong4(QString type);
    void clickedGong5(QString type);
    void clickedGong6(QString type);
    void clickedGong7(QString type);

private slots:
    void timeG1();
    void timeG2();

private:
    Ui::KakulaGpio *ui;

    int responsible;

    Gong *gong1;
    Gong *gong2;
    Gong *gong3;
    Gong *gong4;
    Gong *gong5;
    Gong *gong6;
    Gong *gong7;

    QTimer *timer;
    QTimer *timer2;
};

#endif // KAKULAGPIO_H
