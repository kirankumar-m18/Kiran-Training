#include <iostream>
#include <unistd.h>

int main()
{
	 char buff[30];
	 //std::cout<<"Enter your input: "<<std::endl;
         std::cout<<"Enter your input: ";
	 fflush(stdout); //It clears stdout buffer before writing.
	 //fflush(stdin); //It clears stdin buffer before reading.
	 read(0,buff,10); //read system call
	 std::cout<<"Your Input: ";
	 fflush(stdout);
	 write(1,buff,10);//write system call
	 std::cout<<std::endl;
	 return 0;
}
