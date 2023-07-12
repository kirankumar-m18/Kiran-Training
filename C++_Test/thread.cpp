#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
std::mutex m;
static int count = 0;
void even(int l)
{
    for(int i=0;count<l;i++)
    {
	    m.lock();
        if(i%2==0){

            cout<<"even: "<<i<<std::endl;
	    count++;
        }
	m.unlock();
        this_thread::sleep_for(chrono::seconds(1));
    }
}

void odd(int l)
{
    for(int i=0;i<=l;i++)
    {
	    m.lock();
        if(i%2!=0){
            cout<<"odd:"<<i<<std::endl;
	    count++;
        }
	m.unlock();
       this_thread::sleep_for(chrono::seconds(1));
    }
}

int main()
{
    thread t1(even,10);
    thread t2(odd,10);
    t1.join();
    t2.join();
}
