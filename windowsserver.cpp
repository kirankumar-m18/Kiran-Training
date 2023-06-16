// C++ server program to handle client-server chat in windows environment

// library for socket to run in windows
#pragma comment(lib,"ws2_32.lib")
#include <winsock.h> 
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

#define PORT 9099

struct sockaddr_in srv;
fd_set fr, fw, fe;// fread,fwrite,fexeption to network
int nMaxFd;

int main()
{ 
    int nRet = 0;
    WSADATA ws;
    struct sockaddr_in serverAddress, clientAddress;
    int addrLen = sizeof(clientAddress);
    //Initialize the WSA variables Environment supports socket in windows
    if (WSAStartup(MAKEWORD(2, 2), &ws) < 0) {
        cout << "WSA failed to initialize"<<endl;
       
    }
    else {
        cout << "WSA was initialize"<<endl;
    }
    // Initialize the socket
    int nsocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (nsocket < 0) {
        cout<< "The socket not opened"<<endl;
        exit(EXIT_FAILURE);
    }else {
        cout << "The socket opened successfully"<<endl;
    }

    // Initialize the environment for socketaddr structure
    srv.sin_family = AF_INET;
    srv.sin_port = htons(PORT);
    srv.sin_addr.s_addr = INADDR_ANY;
    memset(&(srv.sin_zero), 0, 8);
    char buffer[1024] = { 0 };
    // Bind the socket to local port
    nRet = bind(nsocket, (sockaddr*)&srv, sizeof(sockaddr));
    if (nRet < 0) {
        cout << "failed to bind to local port"<<endl;
        exit(EXIT_FAILURE);
    }
    else {
        cout << "binded successfully to local port" << endl;
    }

    // Listen the request from client
    nRet = listen(nsocket, 5); 
    if (nRet < 0) {
        cout << "failed to listen to local port" << endl;
        exit(EXIT_FAILURE);
    }
    else {
        cout << "started listening successfully to local port" << endl;
    }

    // Accept a connection
    if ((nsocket = accept(nsocket, (struct sockaddr*)&clientAddress, (int *)&addrLen)) < 0)
    {
        cerr << "Failed to accept connection" <<endl;
        return -1;
    }
    //waiting for new requests and proceed as per the request
    while (true)
    {
        memset(buffer, 0, sizeof(buffer));
        int valread = recv(nsocket, buffer,255,0);
        cout << "Client reply: " << buffer <<endl;

        // Check if client wants to terminate the session
        if (buffer== "BYE")
        {
            cout << "Session terminated by client" <<endl;
            break;
        }
        string servermsg;
        cout << "Server msg: ";
        //fgets(servermsg,256,stdin);
        getline(cin, servermsg);
        // Send server message to client
        send(nsocket, servermsg.c_str(), servermsg.length(), 0);
        //send(nsocket,servermsg,256,0);
    }

    return 0;
}

