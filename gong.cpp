#include "gong.h"

Gong::Gong(QObject *parent) :
    QObject(parent)
{
    gong = new QMediaPlayer;
}

void Gong::setPath(QString path)
{
    this->home = QDir::homePath();
    this->pathNuada =home+"/"+path;
    this->pathKontempore = home +"/"+path;
    qDebug()<<this->pathKontempore;

    QDir nuadaFolder(pathNuada);
    if (!nuadaFolder.exists()){
       nuadaFolder.mkdir(pathNuada);
    }

    QDir kontemporerFolder(pathKontempore);
    if (!kontemporerFolder.exists()){
        kontemporerFolder.mkdir(pathKontempore);
    }
}

void Gong::setSound(QString sound,QString type)
{
    QString bunyiNuada =this->pathNuada+"/"+sound;
    QString bunyiKon = this->pathKontempore+"/"+sound;

    if (type=="n" || type=="N"){
        qDebug()<<bunyiNuada;
        this->gong->setMedia(QUrl::fromLocalFile(bunyiNuada));
    }
    else if (type=="k" || type=="K"){
        qDebug()<<endl<<bunyiKon;
        this->gong->setMedia(QUrl::fromLocalFile(bunyiKon));
    }
    else{
        qDebug()<<"no path";
    }
}

void Gong::setVolume(int v)
{
    this->gong->setVolume(v);
}

void Gong::play()
{
    this->gong->play();
}

