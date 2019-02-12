#ifndef EXHIBITION_H
#define EXHIBITION_H
//#include "AllIncludes.h"
#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
#include "Museum.h"
#include "Date.h"
//#include "Base.h"

//class Base;

//class Date;

//class Museum;

class Exhibition
{
public:
    std::string NameEx, directionEx;//???????
    int number_of_tickets;
    Museum mus;
    Date date1, date2;
    //std::vector <Ticket> tickets;
    //Ticket tick;

    Exhibition();

    std::string getNameEx();
    void setNameEx(std::string name);

    std::string getDirection();
    void setDirection(std::string direction);

    void setDateEx(Date da1, Date da2);

    int getNumber();
    void setNumber();

    void setMus(Museum m);

    void print_Ex();
};

#endif // EXHIBITION_H
