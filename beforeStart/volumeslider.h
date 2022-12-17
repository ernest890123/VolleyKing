#ifndef VOLUMESLIDER_H
#define VOLUMESLIDER_H

#include <QWidget>
//#include <phonon>

class QSlider;
class QMediaPlayer;

namespace Ui
{
class VolumeSlider;
}

class VolumeSlider : public QWidget
{
    Q_OBJECT

public:
    explicit VolumeSlider(QWidget *parent = nullptr);
    ~VolumeSlider();

    int volume() const;
    void setVolume(int volume);

public slots:

    void showMenu(const QPoint &pos)
    {
        move(pos);
        show();
        setFocus(); // so that focusOutEvent will be trigerred
    }
protected:
    void focusOutEvent(QFocusEvent *event) override
    {
        this->hide();
    }

private:
    Ui::VolumeSlider *ui;

};

#endif // VOLUMESLIDER_H
