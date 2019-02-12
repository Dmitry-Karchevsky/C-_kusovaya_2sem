#ifndef BASE_H
#define BASE_H
//#include "AllIncludes.h"
#include <iostream>
#include <windows.h>
#include <ctime>
#include <vector>
#include <algorithm>
#include "Museum.h"
#include "Exhibition.h"
#include "Ticket.h"

//class Museum;

//class Exhibition;

//class Ticket;

class Base
{
public:
    std::vector <Ticket> TVector1;
    std::vector <Exhibition> EVector1;
    std::vector <Museum> MVector1;
};

#endif // BASE_H
