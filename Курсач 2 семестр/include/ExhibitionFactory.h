#ifndef EXHIBITIONFACTORY_H
#define EXHIBITIONFACTORY_H
//#include "AllIncludes.h"
#include <iostream>
#include <windows.h>
#include <ctime>
#include <vector>
#include <algorithm>
#include "Exhibition.h"
#include "Base.h"

class Base;

class ExhibitionFactory
{
public:
    //std::vector <Exhibition> EVector;
    ExhibitionFactory();

    void Add(std::string name, std::string direction, Base &base, Date da1, Date da2);// int d, int m, int y);
    void Show(Base &base);

    void DeleteExhibition(int d, Base& base);
};

#endif // EXHIBITIONFACTORY_H
