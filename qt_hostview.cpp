#include "qt_hostview.h"
#include "qtsvgbutton.h"

qt_hostview::qt_hostview()
{

}

int qt_hostview::addButton(const QtSvgButton& btn)
{
	QtSvgButton *n_button = new QtSvgButton (btn);
	buttons.push_back(n_button);
}
