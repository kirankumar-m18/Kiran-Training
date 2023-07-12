#include <iostream>

inline int ok(int a){
	std::cout<<"hello from inline"<<std::endl;
	return a;
}

int main()
{
	std::cout<<"Hello from main"<<std::endl;
	std::cout<<ok(10);
	std::cout<<"Hello from main after inline call"<<std::endl;
	return 0;
}
