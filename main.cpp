#include <QtGui/QApplication>
#include <QtGui/QWidget>
#include <QtGui/QBoxLayout>
#include <QSizePolicy>
#include <QString>

#include "qtsvgbutton.h"
#include "interface_view.h"
#include "second_view.h"

/*!
 @mainpage Ticketland ticket selling system documentation

 You are reading the documentation
 of the ticketland ticket selling system. This part
 of documentation describes the software, that makes
 the terminal part of the system. It has a user interface,
 that helps users to buy tickets, it collects money from the user,
 prints tickets and checks, and returns the change to the user,
 if necessary. The system is beging implemented with the use of Qt
 framework.
 */

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	second_view *view2 = new second_view();
	view2->show();


	// QWidget * widget = new QWidget();

//	interface_view *view1 = new interface_view("view1");
//	interface_view *view2 = new interface_view("view2");
//
//
//	QtSvgButton * button = new QtSvgButton();
//	QtSvgButton * button1 = new QtSvgButton();
//	QtSvgButton * button2 = new QtSvgButton();
//	QtSvgButton * button3 = new QtSvgButton();
//	QtSvgButton * button4 = new QtSvgButton();
//
//	QHBoxLayout *hlayout1 = new QHBoxLayout();
//	QHBoxLayout *hlayout2 = new QHBoxLayout();
//	QVBoxLayout *layout = new QVBoxLayout();
//	QVBoxLayout *layout2 = new QVBoxLayout();
//
//	button2->setSkin("btn_1_up");
//	button2->setMinimumSize(1,1);
//
//
//	button->setSkin("btn_1_down");
//	button->setMinimumSize(1,1);
//
//
//	button3->setSkin("Ticketland");
//	button3->setMinimumSize(256,256);
//	button3->setMaximumSize(256,256);
//
//	button1->setSkin("btn_1_mid");
//	button1->setMinimumSize(1,1);
//
//	button4->setSkin("Ticketland");
//	button4->setMinimumSize(1,1);
//	//view1->addStretch(1);
//	view1->addStretch(1);
//	view1->addButton(button3,1);
//	view1->addButton(button2,2);
//	view1->addButton(button1,2);
//	view1->addButton(button,2);

//	view1->addButton(button3,4,1,1,1);
//	view1->addButton(button2,1,2,1,4);
//	view1->addButton(button1,2,2,1,4);
//	view1->addButton(button,3,2,1,4);
//
//	for (int i=1;i<6;i++)
//		view1->setColumnStretch(i,1);
//
//	for (int i=1;i<5;i++)
//		view1->setRowStretch(i,1);
//
//	//view1->setColumnStretch(5,1);
//	//view1->setColumnStretch(6,1);
//
//	view1->show();
//	/*


	return app.exec();
}
