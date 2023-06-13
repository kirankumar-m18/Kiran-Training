//3. Program to create class to read time in seconds and convert into time in (HH:MM:SS) format.

#include <iostream>
Using namespace std;


class Time
{
  private : 
  int hr;
  int min;
  int sec;
  public:
  void readtime();
  void displaytime();
  void calctime(Time T1);
};

void Time :: readtime()
{
   cout<<"Enter hours:";
   cin>>hr;
   cout<<"Enter minutes:";
   cin>>min;
   cout<<"Enter seconds:"<<endl;
   cin>>sec;
}

void Time::displaytime()
{
   cout<<"Time in formatted:";
   cout<<hr<<":"<<min<<":"<<sec<<endl;
}

void Time :: calctime(Time T1)
{
   this->sec = T1.sec;
   this->min  = T1.min + this->sec/60;
   this->hr = T1.hr + this->min/60;

}

int main()
{
    Time T1, T2;
    T1.readtime();
    T2.calctime(T1);
    T2.displaytime();
    return 0;
}
