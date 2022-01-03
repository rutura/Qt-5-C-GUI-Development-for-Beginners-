#include "widget.h"
#include "ui_widget.h"
#include <QColorDialog>
#include <QFontDialog>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label->setAutoFillBackground(true);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_textColorButton_clicked()
{
    QPalette palette = ui->label->palette();

    QColor color = palette.color(QPalette::WindowText);

    QColor chosenColor = QColorDialog::getColor(color,this,"Choose text color");

    if(chosenColor.isValid())
    {
        palette.setColor(QPalette::WindowText,chosenColor);
        ui->label->setPalette(palette);
        qDebug() << "User choose a valid color";
    }else
    {
       qDebug() << "User choose a invalid color";
    }



}

void Widget::on_backgroundButton_clicked()
{

    QPalette palette = ui->label->palette();

    QColor color = palette.color(QPalette::Window);

    QColor chosenColor = QColorDialog::getColor(color,this,"Choose text color");

    if(chosenColor.isValid())
    {
        palette.setColor(QPalette::Window,chosenColor);
        ui->label->setPalette(palette);
        qDebug() << "User choose a valid color";
    }else
    {
       qDebug() << "User choose a invalid color";
    }
}

void Widget::on_fontButton_clicked()
{
    bool ok;
     QFont font = QFontDialog::getFont(
                     &ok, QFont("Helvetica [Cronyx]", 10), this);
     if (ok) {
        ui->label->setFont(font);
     } else {

     }

}
