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
#include <QGridLayout>
#include <QLabel>


//! A single view for the terminal interface

/*!
 * This represents a single view in the
 * terminal interface. It may contain
 * buttons, html views, labels, and other
 * children of QWidget. Basically there are
 * three vertical layouts in the class,
 * contained in one main horisontal layout.
 * However, the view may be created with custom layouts
 * in it. This can be done by passing a list of pointers to
 * vertical layouts to the constructor.
 */

class interface_view : public QWidget
{
	Q_OBJECT
protected:

	QList<QAbstractButton*> * buttons;			//!< holds buttons
	QList<QWidget *>        * stuff;			//!< holds other stuff
	QSignalMapper           * signal_mapper;	//!< to map the signals
	QHBoxLayout				* main_layout;		//!< the main layout
	QList<QVBoxLayout *>	* vert_layouts;		//!< vertical layouts
	QTextDocument			* helpDoc;			//!< may hold help in html format
	QString					* name;
	QGridLayout				* grdLayout;			//!< grid layout for the view

	int last_choice;		//!< the button that was pressed last
	int btn_number;			//!< the number of buttons; == buttons.size();
	int nextBtn;			//!< number of the button that tells to go to next view
	int prevBtn;			//!< number of the button that tells to go to prev view

public:
	int getLastChoice();	//!< get the last button that was pressed on that view

	interface_view();							//!< default constructor
	interface_view(const QString& );			//!< constructor with the name specified
	interface_view(int); //!< constructor to build custom number of vertical Layouts


	//int addButton(AbstractButton *, int vlayout=0);		//!< add button to the view, vlayout -- the number of vert layout to add button to
	int addWidget(QWidget *, int, int, int, int, Qt::Alignment=0); //!< add widget (see QGridLayout)

	int addButton(QAbstractButton *, int, int, int, int, Qt::Alignment=0); //!< add button (see QGridLayout)
	int addStretch(int vlayout);							//!< add stretch to the layout
	//int addHtml(const QWidget&);

	int setColumnStretch(int,int);
	int setRowStretch(int,int);

	int columnStretch(int);
	int rowStretch(int);
	void setNextBtn(int);
	int getNextBtn() const;

	void setPrevBtn(int);
	int getPrevBtn() const;

	QString getName() const;
	void setName(const QString&);

public slots:
	void buttonPressed(int);		//!< some button is pressed on the interface
signals:
	void choice(int chosen);		//!< signal to inform the manager, what has been chosen
};

#endif // INTERFACE_VIEW_H
