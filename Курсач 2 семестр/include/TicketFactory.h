#ifndef TICKETFACTORY_H
#define TICKETFACTORY_H
//#include "AllIncludes.h"
#include <iostream>
#include <windows.h>
#include <ctime>
#include <vector>
#include <algorithm>
#include "Ticket.h"
#include "Base.h"

class Base;

class TicketFactory{
public:

    TicketFactory();

    void AddT(Base& base);
    //void Show(Base& base);
};

#endif // TICKETFACTORY_H
