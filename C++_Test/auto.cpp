#include<iostream>
using namespace std;

int main()
{
	auto i = 10;
	//cout<<typeof(i);
	cout << typeid(i).name() << endl;
	return 0;
}

