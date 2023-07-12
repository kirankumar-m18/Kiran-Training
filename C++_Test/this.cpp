#include<iostream>
class entity{
	public:
	int X;
	int Y;
	public:
	entity(int x, int y){ 
   	this->X=x;
  	this->Y = y;
  	}
  void display(){
  std::cout<<X<<Y;
  }
  };
  int main()
  {
  entity e(2,5);
  e.display();
  
  return 0;
  }
