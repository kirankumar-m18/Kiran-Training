#include <iostream>    
using namespace std;    
class Animal {                                           
//class declaration.  
    public:    
    string color = "White";
    virtual void display(){
	    std::cout<<"from base display:"<<color<<std::endl;
    } 
   void d(){
	   std::cout<<"from base class d"<<std::endl;
   }   
};     
class Rabbit:public Animal                      
//Animal class.  
{      
 public:    
    string color = "pink";
    void display()
    {
	    std::cout<<"from derived display:"<<color<<std::endl;
    }
    void d(){
	    std::cout<<"from derived class d"<<std::endl;
    }    
};    
int main(void) { 
     Animal *bptr;     
     Rabbit r;
     bptr = &r;
     bptr->display(); 
     bptr->d();    
}    
