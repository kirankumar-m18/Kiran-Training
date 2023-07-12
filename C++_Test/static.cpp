#include <iostream>


class entity{
	public:
		static int x,y;

	public:
		static void display(){
			std::cout<<x<<y<<std::endl;
		}
};

class e1
{
	public:
		int x,y;
	public:
};

int entity::x;
int entity::y;

int main()
{
	entity e1,e2;
	e1.x = 1;
	e1.y = 2;
	e1.display();
	e2.x = 23;//entity::x = 23;
	e2.y = 25;//entity::y = 28;
	e2.display();//entity::display();
	e1.display();
	return 0;
}
