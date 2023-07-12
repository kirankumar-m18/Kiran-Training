#include <iostream>

class operatorex
{
	public:
		int num;
	public:
		operatorex(): num(30){}
		void operator --()
		{
			num = num - 1;
		}
		void display()
		{
			std::cout<<num<<std::endl;
		}
};

int main()
{
	operatorex op;
	--op;
	op.display();
	return 0;
}
