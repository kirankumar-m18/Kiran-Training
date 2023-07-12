#include <iostream>

using namespace std;


int main()
{
	const int i = 10;
	//i= 15;
  	int k = 85;
	const int *iptr = new int{80};
	//*iptr = 85;
	iptr = &k;
        int* const iptr = &k;
	return 0;

}
