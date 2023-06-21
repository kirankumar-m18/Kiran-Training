// C++ program to capture the SIGINT, SIGKILL, SIGTERM, SIGSEGV, etc and take appropriate action.
#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

// Function to catch signales and print.
void sighandler(int signum) {
        std::cout<<"Caught signal "<<signum<<std::endl;
        exit(1);
}

int main () {
   signal(SIGINT, sighandler);// signal handler sor SIGIINT interger value 2
   signal(SIGTERM, sighandler); // signal handler sor SIGTERM  integer value 15
   signal(SIGSEGV, sighandler); // signal handler sor SIGSEGV integer value 11
  /* char *ptr;   // To check sigsegv signal
   ptr  = "ok";
  *(ptr+1) = 'b';*/
   while(1){
           std::cout<<"waiting for signal Interrupt.....\n";
           sleep(5);
   }
   return(0);
}
