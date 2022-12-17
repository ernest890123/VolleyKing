#ifndef MODECHOICE_H
#define MODECHOICE_H

#include <QWidget>


namespace Ui {
class ModeChoice;
}

class ModeChoice : public QWidget
{
    Q_OBJECT

public:
    explicit ModeChoice(QWidget *parent = nullptr);
    ~ModeChoice();

private slots:
    void on_TimeMode_clicked();

    void on_ScoreMode_clicked();

private:
    Ui::ModeChoice *ui;
};

#endif // MODECHOICE_H
