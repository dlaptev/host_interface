#ifndef QT_HOSTVIEW_H
#define QT_HOSTVIEW_H

#include <QWidget>
#include <QList>
#include <QGridLayout>

#include "qtsvgbutton.h"


class qt_hostview : public QWidget
{
	QList<QtSvgButton*> buttons; // buttons on the view
	QGridLayout * vertLayout;
	int checked_btn; 	// the button that was checked

public:
	int addButton(const QtSvgButton& );
	int addButton(const QString& );

	qt_hostview();
public slots:
	void btnPressed();
};

#endif // QT_HOSTVIEW_H
