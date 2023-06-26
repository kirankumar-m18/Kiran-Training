// C++ program to demonstrate message queue sender and receiver communication.

 #include <iostream>
 #include<string>
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
         long int msg_to_rec=0;
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
                 if(msgrcv(msgid,(void *)&mq,MAX_MSG,msg_to_rec,0)== -1){  // if msgsnd return -1 msg not sent             
                   std::cout<<"Error while receiving msg\n";
                    exit(0);

                 }else{
                    std::cout<<"Data received: "<<mq.data<<std::endl;
                 }
                 if(strncmp(mq.data,"BYE",3)==0)
                 {
                         flag=0;
                 }
         }
          msgctl(msgid,IPC_RMID,0);
 }

         


