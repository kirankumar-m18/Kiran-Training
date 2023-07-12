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
	sleep(5); // execute orphon process
	std::cout<<"I am child having id:"<<getpid()<<std::endl;
	std::cout<<"My parent's id is :"<<getppid()<<std::endl;
}
else{  // parent process
	wait(NULL); //to make child execute first
	std::cout<<"My child's id is:"<<p<<std::endl;
	std::cout<<"I am parent having id:"<<getpid()<<std::endl;
}
  printf("Hello\n");
  return 0;
}
