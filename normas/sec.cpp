#include "sec.h"
#include "ui_sec.h"

sec::sec(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sec)
{
    ui->setupUi(this);
}

sec::~sec()
{
    delete ui;
}

void sec::on_pushButton_clicked()
{

}
