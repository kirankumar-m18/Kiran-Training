#include <iostream>  
#include<string>  
using namespace std;  
int main () {  
    int n;  
    int d;  
    cout<< "Program to divide:\n";  
    cout<< "Enter numerator:\n";  
    cin>> n;  
    cout<< "Enter denominator:\n";  
    cin>> d;  
   try {  
      if( d == 0 ) {  
        throw "Division by zero condition!";  
          }  
      else{  
            cout<<"Result: "<<n/d;  
         }  
    }  
    catch (const char* msg) {  
     cout << msg << endl;  
   }  
   return 0;  
}
