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

    sockaddr_in clientSocket;
    sockaddr_in clientService;

    string address = "127.0.0.1";

    char host[NI_MAXHOST];
    char service[NI_MAXSERV];


    // STEP 1 - EQUIV. OF WSAStartUp()

    // appears to be handled by including <netdb.h> and <arpa/inet.h>

    // STEP 2  - CREATE THE SOCKET
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock == -1)
        cout << "error with creating socket" << endl;
    else
        cout << "socket created" << endl;


    clientService.sin_family = AF_INET;
    clientService.sin_port = htons(5400);
    inet_pton(AF_INET, address.c_str(), &clientService.sin_addr);


    // STEP 3 - CONNECT ON CLIENT SOCKET

    int connectRes = connect(sock, (sockaddr*)&clientService, sizeof(clientService));
    if (connectRes == -1)
        cout << "error with connection" << endl;
    else
        cout << "connection okay - now connected to Server" << endl;

    // STEP 4 - SEND & RECV



    // STEP 5 - CLEANUP / DISCONNECT


    return 0;

}
