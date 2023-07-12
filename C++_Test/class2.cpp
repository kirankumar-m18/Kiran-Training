#include <iostream>
class A {
public:
    static int x;
};
        
class B : public A {
public:
    int y=1;
    void sety(){
	    std::cout<<x;
	    std::cout<< y;
	    
    }
    
};
    
int main() {
    B obj;
    obj.sety();
    return 0;
}
