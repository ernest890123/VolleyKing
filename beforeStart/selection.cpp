#include "selection.h"
#include "ui_selection.h"

#include <QPixmap>

Selection::Selection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Selection)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    QPixmap shinChan(":/img/shinChan.png");
    shinChan = shinChan.scaled(ui->p1_img->width(), ui->p1_img->height(),Qt::IgnoreAspectRatio);
    ui->p1_img->setPixmap(shinChan);
    ui->p1_img->setMask(shinChan.mask());
    ui->p1_img->show();

    QPixmap sister(":/img/sister.png");
    sister = sister.scaled(ui->p2_img->width(), ui->p2_img->height(),Qt::IgnoreAspectRatio);
    ui->p2_img->setPixmap(sister);
    ui->p2_img->setMask(sister.mask());
    ui->p2_img->show();

    QPixmap mom(":/img/mom.png");
    mom = mom.scaled(ui->p3_img->width(), ui->p3_img->height(),Qt::IgnoreAspectRatio);
    ui->p3_img->setPixmap(mom);
    ui->p3_img->setMask(mom.mask());
    ui->p3_img->show();

    QPixmap dad(":/img/dad.png");
    dad = dad.scaled(ui->p4_img->width(), ui->p4_img->height(),Qt::IgnoreAspectRatio);
    ui->p4_img->setPixmap(dad);
    ui->p4_img->setMask(dad.mask());
    ui->p4_img->show();

    QPixmap beach(":/img/beach.jpg");
    beach = beach.scaled(ui->b1_img->width(), ui->b1_img->height(),Qt::IgnoreAspectRatio);
    ui->b1_img->setPixmap(beach);
    ui->b1_img->setMask(beach.mask());
    ui->b1_img->show();

    QPixmap sea(":/img/sea.jpg");
    sea = sea.scaled(ui->b2_img->width(), ui->b2_img->height(),Qt::IgnoreAspectRatio);
    ui->b2_img->setPixmap(sea);
    ui->b2_img->setMask(sea.mask());
    ui->b2_img->show();

    QPixmap space(":/img/space.jpg");
    space = space.scaled(ui->b3_img->width(), ui->b3_img->height(),Qt::IgnoreAspectRatio);
    ui->b3_img->setPixmap(space);
    ui->b3_img->setMask(space.mask());
    ui->b3_img->show();
}
Selection::~Selection()
{
    delete ui;
}

void Selection::on_next_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void Selection::on_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void Selection::on_ready_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

