// C++ program to read date and time.

#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>
using namespace std;


const std::string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       result[80];
    tstruct = *localtime(&now);
    strftime(result, sizeof(result), "%d-%m-%Y.%X", &tstruct);
    return result;
}

int main() {
    cout << "Current Date and Time in the format(DD-MM-YYYY.HH.MM.SS)=" << currentDateTime() <<endl;
}
