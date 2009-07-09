#include <QtGui/QApplication>
#include <QtGui/QWidget>
#include <QtGui/QBoxLayout>
#include "mainwindow.h"
#include "qtsvgbutton.h"
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);


    //QWidget * widget = new QWidget();
    QtSvgButton * button = new QtSvgButton();
    //QBoxLayout *layout = new QBoxLayout(QBoxLayout::LeftToRight);
    button->setSkin("Ticketland");
    button->setText("Button1");
    //layout->addWidget(button);
    //widget->setLayout(layout);

    //widget->show();
    button->show();
    return app.exec();
}
