#ifndef SECOND_VIEW_H
#define SECOND_VIEW_H

#include "interface_view.h"
#include "qtsvgbutton.h"
#include "terminal_interface.h"
#include "terminal_manager.h"

#include <QLabel>
#include <QObject>

//! The second view
/*!
 * The second view of terminal interface
 * allows a user to choose the number of tickets.
 * Displays the number of tickets chosen and overall price
 */

class second_view : public interface_view
{
	Q_OBJECT

	QLabel	*price;			//!< Label to display the overall price
	QLabel	*ticket_number;	//!< Label to display the number of tickets chosen


	QtSvgButton * back;		//!< Button to go back to view 1
	QtSvgButton * next;		//!< Button to go to the next view
	QtSvgButton * plus;		//!< Button to choose one ticket more
	QtSvgButton * minus;	//!< Buttom to reduce the number of tickets chosen
	QtSvgButton * info;		//!< Show the information

	int max_tickets;		//!< maximum number of tickets
	int tickets_number;		//!< number of tickets chosen
	int tickets_price;		//!< price for all tickets
	//int price;
	terminal_manager * parent; //!< pointer to the manager

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
