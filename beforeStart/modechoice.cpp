#include "modechoice.h"
#include "ui_modechoice.h"

ModeChoice::ModeChoice(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModeChoice)
{
    ui->setupUi(this);

}

ModeChoice::~ModeChoice()
{
    delete ui;
}

void ModeChoice::on_TimeMode_clicked()
{

}


void ModeChoice::on_ScoreMode_clicked()
{

}

