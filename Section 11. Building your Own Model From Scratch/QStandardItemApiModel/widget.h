#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStandardItemModel>
#include <QItemSelection>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void selectionChangedSlot(const QItemSelection & oldSelection, const QItemSelection & newSelection);

private:
    Ui::Widget *ui;

    QStandardItemModel * model;
};

#endif // WIDGET_H
