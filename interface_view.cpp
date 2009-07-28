#include "interface_view.h"

#include <QSignalMapper>
#include <QList>
#include <QWidget>
#include <QAbstractButton>
#include <QSignalMapper>
#include <QString>
#include <QGridLayout>

interface_view::interface_view()
{
	QVBoxLayout *tmp;

	buttons = new QList<QAbstractButton *>;
	stuff = new QList<QWidget *>;
	signal_mapper = new QSignalMapper(this); // create a signal mapper for this view
	//main_layout = new QHBoxLayout();
	vert_layouts = new QList<QVBoxLayout *>;

	grdLayout = new QGridLayout(this);


	name = new QString();

	//main_layout->setSpacing(100);
	//add default three vertical layouts to the view
//
//	for (int i=0;i<3;i++) {
//		tmp = new QVBoxLayout();
//		tmp->setSpacing(0);
//		vert_layouts->push_back(tmp);
//		main_layout->addLayout(tmp);
//
//		main_layout->addStretch(1);
//	}
//
//	this->setLayout(main_layout);

}

interface_view::interface_view(const QString& str)
{
	QVBoxLayout *tmp;

	buttons = new QList<QAbstractButton *>;
	stuff	= new QList<QWidget *>;
	signal_mapper = new QSignalMapper(this);
	name = new QString(str);
	//main_layout = new QHBoxLayout();
	vert_layouts = new QList<QVBoxLayout *>;
	grdLayout = new QGridLayout(this);

	this->setLayout(grdLayout);

	//main_layout->setSpacing(100);
	//add default three vertical layouts to the view

//	for (int i=0;i<3;i++) {
//		tmp = new QVBoxLayout();
//		tmp->setSpacing(0);
//		vert_layouts->push_back(tmp);
//
//		main_layout->addLayout(tmp);
//		main_layout->addStretch(1);
//	}
//
//	this->setLayout(main_layout);
}

/*!
 * Add a button to the specified layout
 */

//int interface_view::addButton(QAbstractButton *btn, int vlayout)
//{
//	int number;		// the number for the button begin added
//
//	if (btn == NULL) {
//		//FIXME throw exception
//		return -1;
//	}
//
//	if (vlayout>buttons->size()) {
//	//	return -1;
//	}
//
//	number = buttons->size();
//	number++;
//	btn_number++;
//	buttons->push_back(btn);	// add button at the end of the list
//	(vert_layouts->at(vlayout-1))->addWidget(btn); // add the widget to layout;
//	//signal_mapper->setMapping(btn,btn_number); // add button to mapping;
//
//	//connect the mapped signal to our slot
//	//connect(signal_mapper,SIGNAL(mapped(int)),this,SLOT(buttonPressed(int)));
//
//	return 0;
//}

/*!
 * Add some widget to the specified layout.
 * Method knows nothing about a widget
 * so it just stays in the layout.
 */
//
//int interface_view::addWidget(QWidget *wgt, int vlayout)
//{
//	if (wgt == NULL) {
//		return -1;
//	}
//
//	if (vlayout>stuff->size()) {
//		//return -1
//	}
//
//	stuff->push_back(wgt);
//	vert_layouts->at(vlayout)->addWidget(wgt);
//
//	return 0;
//}
//

int interface_view::addWidget(QWidget * wgt, int fromRow, int fromColumn,
				int rowSpan, int columnSpan, Qt::Alignment alignment)
{
	grdLayout->addWidget(wgt,fromRow,fromColumn,rowSpan,columnSpan,alignment);
	return 0;
}

int interface_view::addButton(QAbstractButton * btn, int fromRow, int fromColumn,
							  int rowSpan, int columnSpan, Qt::Alignment alignment)
{
	buttons->push_back(btn);
	btn_number++;
	grdLayout->addWidget(btn, fromRow, fromColumn, rowSpan, columnSpan, alignment);

	//signal_mapper->setMapping(btn,btn_number); // add button to mapping;

	//connect the mapped signal to our slot
	//connect(signal_mapper,SIGNAL(mapped(int)),this,SLOT(buttonPressed(int)));

	return 0;
}

int interface_view::addStretch(int vlayout)
{
	vert_layouts->at(vlayout-1)->addStretch(1);
	return 0;
}

void interface_view::buttonPressed(int i)
{
	last_choice = i;
	choice(i); //signal to whoever connected to that signal that the button "i" is pressed
}

int interface_view::getNextBtn() const
{
	return nextBtn;
}

void interface_view::setNextBtn(int next)
{
	nextBtn = next;
}

int interface_view::getPrevBtn() const
{
	return prevBtn;
}

void interface_view::setPrevBtn(int prev)
{
	prevBtn = prev;
}

int interface_view::getLastChoice() {
	return last_choice;
}

QString interface_view::getName() const
{
	//return new QString(name);
}

void interface_view::setName(const QString& n)
{
	*name=n;
}

int interface_view::setColumnStretch(int column,int stretch)
{
	grdLayout->setColumnStretch(column, stretch);
	return 0;
}

int interface_view::setRowStretch(int row, int stretch)
{
	grdLayout->setRowStretch(row,stretch);
	return 0;
}

int interface_view::columnStretch(int col)
{
	return grdLayout->columnStretch(col);
}

int interface_view::rowStretch(int row)
{
	return grdLayout->rowStretch(row);
}
