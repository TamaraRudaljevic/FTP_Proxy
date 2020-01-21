#include <QCoreApplication>

#include "proxy.h"
#include "common.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Proxy proxy;
    proxy.Start();

    return a.exec();
}
