#include <iostream>
#include <cstring>

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
		 String() { std::cout<<"In constructor"<<std::endl;}
			 friend std::ostream& operator<<(std::ostream& os,String str) {
			 		 std::cout<<str.m_buffer;
				 return os;
			 
		 }
			 char& operator[](const int& index){
				 return m_buffer[index];
			 }
};

int main()
{
	String s1 = "samsung";
	String s2 = s1;
	s1[0] = 'Y';
	std::cout<<s1<<std::endl;
	std::cout<<s2<<std::endl;

	return 0;
}
