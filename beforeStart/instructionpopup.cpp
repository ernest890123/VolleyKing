#include "instructionpopup.h"
#include "ui_instructionpopup.h"

class QPushButton;

InstructionPopUp::InstructionPopUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InstructionPopUp)
{
    ui->setupUi(this);

}

InstructionPopUp::~InstructionPopUp()
{
    delete ui;
}

void InstructionPopUp::on_pushButton_clicked()
{
    this->close();
}

