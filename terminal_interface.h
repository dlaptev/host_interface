#ifndef TERMINAL_INTERFACE_H
#define TERMINAL_INTERFACE_H

#include <QObject>
#include <QList>
#include <QMap>

#include <QString>

#include "interface_view.h"

//! The interface of the terminal

/*!
 * This is the manager of the terminal
 * interface. It contains a number of
 * terminal views and manages input and
 * output and connection with other parts
 * of the system
 */

class terminal_interface : public QObject
{
	Q_OBJECT

	QList<interface_view *> *views;		//!< the views of the interface;
	QMap<int, int> *view_order;			//!< which view is the next for current view
	QMap<int, int> *error_order;		//!< If error occured, where to go from current view

	int current_view;					//!< the view that is current in the interface

public:
	terminal_interface();
	terminal_interface(const terminal_interface&);

	int addView(interface_view *);
	int mapView(int, int);
	int mapError(int,int);

signals:
	//void ticketTypeChosen(int);
	//void ticketNumberChosen(int);

public slots:
	//void moneyEntered(int);
	//void ticketsPrinted();

};

#endif // TERMINAL_INTERFACE_H
