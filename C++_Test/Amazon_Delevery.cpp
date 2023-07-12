#include <iostream>
using namespace std;

typedef void (*fptr)(string);

void kar(string fs)
{
	string action="item",event="delivery";
	std::cout<<"Here is your State: "<<fs<<std::endl;
        std::cout<<"Here is you action: "<<action<<std::endl;
	std::cout<<"Here is your event: "<<event<<std::endl;
}

void tamil(string fs)
{
	string action="item",event="delivery";
	std::cout<<"Here is your State: "<<fs<<std::endl;
        std::cout<<"Here is you action: "<<action<<std::endl;
	std::cout<<"Here is your event: "<<event<<std::endl;
}

void Andr(string fs)
{
	string action="item",event="delivery";
	std::cout<<"Here is your State: "<<fs<<std::endl;
        std::cout<<"Here is you action: "<<action<<std::endl;
	std::cout<<"Here is your event: "<<event<<std::endl;
}



int main()
{
	fptr fp[]={kar,Andr,tamil};
	string state;
	
	for(int i =0;i<2;i++)
	{
		std::cout<<"Enter state:";
		std::cin>>state;
           	fp[i](state);
        }
	return 0;
}
