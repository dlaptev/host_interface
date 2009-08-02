#include "second_view.h"
#include "qtsvgbutton.h"

#include <QString>
#include <QLabel>
#include <QMessageBox>
#include <QObject>

second_view::second_view()
{
	price = new QLabel(this);
	ticket_number = new QLabel(this);

	max_tickets = 14;
	tickets_number = 1;
	tickets_price = 100; //parent->getTicketPrice(1);

	QString temp;
	ticket_number->setText("Number of tickets chosen: " +
						   temp.setNum(tickets_number));

	next = new QtSvgButton(this);
	back = new QtSvgButton(this);
	plus = new QtSvgButton(this);
	minus = new QtSvgButton(this);
	info = new QtSvgButton(this);

	next->setSkin("fwd_btn");
	back->setSkin("back_btn");
	plus->setSkin("plus_btn");
	minus->setSkin("minus_btn");
	info->setSkin("info_btn");

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

	grdLayout->addWidget(price,3,2,1,3);
	grdLayout->addWidget(ticket_number,4,2,1,3);

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

	QPalette pal;
	pal.setColor(QPalette::Background,Qt::white);
	this->setPalette(pal);
}

/*!
 * @param num the number of button pressed
 *
 * What to do when button pressed here
 */

void second_view::buttonPressed(int num)
{
	QString tmp;

	switch (num) {
		//back
		case 0:
		case 1:
			break;
		//minus
		case 2:
			if (tickets_number>1)
				tickets_number--;
			ticket_number->setText("Number of tickets chosen: " +
								   tmp.setNum(tickets_number));
			break;
		//plus
		case 3:
			if (tickets_number < 14)
				tickets_number++;
			ticket_number->setText("Number of tickets chosen: " +
								   tmp.setNum(tickets_number));

			break;
		//next
		case 4:
			break;
		//info
		case 5:
			break;
		default:
			break;
	}

}

void second_view::pressed()
{
	QString str;
	str.setNum(1);
	 QMessageBox msgBox;
	msgBox.setText(str);
	msgBox.exec();
}
