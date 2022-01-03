#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_guessButton_clicked();

    void on_startOverButton_clicked();

private:
    Ui::Widget *ui;
    int secretNumber, guessNumber;
};

#endif // WIDGET_H
