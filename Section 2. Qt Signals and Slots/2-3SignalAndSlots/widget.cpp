#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);


    //1.String Notation
    /*
    connect(ui->pushButton, // Source object
            SIGNAL(clicked()), // Signal from source object
            this  //Receiver
            ,SLOT(changeText())); // The responder
    */

    /*

    //2.Functor Notation : Regular Slots
    connect(ui->pushButton,&QPushButton::clicked,this,&Widget::changeText);
    */


    //3.Functor Notation : Lambdas
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        ui->label->setText("Lambda");
    });

}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeText()
{
    qDebug() << "User clicked on button";
    ui->label->setText("Hello There");
}
