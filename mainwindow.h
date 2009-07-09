#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <qtsvgbutton.h>

class MainWindow : public QWidget
{
    Q_OBJECT
    QtSvgButton *svgBtn;
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
};

#endif // MAINWINDOW_H
