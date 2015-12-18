#ifndef KAKULAGPIO_H
#define KAKULAGPIO_H

#include <QWidget>
#include <gong.h>

namespace Ui {
class KakulaGpio;
}

class KakulaGpio : public QWidget
{
    Q_OBJECT

public:
    explicit KakulaGpio(QWidget *parent = 0);
    ~KakulaGpio();

private:
    Ui::KakulaGpio *ui;

    Gong *gong1;
    Gong *gong2;
    Gong *gong3;
    Gong *gong4;
    Gong *gong5;
    Gong *gong6;
    Gong *gong7;

    void clickedGong(QString type);
    void clickedGong2(QString type);
    void clickedGong3(QString type);
    void clickedGong4(QString type);
    void clickedGong5(QString type);
    void clickedGong6(QString type);
    void clickedGong7(QString type);
};

#endif // KAKULAGPIO_H
