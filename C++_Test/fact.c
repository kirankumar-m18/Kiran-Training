#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	do{
	printf("Enter the number: ");
	scanf("%d",&num);
	}while(num < 0);
        
	int fact;
	for(int i=1;i<=num;i++)
	{
		fact = fact*i;
	}
	printf("Num: %d and Factorial: %d",num, fact);
	return 0;
}

