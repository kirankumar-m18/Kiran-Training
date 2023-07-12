#include <iostream>
#include <string>

class emp
{
	public:
            static const char* org;
		int empid;
	/*static getorg(){
		std::cout<<org;}
	void getemp(){
		std::cout<<org;}*/
	void printorg(){
		std::cout<<org;
	}
};
 const char* emp::org;  // whenever we have static 
int main()
{
        emp e1,e2;
	e1.org = "luck";
	std::cout<<e1.org;
	e1.printorg();
	e2.printorg();
	//e1.getorg();
	//e1.getemp();
        //std::cout<<
	return 0;
}
