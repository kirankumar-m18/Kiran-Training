#include<iostream>

using namespace std;

int getvalue(const int& i){
	return i;
}

int main()
{
	int i = 10;
	getvalue(i);
	getvalue(20);
	cout<<getvalue(30);
	return 0;
}
