#include <iostream>

int fact(int n)
{
	if(n>1){
		return n*fact(n-1);
	}else{
		return 1;
	}
}

int main()
{
	int n;
	std::cout<<"enter number: ";
	std::cin>>n;

        std::cout<<"factorial of number:"<<fact(n);
	return 0;
}
