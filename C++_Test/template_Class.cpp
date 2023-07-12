#include <iostream>
//template<int N>
template <typename T, int N>
class Array{
	private:
		T m_array[N];
	public:
		int getsize(){return N;}
};

int main()
{
	Array<int,50>arr;
	std::cout<<arr.getsize();
	Array<std::string,20>a;
        std::cout<<a.getsize();
	return 0;
}

