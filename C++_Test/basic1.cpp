#include <iostream>
#include <string>

class emp{
        public:
	static string org;
	int eid=12345;
	static void printfem();
	static void printorg();
};

string emp::org;

emp:: void printfem()
{
	std::cout<<eid;
	std::cout<<org;
}

emp:: void printorg()
{
        std::cout<<eid;
        std::cout<<org;
}


int main()
{
        emp e1;
	e1.org="luck";
	e1.printfem();
	e1.printorg();
//        std::cout<<
	return 0;
}
