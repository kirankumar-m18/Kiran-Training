#include <iostream>


class emp{
	public:
		float a,b;
		void print(){
			std::cout<<a<<b;
		}
		emp()// default constructor
		{
			a=b=0;
		}
		emp(int x, int y)//parameterized constructor
		{
			a = x;
			b = y;
		}
		~emp(){
			std::cout<<"destructed"<<std::endl;
		}	// when we craeted object in stack after destructor it will cleanup:w

};

int main()
{
	emp e1,e2;
	e1.print();
	emp e3(2,10);
	e3.print();
	std::cout<<"End of program"<<std::endl;
	return 0;
}

