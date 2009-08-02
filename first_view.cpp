#include "first_view.h"

#include <QPalette>
first_view::first_view()
{
	info = new QtSvgButton(this);
	ticket = new QtSvgButton(this);
	child_ticket = new QtSvgButton(this);
	free_ticket = new QtSvgButton(this);

	info->setSkin("info_btn");
	ticket->setSkin("vz_btn");
	child_ticket->setSkin("ch_btn");
	free_ticket->setSkin("lg_btn");

	buttons->push_back(ticket);
	buttons->push_back(child_ticket);
	buttons->push_back(free_ticket);
	//buttons->push_back(info);

	grdLayout->addWidget(ticket,1,3,1,3);
	grdLayout->addWidget(child_ticket,3,3,1,3);
	grdLayout->addWidget(free_ticket,5,3,1,3);
	grdLayout->addWidget(info,8,1,1,1);

	for (int i=1;i<8;i++) {
		grdLayout->setColumnStretch(i,1);
	}

	for (int i=1;i<8;i++) {
		grdLayout->setRowStretch(i,1);
	}


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
 * @param btn The number of the button pressed
 * Describes the reaction when the button is pressed
 * And Signals to anyone connected to this signal
 */
void first_view::buttonPressed(int btn)
{
	switch (btn) {
		//ticket for adult
		case 1:
			choiceMade(1);
			break;
		//child ticket
		case 2:
			choiceMade(2);
			break;
		// free ticket
		case 3:
			choiceMade(3);
			break;
		//info button pressed
		case 4:
			choiceMade(4);
			break;

		default:
			//shit!
			break;
		}
}

