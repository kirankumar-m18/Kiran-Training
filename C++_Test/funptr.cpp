#include <iostream>
#include <typeinfo>

void hello(){
	std::cout<<"hello"<<std::endl;
}


void hello(int i){
	std::cout<<"hello from i"<<i<<std::endl;
}


int main()
{
//	auto hi = hello;
	void (*hi)() = hello;
	void (*funok)(int) =hello;
	funok(26);
	hi();
//	std::cout<<typeid(hi).name()<<std::endl;
	return 0;
}
