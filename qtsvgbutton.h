#ifndef QTSVGBUTTON_H
#define QTSVGBUTTON_H

#include <QAbstractButton>
#include <QPicture>

class QSvgRenderer;

//! Button with svg skin to make things nice and scalable
/*!
 * The button with SVG skin.
 * Code taken from  qt embedded widgets
 * demo
 */
class QtSvgButton : public QAbstractButton
{
Q_OBJECT
	Q_PROPERTY(QString skin READ skin WRITE setSkin)
public:
	explicit QtSvgButton(QWidget * parent = 0);
	QtSvgButton (const QtSvgButton &);
	~QtSvgButton();

	void setSkin(const QString& skin);
	QString skin() const;

	virtual QSize sizeHint() const;
	virtual int heightForWidth(int) const;
private:
	QRect buttonRect() const;

	/** The default button size, need to calculate aspect ratio. **/
	QSize m_defaultSize;

	/** The loaded SVG picture "normal.svg". **/
	QPicture m_normal;
	/** The loaded SVG picture "hovered.svg". **/
	QPicture m_hovered;
	/** The loaded SVG picture "hovered.svg". **/
	QPicture m_pressed;
	/** The actual skin name. **/
	QString m_skin;

protected:
	virtual void paintEvent(QPaintEvent* event);
};

#endif // QTSVGBUTTON_H
