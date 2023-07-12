#include <iostream>

int main()
{
	char str[]="ok";
	char *str1 = "hello";
	char str2[3]={'h','i','\0'};
	std::cout<<"str[]: "<<str<<std::endl;
	std::cout<<"*str: "<<str1<<std::endl;
	std::cout<<"str[3]: "<<str2<<std::endl;
	return 0;
}
