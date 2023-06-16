// C++ client program to handl with multiple clients in windows environment.

// library for socket to run in windows
#pragma comment(lib,"ws2_32.lib")
#include <winsock.h> 
#include <iostream>
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
    char buffer[1024];
    //Initialize the WSA variables Environment supports socket in windows
    if (WSAStartup(MAKEWORD(2, 2), &ws) < 0) {
        cout << "WSA failed to initialize" << endl;

    }
    else {
        cout << "WSA initialize" << endl;
    }
    // Initialize the socket
    int nsocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (nsocket < 0) {
        cout << "The socket not opened" << endl;
        exit(EXIT_FAILURE);
    }
    else {
        cout << "The socket opened successfully" << endl;
    }

    // Initialize the environment for socketaddr structure
    srv.sin_family = AF_INET;
    srv.sin_port = htons(PORT);
    srv.sin_addr.s_addr = inet_addr("127.0.0.1");
    memset(&(srv.sin_zero), 0, 8);

    // Bind the socket to local port
    nRet = connect(nsocket, (struct sockaddr*)&srv, sizeof(srv));
    if (nRet < 0) {
        cout << "failed to connect" << endl;
        WSACleanup();
        exit(EXIT_FAILURE);
    }
    else {
        cout << "connected successfully " << endl;
    }

   
    while (true)
    {
        string clientmsg;
        cout << "Enter client message: ";
        getline(cin, clientmsg);

        // Send client message to server
        send(nsocket, clientmsg.c_str(), clientmsg.length(), 0);

        // Check if client wants to terminate the session
        if (clientmsg == "BYE")
        {
            cout << "Session terminated" << endl;
            break;
        }

        memset(buffer, 0, sizeof(buffer));
        int valread = recv(nsocket, buffer, 255, 0);
        //read(nsocket, buffer, sizeof(buffer));
        cout << "Server: " << buffer << endl;
    }


    return 0;
}

