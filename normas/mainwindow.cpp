#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
//#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString login = ui -> log -> text();
    QString password = ui -> pas -> text();

    //hide();
            if (login == "polzov" && password == "polzov")
    {
        ui->statusBar->showMessage("Вы вошли как пользователь");
        sec window;
        window.setModal(true);
        window.exec();

    }
    else if(login == "admin" && password == "admin")
    {
     ui->statusBar->showMessage("Вы вошли как администратор");
    }

}

/*void MainWindow::on_pushButton_2_clicked()
{
    if(ui->checkBox->isChecked())
        ui->statusBar->showMessage("Галочка поставлена"); // код на проверку постановки налочки в check box
    else
        ui->statusBar->showMessage("Галочка не поставлена");
}
*/
