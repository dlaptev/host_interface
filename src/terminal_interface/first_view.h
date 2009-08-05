#ifndef FIRST_VIEW_H
#define FIRST_VIEW_H


#include "qtsvgbutton.h"
#include "interface_view.h"

//! The first view class

/*!
 * Defines the first view of the interface, which
 * allows a user to make a decision which ticket to buy.
 * The view holds three buttons for making a choice
 * and an info buttons. The signals of the buttons are mapped.
 */

class first_view : public interface_view
{
	Q_OBJECT

	QtSvgButton * ticket; //!< Ticket for an adult
	QtSvgButton * child_ticket; //!< Ticket fot a child
	QtSvgButton * free_ticket;	//!< Free ticket

	QtSvgButton * info;			//!< Show the information
public:
	first_view();

public slots:
	void buttonPressed(int);

signals:
	void choiceMade(int);

};

#endif // FIRST_VIEW_H
