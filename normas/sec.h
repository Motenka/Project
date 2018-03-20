#ifndef SEC_H
#define SEC_H

#include <QDialog>

namespace Ui {
class sec;
}

class sec : public QDialog
{
    Q_OBJECT

public:
    explicit sec(QWidget *parent = 0);
    ~sec();

private slots:
    void on_pushButton_clicked();



private:
    Ui::sec *ui;
};

#endif // SEC_H
