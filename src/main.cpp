#include <iostream>
#include <QApplication>
#include <QString>

#include "uimainwindow.h"

int main(int argc, char **argv)
{
    QApplication app = QApplication(argc, argv);

    std::unique_ptr<Ui_alpha> uialpha = std::make_unique<Ui_alpha>(nullptr);

    
    
    return app.exec();
}