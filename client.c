// Client side C program to demonstrate Socket programming
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<unistd.h>
#include<sys/socket.h>
#include <winsock.h>
#include<sys/types.h>
#include<netinet/in.h>
#include <arpa/inet.h>
#define PORT 8080

int main()
{
	int sock = 0, valread;
	struct sockaddr_in serv_addr;
	char *hello = "Hello fromclient";
	char buffer[1024]={0};
	
	if ((sock = socket(AF_INET, SOCK_STREAM,0))<0) {
		printf("\n Socket creation error \n");
		return -1;
	}
    memset(&serv_addr, '0', sizeof(serv_addr));
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(PORT);
	if(inet_pton(AF_INET, "127.0.0.1", &serv_addr.sinaddr)<=0){
       printf("\nInvalid address or Address not found\n");
	   return -1;
	}
	if(connect(sock,(struct sockaddr *)&serv_addr, sizeof(serv_addr))<0)
	{
		printf("Connection failed\n");
		return -1;
	}

	while(1){
       
	   printf("Enter message:");
	   fgets(buffer, sizeof(buffer),stdin);
	   send(sock, buffer, strlen(buffer),0);
	   memset(buffer,0,sizeof(buffer));
	   valread = read(sock,buffer,1024);
	   if(valread < 0){
		printf("read");
		exit(EXIT_FAILURE);
	   }
       printf("server: %s\n",buffer);
	   if(strcmp(buffer, "bye")==0){
		printf("Disconnected from server.\n");
		close(sock);
		break;
	   }
	}
	return 0;
}
