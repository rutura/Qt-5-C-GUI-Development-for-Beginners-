#include "widget.h"
#include "ui_widget.h"
#include  <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QString path = "D:/";// /home/username/Downloads

    //Dir Model
    dirModel = new QFileSystemModel(this);
    dirModel->setFilter(QDir::NoDotAndDotDot | QDir::Dirs);
    dirModel->setRootPath(path);
    ui->treeView->setModel(dirModel);

    //Files Model
    filesModel = new QFileSystemModel(this);
    filesModel->setFilter(QDir::NoDotAndDotDot | QDir::Files);
    filesModel->setRootPath(path);//Required for model to load file system info
    ui->listView->setModel(filesModel);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_treeView_clicked(const QModelIndex &index)
{
    QString path = dirModel->fileInfo(index).absoluteFilePath();
    ui->listView->setRootIndex(filesModel->setRootPath(path+"/"));
}
