#include <iostream>

class example {
	public:
		example()
		{
			std::cout<<"base class";
		}
		example(int x)
		{
			std::cout<<"base : "<<x;
		}

};

class entity{
	public:
		std::string m_name;
		example m_example;

		entity(){
			m_name= "kiran";
			b_example = example(10);
		}
		entity(string name,int i)
			:m_name{name}, b_base{i}
		{}

};

int main()
{
	entity e();
        entity d1("ki",10);	
	return 0;
}
