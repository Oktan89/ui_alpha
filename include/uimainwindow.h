#pragma once
#include <QMainWindow>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <vector>
#include "ui_uiparse.h"
#include "qstr.h"

class Ui_alpha : public QMainWindow
{
    Q_OBJECT
    QGridLayout *glayot;
    Ui::MainWindow *win;
    int x = 0;
    int y = 0;
    std::vector<okt::WrapQString> vec;
public:
    Ui_alpha(QWidget *parent);
    void pushvec();
    ~Ui_alpha();
    void timerEvent(QTimerEvent *e);

public slots:
    void slot1();
};