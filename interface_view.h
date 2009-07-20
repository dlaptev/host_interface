#ifndef INTERFACE_VIEW_H
#define INTERFACE_VIEW_H
/*
 * This represents a single view in the
 * terminal interface. It may contain
 * buttons, html views, labels, and other
 * children of QWidget.
 */


#include <QWidget>
#include <QList>
#include <QSignalMapper>
#include <QAbstractButton>
#include <QBoxLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTextDocument>

class interface_view : public QWidget
{
	Q_OBJECT

	QList<QAbstractButton*> * buttons;    //holds buttons
	QList<QWidget *>        * stuff;      //holds other stuff
	QSignalMapper           * signal_mapper; //to map the signals
	QHBoxLayout				* mainLayoutl;	// the main layout
	QList<QHBoxLayout *>	* vert_layouts; // vertical layouts
	QTextDocument			* helpDoc;		// may hold help in html format

	int last_choice;	// the button that was pressed last

public:
	int getLastChoice();

	interface_view();
	int addButton(QAbstractButton *, int vlayout=0);	// add button to the view, vlayout -- the number of vert layout to add button to
	int addHtml(const QWidget&);

public slots:
	void buttonPressed();       //some button is pressed on the interface
signals:
	void choice(int cosen);	//signal to inform the manager, what has been chosen


};

#endif // INTERFACE_VIEW_H
