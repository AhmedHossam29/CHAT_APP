#include "chatapp.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    chatapp w;
    w.show();
    return a.exec();
}
