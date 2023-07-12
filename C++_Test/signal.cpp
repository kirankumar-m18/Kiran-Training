#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>


void sighandler(int signum) {
	std::cout<<"Caught signal "<<signum<<std::endl;
   	exit(1);
}

int main () {
   signal(SIGINT, sighandler);
   signal(SIGTERM, sighandler); 
   signal(SIGSEGV, sighandler);
   char *ptr;
   ptr  = "ok";
  *(ptr+1) = 'b';
   while(1){
	   std::cout<<"waiting for signal Interrupt.....\n";
   	   sleep(5);
   }
   return(0);
}


