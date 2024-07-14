#ifndef PLAYER_H
#define PLAYER_H

#include <QMainWindow>
#include <QWidget>
#include <QtMultimedia/QtMultimedia>
#include <QtMultimediaWidgets/QtMultimediaWidgets>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QFileDevice>
#include <QVideoWidget>
#include <QFileInfo>
#include <QMovie>
#include <QLabel>

namespace Ui {
class Player;
}

class Player : public QMainWindow
{
    Q_OBJECT

public:
    explicit Player(QWidget *parent = nullptr);
    ~Player();

private slots:
    void on_openMediafileLabel_linkActivated(const QString &link);

private:
    Ui::Player *ui;
    QFileInfo *fileInfo;
    QMediaPlayer *player = nullptr;
    QAudioOutput *audio;
    QLabel *gif;
    QMovie *movie = nullptr;
    QVideoWidget *video;
    QString fileName;
    QString extension;
    QTime *startTime;
    QTime *endTime;

    QWidget *audioWidget;
    QSlider *speedSlider;
    QGraphicsColorizeEffect *colorEffect;
    QGraphicsOpacityEffect *opacityEffect;

    float speed = 1;
    float volume = 1;
    QLabel *time;
    QSlider *timeSlider;


    void openAudioPlayer();
    void setVolume(int);
    void setSpeed(int);
    void play();
    void pause();
    void setDefaultSpeed();
    void setTimer();

    void openVideoPlayer();
    void playstop();
    void back();
    void next();
    void setVideoVolume();
    void setVideoSpeed();
    void setVideoTimer();
    void setVideoTimerSlider();
    void setVideoTimerSliderRange();

    void closeEvent(QCloseEvent*);
};

#endif // PLAYER_H
