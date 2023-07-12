#include <cstring>
#include <iostream>

class String{
        private: int m_size;
                 char* m_buffer;
        public:
                 String(const char* buf){
                         m_size = std::strlen(buf);
                         m_buffer = new char[m_size+1];
                         std::memcpy(m_buffer, buf, m_size);
                         m_buffer[m_size] = 0;
                 }
                 //String(const String& other):m_size{other.m_size},m_buffer{other.m_buffer} { std::cout<<"Copy constructor with shallow copy"<<std::endl;}
		 String(const String& other):m_size{other.m_size}{
			 m_buffer = new char[m_size+1];
			 memcpy(m_buffer, other.m_buffer, m_size+1);
			 m_buffer[m_size] =0;
			 std::cout<<"Copy constructors from deep copy"<<std::endl;
		 }
                          friend std::ostream& operator<<(std::ostream& os,String str) {
                                         std::cout<<str.m_buffer;
                                 return os;

 }
                         char& operator[](const int& index){
                                 return m_buffer[index];
                         }
			 ~String(){delete m_buffer;}
};

void display(const String& s){
	std::cout<<s <<std::endl;
}

int main()
{
        String s1 = "samsung";
        String s2 = s1;
        //s1[0] = 'Y';
       // std::cout<<s1<<std::endl;
       // std::cout<<s2<<std::endl;
        display(s1);
	display(s2);
        return 0;
}

