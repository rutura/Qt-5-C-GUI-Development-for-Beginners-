#include "widget.h"
#include "ui_widget.h"
#include "infodialog.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_provideInfoButton_clicked()
{
    InfoDialog * dialog = new InfoDialog(this);


    /*
    //Show the dialog model
    int ret =dialog->exec();

    if( ret == QDialog::Accepted)
    {
        QString position = dialog->getPosition();
        QString os = dialog->getFavoriteOs();

        qDebug() << "Dialog accepted ,position is : " << position << " and favorite os is : " << os;
        ui->infoLabel->setText("Your position is : " + position + " and your favorite os is : " + os);
    }

    if( ret == QDialog::Rejected)
    {
        qDebug() << "Dialog rejected";
    }
    */



    //Show the dialog non model
    connect(dialog,&InfoDialog::accepted,[=](){

        QString position = dialog->getPosition();
        QString os = dialog->getFavoriteOs();

        qDebug() << "Dialog accepted ,position is : " << position << " and favorite os is : " << os;
        ui->infoLabel->setText("Your position is : " + position + " and your favorite os is : " + os);


    });

    connect(dialog,&InfoDialog::rejected,[=](){
        qDebug() << "Dialog rejected";

    });


    //Show the dialog
    dialog->show();
    dialog->raise();
    dialog->activateWindow();



}
