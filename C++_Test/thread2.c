// C program to show thread functions

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void show(int n){
  
  printf("Number:%d\n",n);

}

int main()
{
  int n1 = 5;
  int n2 = 10;
  pthread_t t1;
  pthread_t t2;
  
  pthread_create(&t1,NULL,show,n1);
  pthread_create(&t2,NULL,show,n2);
  

  pthread_join(t1,NULL);
  pthread_join(t2,NULL);
  
  return 0;

}




