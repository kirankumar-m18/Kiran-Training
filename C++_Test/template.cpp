#include<iostream>


//		void display(int v){std::cout<<v;}
//		void display(std::string v){std::cout<<v;}

 template <typename T>  // typename or class
 void display(T v){std::cout<<v;}
 //void display(int v){std::cout<<v;}

int main()
{
	
	display<int>(12);
	display<std::string>("25");
	return 0;
}
