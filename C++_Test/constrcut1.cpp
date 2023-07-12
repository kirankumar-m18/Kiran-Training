#include<iostream>

class emp{
	public:
		int a;
		int b;
		emp(int x=100, int y=100){
		a = x;
		b = y;
		auto t = a + b;
		std::cout<<a<<b<<t;
	}
};

int main()
{
	emp e(10,10);
	std::cout<<sizeof(e);
	return 0;
}


