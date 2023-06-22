// C++ program to demonstrate fork system call.

#include<iostream>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>


int main()
{
pid_t p;
std::cout<<"before fork\n";
p=fork();
if(p==0)   // child process
{
        std::cout<<"Hi I am child process and id : "<<getpid()<<std::endl;
        std::cout<<"My parent process id : "<<getppid()<<std::endl;
}
else{  // parent process
        wait(NULL); //to make child execute first
        std::cout<<"Hi I am parent process and id : "<<getpid()<<std::endl;
        std::cout<<"My child process id : "<<p<<std::endl;
}
  printf("Hello\n");
  return 0;
}
