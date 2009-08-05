#include "help_view.h"
#include <QUrl>

help_view::help_view()
{
	helpView = new QWebView(this);
	back = new QtSvgButton();

	back->setSkin("info_btn");

	grdLayout->addWidget(helpView,1,2,3,3);
	//grdLayout->addWidget(back,5,1,1,1);

	helpView->load(QUrl("./help/help.html"));

	QPalette pal;
	pal.setColor(QPalette::Background,Qt::white);
	this->setPalette(pal);
}
