#include "second_view.h"
#include "qtsvgbutton.h"

#include <QString>
#include <QLabel>
#include <QMessageBox>
#include <QObject>

second_view::second_view()
{
	next = new QtSvgButton(this);
	back = new QtSvgButton(this);
	plus = new QtSvgButton(this);
	minus = new QtSvgButton(this);
	info = new QtSvgButton(this);

	next->setSkin("Ticketland");
	back->setSkin("Ticketland");
	plus->setSkin("Ticketland");
	minus->setSkin("Ticketland");
	info->setSkin("Ticketland");

	buttons->push_back(back);
	buttons->push_back(minus);
	buttons->push_back(plus);
	buttons->push_back(next);
	buttons->push_back(info);

	grdLayout->addWidget(back,2,1,1,1);
	grdLayout->addWidget(info,5,1,1,1);
	grdLayout->addWidget(minus,1,3,1,1);
	grdLayout->addWidget(plus,1,4,1,1);
	grdLayout->addWidget(next,2,6,1,1);

	for (int i=1;i<7;i++) {
		grdLayout->setColumnStretch(i,1);
	}
	for (int i=1;i<6;i++) {
		grdLayout->setRowStretch(i,1);
	}

//	signal_mapper->setMapping(info,1);
//	connect(info,SIGNAL(clicked()),signal_mapper,SLOT(map()));
//
//	connect(signal_mapper,SIGNAL(mapped(int)),this, SLOT(buttonPressed(int)));
	//connect(info,SLOT(clicked()), this,SLOT(pressed()));

	for (int i=0;i<buttons->size();i++) {
		signal_mapper->setMapping(buttons->at(i),i+1);
		connect(buttons->at(i), SIGNAL(clicked()),
							signal_mapper, SLOT (map()));

		buttons->at(i)->setMinimumSize(1,1);


	}
	connect(signal_mapper,SIGNAL(mapped(int)),this,SLOT(buttonPressed(int)));

}

void second_view::buttonPressed(int num)
{
	QString str;
	str.setNum(num+13);
	 QMessageBox msgBox;
	msgBox.setText(str);
	msgBox.exec();
}

void second_view::pressed()
{
	QString str;
	str.setNum(1);
	 QMessageBox msgBox;
	msgBox.setText(str);
	msgBox.exec();
}
