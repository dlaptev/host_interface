#ifndef INTERFACE_VIEW_H
#define INTERFACE_VIEW_H



#include <QWidget>
#include <QList>
#include <QSignalMapper>
#include <QAbstractButton>
#include <QBoxLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTextDocument>
#include <QString>

//! A single view for the terminal interface

/*!
 * This represents a single view in the
 * terminal interface. It may contain
 * buttons, html views, labels, and other
 * children of QWidget. Basically there are
 * three vertical layouts in the class,
 * contained in one main horisontal layout
 */

class interface_view : public QWidget
{
	Q_OBJECT

	QList<QAbstractButton*> * buttons;    //!< holds buttons
	QList<QWidget *>        * stuff;      //!< holds other stuff
	QSignalMapper           * signal_mapper; //!< to map the signals
	QHBoxLayout				* main_layout;	//!< the main layout
	QList<QVBoxLayout *>	* vert_layouts; //!< vertical layouts
	QTextDocument			* helpDoc;		//!< may hold help in html format
	QString					* name;
	int last_choice;	//!< the button that was pressed last
	int btn_number;		//!< the number of buttons; == buttons.size();

public:
	int getLastChoice();	//!< get the last button that was pressed on that view

	interface_view();		//!< default constructor
	interface_view(const QString& ); //!< constructor with the name specified
	interface_view(const QList<QVBoxLayout *>); //!< constructor to build custom Vertical Layouts

	int addButton(QAbstractButton *, int vlayout=0);	//!< add button to the view, vlayout -- the number of vert layout to add button to

	int addHtml(const QWidget&);

public slots:
	void buttonPressed(int);       //!< some button is pressed on the interface
signals:
	void choice(int cosen);	//!< signal to inform the manager, what has been chosen


};

#endif // INTERFACE_VIEW_H
