#ifndef COMMON_H
#define COMMON_H

#include <QObject>
#include <QString>
#include <QtNetwork/QTcpSocket>
#include <QtNetwork/QHostAddress>
#include <QTcpServer>
#include <iostream>

using namespace std;

#define WARN(a) std::cout<<"[WARNING]: "<<a<<endl
#define ERR(a)  std::cout<<"[ERROR]: "<<a<<endl
#define LOG(a)  std::cout<<"[LOG]: "<<a<<endl
#define INFO(a) std::cout<<"[INFORMATION]: "<<a<<endl

#define CommandPort 21 // port used to send commands
#define DataPort 1024 // port used to send data
#define FireFoxPort 3000 // port used to connect to firefox

#define serverAdress "10.81.2.56"

#endif // COMMON_H
