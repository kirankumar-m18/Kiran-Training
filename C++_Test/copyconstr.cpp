#include <iostream>

class copy{
	public:
		int a,b;
};

int main()
{
	copy c1={1,2};
	copy c2=c1;
	c1.a = 25;
	copy *pc1 = new copy;
	copy *pc2 = pc1;
	return 0;
}


