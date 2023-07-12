#include <iostream>

class emp
{
	public:
		int id;
		int age;
	public:
		emp(){
			std::cout<<"I am a default constructor"<<std::endl;
		}
		emp(int x){
			id = x;
			std::cout<<"inside class with one parameter"<<std::endl;
		}
		emp(int i, int a);
};

emp::emp(int i, int a)
{
	this->id = i;
	this->age = a;
	std::cout<<"I am outside and parameterized constructor"<<id<<age<<std::endl;
}

int main()
{

	emp e;
	emp e1(10412,25);
	emp e3(12);
	return 0;
}
