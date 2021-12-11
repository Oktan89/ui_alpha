#include <thread>
#include "uimainwindow.h"

Ui_alpha::Ui_alpha(QWidget *parent) : QMainWindow(parent), win(nullptr)
{
    win = new Ui::MainWindow;
    win->setupUi(this);
    glayot = win->gridLayout;
    show();
}

Ui_alpha::~Ui_alpha()
{
    delete win;
}

void Ui_alpha::slot1()
{
    startTimer(1000);
}

void Ui_alpha::timerEvent(QTimerEvent *e) 
{
    
  Q_UNUSED(e);
  

        QString string = "test";
        QPushButton *b = new QPushButton(string, nullptr);
        glayot->addWidget(b, y, x);
    (x < 5)? (++x) : (++y, x = 0);
    

}