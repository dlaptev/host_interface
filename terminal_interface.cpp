#include "terminal_interface.h"

#include <QList>
#include <QMap>

terminal_interface::terminal_interface()
{
	views = new QList<interface_view *>;
	view_order = new QMap<int, int>;
	error_order = new QMap<int, int>;

	current_view = 0;
}

terminal_interface::terminal_interface(const terminal_interface& ti)
{
	views = ti.views;
	view_order= ti.view_order;
	error_order= ti.error_order;
	current_view = ti.current_view;
}

int terminal_interface::addView(interface_view * iv)
{
	views->push_back(iv);
}

int terminal_interface::mapView(int view, int next)
{
	view_order->insert(view,next);
	return 0;
}

int terminal_interface::mapError(int view, int err)
{
	error_order->insert(view,err);
	return 0;
}
