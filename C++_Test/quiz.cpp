#include <iostream>
#include <cstring>
using namespace std;


static int  score=0;
class quize
{
	public:
               int n1;
	       string state;
	quize(){
		std::cout<<"\nhow many states are there in India? : ";
		std::cin>>n1;
		if(n1==28){
			score += 1;
			std::cout<<"Well done\n";
		}else{
			std::cout<<"Sorry there are 28 states in india\n";
		}
		std::cout<<"What is place of Karnataka in coffe production? : ";
                std::cin>>n1;
                if(n1==1){
                        score += 1;
                        std::cout<<"Good\n";
                }else{
                        std::cout<<"Nooo! Karnataka is in First place\n";
                }
		std::cout<<"what is place of India in population? : ";
                std::cin>>n1;
                if(n1==2){
                        score += 1;
                        std::cout<<"Nice\n";
                }else{
                        std::cout<<"Sorry India is in second place\n";
                }
		std::cout<<"which is the capital of Karnataka? : ";
                std::cin>>state;
                if((state == "Bengaluru") ||(state == "Bagalore") ||(state == "bagalore")||(state == "bengaluru")){
                        score += 1;
                        std::cout<<"WOW Nice!\n";
                }else{
                        std::cout<<"No! It's Bengaluru\n";
                }

		std::cout<<"which is the national sport of India? : ";
                std::cin>>state;
                if(state=="Hockey"||state=="hockey"){
                        score += 1;
                        std::cout<<"Good short\n";
                }else{
                        std::cout<<"Hey! it's hockey\n";
                }
                std::cout<<"where is Taj Mahal in India? : ";
                std::cin>>state;
                if(state=="Agra"||state=="agra"){
                        score += 1;
                        std::cout<<"Right it's nice place\n";
                }else{
                        std::cout<<"Hey! it's hockey\n";
                }


	}
};

int main()
{
	std::cout<<"Welcome to quize of buzz\n";
	std::cout<<"\n\U0001F600";
	std::cout<<"\U0001F600";
	std::cout<<"\U0001F600";
	std::cout<<"\U0001F600";
	std::cout<<"\U0001F600\n";
	quize q;
	std::cout<<"\nYour score: "<<score<<"\nTHANK YOU!\n";
	std::cout<<"\n\U0001F600";
        std::cout<<"\U0001F600";
        std::cout<<"\U0001F600";
        std::cout<<"\U0001F600";
        std::cout<<"\U0001F600\n";

	return 0;
}

