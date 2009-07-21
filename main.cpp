#include <QtGui/QApplication>
#include <QtGui/QWidget>
#include <QtGui/QBoxLayout>
#include <QSizePolicy>
#include <QString>

#include "qtsvgbutton.h"
#include "interface_view.h"
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


	// QWidget * widget = new QWidget();

	interface_view *view1 = new interface_view("view1");



	QtSvgButton * button = new QtSvgButton();
	QtSvgButton * button2 = new QtSvgButton();
	QtSvgButton * button3 = new QtSvgButton();
	QHBoxLayout *hlayout1 = new QHBoxLayout();
	QHBoxLayout *hlayout2 = new QHBoxLayout();
	QVBoxLayout *layout = new QVBoxLayout();
	QVBoxLayout *layout2 = new QVBoxLayout();


	button->setSkin("Ticketland");
	button->setMinimumSize(1,1);

	button2->setSkin("Ticketland");
	button2->setMinimumSize(1,1);

	button3->setSkin("Ticketland");
	button3->setMinimumSize(1,1);
	button3->setMaximumSize(256,256);
	button3->setMinimumSize(256,256);

	view1->addButton(button3,1);
	view1->addButton(button2,2);
	view1->addButton(button,2);

	view1->show();
	/*
	QSizePolicy SizePolicy(QSizePolicy::Preferred,QSizePolicy::Preferred);
		//make widgets length depend on widget's height. thus we make the widget
		//always square in the layout

	SizePolicy.setHeightForWidth(true);
	button3->setSizePolicy(SizePolicy);
	//button3->setSizePolicy(RadioButton, RadioButton);
	// add two buttons to vertical layout
	layout->addWidget(button);
	layout->addWidget(button2);

	hlayout1->addLayout(layout);

	hlayout2->addStretch(1);
	hlayout2->addWidget(button3);

	//layout2->addStretch(1);
	layout2->addLayout(hlayout2);

	hlayout1->addLayout(layout2);
	widget->setLayout(hlayout1);

	widget->show();
	//button->show();
	*/


	return app.exec();
}
