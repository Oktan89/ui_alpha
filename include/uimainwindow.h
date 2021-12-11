#pragma once
#include <QMainWindow>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include "ui_uiparse.h"

class Ui_alpha : public QMainWindow
{
    Q_OBJECT
    QGridLayout *glayot;
    Ui::MainWindow *win;
    int x = 0;
    int y = 0;
    
public:
    Ui_alpha(QWidget *parent);
    ~Ui_alpha();
    void timerEvent(QTimerEvent *e);

public slots:
    void slot1();
};