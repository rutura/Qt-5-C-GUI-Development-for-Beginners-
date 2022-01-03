#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    model = new QStringListModel(this);

    QStringList list;

    list << "Cow" << "Rooster" << "Lion" << "Hyena" << "Buffalo";

    model->setStringList(list);

    ui->listView->setModel(model);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QStringList list = model->stringList();
    qDebug() << "The current data is :" << list;

}
