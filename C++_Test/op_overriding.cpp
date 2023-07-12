#include <iostream>

class overriding
{
	public:
		void running()
		{
			std::cout<<"from base class"<<std::endl;
		}
};

class derived//:public overriding
{
	public:
		int x=28;
	public:
		void running(int x)
		{
			std::cout<<"from derived class:"<<x<<std::endl;
		}
};


int main()
{
//	overriding op;
//	op.running();
	derived dp;
	dp.running(30);
	return 0;
}
