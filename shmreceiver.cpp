 //C++ program to demonstrate shared memory sender-receiver communication.

#include <iostream>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
#include <cstring>
#define SHM_SZ 1000

using namespace std;

int main()
{
        int flag = 1;
        char buffer[SHM_SZ];
        key_t key = ftok("shmfile",65);
        int shmid = shmget(key,SHM_SZ,0666|IPC_CREAT);
        if (shmid == -1) // If unsuccessful, shmget() returns -1
         {
                 std::cout<<"Error in creating shared memory\n";
                 exit(0);
         }else{
                std::cout<<"shared memory created\n"; //If successful, shmget() returns a positive integer
         }
   char *shm_data = (char*) shmat(shmid,(void*)0,0);//shared memory to attach
//      std::cout<<"Data : "<<shm_data;

            while(flag)
         {
                 std::cout<<"Data from senderthrough shared memory: "<<shm_data<<std::endl;
                 std::cout<<"Enter msg to sender: ";
                 fgets(buffer,50,stdin);

                 if(strncmp(shm_data,"BYE",3)==0)
                 {
                         flag=0;
                         std::cout<<"Communication terminated from sender\n";
                         break;
                 }
                 std::strcpy(shm_data,buffer);
       }

        shmdt(shm_data);// detachfrom shared memory

        shmctl(shmid,IPC_RMID,NULL);// destroy the shared memroy

        return 0;
}
