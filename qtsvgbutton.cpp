#include <QtSvg>
#include <QSvgRenderer>
#include <QPainter>
#include <QAbstractButton>

#include "qtsvgbutton.h"

QtSvgButton::QtSvgButton(QWidget * parent)
	: QAbstractButton(parent)
{
	// trigger repaint on enter and leave event
	setAttribute(Qt::WA_Hover, true);
}

QtSvgButton::QtSvgButton(const QtSvgButton& btn)
{
	this->m_defaultSize = btn.m_defaultSize;
	this->m_normal = btn.m_normal;
	this->m_hovered = btn.m_hovered;
	this->m_pressed = btn.m_pressed;
	this->m_skin = btn.m_skin;
}

QtSvgButton::~QtSvgButton()
{
}

void QtSvgButton::setSkin(const QString& skin)
{
	m_skin = skin;
	QString base = "./svgbutton/" + skin + '/';

	// create null size and null pictures
	m_defaultSize = QSize();
	m_normal = QPicture();
	m_hovered = QPicture();
	m_pressed = QPicture();

	QSvgRenderer renderer;
	QPainter painter;

	if (renderer.load(base + "normal.svg")) {
	m_defaultSize = renderer.defaultSize();
	painter.begin(&m_normal);
	renderer.render(&painter, QRectF(0.0, 0.0, 1.0, 1.0));
	painter.end();
	}

	if (renderer.load(base + "pressed.svg")) {
	painter.begin(&m_pressed);
	renderer.render(&painter, QRectF(0.0, 0.0, 1.0, 1.0));
	painter.end();
	}

	if (renderer.load(base + "hovered.svg")) {
	painter.begin(&m_hovered);
	renderer.render(&painter, QRectF(0.0, 0.0, 1.0, 1.0));
	painter.end();
	}

	// update geometry for new sizeHint and repaint
	updateGeometry();
	update();
}

QString QtSvgButton::skin() const
{
	return m_skin;
}

QRect QtSvgButton::buttonRect() const
{

	QSize buttonSize = m_defaultSize;
	buttonSize.scale(rect().size(), Qt::IgnoreAspectRatio);

	// Keep the button aligned horizontally centered (like the text):
	int buttonPosX = (rect().width() - buttonSize.width()) / 2;
	if (buttonPosX < 0) buttonPosX = 0;
	buttonPosX += rect().left();

	QPoint buttonPos = QPoint(buttonPosX, 0);

	return QRect(buttonPos, buttonSize);
}

void QtSvgButton::paintEvent(QPaintEvent * event)
{
	Q_UNUSED(event);

	QPainter painter(this);
	painter.scale(buttonRect().width(), buttonRect().height());

	if (isDown()) {
	m_pressed.play(&painter);
	} else if (underMouse()) {
	m_hovered.play(&painter);
	} else {
	m_normal.play(&painter);
	}
}

QSize QtSvgButton::sizeHint() const
{
	if (!m_defaultSize.isEmpty()) {
	return m_defaultSize;
	} else {
	return QSize(100, 24);
	}
}
