#include <iostream>

class singleton{
        public:
        static singleton& Get() {return s_instance;}
                void fun(){std::cout<<m<<std::endl;}
                float m = 3.0f;
        private:
                singleton(){}

        static singleton s_instance;
};
singleton singleton::s_instance;

int main()
{
        singleton& s = singleton::Get();
        s.fun();
        s.m = 5.0f;
        s.fun();
        singleton& s1 = singleton::Get();
        s1.fun();
        return 0;
}
