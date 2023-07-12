 #include <iostream>
 #include<string.h>
 #include<unistd.h>
 #include<sys/types.h>
 #include<sys/ipc.h>
 #include<sys/msg.h>
 #define MAX_MSG 100   //maximum length of the message that can be sent allowed

 // msg queue structure
 struct msgqueue{
         long int msg_type;  //It is used to identify the message structure
         char data[MAX_MSG]; // data to send msg queue
 };
 int main()
 {
         int flag=1;
         int msgid;
         struct msgqueue mq;
         char buffer[MAX_MSG]; //array to store user input
         msgid=msgget((key_t)12345,0666|IPC_CREAT);
         if (msgid == -1) // If unsuccessful, msgget() returns -1
         {
                 std::cout<<"Error in creating queue\n";
                 exit(0);
         }else{
                std::cout<<"msg queue created\n"; //If successful, msgget() returns a positive integer
         }

         while(flag)
         {
                 std::cout<<"Enter some text: ";
                 fgets(buffer,50,stdin);
                 mq.msg_type=1;
                 strcpy(mq.data,buffer);
                 if(msgsnd(msgid,(void *)&mq, MAX_MSG,0)==-1) // if msgsnd return -1 msg not sent
                 {
                         std::cout<<"Msg not sent\n";
                 }else {
                        std::cout<<"msg sent\n";
                 }
                 if(strncmp(buffer,"BYE",3)==0)
                 {
                         flag=0;
			 std::cout<<"Communication terminated\n";
                 }
         }
 }
