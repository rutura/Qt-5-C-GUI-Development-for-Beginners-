#include "customtablemodel.h"
#include <QFont>
#include <QBrush>
#include <QTime>

CustomTableModel::CustomTableModel(QObject * parent ) : QAbstractTableModel(parent)
{
    timer = new QTimer(this);
    timer->setInterval(1000);
    connect( timer,&QTimer::timeout,[=](){
        QModelIndex topLeft = index(0,0);

        //Notify the view of the change the time in the model
        emit dataChanged(topLeft,topLeft);
    });

    timer->start();


}

int CustomTableModel::rowCount(const QModelIndex &parent) const
{
    return 2;
}

int CustomTableModel::columnCount(const QModelIndex &parent) const
{
    return 3;
}

QVariant CustomTableModel::data(const QModelIndex &index, int role) const
{
    /*
    if( role == Qt::DisplayRole)
    {
        QString value = QString("---Row %1, Col %2")
                .arg(index.row() +1)
                .arg(index.column() +1);

        return value;
    }

    return QVariant();
    */

    int row = index.row();
    int col = index.column();

    switch(role)
    {
        case Qt::DisplayRole:
        if( row == 0 && col == 1) return QString("<--left");
        if( row == 1 && col == 1) return QString("right -->");

        if( row == 0 && col ==0)
        {
            return QTime::currentTime().toString();
        }

        return QString("Row %1, Col %2").arg(row)
                .arg(col);
        break;

        case Qt::FontRole:

        if( row ==0 && col ==0)
        {
            QFont font;
            font.setBold(true);
            return font;
        }
        break;

    case Qt::BackgroundRole:
        if( row == 1 && col ==2)
        {
            QBrush background(Qt::yellow);
            return background;
        }
        break;


    case Qt::TextAlignmentRole:

        if( row == 1 && col ==1)
        {
            return Qt::AlignRight;
        }

        break;

    }
    return QVariant();



}

QVariant CustomTableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if( role == Qt::DisplayRole)
    {
        if( orientation == Qt::Horizontal)
        {
            switch (section) {
            case 0:
                return QString("First");
                break;
            case 1:
                return QString("Second");
                break;
            case 2:
                return QString("Third");
                break;
            default:
                return QString("Default");
                break;
            }
        }

    }
    return QVariant();

}


