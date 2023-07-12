#include <iostream>


class calc
{
   int  x,y;
   calc(int a, int b):x{a},y{b}
   {}
   calc operator + (clac& other) const{
	   return (calc(x+other.x,y+other.y));
   }
   calc Add(const calc& s){
	   return (x+s.x,y+s.y);
   }

};


int main()
{
	calc position(1,2);
	calc speed(2,3);
	calc res = position.Add(speed);
	return 0;
}
