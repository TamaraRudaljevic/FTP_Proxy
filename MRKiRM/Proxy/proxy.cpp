#include "proxy.h"

Proxy::Proxy(QObject *parent) : QObject(parent)
{
    cout << "************* PROXY *************" << endl;

    socket21 = new QTcpServer(this);
    socket1024 = new QTcpServer(this);

    clientSocketCommand = new QTcpSocket(this);
    clientSocketData = new QTcpSocket(this);

    serverSocketCommand = new QTcpSocket(this);
    serverSocketData = new QTcpSocket(this);

    connect(this, SIGNAL(start()), this, SLOT(Start()));
    connect(this, SIGNAL(listen()), this, SLOT(Listen()));
}

void Proxy::Start()
{
    cout <<  "Starting proxy..." << endl << endl;

    emit listen();

}


/*** Listening on ports 3000 and 1024 and waiting for new connection ***/
void Proxy::Listen()
{
    bool listen = socket21->listen(QHostAddress::Any, FireFoxPort);
    if (!listen){
        ERR("Not listening on port 3000.\n");
    }else{
        INFO("Listening on port 3000.\n");
    }

    listen = socket1024->listen(QHostAddress::Any, DataPort);
    if (!listen){
        ERR("Not listening on port 1024.\n");
    }else{
        INFO("Listening on port 1024.\n");
    }

    // connecting signal newConnection to socket21 and socket1024
    connect(socket21, &QTcpServer::newConnection, this, &Proxy::ClientConnectedCommand);
    connect(socket1024, &QTcpServer::newConnection, this, &Proxy::ClientConnectedData);

}

/*** emiting newConnection, creating new connection on port 3000 to chrome
     and on port 21 to server ***/
void Proxy::ClientConnectedCommand()
{
    // creating child to socket21, type QTcpSocket
    clientSocketCommand = socket21->nextPendingConnection();
    connect(clientSocketCommand, &QTcpSocket::readyRead, this, &Proxy::ClientSendingCommand);

    serverSocketCommand->connectToHost(QHostAddress(serverAdress), CommandPort);
    connect(serverSocketCommand, &QTcpSocket::readyRead, this, &Proxy::ServerSendingCommand);

}

/*** when readyRead is emited on commandFromClient socket recv from firefox and sending to server ***/
void Proxy::ClientSendingCommand()
{
    QByteArray commandFromClient = clientSocketCommand->readAll();
    serverSocketCommand->write(commandFromClient);
    qDebug() << "From firefox to server: " << commandFromClient << endl;

}

/*** when readyRead is emited on commandFromServer socket recv from server and sending to firefox ***/
void Proxy::ServerSendingCommand()
{
    QByteArray commandFromServer = serverSocketCommand->readAll();
    clientSocketCommand->write(commandFromServer);
    qDebug() << "From server to firefox: " << commandFromServer << endl;

}

/*** creating new connections on port 1024 to server and firefox and waiting for readyread on server socket ***/
void Proxy::ClientConnectedData()
{
    // creating child to socket21, type QTcpSocket
    clientSocketData = socket1024->nextPendingConnection();


    serverSocketData->connectToHost(QHostAddress(serverAdress), DataPort);
    connect(serverSocketData, &QTcpSocket::readyRead, this, &Proxy::ServerSendingData);
}

/*** recv data from server and sending to firefox, and closing client socket ***/
void Proxy::ServerSendingData(){
    QByteArray dataFromServer = serverSocketData->readAll();
    clientSocketData->write(dataFromServer);

    cout << "***********************************\n";
    qDebug() << "Data from server to client: " << dataFromServer << endl;
    cout << "***********************************\n";

    if(dataFromServer == nullptr){
        clientSocketData->close();
    }

}

void Proxy::Disconect()
{
    qDebug() << "Client disconnecting..." << endl;
    socket21->close();
    socket1024->close();

    clientSocketCommand->close();
    serverSocketCommand->close();
}



