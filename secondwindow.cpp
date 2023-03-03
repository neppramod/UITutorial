#include "secondwindow.h"

#include <QFileDialog>
#include <QPushButton>

SecondWindow::SecondWindow(QWidget *parent)
    : QWidget{parent}
{
    setFixedSize(400, 400);

    // When this button is clicked we trigger openFileDialog, that takes care of selecting a file
    QPushButton *button2 = new QPushButton("Open Dialog", this);
    button2->setGeometry(10, 20, 200, 40);

    connect(button2, SIGNAL(clicked()), this, SLOT(openFileDialog()));
}

void SecondWindow::openFileDialog()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Select a file", QDir::currentPath(), "All files (*)");
    qDebug() << "Selected File Path : " << fileName;
}
