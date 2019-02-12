#ifndef DATE_H
#define DATE_H
//#include "AllIncludes.h"
#include <iostream>

class Date
{
public:
    int day, month, year;

    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);

    int getDay();
    int getMonth();
    int getYear();

    void printDate();

};

#endif // DATE_H
