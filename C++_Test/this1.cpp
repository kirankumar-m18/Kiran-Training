#include<iostream>

class ent{
	public:
		int x;
		int y;
	public:		
		ent(int X, int Y){
			this->x = X;
			this->y = Y;
		}		
	        display(this);
		
};

//void display(ent *e);
void display(ent *e){
	std::cout<<e->x<<" " <<e->y;
}

int main()
{
	ent e(2,5);
	display(this->e);
	return 0;
}
