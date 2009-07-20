#ifndef TERMINAL_INTERFACE_H
#define TERMINAL_INTERFACE_H
/*
 * This is the manager of the terminal
 * interface. It contains a number of
 * terminal views and manages input and
 * output and connection with other parts
 * of the system
 */

#include <QObject>

class terminal_interface : public QObject
{
public:
	terminal_interface();
};

#endif // TERMINAL_INTERFACE_H
