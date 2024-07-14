#include "player.h"
#include "ui_player.h"

Player::Player(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Player)
{
    ui->setupUi(this);
    setWindowTitle("Multimedia Player");
    setWindowIcon(QIcon(":/apps/img/player.png"));
}

Player::~Player() {
    player->stop();
    delete audio;
    delete player;
    delete movie;
    delete fileInfo;
    delete ui;
}


void Player::on_openMediafileLabel_linkActivated(const QString &link) {
    fileName = QFileDialog::getOpenFileName(this, tr("Select Media File"), QDir::homePath(), tr("*.mp3 *.mp4"));
    fileInfo = new QFileInfo(fileName);
    extension = fileInfo->suffix().toLower();

    player = new QMediaPlayer();
    audio = new QAudioOutput();
    player->setAudioOutput(audio);
    player->setSource(QUrl(fileName));

    startTime = new QTime(0, 0, 0);
    endTime = new QTime(0, 0, 0);

    if (extension == "mp3") openAudioPlayer();
    else if (extension == "mp4") openVideoPlayer();

    player->play();
}


void Player::openAudioPlayer() {
    setFixedSize(300, 400);
    setWindowTitle("Audio Player");
    setWindowIcon(QIcon(":/player/img/music.png"));
    gif = new QLabel();
    movie = new QMovie(":/player/img/dancingCat.gif");
    gif->setMovie(movie);
    movie->start();

    QVBoxLayout *layout = new QVBoxLayout();
    layout->setContentsMargins(0, 10, 0, 0);
    layout->addWidget(gif, 0, Qt::AlignHCenter);
    layout->addStretch();

    connect(player, &QMediaPlayer::positionChanged, this, &Player::setTimer);


    colorEffect = new QGraphicsColorizeEffect();
    colorEffect->setColor(QColor(255, 0, 0));
    colorEffect->setStrength(0);
    gif->setGraphicsEffect(colorEffect);

    QSlider *volumeSlider = new QSlider(Qt::Horizontal, this);
    volumeSlider->setRange(0, 100);
    volumeSlider->setValue(25);
    audio->setVolume(0.25);
    connect(volumeSlider, &QSlider::valueChanged, this, &Player::setVolume);

    speedSlider = new QSlider(Qt::Horizontal, this);
    speedSlider->setRange(50, 200);
    speedSlider->setValue(100);
    connect(speedSlider, &QSlider::valueChanged, this, &Player::setSpeed);

    QHBoxLayout *controlsLayout1 = new QHBoxLayout();
    QPushButton *playButton = new QPushButton("Play", this);
    QPushButton *pauseButton = new QPushButton("Pause", this);
    QPushButton *speedButton = new QPushButton("Speed", this);
    controlsLayout1->setContentsMargins(10, 0, 10, 0);
    controlsLayout1->addWidget(playButton);
    controlsLayout1->addWidget(pauseButton);
    controlsLayout1->addWidget(speedButton);
    connect(playButton, &QPushButton::clicked, this, &Player::play);
    connect(pauseButton, &QPushButton::clicked, this, &Player::pause);
    connect(speedButton, &QPushButton::clicked, this, &Player::setDefaultSpeed);

    QHBoxLayout *controlsLayout2 = new QHBoxLayout();
    controlsLayout2->setContentsMargins(15, 0, 15, 0);
    controlsLayout2->addWidget(volumeSlider);
    controlsLayout2->addWidget(speedSlider);

    QHBoxLayout *textLayout = new QHBoxLayout();
    QLabel *volumeText = new QLabel("Volume: ", this);
    QLabel *speedText = new QLabel("Speed: ", this);
    textLayout->addWidget(volumeText);
    textLayout->addWidget(speedText);
    textLayout->setContentsMargins(60, 0, 0, 0);

    layout->addLayout(textLayout);
    layout->addLayout(controlsLayout2);
    layout->addLayout(controlsLayout1);

    audioWidget = new QWidget(this);
    audioWidget->setLayout(layout);
    setCentralWidget(audioWidget);
}


void Player::setVolume(int volume) {
    audio->setVolume(volume/100.0);
    colorEffect->setStrength(volume/100.0 - 0.25);
}


void Player::setSpeed(int speed) {
    player->setPlaybackRate(speed/100.0);
    movie->setSpeed(speed);
}


void Player::setDefaultSpeed() {
    player->setPlaybackRate(1);
    speedSlider->setValue(100);
}


void Player::play() {
    player->play();
    movie->start();
}


void Player::pause() {
    player->pause();
    movie->stop();
}


