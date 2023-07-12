#include <iostream>

class base
{
 public:
  virtual void c(){
	  std::cout<<"Hello from A\n";
  }
  virtual void d(){
	  std::cout<<"hello from A with newfun\n";
  }
};

class derived:public base
{
    public:
	     void c(){
		    std::cout<<"Hello from B\n";
	    }
	     void d() override{
		     std::cout<<"Ovverride\n";
	     }

};

void pt(base *e)
{
	e->c();
}

int main()
{
	derived b;
	base e;
	b.d();
	base *a = new base;
	pt(a);
	derived *p = new derived;
	pt(p);
	base *pet = new derived;
	pt(pet);
	return 0;
}
