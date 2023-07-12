#include<iostream>

using namespace std;

void printname(int  n)// const string name or &&name
{
	cout<< "\nFunc1: " << n;
}

void printname(string name)// const name or &&name
{
        cout<< "\nFunc2: " << name;
}


int main()
{
	string fname = "maple";
	string lname = "labs";
	int n = 10;
	string fullname = fname + lname;
	//cout<<fname<<endl;;
        //cout<<lname<<endl;
	//cout<<fullname<<endl;
	printname(fullname);
	printname(n);
	return 0;
}
