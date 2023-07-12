#include <iostream>
class emp;
class dept;

class emp
{
	private:
		int a;
	public:
		emp(int c):a{c}{}
		friend int add(emp,dept);
};

class dept
{
	private:
		int b;
	public:
		dept(int d):b{d}{}
		friend int add(emp,dept);
};

int add(emp e, dept d)
{
	return(e.a+d.b);
}

int main()
{
   emp e(10);
   dept d(20);
   std::cout<<add(e,d)<<std::endl;
   return 0;
}

