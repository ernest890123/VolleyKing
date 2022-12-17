#ifndef INSTRUCTIONPOPUP_H
#define INSTRUCTIONPOPUP_H

#include <QDialog>


namespace Ui {
class InstructionPopUp;
}

class InstructionPopUp : public QDialog
{
    Q_OBJECT

public:
    explicit InstructionPopUp(QWidget *parent = nullptr);
    ~InstructionPopUp();


private slots:
    void on_pushButton_clicked();

private:
    Ui::InstructionPopUp *ui;
};

#endif // INSTRUCTIONPOPUP_H
