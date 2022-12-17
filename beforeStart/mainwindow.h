#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>

#include "instructionpopup.h"
#include "selection.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
class QMenu;
class Qlabel;
class VolumeSlider;
class QMediaPlayer;

QT_END_NAMESPACE
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_instructioin_clicked();

    void on_start_clicked();

    void on_sound_clicked();

private:
    Ui::MainWindow *ui;
    QMenu *sliderMenu;
    VolumeSlider *volumeslider;
    int sliderShowCnt = 0;
    QMediaPlayer *player;

    QMenu *musicMenu;
    QMenu *modeChoiceMenu;

    InstructionPopUp *instructionWindow;
    Selection *selectionWindow;

};




#endif // MAINWINDOW_H
