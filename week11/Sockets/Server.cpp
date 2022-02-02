#include <arpa/inet.h>
#include <iostream>
#include <netdb.h>
#include <string.h>
#include <string>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

int main()
{

    sockaddr_in serverSocket;
    sockaddr_in service;

    string address = "127.0.0.1";

    char host[NI_MAXHOST];
    //char service[NI_MAXSERV];


// STEP 1 - EQUIV. OF WSAStartUp()

    // appears to be handled by including <netdb.h> and <arpa/inet.h>

// STEP 2  - CREATE THE SOCKET
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock == -1)
        cout << "error with creating socket" << endl;
    else
        cout << "socket created" << endl;

// STEP 3 - Part of Bind

    service.sin_family = AF_INET;
    service.sin_port = htons(5400);
    inet_pton(AF_INET, address.c_str(), &service.sin_addr);


    if (bind(sock, (sockaddr*)&service, sizeof(service)) == -1)
        cout << "bind() failed: " << endl;
    else
        cout << "bind() successful" << endl;


    // STEP 4 - LISTENING
    if (listen(sock, SOMAXCONN) == -1)
        cout << "listen failed" << endl;
    else
        cout << "listening..." << endl;


    // STEP 5 - ACCEPT
    sockaddr_storage client;
    socklen_t clientSize = sizeof(client);

    int clientSocket = accept(sock, (sockaddr*)&client, &clientSize);

    if (clientSocket == -1)
        cout << "accept error" << endl;
    else
        cout << "accept successful! Now connected to the client " << endl;


    // STEP 6 - SEND & RECV



    // STEP 7 - DISCONNECT



    return 0;
}