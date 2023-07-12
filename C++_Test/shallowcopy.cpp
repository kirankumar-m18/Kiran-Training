#include <iostream>
int main()
{
	int* ptr = new int;
	int* ptr1 = ptr;
	*ptr = 3;
	std::cout<<ptr<<" "<<*ptr<<std::endl;
	std::cout<<ptr1<<" "<<*ptr1<<std::endl;
	ptr++;
	*ptr = 25;
	std::cout<<ptr<<" "<<*ptr<<std::endl;
        std::cout<<ptr1<<" "<<*ptr1<<std::endl;
	return 0;
}

// shalow copy will copy value;
//
