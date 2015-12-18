#ifndef GONG_H
#define GONG_H

#include <QObject>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QAudioInput>
#include <QDir>
#include <QFile>
#include <QDebug>
#include <QSound>

class Gong : public QObject
{
    Q_OBJECT
public:
    explicit Gong(QObject *parent = 0);

signals:

public slots:

public:
    void setPath(QString path);
    void setSound(QString sound, QString type);
    void setVolume(int v);
    void play();
private:
    QMediaPlayer *gong;
    QString home;
    QString pathNuada;
    QString pathKontempore;
};

#endif // GONG_H
