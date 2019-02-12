#ifndef MUSEUMFACTORY_H
#define MUSEUMFACTORY_H
//#include "AllIncludes.h"
#include <iostream>
#include <windows.h>
#include <ctime>
#include <vector>
#include <algorithm>
#include "Museum.h"
#include "Base.h"

class Base;

class MuseumFactory{

public:
    //std::vector <Museum> MVector;
    MuseumFactory();

    void Add(std::string name, std::string address, Base& base);//, std::vector <Base> MVector1);
    void Show(Base& base);

    void DeleteMuseum(int d, Base& base);
};

#endif // MUSEUMFACTORY_H
