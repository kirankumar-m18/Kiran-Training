#include <iostream>

int main()
{
	int a;
	//for(a=0;a<5;a++){
	for(;;){
		if(a==3){
			goto ok;
		}
		std::cout<<"in for loop: "<<a<<std::endl;
	}
ok:
	std::cout<<"From ok label"<<std::endl;
	return 0;
}
