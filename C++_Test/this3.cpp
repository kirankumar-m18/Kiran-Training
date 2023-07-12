#include <iostream>

class emp{
	private:
		int id;
	public:
		void setId(int id){
		this->id = id;
		std::cout<<"This->id"<<this->id<<std::endl;
		std::cout<<"id"<<id<<std::endl;
		}
		void display(){
			std::cout<<id<<std::endl;
		}
};

int main()
{
	emp e;
	e.setId(10412);
	e.display();
	return 0;
}
