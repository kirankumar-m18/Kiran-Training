// Simple c++ program to print even and odd numbers using multithreading
#include <iostream>
#include <thread>
#include <sys/wait.h>


using namespace std;

void oddNumbers(int n)
{
   for(int i=1; i<=n;i++){
     if(i%2 != 0){
       cout<<"Odd Number: "<<i<<endl;
     }
     sleep(1);
   }
}

void evenNumbers(int n)
{
for(int i=1; i<=n;i++){
     if(i%2 == 0){
       cout<<"Even Number: "<<i<<endl;
     }
     sleep(1);
   }
}


int main()
{
    int n;
    cout<<"Enter how many number you want to clasify even and odd from 1 to n"<<endl;
    cin>>n;
    thread t1(evenNumbers, n);
    thread t2(oddNumbers, n);
    t1.join();
    t2.join();
    return 0;
}

