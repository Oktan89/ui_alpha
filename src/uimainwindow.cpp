#include <thread>
#include <QtCore/QString>
#include <iostream>
#include "uimainwindow.h"
#include "qstr.h"

Ui_alpha::Ui_alpha(QWidget *parent) : QMainWindow(parent), win(nullptr)
{
    win = new Ui::MainWindow;
    win->setupUi(this);
    glayot = win->gridLayout;
    show();
   std::thread test(&Ui_alpha::pushvec, this);
   test.detach();
}

void Ui_alpha::pushvec()
{
        
    vec.push_back("dqwdqwdqwd");
}

Ui_alpha::~Ui_alpha()
{
    delete win;
}

void Ui_alpha::slot1()
{
    startTimer(500);
    
}

void Ui_alpha::timerEvent(QTimerEvent *e) 
{
   
  Q_UNUSED(e);
        okt::WrapQString string("OktaN");
        string = vec.front();
        QPushButton *b = new QPushButton(string, nullptr);
        glayot->addWidget(b, y, x);
    (x < 5)? (++x) : (++y, x = 0);

}