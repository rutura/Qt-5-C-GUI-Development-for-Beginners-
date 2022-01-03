#include "widget.h"
#include "ui_widget.h"
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

void Widget::on_pushButton_clicked()
{
   qDebug() << "Submitting data.." ;
   qDebug() << "First name is :" << ui->firstNameLineEdit->text();
   qDebug() << "Last name is :" << ui->lastNameLineEdit->text();
   qDebug() << "Message is :" << ui->messageTextEdit->toPlainText();
}
