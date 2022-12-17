#ifndef SELECTION_H
#define SELECTION_H

#include <QDialog>

namespace Ui {
class Selection;
}

class Selection : public QDialog
{
    Q_OBJECT

public:
    explicit Selection(QWidget *parent = nullptr);
    ~Selection();

private slots:
    void on_next_clicked();

    void on_back_clicked();

    void on_ready_clicked();

private:
    Ui::Selection *ui;

};

#endif // SELECTION_H
