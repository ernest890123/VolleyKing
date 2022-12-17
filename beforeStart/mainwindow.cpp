#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "volumeslider.h"
#include "instructionpopup.h"
#include "selection.h"
#include <QPixmap>
#include <QPalette>
#include <QMenu>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap bkgnd(":/img/background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);

    ui->sound->setStyleSheet("border-image: url(:/img/sound.png)");
    ui->music->setStyleSheet("border-image: url(:/img/music.png)");
    ui->mode->setStyleSheet("border-image: url(:/img/setting.png)");

    //player = new QMediaPlayer;

/*
    QPixmap soundImg(":/img/sound.png");
    soundImg = soundImg.scaled(ui->sound->size(), Qt::IgnoreAspectRatio);
    ui->sound->setPixmap(soundImg);
    ui->sound->setContextMenuPolicy(Qt::CustomContextMenu);
    QPixmap musicImg(":/img/music.png");
    musicImg = musicImg.scaled(ui->music->size(), Qt::IgnoreAspectRatio);
    ui->music->setPixmap(musicImg);
    ui->music->setContextMenuPolicy(Qt::CustomContextMenu);
    QPixmap modeImg(":/img/setting.png");
    modeImg = modeImg.scaled(ui->mode->size(), Qt::IgnoreAspectRatio);
    ui->mode->setPixmap(modeImg);
    ui->mode->setContextMenuPolicy(Qt::CustomContextMenu);
*/
/*
    soundProgressBarMenu = new QMenu(this);
    soundProgressBarPopUpForm = new ProgressBarPopUpForm(this);
    soundProgressBarPopUpForm->set_sound(ui->sound);
    QVBoxLayout *progressBarLayout = new QVBoxLayout;
    progressBarLayout->addWidget(soundProgressBarPopUpForm);
    soundProgressBarMenu->setLayout(progressBarLayout);
*/

    //modeChoiceMenu = new QMenu(this);
    //modechoice = new ModeChoice(this);
    //QVBoxLayout *modeChoiceLayout = new QVBoxLayout;
    //modeChoiceLayout->addWidget(modechoice);
    //modeChoiceMenu->setLayout(modeChoiceLayout);

    musicMenu = new QMenu(this);
    QAction *pianoAction = new QAction("piano", this);
    QAction *jazzAction = new QAction("jazz", this);
    musicMenu->addAction(pianoAction);
    musicMenu->addAction(jazzAction);
    ui->music->setMenu(musicMenu);
    ui->music->setPopupMode(QToolButton::InstantPopup);

    modeChoiceMenu = new QMenu(this);
    QAction *timeModeAction = new QAction("Time Mode", this);
    QAction *scoreModeAction = new QAction("Score Mode", this);
    modeChoiceMenu->addAction(timeModeAction);
    modeChoiceMenu->addAction(scoreModeAction);
    ui->mode->setMenu(modeChoiceMenu);
    ui->mode->setPopupMode(QToolButton::InstantPopup);

    ui->title->setText("VolleyKing");
    QFont f("Helvetica", 40, QFont::Bold);
    ui->title->setFont(f);
    ui->start->setText("Start");
    QFont s("Helvetica", 15, QFont::Bold);
    ui->start->setFont(s);

    //connect()


    setWindowTitle(tr("VolleyKing"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_instructioin_clicked()
{
    instructionWindow = new InstructionPopUp(this);
    instructionWindow->setWindowTitle(tr("Instruction"));
    //instructionWindow->setModal(true);
    //instructionWindow->exec();
    instructionWindow->show();

}


void MainWindow::on_start_clicked()
{
    selectionWindow = new Selection(this);
    selectionWindow->setWindowTitle(tr("Select Players and Background"));
    selectionWindow->show();
}

