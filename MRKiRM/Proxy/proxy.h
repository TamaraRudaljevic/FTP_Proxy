#ifndef PROXY_H
#define PROXY_H

#include "common.h"

class Proxy : public QObject
{
    Q_OBJECT

public:
    explicit Proxy(QObject *parent = nullptr);

private:
    QTcpServer* socket21;
    QTcpServer* socket1024;

    QTcpSocket* clientSocketCommand; // socket from firefox to proxy, command session
    QTcpSocket* clientSocketData; // socket from firefox to proxy, data session

    QTcpSocket* serverSocketCommand; // socket from proxy to server, data session
    QTcpSocket* serverSocketData; // socket form proxy to server, data session

public slots:
    void Start();
    void Listen();
    void ClientConnectedCommand();
    void ClientConnectedData();
    void ClientSendingCommand();
    void ServerSendingCommand();
    void ServerSendingData();
    void Disconect();

signals:
    void start();
    void listen();
    void disconnect();

};

#endif // PROXY_H
