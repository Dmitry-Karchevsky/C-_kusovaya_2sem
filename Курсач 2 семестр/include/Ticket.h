#ifndef TICKET_H
#define TICKET_H
//#include <AllIncludes.h>
//#include <iostream>
#include "Exhibition.h"
//#include "Base.h"

//class Exhibition;

//class Base;

class Ticket
{
public:
    int price;
    std::string privilage;//???????

    Exhibition exh;

    Ticket();

    int getPrice();
    void setPrice();

    std::string getPrivilage();
    void setPrivilage(std::string priv);

    void setExh(Exhibition e);

    void print_Ticket(int age);


};
#endif // TICKET_H
