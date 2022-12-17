#include "volumeslider.h"
#include "ui_volumeslider.h"
#include <QProgressBar>


VolumeSlider::VolumeSlider(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VolumeSlider)
{
    ui->setupUi(this);

    ui->slider->setRange(0, 100);
    ui->frame->setStyleSheet("background-color: white");
    //player = new QMediaPlayer;

    //connect(ui->slider, &QSlider::valueChanged, [&](int value)
    //{

    //});
}
/*
VolumeSlider::showMenu(const QPoint &pos)
{
    exec(mapToGlobal(pos));
}
*/
int VolumeSlider::volume() const
{
    return ui->slider->value();
}
void VolumeSlider::setVolume(int volume)
{
    //->setVolume(volume);
}

VolumeSlider::~VolumeSlider()
{
    delete ui;
}
