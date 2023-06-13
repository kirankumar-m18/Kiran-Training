// A Smart Pointer is a wrapper class over a pointer with an operator like * and -> overloaded. 
//The objects of the smart pointer class look like normal pointers. But, unlike Normal Pointers it can deallocate and free destroyed object memory.
// Program to demonstrate the usage of smart pointer and its significance over normal pointer

// working of Smart Pointer
#include <iostream>
using namespace std;

class SmartPointer {
	int* ptr;
public:
	SmartPointerr(int* p = NULL) {
	 ptr = p;
	 }

	// Destructor
	~SmartPointer() { delete (ptr); }
	};

int main()
{
	SmartPtr ptr(new int());
	
	*ptr = 10;
	cout << *ptr;
	return 0;
}
