#include "window.h"

Window::Window(QWidget *parent)
    : QWidget{parent}
{

    setFixedSize(600, 300);  // Set size of Window

    // Add button1 to Window
    button1 = new QPushButton("Open Another Window", this);
    button1->setGeometry(10, 20, 200, 40);

    secondWindow = new SecondWindow(nullptr);

    connect(button1, SIGNAL(clicked()), this, SLOT(showSecondWindow()));
}

void Window::showSecondWindow()
{
    secondWindow->show();
}
