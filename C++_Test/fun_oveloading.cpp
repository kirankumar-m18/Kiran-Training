#include <iostream>

class overload
{
	public:
		 int x=20;
		 int y=30;
	public:
		void display()
		{
			std::cout<<"Without any parameter x and y : "<<x<<" "<<y<<std::endl;
		}
		void display(int x)
		{
			std::cout<<"with single parameter x and y : "<<x<<" "<<y<<std::endl;
		}
		void display(int x, int y)
		{
			std::cout<<"with both parameter x and y : "<<x<<" "<<y<<std::endl;
		}
};

int main()
{
	overload o,o1,o2;
	o.display();
	o1.display(25);
	o2.display(28,35);
	return 0;
}
