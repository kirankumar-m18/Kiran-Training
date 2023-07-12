#include <iostream>


using namespace std;

void changeptr1(int **ptr)
{
      int temp = 12;
      (**ptr) = temp;
}
void changeptr(int *p){
    int temp = 5;
    //p = &temp;
    (*p) = temp;
}

void changevalue(int k){
     int temp = 10;
     k = temp;
}

int main()
{
    int i=10;
    int* ptr = &i;
    changeptr(ptr);
    cout<<"after changeptr:"<<i<<"address:"<<&i<<endl;
    changevalue(i);
    cout<<"after changevalue:"<<i<<"address:"<<&ptr<<endl;
    changeptr1(&ptr);
    cout<<"After double pointer:"<<i<<"address:"<<&(*ptr)<<endl;
    return 0;
}
