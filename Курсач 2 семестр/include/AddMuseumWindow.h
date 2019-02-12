#ifndef ADDMUSEUMWINDOW_H
#define ADDMUSEUMWINDOW_H
//#include "AllIncludes.h"
#include <iostream>
#include <windows.h>
#include <ctime>
#include <vector>
#include <algorithm>
#include "MuseumFactory.h"
//#include "Base.h"

class MuseumFactory;

class Base;

class AddMuseumWindow
{
    public:
        std::string name, address;

        //bool createMuseum();

        void createMuseum(MuseumFactory &s, Base& base);
};

#endif // ADDMUSEUMWINDOW_H
