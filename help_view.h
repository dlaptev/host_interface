#ifndef HELP_VIEW_H
#define HELP_VIEW_H

#include <QWebView>
#include "interface_view.h"
#include "qtsvgbutton.h"

//! The help view

/*!
 * The help view. shows help as an HTML page
 * loaded from file.
 */

class help_view : public interface_view
{

	QWebView *helpView;
	QtSvgButton * back; //! button to go back

public:

	help_view();
};

#endif // HELP_VIEW_H
