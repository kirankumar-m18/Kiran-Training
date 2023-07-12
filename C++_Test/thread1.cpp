#include <iostream>
#include <thread>

using namespace std;

void hi(int n){
    cout << "Hi from thread and your number:"<<n<<endl;
}

int main()
{
    thread t1(hi,5);
    thread t2(hi,10);
    t1.join();
    t2.join();
    return 0;
}
