#include "interface_view.h"

#include <QSignalMapper>
#include <QList>
#include <QWidget>
#include <QAbstractButton>
#include <QSignalMapper>
#include <QString>


interface_view::interface_view()
{
	QVBoxLayout *tmp;

	buttons = new QList<QAbstractButton *>;
	stuff = new QList<QWidget *>;
	signal_mapper = new QSignalMapper(this); // create a signal mapper for this view
	main_layout = new QHBoxLayout();
	vert_layouts = new QList<QVBoxLayout *>;


	//add default three vertical layouts to the view

	for (int i=0;i<3;i++) {
		tmp = new QVBoxLayout();
		vert_layouts->push_back(tmp);
		main_layout->addLayout(tmp);
	}

	this->setLayout(main_layout);
}

interface_view::interface_view(const QString& str)
{
	QVBoxLayout *tmp;

	buttons = new QList<QAbstractButton *>;
	stuff	= new QList<QWidget *>;
	signal_mapper = new QSignalMapper(this);
	name = new QString(str);
	main_layout = new QHBoxLayout();
	vert_layouts = new QList<QVBoxLayout *>;


	//add default three vertical layouts to the view

	for (int i=0;i<3;i++) {
		tmp = new QVBoxLayout();
		vert_layouts->push_back(tmp);
		main_layout->addLayout(tmp);
	}

	this->setLayout(main_layout);
}

int interface_view::getLastChoice() {
	return last_choice;
}

int interface_view::addButton(QAbstractButton *btn, int vlayout)
{
	int number;		// the number for the button begin added

	if (btn == NULL) {
		//FIXME throw exception
		return -1;
	}

	if (vlayout>buttons->size()) {
	//	return -1;
	}

	number = buttons->size();
	number++;
	btn_number++;
	buttons->push_back(btn);	// add button at the end of the list
	(vert_layouts->at(vlayout-1))->addWidget(btn); // add the widget to layout;
	//signal_mapper->setMapping(btn,btn_number); // add button to mapping;

	//connect the mapped signal to our slot
	//connect(signal_mapper,SIGNAL(mapped(int)),this,SLOT(buttonPressed(int)));

	return 0;
}

//dummy for now
int interface_view::addHtml(const QWidget& )
{
	return 0;
}

void interface_view::buttonPressed(int i)
{
	last_choice = i;
	choice(i); //signal to whoever connected to that signal that the button "i" is pressed
}