void Player::setTimer() {
    if (player->position() == 0 || player->position() == player->duration()) movie->stop();
    ui->statusbar->showMessage(startTime->addMSecs(player->position()).toString("mm:ss") + " / " +
                               endTime->addMSecs(player->duration()).toString("mm:ss") + " - " +
                               fileInfo->completeBaseName() + "     Vol: " + QString::number(audio->volume()) + "  Rate: " + QString::number(player->playbackRate()));
}


void Player::openVideoPlayer() {
    setWindowTitle("Video Player");
    setWindowIcon(QIcon(":/player/img/video.png"));
    ui->statusbar->showMessage(fileInfo->fileName() + "                     Volume: 1   Speed: 1");

    QVBoxLayout *layout = new QVBoxLayout();
    video = new QVideoWidget();
    video->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    layout->addWidget(video);

    QHBoxLayout *controlsLayout1 = new QHBoxLayout();
    QPushButton *playstopButton = new QPushButton("Play/Stop", this);
    QPushButton *backButton = new QPushButton("Back", this);
    QPushButton *nextButton = new QPushButton("Next", this);
    QPushButton *volumeButton = new QPushButton("Volume", this);
    QPushButton *speedButton = new QPushButton("Speed", this);
    controlsLayout1->addWidget(backButton);
    controlsLayout1->addWidget(playstopButton);
    controlsLayout1->addWidget(nextButton);
    controlsLayout1->addWidget(volumeButton);
    controlsLayout1->addWidget(speedButton);
    QSizePolicy mainSize(QSizePolicy::Preferred, QSizePolicy::Preferred);
    mainSize.setHorizontalStretch(1);
    playstopButton->setSizePolicy(mainSize);
    backButton->setSizePolicy(mainSize);
    nextButton->setSizePolicy(mainSize);
    connect(playstopButton, &QPushButton::pressed, this, &Player::playstop);
    connect(backButton, &QPushButton::pressed, this, &Player::back);
    connect(nextButton, &QPushButton::pressed, this, &Player::next);
    connect(volumeButton, &QPushButton::pressed, this, &Player::setVideoVolume);
    connect(speedButton, &QPushButton::pressed, this, &Player::setVideoSpeed);

    QHBoxLayout *controlsLayout2 = new QHBoxLayout();
    timeSlider = new QSlider(Qt::Horizontal, this);
    time = new QLabel("00:00:00 / 00:00:00", this);

    connect(player, &QMediaPlayer::positionChanged, this, &Player::setVideoTimer);
    connect(player, &QMediaPlayer::durationChanged, this, &Player::setVideoTimerSliderRange);
    connect(timeSlider, &QSlider::sliderMoved, this, &Player::setVideoTimerSlider);

    controlsLayout2->addWidget(timeSlider);
    controlsLayout2->addWidget(time);

    layout->addLayout(controlsLayout2);
    layout->addLayout(controlsLayout1);
    QWidget *videoWidget = new QWidget(this);
    videoWidget->setLayout(layout);
    videoWidget->setMinimumHeight(300);
    setCentralWidget(videoWidget);
    player->setVideoOutput(video);
    video->show();
}


void Player::playstop() {
    if (player->isPlaying()) player->pause();
    else {
        if (player->position() == player->duration()) player->setPosition(0);
        player->play();
    }
}


void Player::back() {
    if (player->position() < 5000) player->setPosition(0);
    else player->setPosition(player->position() - 5000);
    timeSlider->setValue(player->position());
}


void Player::next() {
    if (player->duration() - player->position() < 5000) {
        player->setPosition(player->duration());
        player->pause();
    }
    else player->setPosition(player->position() + 5000);
    timeSlider->setValue(player->position());
}


void Player::setVideoVolume() {
    if (volume >= 1) volume = 0.1;
    else volume += 0.1;
    audio->setVolume(volume);
    ui->statusbar->showMessage(fileInfo->fileName() + "                     Volume: " + QString::number(volume) + "     Speed: " + QString::number(speed));
}


void Player::setVideoSpeed() {
    if (speed >= 4) speed = 0.25;
    else speed += 0.25;
    player->setPlaybackRate(speed);
    ui->statusbar->showMessage(fileInfo->fileName() + "                     Volume: " + QString::number(volume) + "     Speed: " + QString::number(speed));
}


void Player::setVideoTimer() {
    time->setText(startTime->addMSecs(player->position()).toString("hh:mm:ss") + " / " + endTime->addMSecs(player->duration()).toString("hh:mm:ss"));
    timeSlider->setValue(player->position());
}


void Player::setVideoTimerSliderRange() {
    timeSlider->setRange(0, player->duration());
}


void Player::setVideoTimerSlider() {
    player->setPosition(timeSlider->value());
}


void Player::closeEvent(QCloseEvent *event) {
    if (player != nullptr) player->stop();
    if (movie != nullptr) movie->stop();
    QMainWindow::closeEvent(event);
}
