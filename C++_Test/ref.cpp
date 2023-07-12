// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int i=10;
    int k=20;
    int& refi = i;
    int &refi = k;
    std::cout << "i:"<<i<<endl;
    std::cout << "refi:"<<refi<<endl;
    std::cout << "k:"<<k<<endl;
    return 0;
}
