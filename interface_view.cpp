#include "interface_view.h"

#include <QSignalMapper>
#include <QList>
#include <QWidget>
#include <QAbstractButton>

interface_view::interface_view()
{
	buttons = new QList<QAbstractButton *>;
	stuff = new QList<QWidget *>;
	signal_mapper = new QSignalMapper();
}

int interface_view::getLastChoice() {
	return last_choice;
}

//FIXME check for availability of vlayout in the list!
int interface_view::addButton(QAbstractButton *btn, int vlayout)
{
	vert_layouts->at(vlayout)->addWidget(btn);
	return 0;
}

//dummy for now
int interface_view::addHtml(const QWidge& )
{
	return 0;
}
