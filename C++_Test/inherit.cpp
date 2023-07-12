#include <iostream>  
using namespace std;  
class Student{  
    private:  
    int rollno;  
    public:  
    int getnum(int a){  
     rollno = a;  
     return rollno;
    }  
    void putnum(){  
     cout << "Roll Number Is: "<< rollno << "\n";  
    }  
};   

class emp:public Student{
	public:
		emp(int a){
			std::cout<<"from emp class"<<getnum(a)<<std::endl;
		}
};

int main()
{
	Student s;
	emp e(20);

	s.getnum(10);
	s.putnum();
	return 0;
}
