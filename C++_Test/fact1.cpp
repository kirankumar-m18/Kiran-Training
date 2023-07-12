#include <iostream>  
using namespace std;  
int factorial(int);  
int main()   
{  
    int n,fact;  
    cout<<"Enter a number to find factorial: ";  
    cin >> n;  
    fact=factorial(n);  
    cout << "Factorial of " << n <<" = " << fact;  
    return 0;  
}  
int factorial(int n)   
{  
    if (n > 1)   
    {  
        return n*factorial(n-1);  
    }  
    else   
    {  
        return 1;  
    } 
}
