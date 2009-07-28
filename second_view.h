#ifndef SECOND_VIEW_H
#define SECOND_VIEW_H

#include "interface_view.h"
#include "qtsvgbutton.h"

#include <QLabel>
#include <QObject>

class second_view : public interface_view
{
	Q_OBJECT

	QLabel	*price;
	QLabel	*ticket_number;

	QtSvgButton * back;
	QtSvgButton * next;
	QtSvgButton * plus;
	QtSvgButton * minus;
	QtSvgButton * info;

	int max_tickets;		//!< maximum number of tickets
	int tickets_number;		//!< number of tickets chosen
	int tickets_price;		//!< price for all tickets
	//int price;

public:

	second_view();
	//second_view(const QString&);

	int getPrice() const;
	int getTicketsNum() const;

public slots:
	void buttonPressed(int);
	void pressed();


};

#endif // SECOND_VIEW_H
