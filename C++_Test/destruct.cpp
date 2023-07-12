#include <iostream>

class emp
{
	public:
		int a = 50;
	public:
		emp()
		{
			std::cout<<"inside constructor"<<std::endl;
		}
		~emp()
		{
			std::cout<<"Inside destructor"<<std::endl;
		}
		void display()
		{
			std::cout<<" a : "<<a<<std::endl;
		}
};

int main()
{
	emp e;
	e.display();
	std::cout<<"main terminated"<<std::endl;
	return 0;
}
