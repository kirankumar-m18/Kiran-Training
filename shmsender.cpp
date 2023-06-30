// C++ program to demonstrate shared memory sender-receiver communication.


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
        char buffer[100];
        // shmget returns an identifier in shmid
        key_t key = ftok("shmfile",65);
        int shmid = shmget(key,SHM_SZ,0666|IPC_CREAT);
        if (shmid == -1) // If unsuccessful, shmget() returns -1
         {
                 std::cout<<"Error in creating shared memory\n";
                 exit(0);
         }else{
                std::cout<<"shared memroy created\n"; //If successful, shmget() returns a positive integer
}

        char *shm_data = (char*) shmat(shmid,(void*)0,0);// shmat is to attach shared memory.
        while(flag)
         {
                 std::cout<<"Enter msg to receier: ";
                 fgets(buffer,50,stdin);
                 // writing  message to the shared memory
                 std::strcpy(shm_data, buffer);

                 if(strncmp(shm_data,"BYE",3)==0)
                 {
                         flag=0;
                         std::cout<<"Communication terminated by receiver\n";
                 }
                 // data from shared memory 
                std::cout<<"Data from receiver through shared memory : "<<shm_data;
         }
        shmdt(shm_data);// dettach from shared memory
        return 0;
}
