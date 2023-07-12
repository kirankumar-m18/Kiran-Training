#include<iostream>
using namespace std;
namespace my_namespace {
    int my_variable = 10;
}
int main() {
    int my_variable = 20;
    std::cout << my_namespace::my_variable << std::endl;
    return 0;
}
