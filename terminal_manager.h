#ifndef TERMINAL_MANAGER_H
#define TERMINAL_MANAGER_H

//! Manages UI, HW, MySQL requests

/*!
 * The manager of the ticket selling terminal
 * manages interface, database requests and
 * hardware monitoring
 */

#include <QObject>

class terminal_manager : public QObject
{
public:
	terminal_manager();
};

#endif // TERMINAL_MANAGER_H
