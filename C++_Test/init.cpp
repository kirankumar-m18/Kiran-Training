#include <iostream>

class entity{
	public:
	float x,y;
	std::string name;
	entity() { x= 1.2f;y=2.8f;
		   name = "karna";
	}
        entity(float xa, float ya, std::string n):x{xa},y{ya},name{n}
	{}
     /*	{

		x = xa;
		y = ya;
		name = n;
	}*/
};

int main()
{
	entity e1;
	entity e2(1.2,3.4,"kiran");

	return 0;
}
