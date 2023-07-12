#include <iostream>

class entity
{
  protected : 
               int x=0,y=0; //data members
  void move(int ax, int ya){  // methos or member function
 x +=ax;
 y +=ya;
 std::cout<<x;
 }
 entity()
 {
	 std::cout<<x<<std::endl;
 }
};

/*void entity ::move(int ax, int ya){  // methos
 x +=ax;
 y +=ya;
 }
*/
class player:public entity
{
	private:
	       	int age;
	public:
		player()
		{
			x = 3;
			y=25;
			std::cout<<x<<y<<std::endl;
		}
};


int main(){
 entity e;   // after object creation memory will allocates.
 e.x = 10;
 player p;
 p.x = 55;
}

