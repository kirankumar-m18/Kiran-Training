//C++ program to demonstrate vector and map using tempaltes.
#include <iostream>
#include <unordered_map>
#include <vector>


int main()
{
        //using vector
        std::vector<int>g1;
        for (int i = 1; i <= 5; i++)
        g1.push_back(i);
        std::cout << "Output using vector: "<<std::endl;
        for (auto i = g1.begin(); i != g1.end(); ++i)
                std::cout << *i <<std::endl;


        // Using map
        using gm = std::unordered_map<std::string, int>;
        gm map;
        map["p"]=100;
        map["c"]=99;
        map["m"]=98;
        map["b"]=97;

        for(auto kv:map){
                auto &key=kv.first;
                auto &value=kv.second;
                std::cout<<key<< " "<<value<<std::endl;
        }
        return 0;
}
