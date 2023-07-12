// C++ program to demonstrate Orphon process using fork system call.
// Orphan process : It is process without a parent process i.e a child process whose parent process finishes before the process itself.

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
        sleep(5); // It will make child process as orphon process
        std::cout<<"after parent finishes child process and id : "<<getpid()<<std::endl;
        std::cout<<"My parent process id : "<<getppid()<<std::endl;
}
else{  // parent process
       
        std::cout<<"Hi I am parent process and id : "<<getpid()<<std::endl;
        std::cout<<"My child process id : "<<p<<std::endl;
}
  printf("Hello\n");
  return 0;
}
