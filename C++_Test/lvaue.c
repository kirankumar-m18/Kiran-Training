#include<stdio.h>


int& getvalue()
{
	static int i = 20;
	return i;
}

int main()
{
	int k;// = getvalue();
	
	getvalue() = k;
        printf("%d ", k);
        return 0;
}
