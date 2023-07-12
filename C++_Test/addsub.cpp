#include <iostream>


typedef int (*fn)(int,int);
int add(int a, int b)
{
	return (a+b);

}

int sub(int a, int b)
{
	return (a-b);

}

int mul(int a, int b)
{
	return (a*b);

}

int divd(int a, int b)
{
	return (a/b);

}


int pfunptr(fn fp1)
{
    int res = fp1(10,20);
    return res;
}


int main()
{
      fn fp;
      fn func[] = {add,sub,mul,divd};
      fp = add;
      std::cout<<"add : "<<fp(10,5)<<std::endl;
      fp = sub;
      std::cout<<"sub : "<<fp(10,5)<<std::endl;
       fp = mul;
      std::cout<<"mul : "<<fp(10,5)<<std::endl;
       fp = divd;
      std::cout<<"div : "<<fp(10,5)<<std::endl;
      fp = add;
      std::cout<<"funptr as parameter : "<<pfunptr(fp)<<std::endl;
      for(int i = 0 ;i<4;i++)
      {
	      int res = func[i](20,10);
	      std::cout<<"result: " <<res<<std::endl;
      }
      return 0;
}





