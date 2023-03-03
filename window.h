#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>

#include "secondwindow.h"

class Window : public QWidget
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = nullptr);

signals:

private:
    QPushButton *button1;
    SecondWindow *secondWindow;

private slots:
    void showSecondWindow();
};

#endif // WINDOW_H
