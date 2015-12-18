#include "kakulagpio.h"
#include "ui_kakulagpio.h"
#include "GPIOClass.h"

KakulaGpio::KakulaGpio(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::KakulaGpio)
{
    ui->setupUi(this);

    gong1 = new Gong;
    gong2 = new Gong;
    gong3 = new Gong;
    gong4 = new Gong;
    gong5 = new Gong;
    gong6 = new Gong;
    gong7 = new Gong;

    timer = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(timeG1()));
    responsible = 100;
    timer->start(responsible);

    timer2 = new QTimer;
    connect(timer2, SIGNAL(timeout()), this, SLOT(timeG2()));
    timer2->start(responsible);
}

KakulaGpio::~KakulaGpio()
{
    delete ui;
}

void KakulaGpio::clickedGong(QString type)
{

    this->gong1->setPath("bunyi");
    this->gong1->setSound("a1.ogg",type);
    this->gong1->setVolume(100);
    this->gong1->play();
}

void KakulaGpio::clickedGong2(QString type)
{
    this->gong2->setPath("bunyi");
    this->gong2->setSound("a2.ogg",type);
    this->gong2->setVolume(100);
    this->gong2->play();
}

void KakulaGpio::clickedGong3(QString type)
{
    this->gong3->setPath("bunyi");
    this->gong3->setSound("a3.ogg",type);
    this->gong3->setVolume(100);
    this->gong3->play();
}

void KakulaGpio::clickedGong4(QString type)
{
    this->gong4->setPath("bunyi");
    this->gong4->setSound("a4.ogg",type);
    this->gong4->setVolume(100);
    this->gong4->play();
}

void KakulaGpio::clickedGong5(QString type)
{
    this->gong5->setPath("bunyi");
    this->gong5->setSound("a5.ogg",type);
    this->gong5->setVolume(100);
    this->gong5->play();
}

void KakulaGpio::clickedGong6(QString type)
{
    this->gong6->setPath("bunyi");
    this->gong6->setSound("a6.ogg",type);
    this->gong6->setVolume(100);
    this->gong6->play();
}

void KakulaGpio::clickedGong7(QString type)
{
    this->gong7->setPath("bunyi");
    this->gong7->setSound("a7.ogg",type);
    this->gong7->setVolume(100);
    this->gong7->play();
}

void KakulaGpio::timeG1()
{
    string inputstate;
    GPIOClass* gpio21 = new GPIOClass("21");
    gpio21->setdir_gpio("in");
    gpio21->getval_gpio(inputstate);
    if(inputstate == "0")
    {
        clickedGong("n");
    }
    delete gpio21;
    gpio21 = NULL;
}

void KakulaGpio::timeG2()
{
    string inputstate;
    GPIOClass* gpio26 = new GPIOClass("26");
    gpio26->setdir_gpio("in");
    gpio26->getval_gpio(inputstate);
    if(inputstate == "0")
    {
        clickedGong2("n");
    }
    delete gpio26;
    gpio26 = NULL;
}

