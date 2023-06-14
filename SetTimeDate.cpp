//C++ program to set date and time.

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


void setDateTime(int date, int month, int year, int hour, int min, int sec)
{
    unsigned char result[32] = { 0 };
    sprintf((char*)result, (const char*)"date -s \"%02d/%02d/%04d %02d:%02d:%02d\"", month, date, year, hour, min, sec);
    system((const char*)result);
}

int main()
{
    setDateTime(25, 6, 2017, 10, 10, 10);//format- DD-MM-YYYY.HH.MM.SS
    return 0;
}
