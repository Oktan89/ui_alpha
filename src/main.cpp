#include "uimainwindow.h"
#include <memory>
#include <QApplication>
#include "qstr.h"
#include <iostream>




int main(int argc, char **argv)
{
    QApplication app = QApplication(argc, argv);

   std::shared_ptr<Ui_alpha> uialpha = std::make_shared<Ui_alpha>(nullptr);
   
   uialpha->setWindowTitle("-=OktaN=-");
   
   return app.exec();
}