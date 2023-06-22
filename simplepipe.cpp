// Simple c++ program to demonstrate PIPE IPC mechanism.

#include<iostream>
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

#define BUFFER_SIZE 100

int main() {
   int fd[2],n; //fd[1] - writing fd[0] - reading
   char pbuff[100],cbuff[100];
   pid_t p;
   pipe(fd);
   p = fork();   // calling fork() system call to create parent and child process.
   if(p == -1){
           std::cout<<"Error in pipe creation"<<std::endl;
           return 1;
   }

   if(p>0) // Parent process
   {
     std::cout<<"Parent sending msg to child\n";
     write(fd[1],"Hello\0",6);
     wait(NULL);
   }else { // child process if p == 0
     std::cout<<"Msg from parent process\n";
     n = read(fd[0],cbuff,100);
     write(1,cbuff,n);
     std::cout<<std::endl;
   }
    return 0;
}
                                                                                1,18          Top

